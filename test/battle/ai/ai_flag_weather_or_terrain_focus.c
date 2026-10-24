#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

#define WEATHER_FOCUS_FLAGS (AI_FLAG_BASIC_TRAINER | AI_FLAG_OMNISCIENT | AI_FLAG_WEATHER_OR_TERRAIN_FOCUS)

// Dragon Rage deals a fixed 40 damage: HP(80) makes it a 2HKO, HP(40) an OHKO.

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: a Drizzle mon switches out once the rain is gone")
{
    GIVEN {
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_SUNNY_DAY, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_DRIZZLE); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SUNNY_DAY); EXPECT_MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_SWITCH(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: a Drizzle mon stays in while it is raining")
{
    GIVEN {
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_DRIZZLE); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_CELEBRATE); }
    }
}

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: a setter with a fast kill does not switch out")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); HP(80); MaxHP(80); Moves(MOVE_SUNNY_DAY, MOVE_CELEBRATE); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET) { Speed(100); Ability(ABILITY_DRIZZLE); Moves(MOVE_DRAGON_RAGE); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SUNNY_DAY); EXPECT_MOVE(opponent, MOVE_DRAGON_RAGE); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_DRAGON_RAGE); SEND_OUT(player, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: Spout Spray, Sand Spit and Seed Sower do not trigger a switch-out")
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_SAND_SPIT; }
    PARAMETRIZE { ability = ABILITY_SEED_SOWER; }
    PARAMETRIZE { ability = ABILITY_SPOUT_SPRAY; }
    GIVEN {
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ability); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_CELEBRATE); }
    }
}

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: a benched setter is sent in after a KO when its weather is missing")
{
    GIVEN {
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WYNAUT) { HP(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_ELECTRIC_SURGE); Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: a benched setter is not preferred when its weather is already up")
{
    GIVEN {
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_SUNNY_DAY, MOVE_TACKLE); }
        OPPONENT(SPECIES_WYNAUT) { HP(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_DROUGHT); Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SUNNY_DAY); }
        TURN { MOVE(player, MOVE_TACKLE); EXPECT_SEND_OUT(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: a missing weather move is scored above a 2HKO")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        ASSUME(GetMoveEffect(MOVE_SUNNY_DAY) == EFFECT_WEATHER);
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_SUNNY_DAY, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_SUNNY_DAY); }
    }
}

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: a missing terrain move is scored above a 2HKO")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        ASSUME(GetMoveEffect(MOVE_ELECTRIC_TERRAIN) == EFFECT_ELECTRIC_TERRAIN);
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_ELECTRIC_TERRAIN, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_ELECTRIC_TERRAIN); }
    }
}

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: a weather move still loses to an OHKO")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_SUNNY_DAY, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_DRAGON_RAGE); }
    }
}

AI_SINGLE_BATTLE_TEST("Weather Or Terrain Focus: a weather move is not boosted when that weather is already up")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        AI_FLAGS(WEATHER_FOCUS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_SUNNY_DAY, MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_SUNNY_DAY, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SUNNY_DAY); }
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_DRAGON_RAGE); }
    }
}
