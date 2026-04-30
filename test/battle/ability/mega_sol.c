#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_SOLAR_BEAM) == EFFECT_SOLAR_BEAM);
    ASSUME(GetMoveTwoTurnAttackWeather(MOVE_SOLAR_BEAM) == B_WEATHER_SUN);
    ASSUME(GetMoveEffect(MOVE_WEATHER_BALL) == EFFECT_WEATHER_BALL);
    ASSUME(GetMoveAccuracy(MOVE_THUNDER) == 70);
    ASSUME(MoveHas50AccuracyInSun(MOVE_THUNDER) == TRUE);
    ASSUME(MoveHas50AccuracyInSun(MOVE_HURRICANE) == TRUE);
}

SINGLE_BATTLE_TEST("Mega Sol lets Solar Beam fire immediately without sun")
{
    GIVEN {
        PLAYER(SPECIES_TORKOAL) { Ability(ABILITY_MEGA_SOL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SOLAR_BEAM); }
    } SCENE {
        MESSAGE("Torkoal used Solar Beam!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SOLAR_BEAM, player);
    }
}

SINGLE_BATTLE_TEST("Mega Sol is unaffected by Cloud Nine for Solar Beam")
{
    GIVEN {
        PLAYER(SPECIES_TORKOAL) { Ability(ABILITY_MEGA_SOL); }
        OPPONENT(SPECIES_GOLDUCK) { Ability(ABILITY_CLOUD_NINE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_SOLAR_BEAM); }
    } SCENE {
        MESSAGE("Torkoal used Solar Beam!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SOLAR_BEAM, player);
    }
}

SINGLE_BATTLE_TEST("Mega Sol Weather Ball behaves like strong sunlight", s16 damage)
{
    enum Ability ability;

    PARAMETRIZE { ability = ABILITY_WHITE_SMOKE; }
    PARAMETRIZE { ability = ABILITY_MEGA_SOL; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ability); Moves(MOVE_WEATHER_BALL); }
        OPPONENT(SPECIES_MEGANIUM);
    } WHEN {
        TURN { MOVE(player, MOVE_WEATHER_BALL); }
    } SCENE {
        if (ability == ABILITY_MEGA_SOL)
            MESSAGE("It's super effective!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(6.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Mega Sol gives 2/3 healing to Synthesis, Moonlight, and Morning Sun")
{
    enum Move move;

    PARAMETRIZE { move = MOVE_SYNTHESIS; }
    PARAMETRIZE { move = MOVE_MOONLIGHT; }
    PARAMETRIZE { move = MOVE_MORNING_SUN; }

    GIVEN {
        WITH_CONFIG(B_TIME_OF_DAY_HEALING_MOVES, GEN_3);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_MEGA_SOL); HP(1); MaxHP(300); Moves(move); }
        OPPONENT(SPECIES_GOLDUCK) { Ability(ABILITY_CLOUD_NINE); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        HP_BAR(player, damage: -(300 / 1.5));
    }
}

SINGLE_BATTLE_TEST("Mega Sol sets Thunder and Hurricane accuracy to 50%")
{
    enum Move move;

    PASSES_RANDOMLY(50, 100, RNG_ACCURACY);

    PARAMETRIZE { move = MOVE_THUNDER; }
    PARAMETRIZE { move = MOVE_HURRICANE; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_MEGA_SOL); Moves(move); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
    }
}

SINGLE_BATTLE_TEST("Mega Sol boosts Fire moves by 50%", s16 damage)
{
    enum Ability ability;

    PARAMETRIZE { ability = ABILITY_WHITE_SMOKE; }
    PARAMETRIZE { ability = ABILITY_MEGA_SOL; }

    GIVEN {
        PLAYER(SPECIES_TORKOAL) { Ability(ability); Moves(MOVE_FLAMETHROWER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLAMETHROWER); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Mega Sol weakens Water moves by 50%", s16 damage)
{
    enum Ability ability;

    PARAMETRIZE { ability = ABILITY_WHITE_SMOKE; }
    PARAMETRIZE { ability = ABILITY_MEGA_SOL; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ability); Moves(MOVE_WATER_GUN); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Mega Sol bypasses Rock Sp. Def boost from sandstorm", s16 damage)
{
    enum Ability ability;

    PARAMETRIZE { ability = ABILITY_WHITE_SMOKE; }
    PARAMETRIZE { ability = ABILITY_MEGA_SOL; }

    GIVEN {
        PLAYER(SPECIES_BAGON) { Ability(ability); Moves(MOVE_DRAGON_PULSE); }
        OPPONENT(SPECIES_GEODUDE) { Moves(MOVE_SANDSTORM); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); MOVE(player, MOVE_DRAGON_PULSE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Mega Sol bypasses Ice Def boost from snow", s16 damage)
{
    enum Ability ability;

    PARAMETRIZE { ability = ABILITY_WHITE_SMOKE; }
    PARAMETRIZE { ability = ABILITY_MEGA_SOL; }

    GIVEN {
        PLAYER(SPECIES_BAGON) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_SNORUNT) { Moves(MOVE_SNOWSCAPE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SNOWSCAPE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}
