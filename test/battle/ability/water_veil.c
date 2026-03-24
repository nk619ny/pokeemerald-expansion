#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_WILL_O_WISP) == EFFECT_NON_VOLATILE_STATUS);
    ASSUME(GetMoveNonVolatileStatus(MOVE_WILL_O_WISP) == MOVE_EFFECT_BURN);
}

SINGLE_BATTLE_TEST("Water Veil prevents burn from Will-O-Wisp")
{
    GIVEN {
        PLAYER(SPECIES_BUIZEL) { Ability(ABILITY_WATER_VEIL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WILL_O_WISP); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WATER_VEIL);
        MESSAGE("It doesn't affect Buizel…");
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, player);
            STATUS_ICON(player, burn: TRUE);
        }
    }
}

DOUBLE_BATTLE_TEST("Water Veil prevents burn on partner - right target")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_BUIZEL) { Ability(ABILITY_WATER_VEIL); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_WILL_O_WISP, target: opponentRight); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, playerLeft);
        ABILITY_POPUP(opponentLeft, ABILITY_WATER_VEIL);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentRight);
            STATUS_ICON(opponentRight, burn: TRUE);
        }
    }
}

DOUBLE_BATTLE_TEST("Water Veil prevents burn on partner - left target")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_BUIZEL) { Ability(ABILITY_WATER_VEIL); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_WILL_O_WISP, target: opponentLeft); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, playerLeft);
        ABILITY_POPUP(opponentRight, ABILITY_WATER_VEIL);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentLeft);
            STATUS_ICON(opponentLeft, burn: TRUE);
        }
    }
}
