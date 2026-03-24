#include "global.h"
#include "test/battle.h"

// Custom: Zap Cannon always hits in Electric Terrain (like Thunder/Hurricane in Rain)
SINGLE_BATTLE_TEST("Zap Cannon bypasses accuracy checks in Electric Terrain")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_ZAP_CANNON) < 100 && GetMoveAccuracy(MOVE_ZAP_CANNON) > 0);
        ASSUME(MoveAlwaysHitsInElectricTerrain(MOVE_ZAP_CANNON) == TRUE);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ELECTRIC_TERRAIN); MOVE(player, MOVE_ZAP_CANNON); }
    } SCENE {
        NONE_OF { MESSAGE("Wobbuffet's attack missed!"); }
    }
}

SINGLE_BATTLE_TEST("Zap Cannon can miss outside of Electric Terrain")
{
    PASSES_RANDOMLY(50, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(GetMoveAccuracy(MOVE_ZAP_CANNON) == 50);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ZAP_CANNON); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ZAP_CANNON, player);
    }
}
