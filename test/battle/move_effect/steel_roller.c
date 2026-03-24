#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_STEEL_ROLLER) == EFFECT_STEEL_ROLLER);
}

// Covered in ice_spinner.c
// SINGLE_BATTLE_TEST("Ice Spinner and Steel Roller remove a terrain from field")

SINGLE_BATTLE_TEST("Steel Roller removes Terrain even if user faints during attack execution")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_LIFE_ORB); HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); MOVE(opponent, MOVE_STEEL_ROLLER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIC_TERRAIN, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_ROLLER, opponent);
        MESSAGE("The electricity disappeared from the battlefield.");
    }
}

SINGLE_BATTLE_TEST("Steel Roller removes Terrain if user is switched out due to Red Card")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); MOVE(opponent, MOVE_STEEL_ROLLER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIC_TERRAIN, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_ROLLER, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("The electricity disappeared from the battlefield.");
    }
}

SINGLE_BATTLE_TEST("Steel Roller does not fail if there is no Terrain")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_STEEL_ROLLER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_ROLLER, opponent);
    }
}

SINGLE_BATTLE_TEST("Steel Roller doubles its power if terrain is up")
{
    s16 dmgWithTerrain, dmgWithoutTerrain;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_STEEL_ROLLER); }
        TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); MOVE(opponent, MOVE_STEEL_ROLLER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_ROLLER, opponent);
        HP_BAR(player, captureDamage: &dmgWithoutTerrain);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIC_TERRAIN, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_ROLLER, opponent);
        HP_BAR(player, captureDamage: &dmgWithTerrain);
    } THEN {
        EXPECT_MUL_EQ(dmgWithoutTerrain, UQ_4_12(2.0), dmgWithTerrain);
    }
}

AI_SINGLE_BATTLE_TEST("Steel Roller can be chosen by AI even without terrain on the field")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STEEL_ROLLER, MOVE_ICE_SHARD); }
    } WHEN {
        TURN { EXPECT_MOVES(opponent, MOVE_STEEL_ROLLER, MOVE_ICE_SHARD); }
    }
}
