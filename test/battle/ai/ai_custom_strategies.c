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
