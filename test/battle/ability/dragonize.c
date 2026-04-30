#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveType(MOVE_SCRATCH) == TYPE_NORMAL);
    ASSUME(GetMovePower(MOVE_SCRATCH) > 0);
}

SINGLE_BATTLE_TEST("Dragonize turns a Normal-type move into a Dragon-type move")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BAGON) { Ability(ABILITY_DRAGONIZE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Dragonize boosts power of affected moves by 20% (Gen7+) or 30% (Gen1-6)", s16 damage)
{
    enum Ability ability;
    u32 genConfig;
    PARAMETRIZE { ability = ABILITY_ROCK_HEAD;  genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_ROCK_HEAD;  genConfig = GEN_6; }
    PARAMETRIZE { ability = ABILITY_DRAGONIZE;  genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_DRAGONIZE;  genConfig = GEN_6; }

    GIVEN {
        WITH_CONFIG(B_ATE_MULTIPLIER, genConfig);
        PLAYER(SPECIES_BAGON) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.8), results[2].damage); // STAB + ate
        else
            EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.95), results[3].damage); // STAB + ate
    }
}
