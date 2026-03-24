#include "global.h"
#include "test/battle.h"

// Custom: Thunder Wave always hits when used by an Electric-type Pokémon
// (uses the same alwaysHitsOnSameType mechanism as Toxic for Poison types)
SINGLE_BATTLE_TEST("Thunder Wave bypasses accuracy checks when used by an Electric type")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(MoveAlwaysHitsOnSameType(MOVE_THUNDER_WAVE) == TRUE);
        ASSUME(GetMoveType(MOVE_THUNDER_WAVE) == TYPE_ELECTRIC);
        PLAYER(SPECIES_PIKACHU);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_WAVE); }
    } SCENE {
        NONE_OF { MESSAGE("Pikachu's attack missed!"); }
        STATUS_ICON(opponent, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Thunder Wave can miss when used by a non-Electric type")
{
    PASSES_RANDOMLY(30, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_THUNDER_WAVE) == 30);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_THUNDER_WAVE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_WAVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_WAVE, player);
    }
}

// Verify Toxic still works the same way (Poison type always hits)
SINGLE_BATTLE_TEST("Toxic bypasses accuracy checks when used by a Poison type")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(MoveAlwaysHitsOnSameType(MOVE_TOXIC) == TRUE);
        ASSUME(GetMoveType(MOVE_TOXIC) == TYPE_POISON);
        PLAYER(SPECIES_ARBOK);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TOXIC); }
    } SCENE {
        NONE_OF { MESSAGE("Arbok's attack missed!"); }
        STATUS_ICON(opponent, poison: TRUE);
    }
}
