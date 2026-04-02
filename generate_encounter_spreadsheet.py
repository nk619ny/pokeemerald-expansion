#!/usr/bin/env python3
"""
Generate a wild encounter spreadsheet (wild_encounters.xlsx) from pokeemerald-expansion data.

Reads:
  - src/data/wild_encounters.json       (encounter tables)
  - src/data/region_map/region_map_sections.json (MAPSEC display names)
  - include/constants/region_map_sections.h      (Kanto MAPSEC range)
  - data/maps/*/map.json                (map→MAPSEC, berry tree detection)

Requires: pip install openpyxl
"""

import json
import glob
import os
import re
import sys
from collections import defaultdict, OrderedDict

try:
    from openpyxl import Workbook
    from openpyxl.styles import Font, PatternFill, Alignment, Border, Side
    from openpyxl.utils import get_column_letter
except ImportError:
    print("ERROR: openpyxl is required. Install with: pip install openpyxl")
    sys.exit(1)

# ---------------------------------------------------------------------------
# Paths (relative to repo root)
# ---------------------------------------------------------------------------
REPO_ROOT = os.path.dirname(os.path.abspath(__file__))
WILD_ENCOUNTERS_JSON = os.path.join(REPO_ROOT, "src", "data", "wild_encounters.json")
REGION_MAP_JSON = os.path.join(REPO_ROOT, "src", "data", "region_map", "region_map_sections.json")
REGION_MAP_H = os.path.join(REPO_ROOT, "include", "constants", "region_map_sections.h")
MAPS_DIR = os.path.join(REPO_ROOT, "data", "maps")
OUTPUT_FILE = os.path.join(REPO_ROOT, "wild_encounters.xlsx")

# ---------------------------------------------------------------------------
# Aesthetic form grouping
# ---------------------------------------------------------------------------
AESTHETIC_BASES = {
    "FLABEBE", "FLOETTE", "FLORGES", "MINIOR", "ALCREMIE",
    "SHELLOS", "GASTRODON", "MAUSHOLD", "DUDUNSPARCE", "TATSUGIRI",
}

# Suffixes that indicate battle-relevant forms (NOT aesthetic)
BATTLE_FORM_SUFFIXES = {"MEGA", "GMAX", "PRIMAL"}


def get_aesthetic_base(species_name):
    """
    If species_name (without SPECIES_ prefix) belongs to an aesthetic form group,
    return the base name. Otherwise return None.
    """
    parts = species_name.split("_")
    if parts[0] in AESTHETIC_BASES:
        # Check if any part is a battle-relevant suffix
        for p in parts[1:]:
            if p in BATTLE_FORM_SUFFIXES:
                return None  # This is a Mega/GMax form, treat separately
        return parts[0]
    return None


# ---------------------------------------------------------------------------
# Species name formatting
# ---------------------------------------------------------------------------
SPECIAL_NAMES = {
    "NIDORAN_F": "Nidoran\u2640",
    "NIDORAN_M": "Nidoran\u2642",
    "MR_MIME": "Mr. Mime",
    "MR_MIME_GALAR": "Mr. Mime (Galar)",
    "MR_RIME": "Mr. Rime",
    "MIME_JR": "Mime Jr.",
    "HO_OH": "Ho-Oh",
    "PORYGON_Z": "Porygon-Z",
    "PORYGON2": "Porygon2",
    "JANGMO_O": "Jangmo-o",
    "HAKAMO_O": "Hakamo-o",
    "KOMMO_O": "Kommo-o",
    "KOMMO_O_TOTEM": "Kommo-o (Totem)",
    "TYPE_NULL": "Type: Null",
    "TAPU_KOKO": "Tapu Koko",
    "TAPU_LELE": "Tapu Lele",
    "TAPU_BULU": "Tapu Bulu",
    "TAPU_FINI": "Tapu Fini",
    "FLABEBE": "Flab\u00e9b\u00e9",
    "CHI_YU": "Chi-Yu",
    "CHIEN_PAO": "Chien-Pao",
    "WO_CHIEN": "Wo-Chien",
    "TING_LU": "Ting-Lu",
    "GREAT_TUSK": "Great Tusk",
    "SCREAM_TAIL": "Scream Tail",
    "BRUTE_BONNET": "Brute Bonnet",
    "FLUTTER_MANE": "Flutter Mane",
    "SLITHER_WING": "Slither Wing",
    "SANDY_SHOCKS": "Sandy Shocks",
    "IRON_TREADS": "Iron Treads",
    "IRON_BUNDLE": "Iron Bundle",
    "IRON_HANDS": "Iron Hands",
    "IRON_JUGULIS": "Iron Jugulis",
    "IRON_MOTH": "Iron Moth",
    "IRON_THORNS": "Iron Thorns",
    "IRON_VALIANT": "Iron Valiant",
    "IRON_LEAVES": "Iron Leaves",
    "IRON_BOULDER": "Iron Boulder",
    "IRON_CROWN": "Iron Crown",
    "ROARING_MOON": "Roaring Moon",
    "WALKING_WAKE": "Walking Wake",
    "GOUGING_FIRE": "Gouging Fire",
    "RAGING_BOLT": "Raging Bolt",
    "OGERPON_TEAL_MASK": "Ogerpon (Teal)",
    "OGERPON_WELLSPRING_MASK": "Ogerpon (Wellspring)",
    "OGERPON_HEARTHFLAME_MASK": "Ogerpon (Hearthflame)",
    "OGERPON_CORNERSTONE_MASK": "Ogerpon (Cornerstone)",
}

# Known regional/form suffixes to format nicely
FORM_SUFFIXES = {
    "ALOLA": "Alolan",
    "GALAR": "Galarian",
    "HISUI": "Hisuian",
    "PALDEA": "Paldean",
    "MEGA": "Mega",
    "MEGA_X": "Mega X",
    "MEGA_Y": "Mega Y",
    "GMAX": "Gigantamax",
    "PRIMAL": "Primal",
    "ORIGIN": "Origin",
    "THERIAN": "Therian",
    "TOTEM": "Totem",
    "CROWNED": "Crowned",
    "ETERNAMAX": "Eternamax",
    "BLACK": "Black",
    "WHITE": "White",
    "SHADOW": "Shadow",
    "DUSK_MANE": "Dusk Mane",
    "DAWN_WINGS": "Dawn Wings",
    "ULTRA": "Ultra",
    "ICE_RIDER": "Ice Rider",
    "SHADOW_RIDER": "Shadow Rider",
    "BLOODMOON": "Blood Moon",
    "AQUA_BREED": "Aqua Breed",
    "BLAZE_BREED": "Blaze Breed",
    "COMBAT_BREED": "Combat Breed",
}


def format_species_name(raw):
    """Convert SPECIES_XYZ to a display name."""
    name = raw.replace("SPECIES_", "")

    # Check aesthetic grouping first
    aesthetic_base = get_aesthetic_base(name)
    if aesthetic_base is not None:
        # Return the base species name nicely formatted
        if aesthetic_base == "FLABEBE":
            return "Flab\u00e9b\u00e9"
        return aesthetic_base.capitalize()

    # Check special names dict
    if name in SPECIAL_NAMES:
        return SPECIAL_NAMES[name]

    # Try to detect form suffixes (work backwards from longest known suffixes)
    for suffix_key, suffix_display in sorted(FORM_SUFFIXES.items(), key=lambda x: -len(x[0])):
        if name.endswith("_" + suffix_key):
            base = name[: -(len(suffix_key) + 1)]
            base_formatted = format_base_name(base)
            return f"{base_formatted} ({suffix_display})"

    return format_base_name(name)


def format_base_name(name):
    """Format a base species name: Title case, handle special characters."""
    # Check if the base name itself is in special names
    if name in SPECIAL_NAMES:
        return SPECIAL_NAMES[name]

    # Title case with underscore → space
    parts = name.split("_")
    formatted_parts = []
    for part in parts:
        if part:
            formatted_parts.append(part.capitalize())
    return " ".join(formatted_parts)


def get_grouping_key(raw):
    """
    Return the key used to group/aggregate a species.
    For aesthetic forms, returns the base (e.g. SPECIES_SHELLOS for both WEST/EAST).
    For others, returns raw as-is.
    """
    name = raw.replace("SPECIES_", "")
    aesthetic_base = get_aesthetic_base(name)
    if aesthetic_base is not None:
        return "SPECIES_" + aesthetic_base
    return raw


# ---------------------------------------------------------------------------
# Data loading
# ---------------------------------------------------------------------------
def load_mapsec_names():
    """Load MAPSEC id → display name from region_map_sections.json."""
    with open(REGION_MAP_JSON, "r", encoding="utf-8") as f:
        data = json.load(f)
    mapping = {}
    ordered_ids = []
    for entry in data["map_sections"]:
        mapsec_id = entry["id"]
        display_name = entry.get("name", mapsec_id.replace("MAPSEC_", "").replace("_", " "))
        mapping[mapsec_id] = display_name
        ordered_ids.append(mapsec_id)
    return mapping, ordered_ids


def load_kanto_mapsecs(ordered_ids):
    """Determine the set of Kanto/FRLG MAPSECs to exclude."""
    # From the header: KANTO_MAPSEC_START = MAPSEC_PALLET_TOWN, KANTO_MAPSEC_END = MAPSEC_SPECIAL_AREA
    try:
        start_idx = ordered_ids.index("MAPSEC_PALLET_TOWN")
        end_idx = ordered_ids.index("MAPSEC_SPECIAL_AREA")
        return set(ordered_ids[start_idx : end_idx + 1])
    except ValueError:
        # Fallback: parse the header file
        kanto_set = set()
        with open(REGION_MAP_H, "r", encoding="utf-8") as f:
            content = f.read()
        # Find all MAPSEC between PALLET_TOWN and SPECIAL_AREA in the enum
        in_kanto = False
        for line in content.splitlines():
            line = line.strip().rstrip(",")
            if "MAPSEC_PALLET_TOWN" in line:
                in_kanto = True
            if in_kanto:
                m = re.match(r"(MAPSEC_\w+)", line)
                if m:
                    kanto_set.add(m.group(1))
            if "MAPSEC_SPECIAL_AREA" in line:
                break
        return kanto_set


def load_map_data(kanto_mapsecs):
    """
    Scan all map.json files. Returns:
      map_id_to_info: {MAP_ID: {mapsec, name, has_berry_tree}}
    Excludes FRLG maps.
    """
    map_id_to_info = {}
    map_json_pattern = os.path.join(MAPS_DIR, "*", "map.json")
    for path in glob.glob(map_json_pattern):
        folder_name = os.path.basename(os.path.dirname(path))
        # Skip FRLG folders
        if folder_name.endswith("_Frlg"):
            continue
        with open(path, "r", encoding="utf-8") as f:
            try:
                data = json.load(f)
            except json.JSONDecodeError:
                continue

        map_id = data.get("id", "")
        mapsec = data.get("region_map_section", "")
        map_name = data.get("name", folder_name)

        # Skip maps with Kanto MAPSECs
        if mapsec in kanto_mapsecs:
            continue

        # Skip maps with FRLG region field
        if data.get("region") == "REGION_KANTO":
            continue

        # Check for berry trees
        has_berry = False
        for obj in data.get("object_events", []):
            if obj.get("graphics_id") == "OBJ_EVENT_GFX_BERRY_TREE":
                has_berry = True
                break

        map_id_to_info[map_id] = {
            "mapsec": mapsec,
            "name": map_name,
            "has_berry_tree": has_berry,
        }
    return map_id_to_info


def load_encounters():
    """Load wild_encounters.json and return encounter rates + encounter entries."""
    with open(WILD_ENCOUNTERS_JSON, "r", encoding="utf-8") as f:
        data = json.load(f)

    # Find the gWildMonHeaders group (for_maps=true)
    main_group = None
    for group in data["wild_encounter_groups"]:
        if group.get("for_maps") is True and group["label"] == "gWildMonHeaders":
            main_group = group
            break

    if main_group is None:
        print("ERROR: Could not find gWildMonHeaders encounter group")
        sys.exit(1)

    # Extract encounter rates
    rates = {}
    fishing_groups = {}
    for field in main_group["fields"]:
        ftype = field["type"]
        rates[ftype] = field["encounter_rates"]
        if ftype == "fishing_mons" and "groups" in field:
            fishing_groups = field["groups"]

    return rates, fishing_groups, main_group["encounters"]


# ---------------------------------------------------------------------------
# Encounter processing
# ---------------------------------------------------------------------------
def aggregate_species(mons_list, rate_list, slot_indices=None):
    """
    Sum encounter rates for each species across the given slots.
    Returns sorted list of (display_name, total_rate).
    """
    if not mons_list or not rate_list:
        return []

    species_totals = defaultdict(float)

    indices = slot_indices if slot_indices is not None else range(len(mons_list))

    for i in indices:
        if i >= len(mons_list) or i >= len(rate_list):
            continue
        raw_species = mons_list[i]["species"]
        grouping_key = get_grouping_key(raw_species)
        display_name = format_species_name(raw_species)
        # Use grouping_key for aggregation, but we need to map key→display
        species_totals[(grouping_key, display_name)] += rate_list[i]

    # Merge by grouping_key (in case different raw names map to same group)
    merged = defaultdict(float)
    key_to_display = {}
    for (gkey, dname), total in species_totals.items():
        merged[gkey] += total
        key_to_display[gkey] = dname  # last one wins, but they should all be same

    # Build result list
    result = [(key_to_display[gkey], total) for gkey, total in merged.items()]

    # Sort: highest probability first, then alphabetically for ties
    result.sort(key=lambda x: (-x[1], x[0]))
    return result


def process_encounters(rates, fishing_groups, encounters, map_id_to_info):
    """
    Process all encounters into a structure grouped by MAPSEC.
    Returns: {mapsec: [{map_name, has_berry, land_day, land_night, surf_day, surf_night,
                         old_rod, good_rod, super_rod, rock_smash}, ...]}
    """
    # Group encounters by map_id
    map_encounters = defaultdict(dict)  # map_id -> {day: entry, night: entry}
    for entry in encounters:
        map_id = entry["map"]
        label = entry.get("base_label", "")

        # Skip FRLG maps
        if map_id.endswith("_FRLG"):
            continue
        # Skip maps not in our map data (i.e., filtered-out Kanto maps)
        if map_id not in map_id_to_info:
            continue

        if label.endswith("_Day"):
            map_encounters[map_id]["day"] = entry
        elif label.endswith("_Night"):
            map_encounters[map_id]["night"] = entry
        # Skip _Evening entries

    # Now build per-MAPSEC data
    mapsec_data = defaultdict(list)

    for map_id, entries in map_encounters.items():
        info = map_id_to_info[map_id]
        mapsec = info["mapsec"]

        day_entry = entries.get("day", {})
        night_entry = entries.get("night", {})

        # Check if this map has any encounters at all
        has_any = False
        for enc_type in ["land_mons", "water_mons", "rock_smash_mons", "fishing_mons"]:
            if enc_type in day_entry or enc_type in night_entry:
                has_any = True
                break
        if not has_any:
            continue

        map_data = {
            "map_name": info["name"],
            "map_id": map_id,
            "has_berry": info["has_berry_tree"],
        }

        # Land encounters
        land_rate = rates.get("land_mons", [])
        day_land = day_entry.get("land_mons", {}).get("mons", [])
        night_land = night_entry.get("land_mons", {}).get("mons", [])
        map_data["land_day"] = aggregate_species(day_land, land_rate) if day_land else []
        map_data["land_night"] = aggregate_species(night_land, land_rate) if night_land else []

        # Surf (water) encounters
        water_rate = rates.get("water_mons", [])
        day_water = day_entry.get("water_mons", {}).get("mons", [])
        night_water = night_entry.get("water_mons", {}).get("mons", [])
        map_data["surf_day"] = aggregate_species(day_water, water_rate) if day_water else []
        map_data["surf_night"] = aggregate_species(night_water, water_rate) if night_water else []

        # Rock Smash - day only
        rock_rate = rates.get("rock_smash_mons", [])
        day_rock = day_entry.get("rock_smash_mons", {}).get("mons", [])
        map_data["rock_smash"] = aggregate_species(day_rock, rock_rate) if day_rock else []

        # Fishing - day only
        fish_rate = rates.get("fishing_mons", [])
        day_fish = day_entry.get("fishing_mons", {}).get("mons", [])
        if day_fish:
            old_rod_indices = fishing_groups.get("old_rod", list(range(0, 10)))
            good_rod_indices = fishing_groups.get("good_rod", list(range(10, 20)))
            super_rod_indices = fishing_groups.get("super_rod", list(range(20, 30)))
            map_data["old_rod"] = aggregate_species(day_fish, fish_rate, old_rod_indices)
            map_data["good_rod"] = aggregate_species(day_fish, fish_rate, good_rod_indices)
            map_data["super_rod"] = aggregate_species(day_fish, fish_rate, super_rod_indices)
        else:
            map_data["old_rod"] = []
            map_data["good_rod"] = []
            map_data["super_rod"] = []

        mapsec_data[mapsec].append(map_data)

    # Sort maps within each MAPSEC alphabetically by map_name
    for mapsec in mapsec_data:
        mapsec_data[mapsec].sort(key=lambda x: x["map_name"])

    return mapsec_data


# ---------------------------------------------------------------------------
# Color definitions
# ---------------------------------------------------------------------------
# Headers
LAND_HEADER_FILL = PatternFill(start_color="7A9A3A", end_color="7A9A3A", fill_type="solid")
FISH_HEADER_FILL = PatternFill(start_color="2E8B8B", end_color="2E8B8B", fill_type="solid")
SURF_HEADER_FILL = PatternFill(start_color="4A7FAF", end_color="4A7FAF", fill_type="solid")
ROCK_HEADER_FILL = PatternFill(start_color="A0845C", end_color="A0845C", fill_type="solid")

# Sub-headers
LAND_DAY_SUBHEADER = PatternFill(start_color="B5CC6A", end_color="B5CC6A", fill_type="solid")
LAND_NIGHT_SUBHEADER = PatternFill(start_color="5A7D2A", end_color="5A7D2A", fill_type="solid")
SURF_DAY_SUBHEADER = PatternFill(start_color="7AB8D9", end_color="7AB8D9", fill_type="solid")
SURF_NIGHT_SUBHEADER = PatternFill(start_color="3A6B8F", end_color="3A6B8F", fill_type="solid")
OLD_ROD_SUBHEADER = PatternFill(start_color="66CDAA", end_color="66CDAA", fill_type="solid")
GOOD_ROD_SUBHEADER = PatternFill(start_color="48B0A0", end_color="48B0A0", fill_type="solid")
SUPER_ROD_SUBHEADER = PatternFill(start_color="2E8B7A", end_color="2E8B7A", fill_type="solid")
ROCK_SUBHEADER = PatternFill(start_color="C4A97D", end_color="C4A97D", fill_type="solid")

# Data cells
LAND_DAY_FILL = PatternFill(start_color="E8F5C8", end_color="E8F5C8", fill_type="solid")
LAND_NIGHT_FILL = PatternFill(start_color="C8DFA0", end_color="C8DFA0", fill_type="solid")
SURF_DAY_FILL = PatternFill(start_color="D6EEFC", end_color="D6EEFC", fill_type="solid")
SURF_NIGHT_FILL = PatternFill(start_color="B0D4EE", end_color="B0D4EE", fill_type="solid")
OLD_ROD_FILL = PatternFill(start_color="D4F5EC", end_color="D4F5EC", fill_type="solid")
GOOD_ROD_FILL = PatternFill(start_color="BDE8DC", end_color="BDE8DC", fill_type="solid")
SUPER_ROD_FILL = PatternFill(start_color="A6DDD0", end_color="A6DDD0", fill_type="solid")
ROCK_FILL = PatternFill(start_color="F0E0C8", end_color="F0E0C8", fill_type="solid")

MAP_NAME_FILL = PatternFill(start_color="3C3C3C", end_color="3C3C3C", fill_type="solid")

# Fonts
HEADER_FONT = Font(bold=True, color="FFFFFF", size=11)
SUBHEADER_FONT = Font(bold=True, color="FFFFFF", size=10)
SUBHEADER_FONT_DARK = Font(bold=True, color="1A1A1A", size=10)
MAP_NAME_FONT = Font(bold=True, color="FFFFFF", size=12)
DATA_FONT = Font(size=10)
NOTE_FONT = Font(italic=True, size=10, color="2E7D32")
PCT_FONT = Font(size=10, color="555555")

THIN_BORDER = Border(
    left=Side(style="thin", color="CCCCCC"),
    right=Side(style="thin", color="CCCCCC"),
    top=Side(style="thin", color="CCCCCC"),
    bottom=Side(style="thin", color="CCCCCC"),
)

CENTER_ALIGN = Alignment(horizontal="center", vertical="center")
LEFT_ALIGN = Alignment(horizontal="left", vertical="center")
WRAP_ALIGN = Alignment(horizontal="left", vertical="center", wrap_text=True)

# ---------------------------------------------------------------------------
# Column layout
# ---------------------------------------------------------------------------
# Land: cols 1-4 (A-D)       | Day name, Day%, Night name, Night%
# Gap:  col 5 (E)
# Fish: cols 6-11 (F-K)      | OldRod name, %, GoodRod name, %, SuperRod name, %
# Gap:  col 12 (L)
# Surf: cols 13-16 (M-P)     | Day name, Day%, Night name, Night%
# Gap:  col 17 (Q)
# Rock: cols 18-19 (R-S)     | Name, %
# Gap:  col 20 (T)
# Note: col 21 (U)

COL_LAND_START = 1
COL_LAND_END = 4
COL_FISH_START = 6
COL_FISH_END = 11
COL_SURF_START = 13
COL_SURF_END = 16
COL_ROCK_START = 18
COL_ROCK_END = 19
COL_NOTE = 21


def write_subtable_data(ws, start_row, col_name, col_pct, data_list, fill, max_rows):
    """Write species/percentage data into a pair of columns."""
    for i, (species, pct) in enumerate(data_list):
        row = start_row + i
        cell_name = ws.cell(row=row, column=col_name, value=species)
        cell_name.font = DATA_FONT
        cell_name.fill = fill
        cell_name.border = THIN_BORDER
        cell_name.alignment = LEFT_ALIGN

        cell_pct = ws.cell(row=row, column=col_pct, value=f"{pct:.0f}%")
        cell_pct.font = PCT_FONT
        cell_pct.fill = fill
        cell_pct.border = THIN_BORDER
        cell_pct.alignment = CENTER_ALIGN

    # Fill remaining empty rows with fill color for consistent look
    for i in range(len(data_list), max_rows):
        row = start_row + i
        for col in (col_name, col_pct):
            cell = ws.cell(row=row, column=col)
            cell.fill = fill
            cell.border = THIN_BORDER


def write_map_section(ws, row, map_data):
    """
    Write a single map's encounter section starting at the given row.
    Returns the next available row after this section.
    """
    # Compute max data rows needed across all tables
    table_heights = [
        max(len(map_data["land_day"]), len(map_data["land_night"])),
        max(len(map_data["old_rod"]), len(map_data["good_rod"]), len(map_data["super_rod"])),
        max(len(map_data["surf_day"]), len(map_data["surf_night"])),
        len(map_data["rock_smash"]),
    ]

    # Check which tables are present
    has_land = bool(map_data["land_day"] or map_data["land_night"])
    has_fish = bool(map_data["old_rod"] or map_data["good_rod"] or map_data["super_rod"])
    has_surf = bool(map_data["surf_day"] or map_data["surf_night"])
    has_rock = bool(map_data["rock_smash"])

    max_data_rows = max(table_heights) if any(table_heights) else 0
    if max_data_rows == 0:
        return row

    # ---- Row 1: Map name ----
    map_name_row = row
    # Merge across all table columns
    ws.merge_cells(start_row=map_name_row, start_column=1, end_row=map_name_row, end_column=COL_NOTE)
    cell = ws.cell(row=map_name_row, column=1, value=map_data["map_name"])
    cell.font = MAP_NAME_FONT
    cell.fill = MAP_NAME_FILL
    cell.alignment = CENTER_ALIGN
    row += 1

    # ---- Row 2: Table title headers ----
    title_row = row

    def write_title(start_col, end_col, title, fill):
        ws.merge_cells(start_row=title_row, start_column=start_col, end_row=title_row, end_column=end_col)
        cell = ws.cell(row=title_row, column=start_col, value=title)
        cell.font = HEADER_FONT
        cell.fill = fill
        cell.alignment = CENTER_ALIGN
        cell.border = THIN_BORDER
        # Fill all merged cells
        for c in range(start_col, end_col + 1):
            ws.cell(row=title_row, column=c).fill = fill
            ws.cell(row=title_row, column=c).border = THIN_BORDER

    if has_land:
        write_title(COL_LAND_START, COL_LAND_END, "Land Encounters", LAND_HEADER_FILL)
    if has_fish:
        write_title(COL_FISH_START, COL_FISH_END, "Fishing Encounters", FISH_HEADER_FILL)
    if has_surf:
        write_title(COL_SURF_START, COL_SURF_END, "Surf Encounters", SURF_HEADER_FILL)
    if has_rock:
        write_title(COL_ROCK_START, COL_ROCK_END, "Cut Tree / Rock Smash", ROCK_HEADER_FILL)

    row += 1

    # ---- Row 3: Sub-headers ----
    subheader_row = row

    def write_subheader(start_col, end_col, title, fill, font=None):
        ws.merge_cells(start_row=subheader_row, start_column=start_col, end_row=subheader_row, end_column=end_col)
        cell = ws.cell(row=subheader_row, column=start_col, value=title)
        cell.font = font or SUBHEADER_FONT
        cell.fill = fill
        cell.alignment = CENTER_ALIGN
        cell.border = THIN_BORDER
        for c in range(start_col, end_col + 1):
            ws.cell(row=subheader_row, column=c).fill = fill
            ws.cell(row=subheader_row, column=c).border = THIN_BORDER

    if has_land:
        write_subheader(COL_LAND_START, COL_LAND_START + 1, "Day", LAND_DAY_SUBHEADER, SUBHEADER_FONT_DARK)
        write_subheader(COL_LAND_START + 2, COL_LAND_END, "Night", LAND_NIGHT_SUBHEADER)
    if has_fish:
        write_subheader(COL_FISH_START, COL_FISH_START + 1, "Old Rod", OLD_ROD_SUBHEADER, SUBHEADER_FONT_DARK)
        write_subheader(COL_FISH_START + 2, COL_FISH_START + 3, "Good Rod", GOOD_ROD_SUBHEADER)
        write_subheader(COL_FISH_START + 4, COL_FISH_END, "Super Rod", SUPER_ROD_SUBHEADER)
    if has_surf:
        write_subheader(COL_SURF_START, COL_SURF_START + 1, "Day", SURF_DAY_SUBHEADER, SUBHEADER_FONT_DARK)
        write_subheader(COL_SURF_START + 2, COL_SURF_END, "Night", SURF_NIGHT_SUBHEADER)
    if has_rock:
        write_subheader(COL_ROCK_START, COL_ROCK_END, "", ROCK_SUBHEADER)

    row += 1

    # ---- Data rows ----
    data_start = row

    if has_land:
        write_subtable_data(ws, data_start, COL_LAND_START, COL_LAND_START + 1,
                            map_data["land_day"], LAND_DAY_FILL, max_data_rows)
        write_subtable_data(ws, data_start, COL_LAND_START + 2, COL_LAND_END,
                            map_data["land_night"], LAND_NIGHT_FILL, max_data_rows)

    if has_fish:
        write_subtable_data(ws, data_start, COL_FISH_START, COL_FISH_START + 1,
                            map_data["old_rod"], OLD_ROD_FILL, max_data_rows)
        write_subtable_data(ws, data_start, COL_FISH_START + 2, COL_FISH_START + 3,
                            map_data["good_rod"], GOOD_ROD_FILL, max_data_rows)
        write_subtable_data(ws, data_start, COL_FISH_START + 4, COL_FISH_END,
                            map_data["super_rod"], SUPER_ROD_FILL, max_data_rows)

    if has_surf:
        write_subtable_data(ws, data_start, COL_SURF_START, COL_SURF_START + 1,
                            map_data["surf_day"], SURF_DAY_FILL, max_data_rows)
        write_subtable_data(ws, data_start, COL_SURF_START + 2, COL_SURF_END,
                            map_data["surf_night"], SURF_NIGHT_FILL, max_data_rows)

    if has_rock:
        write_subtable_data(ws, data_start, COL_ROCK_START, COL_ROCK_END,
                            map_data["rock_smash"], ROCK_FILL, max_data_rows)

    # ---- Note ----
    if map_data["has_berry"]:
        cell = ws.cell(row=data_start, column=COL_NOTE, value="Berry Tree Encounters available.")
        cell.font = NOTE_FONT
        cell.alignment = WRAP_ALIGN

    row = data_start + max_data_rows + 1  # +1 for blank separator row
    return row


def set_column_widths(ws):
    """Set reasonable column widths."""
    name_width = 18
    pct_width = 7
    gap_width = 2

    widths = {
        COL_LAND_START: name_width, COL_LAND_START + 1: pct_width,
        COL_LAND_START + 2: name_width, COL_LAND_END: pct_width,
        5: gap_width,
        COL_FISH_START: name_width, COL_FISH_START + 1: pct_width,
        COL_FISH_START + 2: name_width, COL_FISH_START + 3: pct_width,
        COL_FISH_START + 4: name_width, COL_FISH_END: pct_width,
        12: gap_width,
        COL_SURF_START: name_width, COL_SURF_START + 1: pct_width,
        COL_SURF_START + 2: name_width, COL_SURF_END: pct_width,
        17: gap_width,
        COL_ROCK_START: name_width, COL_ROCK_END: pct_width,
        20: gap_width,
        COL_NOTE: 30,
    }

    for col, width in widths.items():
        ws.column_dimensions[get_column_letter(col)].width = width


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------
def main():
    print("Loading MAPSEC data...")
    mapsec_names, ordered_ids = load_mapsec_names()
    kanto_mapsecs = load_kanto_mapsecs(ordered_ids)
    print(f"  {len(kanto_mapsecs)} Kanto MAPSECs to exclude")

    print("Loading map data...")
    map_id_to_info = load_map_data(kanto_mapsecs)
    print(f"  {len(map_id_to_info)} Emerald maps loaded")

    print("Loading encounters...")
    rates, fishing_groups, encounters = load_encounters()
    print(f"  {len(encounters)} encounter entries loaded")

    print("Processing encounters...")
    mapsec_data = process_encounters(rates, fishing_groups, encounters, map_id_to_info)
    print(f"  {len(mapsec_data)} MAPSECs with encounters")

    print("Generating spreadsheet...")
    wb = Workbook()
    # Remove default sheet
    wb.remove(wb.active)

    # Order MAPSECs by their position in the enum (ordered_ids)
    mapsec_order = {m: i for i, m in enumerate(ordered_ids)}
    sorted_mapsecs = sorted(mapsec_data.keys(), key=lambda m: mapsec_order.get(m, 9999))

    tab_names_used = set()
    for mapsec in sorted_mapsecs:
        maps = mapsec_data[mapsec]
        if not maps:
            continue

        display_name = mapsec_names.get(mapsec, mapsec.replace("MAPSEC_", "").replace("_", " "))

        # Excel tab names max 31 chars, no special chars
        tab_name = display_name[:31]
        # Remove invalid characters for sheet names
        for ch in ["\\", "/", "*", "?", ":", "[", "]"]:
            tab_name = tab_name.replace(ch, "")
        # Ensure unique
        base_tab = tab_name
        counter = 2
        while tab_name in tab_names_used:
            suffix = f" ({counter})"
            tab_name = base_tab[: 31 - len(suffix)] + suffix
            counter += 1
        tab_names_used.add(tab_name)

        ws = wb.create_sheet(title=tab_name)
        set_column_widths(ws)

        # Freeze top row
        ws.freeze_panes = "A2"

        current_row = 1
        for map_data in maps:
            current_row = write_map_section(ws, current_row, map_data)

    if not wb.sheetnames:
        print("WARNING: No encounter data found. Creating empty workbook.")
        wb.create_sheet(title="No Data")

    wb.save(OUTPUT_FILE)
    print(f"Done! Saved to {OUTPUT_FILE}")
    print(f"  {len(wb.sheetnames)} tabs created")


if __name__ == "__main__":
    main()
