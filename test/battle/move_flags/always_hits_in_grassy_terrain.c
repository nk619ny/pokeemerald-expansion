#include "global.h"
#include "test/battle.h"

// Custom: Springtide Storm always hits in Grassy Terrain (like Thunder/Hurricane in Rain)
SINGLE_BATTLE_TEST("Springtide Storm bypasses accuracy checks in Grassy Terrain")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_SPRINGTIDE_STORM) < 100 && GetMoveAccuracy(MOVE_SPRINGTIDE_STORM) > 0);
        ASSUME(MoveAlwaysHitsInGrassyTerrain(MOVE_SPRINGTIDE_STORM) == TRUE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_GRASSY_TERRAIN); MOVE(player, MOVE_SPRINGTIDE_STORM); }
    } SCENE {
        NONE_OF { MESSAGE("Wobbuffet's attack missed!"); }
    }
}

SINGLE_BATTLE_TEST("Springtide Storm can miss outside of Grassy Terrain")
{
    PASSES_RANDOMLY(80, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_SPRINGTIDE_STORM) == 80);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SPRINGTIDE_STORM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPRINGTIDE_STORM, player);
    }
}
