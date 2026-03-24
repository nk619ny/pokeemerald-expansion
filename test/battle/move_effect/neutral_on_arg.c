#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_SKY_UPPERCUT) == EFFECT_NEUTRAL_ON_ARG);
    ASSUME(GetMoveArgType(MOVE_SKY_UPPERCUT) == TYPE_FLYING);
    ASSUME(GetMoveType(MOVE_SKY_UPPERCUT) == TYPE_FIGHTING);
    ASSUME(MoveDamagesAirborne(MOVE_SKY_UPPERCUT));
}

SINGLE_BATTLE_TEST("Sky Uppercut is neutral against pure Flying types")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_TORNADUS);
    } WHEN {
        TURN { MOVE(player, MOVE_SKY_UPPERCUT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_UPPERCUT, player);
        HP_BAR(opponent);
        NONE_OF {
            MESSAGE("It's super effective!");
            MESSAGE("It's not very effective…");
        }
    }
}

SINGLE_BATTLE_TEST("Sky Uppercut is super effective against Normal/Flying types")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIDGEY);
    } WHEN {
        TURN { MOVE(player, MOVE_SKY_UPPERCUT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_UPPERCUT, player);
        HP_BAR(opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Sky Uppercut is super effective against Steel/Flying types")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_SKARMORY);
    } WHEN {
        TURN { MOVE(player, MOVE_SKY_UPPERCUT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_UPPERCUT, player);
        HP_BAR(opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Sky Uppercut is not very effective against Poison/Flying types")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ZUBAT);
    } WHEN {
        TURN { MOVE(player, MOVE_SKY_UPPERCUT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_UPPERCUT, player);
        HP_BAR(opponent);
        MESSAGE("It's not very effective…");
    }
}

SINGLE_BATTLE_TEST("Sky Uppercut hits a target using Fly")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_FLY); MOVE(player, MOVE_SKY_UPPERCUT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_UPPERCUT, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Sky Uppercut hits a target using Bounce")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_BOUNCE); MOVE(player, MOVE_SKY_UPPERCUT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKY_UPPERCUT, player);
        HP_BAR(opponent);
    }
}
