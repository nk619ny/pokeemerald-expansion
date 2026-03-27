#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("White Out sets up snow for 5 turns")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Ability(ABILITY_WHITE_OUT); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WHITE_OUT);
        MESSAGE("It started to snow!");
        MESSAGE("It started to snow!");
        MESSAGE("It started to snow!");
        MESSAGE("It started to snow!");
        MESSAGE("The snow stopped.");
    }
}

SINGLE_BATTLE_TEST("White Out sets up snow for 8 turns with Icy Rock")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); Ability(ABILITY_WHITE_OUT); Item(ITEM_ICY_ROCK); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WHITE_OUT);
        MESSAGE("It started to snow!");
        MESSAGE("It started to snow!");
        MESSAGE("It started to snow!");
        MESSAGE("It started to snow!");
        MESSAGE("It started to snow!");
        MESSAGE("It started to snow!");
        MESSAGE("It started to snow!");
        MESSAGE("The snow stopped.");
    }
}

SINGLE_BATTLE_TEST("White Out boosts physical moves by 33% in snow", s16 damage)
{
    u16 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_SUNNY_DAY; }

    GIVEN {
        ASSUME(GetMoveCategory(MOVE_SCRATCH) == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_WHITE_OUT); Moves(MOVE_SCRATCH); Speed(5); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_SUNNY_DAY, MOVE_CELEBRATE); Speed(10); }
    } WHEN {
        TURN { MOVE(opponent, setupMove); MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WHITE_OUT);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.3333), results[0].damage);
    }
}

SINGLE_BATTLE_TEST("White Out boosts special moves by 33% in snow", s16 damage)
{
    u16 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_SUNNY_DAY; }

    GIVEN {
        ASSUME(GetMoveCategory(MOVE_SWIFT) == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_WHITE_OUT); Moves(MOVE_SWIFT); Speed(5); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_SUNNY_DAY, MOVE_CELEBRATE); Speed(10); }
    } WHEN {
        TURN { MOVE(opponent, setupMove); MOVE(player, MOVE_SWIFT); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_WHITE_OUT);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.3333), results[0].damage);
    }
}
