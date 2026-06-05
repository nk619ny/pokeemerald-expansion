"""
Generate two CSV spreadsheets from porymoves JSON files.
Spreadsheet 1: Species x Games (TRUE/FALSE if species exists in that game)
Spreadsheet 2: Moves x Games (TRUE/FALSE if move appears anywhere in that game)
"""

import json
import csv
import os
import re

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
JSON_DIR = os.path.join(SCRIPT_DIR, "porymoves_files")

GAMES = ["xy", "oras", "sm", "usum", "swsh", "bdsp", "sv", "za"]

MOVE_LIST = [
    "AROMATHERAPY",
    "AUTOTOMIZE",
    "BARRAGE",
    "BARRIER",
    "BESTOW",
    "BIDE",
    "BONE CLUB",
    "BONEMERANG",
    "BUBBLE",
    "BURN UP",
    "CAMOUFLAGE",
    "CAPTIVATE",
    "CHIP AWAY",
    "CLAMP",
    "COMET PUNCH",
    "CONSTRICT",
    "CORROSIVE GAS",
    "CRAFTY SHIELD",
    "DIZZY PUNCH",
    "DOUBLE SLAP",
    "DUAL CHOP",
    "EGG BOMB",
    "FEINT ATTACK",
    "FLAME BURST",
    "FLOWER SHIELD",
    "FORESIGHT",
    "GEAR GRIND",
    "GEAR UP",
    "GRASS WHISTLE",
    "GRUDGE",
    "HEAL BLOCK",
    "HEART STAMP",
    "HOLD BACK",
    "HYPER FANG",
    "ICE BALL",
    "JUMP KICK",
    "KARATE CHOP",
    "KINESIS",
    "LASER FOCUS",
    "LEAF TORNADO",
    "LOVELY KISS",
    "LUCKY CHANT",
    "MAGIC COAT",
    "MAGNET BOMB",
    "MAGNITUDE",
    "MAT BLOCK",
    "ME FIRST",
    "MEDITATE",
    "MIND READER",
    "MIRACLE EYE",
    "MIRROR MOVE",
    "MIRROR SHOT",
    "MUD BOMB",
    "MUD SPORT",
    "NATURAL GIFT",
    "NEEDLE ARM",
    "NIGHTMARE",
    "OCTAZOOKA",
    "ODOR SLEUTH",
    "PSYCHO SHIFT",
    "PSYWAVE",
    "PUNISHMENT",
    "PURSUIT",
    "RAGE",
    "RAZOR WIND",
    "REFRESH",
    "REVENGE",
    "ROLLING KICK",
    "ROTOTILLER",
    "SHARPEN",
    "SKULL BASH",
    "SKY UPPERCUT",
    "SMELLING SALTS",
    "SONIC BOOM",
    "SPIDER WEB",
    "SPIKE CANNON",
    "STEAMROLLER",
    "STORM THROW",
    "SUBMISSION",
    "SYNCHRONOISE",
    "TELEKINESIS",
    "TWINEEDLE",
    "VITAL THROW",
    "WAKE UP SLAP",
    "WATER SPORT",
    "WRING OUT",
]


def move_name_to_key(move_name):
    """Convert display name to MOVE_ constant, with alternates for renames."""
    base = "MOVE_" + move_name.replace(" ", "_")
    alternates = [base]
    # Historical rename: "Feint Attack" was "Faint Attack" in older games
    if move_name == "FEINT ATTACK":
        alternates.append("MOVE_FAINT_ATTACK")
    return alternates


def collect_all_moves_in_game(data):
    """Return a set of all move strings mentioned anywhere in the JSON data."""
    moves = set()
    raw = json.dumps(data)
    # Extract all MOVE_XXX tokens
    for m in re.findall(r'"(MOVE_[A-Z0-9_]+)"', raw):
        moves.add(m)
    return moves


def load_games():
    game_data = {}
    game_moves = {}  # game -> set of move strings
    for game in GAMES:
        path = os.path.join(JSON_DIR, f"{game}.json")
        with open(path, encoding="utf-8") as f:
            data = json.load(f)
        game_data[game] = data
        game_moves[game] = collect_all_moves_in_game(data)
    return game_data, game_moves


def species_has_moves(entry):
    """Return True if a species entry has at least one move in any list."""
    move_keys = ["LevelMoves", "TMMoves", "TutorMoves", "EggMoves", "PreEvoMoves"]
    for key in move_keys:
        if entry.get(key):
            return True
    return False


def collect_all_species(game_data):
    all_species = set()
    for data in game_data.values():
        for species, entry in data.items():
            if species_has_moves(entry):
                all_species.add(species)
    return sorted(all_species)


def write_species_spreadsheet(game_data, all_species, out_path):
    with open(out_path, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(["Species"] + GAMES)
        for species in all_species:
            row = [species]
            for game in GAMES:
                entry = game_data[game].get(species)
                has_it = entry is not None and species_has_moves(entry)
                row.append("TRUE" if has_it else "FALSE")
            writer.writerow(row)
    print(f"Species spreadsheet written to: {out_path}")


def write_moves_spreadsheet(game_moves, out_path):
    with open(out_path, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(["Move"] + GAMES)
        for move in MOVE_LIST:
            alternates = move_name_to_key(move)
            row = [move]
            for game in GAMES:
                found = any(alt in game_moves[game] for alt in alternates)
                row.append("TRUE" if found else "FALSE")
            writer.writerow(row)
    print(f"Moves spreadsheet written to: {out_path}")


def main():
    print("Loading JSON files...")
    game_data, game_moves = load_games()

    all_species = collect_all_species(game_data)
    print(f"Total unique species: {len(all_species)}")

    species_out = os.path.join(SCRIPT_DIR, "species_by_game.csv")
    moves_out = os.path.join(SCRIPT_DIR, "moves_by_game.csv")

    write_species_spreadsheet(game_data, all_species, species_out)
    write_moves_spreadsheet(game_moves, moves_out)

    print("\nDone.")


if __name__ == "__main__":
    main()
