# Copilot Instructions — pokeemerald-expansion

## Project Overview
GBA Pokémon ROM hack base built on [pret's pokeemerald](https://github.com/pret/pokeemerald) decompilation. C99 targeting ARM7TDMI (GBA), compiled with `arm-none-eabi-gcc`. Not a standalone game — it's a toolkit for ROM hack developers.

## Build & Test
- **Build**: `make -j$(nproc)` (Linux/WSL). Outputs `pokeemerald.gba`. Build via WSL on Windows (not native PowerShell).
- **Debug build**: `make debug` (adds `-Og -g` flags)
- **Release build**: `make release` (enables LTO, sets `NDEBUG`)
- **Run tests**: `make check -j$(nproc)` — runs an embedded battle test framework on mgba
- **Run specific tests**: `make check TESTS="Spikes"` (matches test name prefix/infix)
- **Clean**: `make clean`
- Build artifacts go to `build/emerald/` (legacy) or `build/modern/` (default).

## Architecture

### Key directories
| Path | Purpose |
|---|---|
| `src/` | C source (~300 files). `battle_*.c` = battle engine, `field_*.c` = overworld |
| `include/` | Headers. `global.h` is always included first. `config/` has feature flags |
| `include/constants/` | Game constants (`species.h`, `moves.h`, `items.h`, `abilities.h`) |
| `data/` | Battle scripts (`.s`), map data, event scripts |
| `data/maps/<MapName>/` | Per-map: `map.json`, `scripts.pory`/`scripts.inc`, `events.inc` |
| `src/data/` | C data tables included into source (species info, move info, item info) |
| `graphics/` | PNG source assets, converted to `.4bpp` at build time via `gfx` tool |
| `test/` | Battle test suite using GIVEN/WHEN/SCENE/THEN DSL |

### Config system (compile-time feature flags)
Configs in `include/config/*.h` use prefixed `#define` flags compared against `GEN_X` constants (0–8):
- `B_` = battle (`B_CRIT_CHANCE`, `B_UPDATED_MOVE_DATA`) in `config/battle.h`
- `P_` = Pokémon (`P_UPDATED_TYPES`, `P_FAMILY_BULBASAUR`) in `config/pokemon.h`
- `I_` = items in `config/item.h`

Usage pattern: `(P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 141` inline in data, or `if (B_CRIT_CHANCE >= GEN_6)` in code. Prefer runtime checks over `#if` blocks for configs unless in data initializers.

### Battle system
Battle logic uses a **bytecode scripting engine**:
- Scripts in `data/battle_scripts_1.s` / `data/battle_scripts_2.s` use macros from `asm/macros/battle_script.inc`
- Each bytecode command maps to a C handler in `src/battle_script_commands.c`
- Move effects dispatched via `EFFECT_` constants → handlers in `src/data/battle_move_effects.h`
- `CMD_ARGS(...)` macro (from `metaprogram.h`) unpacks instruction arguments

### Map scripting
Maps use [Poryscript](https://github.com/huderlem/poryscript) (`.pory` → `.inc`) or raw `.inc` script macros. Tools: [porymap](https://github.com/huderlem/porymap) for map editing. See **Scripting conventions** below for editing rules.

## Code Conventions (see `docs/STYLEGUIDE.md`)
- **Naming**: `PascalCase` functions/structs, `camelCase` variables, `UPPER_SNAKE` constants. Globals: `g` prefix, statics: `s` prefix
- **Indentation**: 4 spaces in `.c`/`.h`; tabs in `.s`/`.inc`
- **Braces**: Allman style (opening brace on new line). Omit only if ALL branches are single-line
- **Types**: `u8`/`u16`/`u32`/`s8`/`s16`/`s32`/`bool8`/`bool32` (from `gametypes.h`). Use `u32` for local vars; smallest type for structs/saveblocks
- **First include**: Always `#include "global.h"` first in every `.c` file
- **Loop vars**: Declare inline: `for (u32 i = 0; ...)`
- **Enums vs defines**: Migrating `#define` → `enum __attribute__((packed))`. Enums for sequential IDs not in saveblocks. Use enum types in function signatures

### Constants naming
Prefixes match domain: `SPECIES_`, `MOVE_`, `ITEM_`, `ABILITY_`, `TYPE_`, `EFFECT_`, `FLAG_`, `VAR_`. Legacy name aliases exist (e.g., `ITEM_PARLYZ_HEAL = ITEM_PARALYZE_HEAL`).

## Data patterns
Game data uses **C struct array initializers** with designated initializers, indexed by enum/constant:
```c
// src/data/items.h
[ITEM_POKE_BALL] = { .name = _("Poké Ball"), .price = 200, .pocket = POCKET_POKE_BALLS, ... },
```
Species data split by generation family in `src/data/pokemon/species_info/gen_X_families.h`, gated by `#if P_FAMILY_BULBASAUR`.

## Test patterns
Tests in `test/battle/` use a custom DSL. Structure:
```c
SINGLE_BATTLE_TEST("Absorb recovers 50% of the damage dealt")
{
    GIVEN { PLAYER(SPECIES_ODDISH); OPPONENT(SPECIES_WOBBUFFET); }
    WHEN { TURN { MOVE(player, MOVE_ABSORB); } }
    SCENE { HP_BAR(player, captureDamage: &damage); }
    THEN { EXPECT_MUL_EQ(damage, Q_4_12(0.5), healed); }
}
```
Use `ASSUMPTIONS { ASSUME(GetMoveEffect(MOVE_X) == EFFECT_Y); }` for preconditions. Files organized: `test/battle/move_effect/`, `test/battle/ability/`, `test/battle/hold_effect/`.

## Scripting conventions (Poryscript vs `.inc`)

### When to use which
- **New scripts**: Write in **Poryscript** convention. If in a `.pory` file, add outside of `raw` blocks.
- **Small edits to existing `.inc` files** (no `.pory` source): Edit the `.inc` file directly using `.inc` convention.
- **Edits inside `raw` blocks** in `.pory` files: Use `.inc` convention — `raw` backtick blocks pass `.inc` assembly through verbatim. Make minor edits within the local `raw` context.
- **Never hand-edit a `.inc` file that is auto-generated from a `.pory` source** — edit the `.pory` file instead. Auto-generated `.inc` files contain `# <linenum> "data/maps/.../scripts.pory"` annotations.

### Poryscript syntax
```poryscript
script MapName_EventScript_Name {
    lock
    faceplayer
    msgbox(format("Text auto-wrapped with line breaks."), MSGBOX_NPC)
    giveitem(ITEM_POTION)
    if (flag(FLAG_RECEIVED_ITEM)) {
        msgbox(format("You already have this."), MSGBOX_DEFAULT)
    }
    release
    end
}

text MapName_Text_Label {
    format("Long text that gets auto-wrapped by the Poryscript compiler.")
}
```
- Scripts: `script Name { ... }`, map tables: `mapscripts Name { ... }`
- Text: `format("...")` for auto-wrapping; raw `"...\n...\p...$"` for manual control
- Conditionals: `if (flag(FLAG_X))`, `if (var(VAR_X) == VALUE)`, `switch (var(...))`
- Constants: `const LOCALID_NPC = 1`, `const TempVar = VAR_TEMP_0`
- Commands use parentheses: `setflag(FLAG_X)`, `giveitem(ITEM_X)`, `trainerbattle_single(...)`

### Raw `.inc` convention (inside `raw` blocks or standalone `.inc`)
```asm
MapName_EventScript_Name::
    lock
    faceplayer
    msgbox MapName_Text_Label, MSGBOX_NPC
    release
    end

MapName_Text_Label:
    .string "Manual line breaks with\n"
    .string "backslash-n and pages with\p"
    .string "backslash-p.$"
```
- Labels end with `::` (global) or `:` (local text)
- `.string` terminated by `$`, uses `\n` (newline), `\l` (continuation), `\p` (new page)
- Movement scripts: sequence of `walk_down`, `walk_left`, etc. ending with `step_end`

## Custom addition conventions

### General rules
- **Placement**: Custom content goes at the **end** of each constant file, just before the `*_COUNT` sentinel.
- **IDs**: Use explicit numeric IDs (not auto-incremented) so merges with upstream don't silently renumber.
- **Section comments**: Delimit custom blocks with `// Custom <Category>` comments.
- **Repurposing unused slots**: Custom trainers, flags, and vars repurpose unused upstream slots. Comment the original purpose: `// was X rematches, repurposed`.

### Items (`include/constants/items.h`)
Custom items and mega stones go at the end of the `enum Item`, before `ITEMS_COUNT`:
```c
    // Custom Mega Stones
    ITEM_BUTTERFRITE = 974,
    ...
    // Custom Items
    ITEM_CANDY_BAG = 990,
    ...
    ITEMS_COUNT,
```
Corresponding data entries go in `src/data/items.h` using standard struct initializer format.

### Species (`include/constants/species.h`)
Custom Mega forms: `SPECIES_<NAME>_MEGA` (e.g., `SPECIES_BUTTERFREE_MEGA`). Custom regional forms: `SPECIES_<NAME>_HISUI`. Added at end before `NUM_SPECIES`. Species data in the appropriate `src/data/pokemon/species_info/gen_X_families.h`. Form changes in `src/data/pokemon/form_change_tables.h`.

### Moves (`include/constants/moves.h`)
Custom moves go between `MOVES_COUNT_GEN9` and `MOVES_COUNT` with the comment `// Add any custom moves here`. Move data in `src/data/moves_info.h`.

### Abilities (`include/constants/abilities.h`)
Custom abilities go between `ABILITIES_COUNT_GEN9` and `ABILITIES_COUNT_CUSTOM`. Naming: `ABILITY_<NAME>`.

### Trainers (`include/constants/opponents.h`)
Custom trainers repurpose unused rematch trainer IDs with `#define TRAINER_<NAME> <id>`. Comment: `// was <original>, repurposed`. Trainer parties in `src/data/trainers.party` using Pokémon Showdown-compatible format:
```
=== TRAINER_MARIELA === /* Route */
Name: MARIELA
Class: Psychic
Pic: Psychic F
...
```
This auto-compiles to `src/data/trainers.h` — never hand-edit that file.

### Flags & Vars (`include/constants/flags.h`, `vars.h`)
Repurpose `FLAG_UNUSED_0xNNN` / unused var slots. Comment: `// formerly not used`. Examples: `FLAG_REMOVE_LAB_STARTERS` (0x264), `VAR_LEVEL_CAP` (0x40FF).

### Config flags (`include/config/battle.h`)
Hack-specific toggles use `B_CUSTOMIZED_*` prefix with `TRUE`/`FALSE` values (not `GEN_X` comparisons):
```c
#define B_CUSTOMIZED_MOVE_STATS TRUE
#define B_CUSTOMIZED_GEN_1_STATS TRUE
```
