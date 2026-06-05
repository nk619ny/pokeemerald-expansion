#!/usr/bin/env python3
"""
Analyzes wild encounter tables in wild_encounters.json and produces a CSV
comparing encounter frequency by Pokemon family across all map sections.

For each Pokemon family, three metrics are computed:
  Additive Probability   - sum of each MAPSEC's best encounter chance for that family
  Multiplicative Prob    - probability of meeting the family in at least one MAPSEC
  MAPSEC Count           - number of map sections where the family appears

Usage (run from repo root or dev_scripts/):
    python dev_scripts/encounter_analysis.py

Output:
    encounter_family_stats.csv at the repo root
"""

import csv
import json
import re
from collections import defaultdict
from pathlib import Path

REPO_ROOT = Path(__file__).parent.parent
SPECIES_INFO_DIR = REPO_ROOT / "src" / "data" / "pokemon" / "species_info"
ENCOUNTERS_JSON = REPO_ROOT / "src" / "data" / "wild_encounters.json"
SPECIES_CONSTANTS_H = REPO_ROOT / "include" / "constants" / "species.h"
MAPS_DIR = REPO_ROOT / "data" / "maps"
OUTPUT_CSV = REPO_ROOT / "encounter_family_stats.csv"


# ---------------------------------------------------------------------------
# FRLG map filter – build set of MAP_ constants that belong to FRLG content
# ---------------------------------------------------------------------------

def build_frlg_map_constants() -> set[str]:
    """
    Walk data/maps/*_Frlg/ directories and read each map.json to collect
    the MAP_ constant id.  These are excluded from the Emerald-only analysis.
    """
    frlg_constants: set[str] = set()
    if not MAPS_DIR.exists():
        return frlg_constants
    for folder in MAPS_DIR.iterdir():
        if folder.is_dir() and folder.name.endswith("_Frlg"):
            map_json = folder / "map.json"
            if map_json.exists():
                try:
                    data = json.loads(map_json.read_text(encoding="utf-8"))
                    map_id = data.get("id")
                    if map_id:
                        frlg_constants.add(map_id)
                except (json.JSONDecodeError, OSError):
                    pass
    return frlg_constants


# ---------------------------------------------------------------------------
# Phase 0 – Build species alias map from #define aliases in species.h
# ---------------------------------------------------------------------------

def build_species_aliases() -> dict[str, str]:
    """
    Parse include/constants/species.h for lines of the form:
        #define SPECIES_X   SPECIES_Y
    and return { "SPECIES_X": "SPECIES_Y" }.
    These are convenience aliases for form species (e.g. SPECIES_WISHIWASHI
    maps to SPECIES_WISHIWASHI_SOLO).
    """
    aliases: dict[str, str] = {}
    pattern = re.compile(r"#define\s+(SPECIES_\w+)\s+(SPECIES_\w+)")
    for line in SPECIES_CONSTANTS_H.read_text(encoding="utf-8", errors="ignore").splitlines():
        m = pattern.match(line.strip())
        if m:
            aliases[m.group(1)] = m.group(2)
    return aliases


# ---------------------------------------------------------------------------
# Phase 1 – Build species → P_FAMILY_ mapping from gen_X_families.h files
# ---------------------------------------------------------------------------

def build_species_to_family() -> dict[str, str]:
    """
    Parse gen_1_families.h through gen_9_families.h to map every
    SPECIES_XXX constant to its enclosing P_FAMILY_YYY block.
    """
    species_to_family: dict[str, str] = {}

    for gen_num in range(1, 10):
        fam_file = SPECIES_INFO_DIR / f"gen_{gen_num}_families.h"
        if not fam_file.exists():
            continue

        current_family: str | None = None

        for line in fam_file.read_text(encoding="utf-8", errors="ignore").splitlines():
            stripped = line.strip()

            # Enter a new family block (only when not already inside one;
            # nested P_FAMILY_ guards don't exist in practice)
            if current_family is None:
                m = re.match(r"#if\s+P_FAMILY_(\w+)", stripped)
                if m:
                    current_family = f"P_FAMILY_{m.group(1)}"
                    continue

            # Exit the family block – the codebase consistently uses the
            # comment style "#endif //P_FAMILY_XXX" for the closing guard.
            if current_family is not None and re.match(r"#endif\s+//P_FAMILY_", stripped):
                current_family = None
                continue

            # Capture every [SPECIES_XXX] initializer line inside the block
            if current_family is not None:
                m = re.match(r"\[SPECIES_(\w+)\]", stripped)
                if m:
                    species_name = f"SPECIES_{m.group(1)}"
                    # Don't overwrite if already mapped (shouldn't happen, but safe)
                    species_to_family.setdefault(species_name, current_family)

    return species_to_family


# ---------------------------------------------------------------------------
# Phase 2 – Extract slot rates from the JSON fields array
# ---------------------------------------------------------------------------

def extract_slot_rates(fields: list) -> tuple[dict[str, list[int]], dict[str, list[int]]]:
    """
    Returns:
        slot_rates  – { enc_type: [rate_slot0, rate_slot1, ...] }
        rod_groups  – { "old_rod": [idx...], "good_rod": [...], "super_rod": [...] }
    """
    slot_rates: dict[str, list[int]] = {}
    rod_groups: dict[str, list[int]] = {}

    for field in fields:
        ftype: str = field["type"]
        rates: list[int] = field["encounter_rates"]
        slot_rates[ftype] = rates
        if ftype == "fishing_mons" and "groups" in field:
            rod_groups = field["groups"]

    return slot_rates, rod_groups


# ---------------------------------------------------------------------------
# Phase 3 – Accumulate family rates for one encounter sub-table
# ---------------------------------------------------------------------------

def resolve_family(
    species: str,
    species_to_family: dict[str, str],
    aliases: dict[str, str],
) -> str:
    """Look up a species' family, following the alias chain if needed."""
    current = species
    visited: set[str] = set()
    while current not in visited:
        if current in species_to_family:
            return species_to_family[current]
        visited.add(current)
        next_step = aliases.get(current)
        if next_step is None:
            break
        current = next_step
    return f"UNKNOWN({species})"


def family_rates_for_table(
    mons: list[dict],
    slot_indices: list[int],
    all_rates: list[int],
    species_to_family: dict[str, str],
    aliases: dict[str, str],
) -> dict[str, float]:
    """
    Given a list of mons and the subset of slot indices to use, return
    { family: cumulative_encounter_rate_percent }.
    """
    family_rates: dict[str, float] = defaultdict(float)

    for idx in slot_indices:
        if idx >= len(mons) or idx >= len(all_rates):
            continue
        mon = mons[idx]
        species = mon.get("species", "SPECIES_NONE")
        if species in ("SPECIES_NONE", "", None):
            continue
        family = resolve_family(species, species_to_family, aliases)
        family_rates[family] += all_rates[idx]

    return dict(family_rates)


# ---------------------------------------------------------------------------
# Phase 4 – Process all encounters; group by MAPSEC; find per-MAPSEC max
# ---------------------------------------------------------------------------

def analyze_encounters(
    json_data: dict,
    species_to_family: dict[str, str],
    aliases: dict[str, str],
    frlg_maps: set[str],
) -> dict[str, dict[str, float]]:
    """
    Returns { mapsec_id: { family: max_rate_across_all_tables } }

    mapsec_id is the "map" field value (e.g. "MAP_ROUTE101").
    Day/Night/Evening entries share the same mapsec_id.
    Only the for_maps=true group is processed.
    Each fishing rod type is treated as an independent table.
    Entries whose map constant is in frlg_maps are skipped.
    """
    for_maps_group = next(
        (g for g in json_data["wild_encounter_groups"] if g.get("for_maps")),
        None,
    )
    if for_maps_group is None:
        raise ValueError("No for_maps=true group found in wild_encounters.json")

    slot_rates, rod_groups = extract_slot_rates(for_maps_group["fields"])
    fishing_all_rates = slot_rates.get("fishing_mons", [])

    # mapsec -> list of per-table {family: rate} dicts
    mapsec_tables: dict[str, list[dict[str, float]]] = defaultdict(list)

    for entry in for_maps_group["encounters"]:
        mapsec = entry.get("map")
        if not mapsec:
            # Fall back to stripping the time-of-day suffix from base_label
            mapsec = re.sub(r"_(Day|Night|Evening)$", "", entry.get("base_label", "unknown"))

        # Skip FRLG maps
        if mapsec in frlg_maps:
            continue

        # Standard encounter types (each array is one independent table)
        for enc_type in ("land_mons", "water_mons", "rock_smash_mons"):
            if enc_type not in entry:
                continue
            mons = entry[enc_type]["mons"]
            rates = slot_rates.get(enc_type, [])
            all_indices = list(range(len(rates)))
            table = family_rates_for_table(mons, all_indices, rates, species_to_family, aliases)
            if table:
                mapsec_tables[mapsec].append(table)

        # Fishing: split into three independent sub-tables (one per rod type)
        if "fishing_mons" in entry:
            mons = entry["fishing_mons"]["mons"]
            for rod_name in ("old_rod", "good_rod", "super_rod"):
                indices = rod_groups.get(rod_name, [])
                if not indices:
                    continue
                table = family_rates_for_table(mons, indices, fishing_all_rates, species_to_family, aliases)
                if table:
                    mapsec_tables[mapsec].append(table)

    # For each MAPSEC, take the maximum rate for each family across all tables
    mapsec_family_max: dict[str, dict[str, float]] = {}
    for mapsec, tables in mapsec_tables.items():
        family_max: dict[str, float] = defaultdict(float)
        for table in tables:
            for family, rate in table.items():
                if rate > family_max[family]:
                    family_max[family] = rate
        mapsec_family_max[mapsec] = dict(family_max)

    return mapsec_family_max


# ---------------------------------------------------------------------------
# Phase 5 – Compute the three metrics across all MAPSECs
# ---------------------------------------------------------------------------

def compute_metrics(mapsec_family_max: dict[str, dict[str, float]]) -> dict[str, dict]:
    """
    Returns { family: { "additive": float, "multiplicative": float, "count": int } }
    """
    all_families: set[str] = set()
    for family_max in mapsec_family_max.values():
        all_families.update(family_max.keys())

    all_mapsec_data = list(mapsec_family_max.values())

    results: dict[str, dict] = {}
    for family in sorted(all_families):
        additive = 0.0
        multiplicative_complement = 1.0
        count = 0

        for family_max in all_mapsec_data:
            rate = family_max.get(family, 0.0)
            if rate > 0:
                additive += rate
                multiplicative_complement *= 1.0 - (rate / 100.0)
                count += 1

        results[family] = {
            "additive": additive,
            "multiplicative": (1.0 - multiplicative_complement) * 100.0,
            "count": count,
        }

    return results


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main() -> None:
    print("Building species aliases...")
    aliases = build_species_aliases()
    print(f"  Found {len(aliases)} species aliases")

    print("Building species → family mapping...")
    species_to_family = build_species_to_family()
    print(f"  Mapped {len(species_to_family)} species entries")

    print("Loading wild_encounters.json...")
    with open(ENCOUNTERS_JSON, encoding="utf-8") as f:
        json_data = json.load(f)

    print("Building FRLG map filter...")
    frlg_maps = build_frlg_map_constants()
    print(f"  Found {len(frlg_maps)} FRLG map constants (will be excluded)")

    print("Analyzing encounters (Emerald maps only)...")
    mapsec_family_max = analyze_encounters(json_data, species_to_family, aliases, frlg_maps)
    print(f"  Processed {len(mapsec_family_max)} unique map sections")

    print("Computing metrics...")
    metrics = compute_metrics(mapsec_family_max)

    # Warn about any species that didn't resolve to a known family
    unknown = [(fam, m) for fam, m in metrics.items() if fam.startswith("UNKNOWN(")]
    if unknown:
        print(f"\n  WARNING: {len(unknown)} unresolved species (not found in gen_X_families.h):")
        for fam, m in sorted(unknown, key=lambda x: x[1]["additive"], reverse=True)[:30]:
            print(f"    {fam}  count={m['count']}  additive={m['additive']:.1f}%")
        print()

    print(f"Writing {OUTPUT_CSV}...")
    rows = sorted(metrics.items(), key=lambda x: x[1]["additive"], reverse=True)

    with open(OUTPUT_CSV, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(
            ["P_FAMILY_", "Additive_Probability_%", "Multiplicative_Probability_%", "MAPSEC_Count"]
        )
        for family, m in rows:
            writer.writerow(
                [family, f"{m['additive']:.2f}", f"{m['multiplicative']:.2f}", m["count"]]
            )

    print(f"Done. {len(rows)} families written to {OUTPUT_CSV}")


if __name__ == "__main__":
    main()
