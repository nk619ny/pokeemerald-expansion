#include "global.h"
#include "test/battle.h"

// Custom: Heat Wave always hits in Sun (like Thunder/Hurricane in Rain)
SINGLE_BATTLE_TEST("Heat Wave bypasses accuracy checks in Sun")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_HEAT_WAVE) < 100 && GetMoveAccuracy(MOVE_HEAT_WAVE) > 0);
        ASSUME(MoveAlwaysHitsInSun(MOVE_HEAT_WAVE) == TRUE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_HEAT_WAVE); }
    } SCENE {
        NONE_OF { MESSAGE("Wobbuffet's attack missed!"); }
    }
}

SINGLE_BATTLE_TEST("Heat Wave can miss outside of Sun")
{
    PASSES_RANDOMLY(90, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_HEAT_WAVE) == 90);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HEAT_WAVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAT_WAVE, player);
    }
}
