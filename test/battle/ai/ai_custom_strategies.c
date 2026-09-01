#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

// AI_FLAG_CUSTOM_STRATEGIES, Strategy 1 (TRAINER_GRUNT_MAGMA_HIDEOUT_14):
// Bruxish pivots a Water move into its Coalossal partner to trigger Steam Engine + Weakness Policy,
// then boosted Coalossal cleans up. The strategy is gated on the Bruxish + Coalossal signature.

#define CUSTOM_STRATEGIES_FLAGS (AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_CUSTOM_STRATEGIES)

ASSUMPTIONS
{
    ASSUME(GetMoveType(MOVE_AQUA_JET) == TYPE_WATER);
    ASSUME(GetMoveType(MOVE_FLIP_TURN) == TYPE_WATER);
    ASSUME(GetMoveTarget(MOVE_EARTHQUAKE) == TARGET_FOES_AND_ALLY);
    ASSUME(gItemsInfo[ITEM_WEAKNESS_POLICY].holdEffect == HOLD_EFFECT_WEAKNESS_POLICY);
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Bruxish pivots Aqua Jet into Coalossal when it isn't the fastest")
{
    GIVEN {
        AI_FLAGS(CUSTOM_STRATEGIES_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(200); Moves(MOVE_CELEBRATE); } // fastest on field
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_BRUXISH) { Speed(100); Moves(MOVE_AQUA_JET, MOVE_FLIP_TURN, MOVE_SUPER_FANG); }
        OPPONENT(SPECIES_COALOSSAL) { Ability(ABILITY_STEAM_ENGINE); Item(ITEM_WEAKNESS_POLICY); Speed(1); Moves(MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAT_CRASH, MOVE_HIDDEN_POWER); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_AQUA_JET, target: opponentRight); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Bruxish pivots Flip Turn into Coalossal when it is the absolute fastest")
{
    GIVEN {
        AI_FLAGS(CUSTOM_STRATEGIES_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_BRUXISH) { Speed(200); Moves(MOVE_AQUA_JET, MOVE_FLIP_TURN, MOVE_SUPER_FANG); }
        OPPONENT(SPECIES_COALOSSAL) { Ability(ABILITY_STEAM_ENGINE); Item(ITEM_WEAKNESS_POLICY); Speed(1); Moves(MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAT_CRASH, MOVE_HIDDEN_POWER); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_FLIP_TURN, target: opponentRight); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Bruxish won't pivot into Coalossal if the Water move would KO it")
{
    GIVEN {
        AI_FLAGS(CUSTOM_STRATEGIES_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(200); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_BRUXISH) { Speed(100); Moves(MOVE_AQUA_JET, MOVE_FLIP_TURN, MOVE_SUPER_FANG); }
        OPPONENT(SPECIES_COALOSSAL) { Ability(ABILITY_STEAM_ENGINE); Item(ITEM_WEAKNESS_POLICY); HP(1); Speed(1); Moves(MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAT_CRASH, MOVE_HIDDEN_POWER); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponentLeft, MOVE_AQUA_JET, target: opponentRight); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Coalossal forces Earthquake in the Aqua Jet branch to KO a foe")
{
    // Coalossal is opponentLeft (lower battler id) so its partner-commit cross-check is skipped.
    GIVEN {
        AI_FLAGS(CUSTOM_STRATEGIES_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(200); HP(1); Moves(MOVE_CELEBRATE); } // dies to boosted Earthquake
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_COALOSSAL) { Ability(ABILITY_STEAM_ENGINE); Item(ITEM_WEAKNESS_POLICY); Speed(1); Moves(MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAT_CRASH, MOVE_HIDDEN_POWER); }
        OPPONENT(SPECIES_BRUXISH) { Speed(100); Moves(MOVE_AQUA_JET, MOVE_FLIP_TURN, MOVE_SUPER_FANG); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_EARTHQUAKE); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: no combo when Coalossal can't be set up (no Steam Engine or Weakness Policy)")
{
    GIVEN {
        AI_FLAGS(CUSTOM_STRATEGIES_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(200); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_BRUXISH) { Speed(100); Moves(MOVE_AQUA_JET, MOVE_FLIP_TURN, MOVE_SUPER_FANG); }
        OPPONENT(SPECIES_COALOSSAL) { Ability(ABILITY_FLASH_FIRE); Speed(1); Moves(MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAT_CRASH, MOVE_HIDDEN_POWER); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponentLeft, MOVE_AQUA_JET, target: opponentRight); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: flag is inert when the partner isn't the combo mon")
{
    GIVEN {
        AI_FLAGS(CUSTOM_STRATEGIES_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(200); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_BRUXISH) { Speed(100); Moves(MOVE_AQUA_JET, MOVE_FLIP_TURN, MOVE_SUPER_FANG); }
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_WEAKNESS_POLICY); Moves(MOVE_CELEBRATE); } // partner isn't Coalossal
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponentLeft, MOVE_AQUA_JET, target: opponentRight); }
    }
}

// AI_FLAG_CUSTOM_STRATEGIES, Strategy 2 (TRAINER_EDGAR):
// On turn 1, a Soundproof Abomasnow may hold off Mega Evolution (Protect instead) so its Politoed
// partner can safely land Perish Song. Gated on the Abomasnow + Politoed signature.

#define EDGAR_STRATEGY_FLAGS (CUSTOM_STRATEGIES_FLAGS | AI_FLAG_OMNISCIENT)

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_PERISH_SONG) == EFFECT_PERISH_SONG);
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Abomasnow Protects and Politoed uses Perish Song when the strategy is adopted")
{
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ABOMASNOW) { Ability(ABILITY_SOUNDPROOF); Item(ITEM_ABOMASITE); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_POLITOED) { Ability(ABILITY_DAMP); Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_PROTECT);
            EXPECT_MOVE(opponentRight, MOVE_PERISH_SONG);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Politoed still takes an available fast kill over Perish Song")
{
    GIVEN {
        ASSUME(GetMovePower(MOVE_MUDDY_WATER) > 0);
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); Speed(1); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); }
        OPPONENT(SPECIES_ABOMASNOW) { Ability(ABILITY_SOUNDPROOF); Item(ITEM_ABOMASITE); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_POLITOED) { Ability(ABILITY_DAMP); Speed(200); Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponentRight, MOVE_PERISH_SONG); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: strategy never adopts when both player mons have Soundproof, and Perish Song is discouraged")
{
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SOUNDPROOF); }
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SOUNDPROOF); }
        OPPONENT(SPECIES_ABOMASNOW) { Ability(ABILITY_SOUNDPROOF); Item(ITEM_ABOMASITE); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_POLITOED) { Ability(ABILITY_DAMP); Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, gimmick: GIMMICK_MEGA);
            NOT_EXPECT_MOVE(opponentRight, MOVE_PERISH_SONG);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: reduced chance to adopt when exactly one player mon has Soundproof")
{
    PASSES_RANDOMLY(DELAY_MEGA_FOR_PERISH_SONG_ONE_SOUNDPROOF_CHANCE, 100, RNG_CUSTOM_STRATEGIES);
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SOUNDPROOF); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ABOMASNOW) { Ability(ABILITY_SOUNDPROOF); Item(ITEM_ABOMASITE); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_POLITOED) { Ability(ABILITY_DAMP); Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentRight, MOVE_PERISH_SONG); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: default chance to adopt when neither player mon has Soundproof")
{
    PASSES_RANDOMLY(DELAY_MEGA_FOR_PERISH_SONG_CHANCE, 100, RNG_CUSTOM_STRATEGIES);
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ABOMASNOW) { Ability(ABILITY_SOUNDPROOF); Item(ITEM_ABOMASITE); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_POLITOED) { Ability(ABILITY_DAMP); Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentRight, MOVE_PERISH_SONG); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: strategy and discouragement are turn-1 only")
{
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SOUNDPROOF); }
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SOUNDPROOF); }
        OPPONENT(SPECIES_ABOMASNOW) { Ability(ABILITY_SOUNDPROOF); Item(ITEM_ABOMASITE); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_POLITOED) { Ability(ABILITY_DAMP); Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN { SCORE_EQ_VAL(opponentRight, MOVE_PERISH_SONG, AI_SCORE_DEFAULT + WORST_EFFECT + WORST_EFFECT); }
        TURN { SCORE_EQ_VAL(opponentRight, MOVE_PERISH_SONG, AI_SCORE_DEFAULT + WORST_EFFECT); }
    }
}

// AI_FLAG_CUSTOM_STRATEGIES, TRAINER_EDGAR (Phase 4):
// Post-Mega Abomasnow's Protect gating, Soak/Water Sport saving an ally from a lethal Fire move,
// and the Soak/Ice coordination failsafes with the team's other Ice attackers.

ASSUMPTIONS
{
    ASSUME(GetMoveType(MOVE_FLAMETHROWER) == TYPE_FIRE);
    ASSUME(GetMoveType(MOVE_BLIZZARD) == TYPE_ICE);
    ASSUME(GetMoveEffect(MOVE_FREEZE_DRY) == EFFECT_SUPER_EFFECTIVE_ON_ARG);
    ASSUME(GetMoveType(MOVE_SOAK) == TYPE_WATER);
    ASSUME(GetMoveTarget(MOVE_WATER_SPORT) == TARGET_FIELD);
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: post-Mega Abomasnow Protects when fast-killed and off cooldown")
{
    PASSES_RANDOMLY(MEGA_ABOMASNOW_PROTECT_CHANCE, 100, RNG_CUSTOM_STRATEGIES);
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(200); Moves(MOVE_FLAMETHROWER); } // 4x weak Abomasnow dies to this
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ABOMASNOW_MEGA) { Speed(1); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_POLITOED) { Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_PROTECT); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: post-Mega Abomasnow doesn't Protect when not threatened by a fast kill")
{
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ABOMASNOW_MEGA) { Speed(100); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_POLITOED) { Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponentLeft, MOVE_PROTECT); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: post-Mega Abomasnow doesn't Protect when its ally already locked Soak on it")
{
    // Politoed is opponentLeft (lower battler id) so its Soak choice is already committed by the
    // time Abomasnow's Protect score is checked.
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(200); Moves(MOVE_FLAMETHROWER); } // fast kill threat on Abomasnow
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_POLITOED) { Speed(200); Moves(MOVE_SOAK, MOVE_CELEBRATE, MOVE_CELEBRATE, MOVE_CELEBRATE); } // opponentLeft, forced Soak on Abomasnow
        OPPONENT(SPECIES_ABOMASNOW_MEGA) { Speed(1); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); } // opponentRight
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_SOAK, target: opponentRight);
            NOT_EXPECT_MOVE(opponentRight, MOVE_PROTECT);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Politoed Soaks its ally to save it from a lethal Fire move")
{
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_FLAMETHROWER); } // slower than Politoed
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ABOMASNOW) { Speed(1); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_POLITOED) { Speed(200); Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentRight, MOVE_SOAK, target: opponentLeft); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Politoed won't Soak its ally to save it if the ally already locked Protect")
{
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_FLAMETHROWER); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ABOMASNOW) { Speed(200); Moves(MOVE_PROTECT, MOVE_CELEBRATE, MOVE_CELEBRATE, MOVE_CELEBRATE); } // opponentLeft, forced Protect, decides first
        OPPONENT(SPECIES_POLITOED) { Speed(1); Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); } // opponentRight
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_PROTECT);
            NOT_EXPECT_MOVE(opponentRight, MOVE_SOAK, target: opponentLeft);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Arctovish uses Water Sport to save its ally from a lethal Fire move")
{
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_FLAMETHROWER); } // slower than Arctovish
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ABOMASNOW) { Speed(1); Moves(MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_ICE_HAMMER, MOVE_PROTECT); }
        OPPONENT(SPECIES_ARCTOVISH) { Speed(200); Moves(MOVE_FISHIOUS_REND, MOVE_WATER_SPORT, MOVE_AURORA_VEIL, MOVE_CRUNCH); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentRight, MOVE_WATER_SPORT); }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: Politoed won't Soak an enemy that would lose the partner's already-locked Ice KO")
{
    // Cryogonal is opponentLeft (lower battler id) so its Blizzard choice is already committed
    // by the time Politoed's Soak score is checked.
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_GARCHOMP) { Speed(1); Moves(MOVE_CELEBRATE); } // 4x weak to Ice
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_CRYOGONAL) { Speed(200); Moves(MOVE_BLIZZARD, MOVE_RAPID_SPIN, MOVE_ROAR, MOVE_RECOVER); }
        OPPONENT(SPECIES_POLITOED) { Speed(1); Moves(MOVE_PERISH_SONG, MOVE_MUDDY_WATER, MOVE_SOAK, MOVE_ENCORE); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_BLIZZARD, target: playerLeft);
            NOT_EXPECT_MOVE(opponentRight, MOVE_SOAK, target: playerLeft);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Custom Strategies: teammate won't Ice an enemy the partner already locked Soak onto")
{
    // Politoed is opponentLeft (lower battler id) so its Soak choice is already committed by the
    // time Cryogonal's Blizzard score is checked.
    GIVEN {
        AI_FLAGS(EDGAR_STRATEGY_FLAGS);
        PLAYER(SPECIES_GARCHOMP) { Speed(1); Moves(MOVE_CELEBRATE); } // 4x weak to Ice, currently
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_POLITOED) { Speed(200); Moves(MOVE_SOAK, MOVE_CELEBRATE, MOVE_CELEBRATE, MOVE_CELEBRATE); } // forced Soak, decides first
        OPPONENT(SPECIES_CRYOGONAL) { Speed(1); Moves(MOVE_BLIZZARD, MOVE_RAPID_SPIN, MOVE_ROAR, MOVE_RECOVER); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_SOAK, target: playerLeft);
            NOT_EXPECT_MOVE(opponentRight, MOVE_BLIZZARD, target: playerLeft);
        }
    }
}

