#include "global.h"
#include "test/battle.h"

// Custom: Sandsear Storm always hits in Sandstorm (like Thunder/Hurricane in Rain)
SINGLE_BATTLE_TEST("Sandsear Storm bypasses accuracy checks in Sandstorm")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_SANDSEAR_STORM) < 100 && GetMoveAccuracy(MOVE_SANDSEAR_STORM) > 0);
        ASSUME(MoveAlwaysHitsInSandstorm(MOVE_SANDSEAR_STORM) == TRUE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_SAFETY_GOGGLES); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); MOVE(player, MOVE_SANDSEAR_STORM); }
    } SCENE {
        NONE_OF { MESSAGE("Wobbuffet's attack missed!"); }
    }
}

SINGLE_BATTLE_TEST("Sandsear Storm can miss outside of Sandstorm")
{
    PASSES_RANDOMLY(80, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_SANDSEAR_STORM) == 80);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SANDSEAR_STORM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SANDSEAR_STORM, player);
    }
}
