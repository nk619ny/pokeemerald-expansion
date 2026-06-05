#!/usr/bin/env python3
"""
Apply USUM move migration: edit gen_9.h, egg_moves.h, elite_learnsets.h
"""

import json
import re
import os

MOVES_TO_FIND = set([
    "MOVE_AROMATHERAPY", "MOVE_AUTOTOMIZE", "MOVE_BONEMERANG", "MOVE_BURN_UP",
    "MOVE_CORROSIVE_GAS", "MOVE_CRAFTY_SHIELD", "MOVE_DUAL_CHOP", "MOVE_FLOWER_SHIELD",
    "MOVE_GEAR_GRIND", "MOVE_GEAR_UP", "MOVE_GRUDGE", "MOVE_KINESIS",
    "MOVE_LASER_FOCUS", "MOVE_LEAF_TORNADO", "MOVE_LOVELY_KISS", "MOVE_MAGIC_COAT",
    "MOVE_MIND_READER", "MOVE_OCTAZOOKA", "MOVE_PSYCHO_SHIFT", "MOVE_REVENGE",
    "MOVE_SKULL_BASH", "MOVE_STORM_THROW", "MOVE_SUBMISSION", "MOVE_VITAL_THROW",
    "MOVE_BARRAGE", "MOVE_BARRIER", "MOVE_BESTOW", "MOVE_BIDE",
    "MOVE_BONE_CLUB", "MOVE_BUBBLE", "MOVE_CAMOUFLAGE", "MOVE_CAPTIVATE",
    "MOVE_CHIP_AWAY", "MOVE_CLAMP", "MOVE_COMET_PUNCH", "MOVE_CONSTRICT",
    "MOVE_DIZZY_PUNCH", "MOVE_DOUBLE_SLAP", "MOVE_EGG_BOMB", "MOVE_FAINT_ATTACK",
    "MOVE_FLAME_BURST", "MOVE_FORESIGHT", "MOVE_GRASS_WHISTLE", "MOVE_HEAL_BLOCK",
    "MOVE_HEART_STAMP", "MOVE_HYPER_FANG", "MOVE_ICE_BALL", "MOVE_JUMP_KICK",
    "MOVE_KARATE_CHOP", "MOVE_LUCKY_CHANT", "MOVE_MAGNET_BOMB", "MOVE_MAGNITUDE",
    "MOVE_MAT_BLOCK", "MOVE_ME_FIRST", "MOVE_MEDITATE", "MOVE_MIRACLE_EYE",
    "MOVE_MIRROR_MOVE", "MOVE_MIRROR_SHOT", "MOVE_MUD_BOMB", "MOVE_MUD_SPORT",
    "MOVE_NATURAL_GIFT", "MOVE_NEEDLE_ARM", "MOVE_NIGHTMARE", "MOVE_ODOR_SLEUTH",
    "MOVE_PSYWAVE", "MOVE_PUNISHMENT", "MOVE_PURSUIT", "MOVE_RAGE",
    "MOVE_RAZOR_WIND", "MOVE_REFRESH", "MOVE_ROLLING_KICK", "MOVE_ROTOTILLER",
    "MOVE_SHARPEN", "MOVE_SKY_UPPERCUT", "MOVE_SMELLING_SALTS", "MOVE_SONIC_BOOM",
    "MOVE_SPIDER_WEB", "MOVE_SPIKE_CANNON", "MOVE_STEAMROLLER", "MOVE_SYNCHRONOISE",
    "MOVE_TELEKINESIS", "MOVE_TWINEEDLE", "MOVE_WAKE_UP_SLAP", "MOVE_WATER_SPORT",
    "MOVE_WRING_OUT",
])

# Also handle alternate names that might appear
MOVE_ALIASES = {
    "MOVE_FEINT_ATTACK": "MOVE_FAINT_ATTACK",  # in case usum uses old name
}

def species_to_varname(species):
    parts = species.split("_")
    regional_suffixes = {"ALOLA": "Alola", "GALAR": "Galar", "HISUI": "Hisui", "PALDEA": "Paldea"}
    form_suffix = ""
    base_parts = parts[:]
    if len(parts) > 1 and parts[-1] in regional_suffixes:
        form_suffix = regional_suffixes[parts[-1]]
        base_parts = parts[:-1]
    if len(parts) > 1 and parts[-1] in ("M", "F"):
        form_suffix = parts[-1]
        base_parts = parts[:-1]
    special_forms = {"ICE": "Ice", "SHADOW": "Shadow", "NORMAL": "Normal",
                     "ATTACK": "Attack", "DEFENSE": "Defense", "SPEED": "Speed",
                     "PLANT": "Plant", "SANDY": "Sandy", "TRASH": "Trash",
                     "HEAT": "Heat", "WASH": "Wash", "FROST": "Frost", "FAN": "Fan", "MOW": "Mow",
                     "ORIGIN": "Origin", "ALTERED": "Altered",
                     "LAND": "Land", "SKY": "Sky",
                     "INCARNATE": "Incarnate", "THERIAN": "Therian",
                     "WHITE": "White", "BLACK": "Black",
                     "ARIA": "Aria", "PIROUETTE": "Pirouette",
                     "AVERAGE": "Average", "SMALL": "Small", "LARGE": "Large", "SUPER": "Super",
                     "BLADE": "Blade", "SHIELD": "Shield",
                     "CONFINED": "Confined", "UNBOUND": "Unbound",
                     "BAILE": "Baile", "POMPOM": "Pompom", "PAU": "Pau", "SENSU": "Sensu",
                     "MIDDAY": "Midday", "MIDNIGHT": "Midnight", "DUSK": "Dusk",
                     "SOLO": "Solo", "SCHOOL": "School",
                     "ORIGINAL": "Original", "CROWNED": "Crowned",
                     "RAPID_STRIKE": "RapidStrike", "SINGLE_STRIKE": "SingleStrike",
                     }
    if len(parts) > 1 and parts[-1] in special_forms:
        form_suffix = special_forms[parts[-1]]
        base_parts = parts[:-1]
    
    name_overrides = {
        "HO_OH": "HoOh", "HAKAMO_O": "HakamoO", "KOMMO_O": "KommoO",
        "PORYGON_Z": "PorygonZ", "MR_MIME": "MrMime", "NIDORAN_F": "NidoranF",
        "NIDORAN_M": "NidoranM", "MIME_JR": "MimeJr", "MR_RIME": "MrRime",
        "TYPE_NULL": "TypeNull", "TAPU_LELE": "TapuLele", "TAPU_BULU": "TapuBulu",
        "TAPU_KOKO": "TapuKoko", "TAPU_FINI": "TapuFini",
        "INDEEDEE_M": "IndeedeeM", "INDEEDEE_F": "IndeedeeF",
        "DEOXYS_NORMAL": "DeoxysNormal", "DEOXYS_ATTACK": "DeoxysAttack",
        "DEOXYS_DEFENSE": "DeoxysDefense", "DEOXYS_SPEED": "DeoxysSpeed",
        "WORMADAM_PLANT": "WormadamPlant", "WORMADAM_SANDY": "WormadamSandy",
        "WORMADAM_TRASH": "WormadamTrash",
        "ROTOM_HEAT": "RotomHeat", "ROTOM_WASH": "RotomWash",
        "ROTOM_FROST": "RotomFrost", "ROTOM_FAN": "RotomFan", "ROTOM_MOW": "RotomMow",
        "GIRATINA_ALTERED": "GiratinaAltered", "GIRATINA_ORIGIN": "GiratinaOrigin",
        "SHAYMIN_LAND": "ShayminLand", "SHAYMIN_SKY": "ShayminSky",
        "BASCULIN_RED_STRIPED": "BasculinRedStriped", "BASCULIN_BLUE_STRIPED": "BasculinBlueStriped",
        "TORNADUS_INCARNATE": "TornadusIncarnate", "TORNADUS_THERIAN": "TornadusTherian",
        "THUNDURUS_INCARNATE": "ThundurusIncarnate", "THUNDURUS_THERIAN": "ThundurusTherian",
        "LANDORUS_INCARNATE": "LandorusIncarnate", "LANDORUS_THERIAN": "LandorusTherian",
        "KYUREM_WHITE": "KyuremWhite", "KYUREM_BLACK": "KyuremBlack",
        "MELOETTA_ARIA": "MeloettaAria", "MELOETTA_PIROUETTE": "MeloettaPirouette",
        "MEOWSTIC_M": "MeowsticM", "MEOWSTIC_F": "MeowsticF",
        "AEGISLASH_SHIELD": "AegislashShield", "AEGISLASH_BLADE": "AegislashBlade",
        "PUMPKABOO_AVERAGE": "PumpkabooAverage", "PUMPKABOO_SMALL": "PumpkabooSmall",
        "PUMPKABOO_LARGE": "PumpkabooLarge", "PUMPKABOO_SUPER": "PumpkabooSuper",
        "GOURGEIST_AVERAGE": "GourgeistAverage", "GOURGEIST_SMALL": "GourgeistSmall",
        "GOURGEIST_LARGE": "GourgeistLarge", "GOURGEIST_SUPER": "GourgeistSuper",
        "HOOPA_CONFINED": "HoopaConfined", "HOOPA_UNBOUND": "HoopaUnbound",
        "ORICORIO_BAILE": "OricorioBaile", "ORICORIO_POMPOM": "OricorioPompom",
        "ORICORIO_PAU": "OricorioPau", "ORICORIO_SENSU": "OricorioSensu",
        "LYCANROC_MIDDAY": "LycanrocMidday", "LYCANROC_MIDNIGHT": "LycanrocMidnight",
        "LYCANROC_DUSK": "LycanrocDusk",
        "WISHIWASHI_SOLO": "WishiwashiSolo", "WISHIWASHI_SCHOOL": "WishiwashiSchool",
        "NECROZMA_DUSK_MANE": "NecrozmaDuskMane", "NECROZMA_DAWN_WINGS": "NecrozmaDawnWings",
        "NECROZMA_ULTRA": "NecrozmaUltra",
        "CALYREX_ICE": "CalyrexIce", "CALYREX_SHADOW": "CalyrexShadow",
        "ARTICUNO_GALAR": "ArticunoGalar",
        "ZAPDOS_GALAR": "ZapdosGalar",
        "MOLTRES_GALAR": "MoltresGalar",
        "SLOWPOKE_GALAR": "SlowpokeGalar", "SLOWBRO_GALAR": "SlowbroGalar",
        "SLOWKING_GALAR": "SlowkingGalar",
        "WEEZING_GALAR": "WeezingGalar",
        "MR_MIME_GALAR": "MrMimeGalar",
        "CORSOLA_GALAR": "CorsolaGalar",
        "ZIGZAGOON_GALAR": "ZigzagoonGalar", "LINOONE_GALAR": "LinooneGalar",
        "DARUMAKA_GALAR": "DarumakaGalar", "DARMANITAN_GALAR": "DarmanitanGalar",
        "YAMASK_GALAR": "YamaskGalar",
        "STUNFISK_GALAR": "StunfiskGalar",
        "PONYTA_GALAR": "PonytaGalar", "RAPIDASH_GALAR": "RapidashGalar",
        "FARFETCHD_GALAR": "FarfetchdGalar",
        "MEOWTH_GALAR": "MeowthGalar",
        "SANDSHREW_ALOLA": "SandshrewAlola", "SANDSLASH_ALOLA": "SandslashAlola",
        "VULPIX_ALOLA": "VulpixAlola", "NINETALES_ALOLA": "NinetalesAlola",
        "DIGLETT_ALOLA": "DiglettAlola", "DUGTRIO_ALOLA": "DugtrioAlola",
        "MEOWTH_ALOLA": "MeowthAlola", "PERSIAN_ALOLA": "PersianAlola",
        "GEODUDE_ALOLA": "GeodudeAlola", "GRAVELER_ALOLA": "GravelerAlola", "GOLEM_ALOLA": "GolemAlola",
        "GRIMER_ALOLA": "GrimerAlola", "MUK_ALOLA": "MukAlola",
        "EXEGGUTOR_ALOLA": "ExeggutorAlola",
        "MAROWAK_ALOLA": "MarowakAlola",
        "RAICHU_ALOLA": "RaichuAlola",
        "RATTATA_ALOLA": "RattataAlola", "RATICATE_ALOLA": "RaticateAlola",
    }
    
    if species in name_overrides:
        return name_overrides[species]
    
    full_key = "_".join(base_parts)
    if full_key in name_overrides:
        return name_overrides[full_key] + form_suffix
    
    base_name = "".join(p.capitalize() for p in base_parts)
    return base_name + form_suffix


def normalize_move(move):
    """Normalize move name, handling aliases"""
    return MOVE_ALIASES.get(move, move)


def parse_gen9_learnsets_with_lines(lines):
    result = {}
    current_var = None
    current_moves = set()
    for i, line in enumerate(lines):
        match = re.match(r'static const struct LevelUpMove (s\w+LevelUpLearnset)\[\]', line)
        if match:
            current_var = match.group(1)
            current_moves = set()
        elif current_var:
            move_match = re.search(r'LEVEL_UP_MOVE\(\s*\d+,\s*(MOVE_\w+)\)', line)
            if move_match:
                current_moves.add(move_match.group(1))
            if 'LEVEL_UP_END' in line:
                result[current_var] = {'moves': current_moves, 'end_line_idx': i}
                current_var = None
                current_moves = set()
    return result


def parse_egg_moves_with_lines(lines):
    result = {}
    current_var = None
    current_moves = set()
    for i, line in enumerate(lines):
        match = re.match(r'static const u16 (s\w+EggMoveLearnset)\[\]', line)
        if match:
            current_var = match.group(1)
            current_moves = set()
        elif current_var:
            move_match = re.search(r'^\s+(MOVE_\w+)', line)
            if move_match and move_match.group(1) != 'MOVE_UNAVAILABLE':
                current_moves.add(move_match.group(1))
            if 'MOVE_UNAVAILABLE' in line:
                result[current_var] = {'moves': current_moves, 'end_line_idx': i}
                current_var = None
                current_moves = set()
    return result


def parse_elite_with_lines(lines):
    result = {}
    current_var = None
    for i, line in enumerate(lines):
        match = re.match(r'static const u16 (s\w+EliteLearnset)\[\]', line)
        if match:
            current_var = match.group(1)
            result[current_var] = {}
        elif current_var:
            # Match non-commented moves only
            move_match = re.search(r'^\s+(MOVE_\w+)', line)
            if move_match and move_match.group(1) != 'MOVE_UNAVAILABLE':
                result[current_var][move_match.group(1)] = i
            if 'MOVE_UNAVAILABLE' in line:
                current_var = None
    return result


def main():
    base = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
    usum_path = os.path.join(base, "tools", "learnset_helpers", "porymoves_files", "usum.json")
    gen9_path = os.path.join(base, "src", "data", "pokemon", "level_up_learnsets", "gen_9.h")
    egg_path = os.path.join(base, "src", "data", "pokemon", "egg_moves.h")
    elite_path = os.path.join(base, "src", "data", "pokemon", "elite_learnsets.h")
    
    with open(usum_path, 'r') as f:
        usum_data = json.load(f)
    
    with open(gen9_path, 'r') as f:
        gen9_lines = f.readlines()
    with open(egg_path, 'r') as f:
        egg_lines = f.readlines()
    with open(elite_path, 'r') as f:
        elite_lines = f.readlines()
    
    gen9_data = parse_gen9_learnsets_with_lines(gen9_lines)
    egg_data = parse_egg_moves_with_lines(egg_lines)
    elite_data = parse_elite_with_lines(elite_lines)
    
    gen9_insertions = {}
    egg_insertions = {}
    elite_comment_indices = set()
    
    for species, info in usum_data.items():
        varname = species_to_varname(species)
        
        # Level up moves
        gen9_var = f"s{varname}LevelUpLearnset"
        if gen9_var in gen9_data:
            existing_moves = gen9_data[gen9_var]['moves']
            end_idx = gen9_data[gen9_var]['end_line_idx']
            
            for lm in info.get("LevelMoves", []):
                move = normalize_move(lm["Move"])
                level = lm["Level"]
                if move in MOVES_TO_FIND and move not in existing_moves:
                    if end_idx not in gen9_insertions:
                        gen9_insertions[end_idx] = []
                    already_added = any(m == move for _, m in gen9_insertions[end_idx])
                    if not already_added:
                        gen9_insertions[end_idx].append((level, move))
                    
                    elite_var = f"s{varname}EliteLearnset"
                    if elite_var in elite_data and move in elite_data[elite_var]:
                        elite_comment_indices.add(elite_data[elite_var][move])
        
        # Egg moves
        egg_var = f"s{varname}EggMoveLearnset"
        if egg_var in egg_data:
            existing_egg_moves = egg_data[egg_var]['moves']
            end_idx = egg_data[egg_var]['end_line_idx']
            
            for em in info.get("EggMoves", []):
                em = normalize_move(em)
                if em in MOVES_TO_FIND and em not in existing_egg_moves:
                    if end_idx not in egg_insertions:
                        egg_insertions[end_idx] = []
                    if em not in egg_insertions[end_idx]:
                        egg_insertions[end_idx].append(em)
                    
                    elite_var = f"s{varname}EliteLearnset"
                    if elite_var in elite_data and em in elite_data[elite_var]:
                        elite_comment_indices.add(elite_data[elite_var][em])
    
    # Apply gen_9.h insertions (reverse order)
    gen9_insert_count = 0
    for end_idx in sorted(gen9_insertions.keys(), reverse=True):
        moves = gen9_insertions[end_idx]
        moves.sort(key=lambda x: x[0])
        
        indent = "    "
        if end_idx > 0:
            prev_line = gen9_lines[end_idx - 1]
            match = re.match(r'(\s+)LEVEL_UP_MOVE', prev_line)
            if match:
                indent = match.group(1)
        
        new_lines = []
        for level, move in moves:
            level_str = f"{level:2d}" if level < 100 else str(level)
            new_lines.append(f"{indent}LEVEL_UP_MOVE({level_str}, {move}), //added from USUM\n")
            gen9_insert_count += 1
        
        gen9_lines[end_idx:end_idx] = new_lines
    
    # Apply egg_moves.h insertions
    egg_insert_count = 0
    for end_idx in sorted(egg_insertions.keys(), reverse=True):
        moves = egg_insertions[end_idx]
        moves.sort()
        
        indent = "    "
        if end_idx > 0:
            prev_line = egg_lines[end_idx - 1]
            match = re.match(r'(\s+)MOVE_', prev_line)
            if match:
                indent = match.group(1)
        
        new_lines = []
        for move in moves:
            new_lines.append(f"{indent}{move}, //added from USUM\n")
            egg_insert_count += 1
        
        egg_lines[end_idx:end_idx] = new_lines
    
    # Apply elite_learnsets.h comments
    elite_comment_count = 0
    for idx in elite_comment_indices:
        line = elite_lines[idx]
        if not line.strip().startswith('//'):
            stripped = line.rstrip('\n')
            match = re.match(r'^(\s+)(MOVE_\w+),?(.*)$', stripped)
            if match:
                ws = match.group(1)
                rest = match.group(2)
                trailing = match.group(3)
                elite_lines[idx] = f"{ws}//{rest},{trailing} //added back in to normal learnset from USUM\n"
                elite_comment_count += 1
    
    with open(gen9_path, 'w') as f:
        f.writelines(gen9_lines)
    with open(egg_path, 'w') as f:
        f.writelines(egg_lines)
    with open(elite_path, 'w') as f:
        f.writelines(elite_lines)
    
    print(f"gen_9.h: {gen9_insert_count} level-up moves added")
    print(f"egg_moves.h: {egg_insert_count} egg moves added")
    print(f"elite_learnsets.h: {elite_comment_count} lines commented out")
    
    # Show some stats
    print(f"\n=== MISSING LEARNSET WARNINGS ===")
    missing_lu = set()
    missing_egg = set()
    for species, info in usum_data.items():
        varname = species_to_varname(species)
        gen9_var = f"s{varname}LevelUpLearnset"
        for lm in info.get("LevelMoves", []):
            move = normalize_move(lm["Move"])
            if move in MOVES_TO_FIND and gen9_var not in gen9_data:
                missing_lu.add(f"{species} -> {gen9_var}")
                break
        egg_var = f"s{varname}EggMoveLearnset"
        for em in info.get("EggMoves", []):
            em = normalize_move(em)
            if em in MOVES_TO_FIND and egg_var not in egg_data:
                missing_egg.add(f"{species} -> {egg_var}")
                break
    
    if missing_lu:
        print(f"Level-up learnsets not found in gen_9.h ({len(missing_lu)}):")
        for m in sorted(missing_lu):
            print(f"  {m}")
    if missing_egg:
        print(f"Egg learnsets not found in egg_moves.h ({len(missing_egg)} - expected for evolved forms):")
        for m in sorted(missing_egg):
            print(f"  {m}")

if __name__ == "__main__":
    main()
