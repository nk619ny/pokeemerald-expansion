#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

#define ENCOURAGE_STAT_BOOSTS_FLAGS (AI_FLAG_BASIC_TRAINER | AI_FLAG_OMNISCIENT | AI_FLAG_ENCOURAGE_STAT_BOOSTS)

// Dragon Rage deals a fixed 40 damage: HP(80) makes it a 2HKO, HP(40) an OHKO.

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: Stored Power user boosts its attacking stat over a 2HKO")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_STORED_POWER) == EFFECT_STORED_POWER);
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STORED_POWER, MOVE_NASTY_PLOT, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_NASTY_PLOT); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: Stored Power user still takes an OHKO over boosting")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(40); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STORED_POWER, MOVE_NASTY_PLOT, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_DRAGON_RAGE); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: Calm Mind counts as a primary-stat boost")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_CALM_MIND); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: a +2 to a non-attacking stat ties with a 2HKO")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        ASSUME(GetMoveCategory(MOVE_EMBER) == DAMAGE_CATEGORY_SPECIAL);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STORED_POWER, MOVE_IRON_DEFENSE, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); SCORE_EQ(opponent, MOVE_IRON_DEFENSE, MOVE_DRAGON_RAGE); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: Power Trip user treats Attack as its primary stat")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_POWER_TRIP) == EFFECT_STORED_POWER);
        ASSUME(GetMoveCategory(MOVE_POWER_TRIP) == DAMAGE_CATEGORY_PHYSICAL);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_POWER_TRIP, MOVE_SWORDS_DANCE, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_SWORDS_DANCE); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: no effect without Stored Power or Power Trip")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_IRON_DEFENSE, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_DRAGON_RAGE); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: no effect without the flag")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_HP_DAMAGE);
        AI_FLAGS(AI_FLAG_BASIC_TRAINER | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STORED_POWER, MOVE_IRON_DEFENSE, MOVE_DRAGON_RAGE); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); EXPECT_MOVE(opponent, MOVE_DRAGON_RAGE); }
    }
}

AI_DOUBLE_BATTLE_TEST("Encourage Stat Boosts: AI Simple Beams a Power Trip ally that knows a boosting move")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_SIMPLE_BEAM) == EFFECT_OVERWRITE_ABILITY);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_SIMPLE_BEAM, MOVE_SCRATCH); }
        OPPONENT(SPECIES_CORVIKNIGHT) { Ability(ABILITY_PRESSURE); Moves(MOVE_POWER_TRIP, MOVE_IRON_DEFENSE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_SIMPLE_BEAM, target: opponentRight); }
    }
}

AI_DOUBLE_BATTLE_TEST("Encourage Stat Boosts: AI takes a fast kill over Simple Beam")
{
    GIVEN {
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); Speed(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(50); Moves(MOVE_SIMPLE_BEAM, MOVE_SCRATCH); }
        OPPONENT(SPECIES_CORVIKNIGHT) { Ability(ABILITY_PRESSURE); Moves(MOVE_POWER_TRIP, MOVE_IRON_DEFENSE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_SCRATCH, target: playerLeft); }
    }
}

AI_DOUBLE_BATTLE_TEST("Encourage Stat Boosts: AI does not Simple Beam an Anger Point ally while a crit move is available")
{
    GIVEN {
        ASSUME(MoveAlwaysCrits(MOVE_WICKED_BLOW));
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_SIMPLE_BEAM, MOVE_SCRATCH); }
        OPPONENT(SPECIES_KROOKODILE) { Ability(ABILITY_ANGER_POINT); Moves(MOVE_POWER_TRIP, MOVE_POWER_UP_PUNCH); }
        OPPONENT(SPECIES_DRAPION) { Moves(MOVE_WICKED_BLOW); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponentLeft, MOVE_SIMPLE_BEAM); }
    }
}

AI_DOUBLE_BATTLE_TEST("Encourage Stat Boosts: AI uses a guaranteed crit on an Anger Point Power Trip ally")
{
    GIVEN {
        ASSUME(MoveAlwaysCrits(MOVE_WICKED_BLOW));
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_DRAPION) { Moves(MOVE_WICKED_BLOW, MOVE_SCRATCH); }
        OPPONENT(SPECIES_KROOKODILE) { Ability(ABILITY_ANGER_POINT); Moves(MOVE_POWER_TRIP, MOVE_CELEBRATE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_WICKED_BLOW, target: opponentRight); }
    }
}

AI_DOUBLE_BATTLE_TEST("Encourage Stat Boosts: AI uses Acupressure on a Power Trip ally over a 2HKO")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_ACUPRESSURE) == EFFECT_ACUPRESSURE);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_ACUPRESSURE, MOVE_DRAGON_RAGE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_POWER_TRIP, MOVE_CELEBRATE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_ACUPRESSURE, target: opponentRight); }
    }
}

AI_DOUBLE_BATTLE_TEST("Encourage Stat Boosts: AI takes a fast kill over Acupressure on its ally")
{
    GIVEN {
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(40); Speed(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { HP(80); Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(50); Moves(MOVE_ACUPRESSURE, MOVE_DRAGON_RAGE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_POWER_TRIP, MOVE_CELEBRATE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_DRAGON_RAGE, target: playerLeft); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: Baton Passer sets up with no boosts instead of passing")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_BATON_PASS) == EFFECT_BATON_PASS);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SMEARGLE) { Moves(MOVE_VICTORY_DANCE, MOVE_BATON_PASS, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STORED_POWER); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_VICTORY_DANCE); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: Baton Passer passes at +3 half the time")
{
    PASSES_RANDOMLY(50, 100, RNG_AI_ENCOURAGE_STAT_BOOSTS_BATON_PASS);
    GIVEN {
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SMEARGLE) { Moves(MOVE_VICTORY_DANCE, MOVE_BATON_PASS, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STORED_POWER); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_VICTORY_DANCE); }
        TURN { EXPECT_MOVE(opponent, MOVE_BATON_PASS); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: Baton Pass goes to a Stored Power / Power Trip user")
{
    GIVEN {
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SMEARGLE) { Moves(MOVE_VICTORY_DANCE, MOVE_BATON_PASS, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_POWER_TRIP); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_VICTORY_DANCE); }
        TURN { EXPECT_MOVE(opponent, MOVE_BATON_PASS); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("Encourage Stat Boosts: Simple counts double toward the +3 Baton Pass setup threshold")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_AGILITY) == EFFECT_STAT_CHANGE);
        AI_FLAGS(ENCOURAGE_STAT_BOOSTS_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_SWOOBAT) { Ability(ABILITY_SIMPLE); Moves(MOVE_AGILITY, MOVE_BATON_PASS, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STORED_POWER); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_AGILITY); }
    }
}
