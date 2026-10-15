#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_SINGLE_BATTLE_TEST("Speed Boost Mega Delay: Sharpedo Protects without Mega Evolving, then Mega Evolves")
{
    PASSES_RANDOMLY(SPEED_BOOST_MEGA_DELAY_CHANCE, 100, RNG_AI_SPEED_BOOST_MEGA_DELAY);
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_PROTECT) == EFFECT_PROTECT);
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SHARPEDO) { Ability(ABILITY_SPEED_BOOST); Item(ITEM_SHARPEDONITE); Moves(MOVE_PROTECT, MOVE_CRUNCH); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_PROTECT, gimmick: GIMMICK_NONE); }
        TURN { EXPECT_MOVE(opponent, MOVE_CRUNCH, gimmick: GIMMICK_MEGA); }
    }
}

AI_SINGLE_BATTLE_TEST("Speed Boost Mega Delay: Scolipede Protects without Mega Evolving")
{
    PASSES_RANDOMLY(SPEED_BOOST_MEGA_DELAY_CHANCE, 100, RNG_AI_SPEED_BOOST_MEGA_DELAY);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SCOLIPEDE) { Ability(ABILITY_SPEED_BOOST); Item(ITEM_SCOLIPITE); Moves(MOVE_PROTECT, MOVE_POISON_JAB); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_PROTECT, gimmick: GIMMICK_NONE); }
    }
}

AI_SINGLE_BATTLE_TEST("Speed Boost Mega Delay: Mega Evolves and attacks when a fast kill is available")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SHARPEDO) { Ability(ABILITY_SPEED_BOOST); Item(ITEM_SHARPEDONITE); Moves(MOVE_PROTECT, MOVE_CRUNCH); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_CRUNCH, gimmick: GIMMICK_MEGA); }
    }
}

AI_SINGLE_BATTLE_TEST("Speed Boost Mega Delay: does not apply without the full Smart Trainer flags")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_BASIC_TRAINER);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SHARPEDO) { Ability(ABILITY_SPEED_BOOST); Item(ITEM_SHARPEDONITE); Moves(MOVE_PROTECT, MOVE_CRUNCH); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_CRUNCH, gimmick: GIMMICK_MEGA); }
    }
}

AI_SINGLE_BATTLE_TEST("Speed Boost Mega Delay: does not apply without Speed Boost")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SHARPEDO) { Ability(ABILITY_ROUGH_SKIN); Item(ITEM_SHARPEDONITE); Moves(MOVE_PROTECT, MOVE_CRUNCH); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_CRUNCH, gimmick: GIMMICK_MEGA); }
    }
}

AI_DOUBLE_BATTLE_TEST("Speed Boost Mega Delay: Sharpedo Protects without Mega Evolving in doubles")
{
    PASSES_RANDOMLY(SPEED_BOOST_MEGA_DELAY_CHANCE, 100, RNG_AI_SPEED_BOOST_MEGA_DELAY);
    GIVEN {
        AI_FLAGS(AI_FLAG_SMART_TRAINER);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SHARPEDO) { Ability(ABILITY_SPEED_BOOST); Item(ITEM_SHARPEDONITE); Moves(MOVE_PROTECT, MOVE_CRUNCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_PROTECT, gimmick: GIMMICK_NONE); }
    }
}
