#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Recoil: Take Down deals 25% of recoil damage to the user")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_TAKE_DOWN) == 25);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TAKE_DOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TAKE_DOWN, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.25), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Recoil: Double Edge deals 33% of recoil damage to the user")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_DOUBLE_EDGE) == 33);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_EDGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_EDGE, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.33), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Recoil: Head Smash deals 50% of recoil damage to the user")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_HEAD_SMASH) == 50);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HEAD_SMASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAD_SMASH, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.50), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Recoil: Flare Blitz deals 33% of recoil damage to the user and can burn target")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_FLARE_BLITZ) == 33);
        ASSUME(MoveHasAdditionalEffect(MOVE_FLARE_BLITZ, MOVE_EFFECT_BURN));
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLARE_BLITZ); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLARE_BLITZ, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponent);
        STATUS_ICON(opponent, burn: TRUE);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.33), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Recoil: Flare Blitz still deals recoil damage when boosted by Sheer Force")
{
    s16 directDamage;
    s16 recoilDamage;
    enum Ability ability;

    PARAMETRIZE { ability = ABILITY_SHEER_FORCE; }
    PARAMETRIZE { ability = ABILITY_INTIMIDATE; }

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_FLARE_BLITZ) == 33);
        ASSUME(MoveIsAffectedBySheerForce(MOVE_FLARE_BLITZ));
        PLAYER(SPECIES_TAUROS) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FLARE_BLITZ); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLARE_BLITZ, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.33), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Recoil: Flare Blitz is absorbed by Flash Fire and no recoil damage is dealt")
{
    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_FLARE_BLITZ) > 0);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_VULPIX) { Ability(ABILITY_FLASH_FIRE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); MOVE(player, MOVE_FLARE_BLITZ); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FLARE_BLITZ, player);
            HP_BAR(opponent);
            HP_BAR(player);
        }
    }
}

SINGLE_BATTLE_TEST("Recoil: The correct amount of recoil damage is dealt after targets recovery berry proc")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_TAKE_DOWN) == 25);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { MaxHP(100); HP(51); Item(ITEM_SITRUS_BERRY); }
    } WHEN {
        TURN { MOVE(player, MOVE_TAKE_DOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TAKE_DOWN, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.25), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Recoil: No recoil is taken if the move is blocked by Disguise")
{
    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_FLARE_BLITZ) > 0);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_MIMIKYU) { Ability(ABILITY_DISGUISE); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLARE_BLITZ); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLARE_BLITZ, player);
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
    }
}

SINGLE_BATTLE_TEST("Recoil: Hitting substitutes inflicts recoil")
{
    u16 damage;
    s16 recoil;
    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_TAKE_DOWN) == 25);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_TAKE_DOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TAKE_DOWN, opponent);
        SUB_HIT(player, captureDamage: &damage);
        HP_BAR(opponent, captureDamage: &recoil);
    } THEN {
        EXPECT_MUL_EQ(damage, Q_4_12(0.25), recoil);
    }
}

SINGLE_BATTLE_TEST("Protective Pads: Reduces recoil damage by half on physical recoil moves")
{
    s16 directDamage;
    s16 recoilDamage;

    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_TAKE_DOWN) == 25);
        ASSUME(gItemsInfo[ITEM_PROTECTIVE_PADS].holdEffect == HOLD_EFFECT_PROTECTIVE_PADS);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_PROTECTIVE_PADS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TAKE_DOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TAKE_DOWN, player);
        HP_BAR(opponent, captureDamage: &directDamage);
        HP_BAR(player, captureDamage: &recoilDamage);
    } THEN {
        // With Protective Pads, recoil should be half of normal (12.5% of damage instead of 25%)
        EXPECT_MUL_EQ(directDamage, UQ_4_12(0.125), recoilDamage);
    }
}

SINGLE_BATTLE_TEST("Protective Pads: Does NOT reduce crash damage from High Jump Kick")
{
    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_HIGH_JUMP_KICK) > 0);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_PROTECTIVE_PADS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {
            MOVE(player, MOVE_PROTECT);
            MOVE(opponent, MOVE_HIGH_JUMP_KICK);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, player);
        MESSAGE("The opposing Wobbuffet kept going and crashed!");
    } THEN {
        // Player takes crash damage even with Protective Pads, verify by checking they have less HP
        EXPECT_LT(player->hp, player->maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Protective Pads: Does NOT reduce recoil from Chloroblast")
{
    s16 recoilDamageWithPads;

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_CHLOROBLAST) == EFFECT_CHLOROBLAST);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_PROTECTIVE_PADS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CHLOROBLAST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHLOROBLAST, player);
        HP_BAR(opponent);
        HP_BAR(player, captureDamage: &recoilDamageWithPads);
    } THEN {
        // Chloroblast recoil is half of max HP, Protective Pads should NOT reduce it
        // So recoil should be approximately player maxHP / 2
        EXPECT_MUL_EQ(player->maxHP, Q_4_12(0.5), recoilDamageWithPads);
    }
}

SINGLE_BATTLE_TEST("Protective Pads: Does NOT reduce recoil from Mind Blown")
{
    s16 recoilDamageWithPads;

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_MIND_BLOWN) == EFFECT_MAX_HP_50_RECOIL);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_PROTECTIVE_PADS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_MIND_BLOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIND_BLOWN, player);
        HP_BAR(opponent);
        HP_BAR(player, captureDamage: &recoilDamageWithPads);
    } THEN {
        // Mind Blown recoil is half of max HP, Protective Pads should NOT reduce it
        EXPECT_MUL_EQ(player->maxHP, Q_4_12(0.5), recoilDamageWithPads);
    }
}
