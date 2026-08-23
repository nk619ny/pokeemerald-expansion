#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

// Exercises AI_AVOID_WIDE_GUARD_SPREAD (include/config/ai.h): in doubles, the AI discourages
// spread moves a foe could block with Wide Guard, unless that foe just used a protection move.
// The 50% roll (AVOID_WIDE_GUARD_SPREAD_CHANCE) defaults to passing outside PASSES_RANDOMLY,
// so these score checks are deterministic.

ASSUMPTIONS
{
    ASSUME(AI_AVOID_WIDE_GUARD_SPREAD == TRUE);
    ASSUME(GetMoveEffect(MOVE_WIDE_GUARD) == EFFECT_PROTECT);
    ASSUME(GetMoveProtectMethod(MOVE_WIDE_GUARD) == PROTECT_WIDE_GUARD);
    ASSUME(GetMoveTarget(MOVE_ROCK_SLIDE) == TARGET_BOTH);
    ASSUME(GetMovePower(MOVE_ROCK_SLIDE) > 0);
    ASSUME(GetMovePower(MOVE_SCRATCH) > 0);
}

AI_DOUBLE_BATTLE_TEST("Avoid Wide Guard: spread move is discouraged when a foe knows Wide Guard and didn't just protect")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_WIDE_GUARD, MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_ROCK_SLIDE, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN {
            // Spread move takes the medium penalty against both foes; the single-target move does not.
            SCORE_EQ_VAL(opponentLeft, MOVE_ROCK_SLIDE, AI_SCORE_DEFAULT + AWFUL_EFFECT, target: playerLeft);
            SCORE_EQ_VAL(opponentLeft, MOVE_ROCK_SLIDE, AI_SCORE_DEFAULT + AWFUL_EFFECT, target: playerRight);
            SCORE_EQ_VAL(opponentLeft, MOVE_SCRATCH, AI_SCORE_DEFAULT, target: playerLeft);
            SCORE_LT(opponentLeft, MOVE_ROCK_SLIDE, MOVE_SCRATCH, target: playerLeft);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Avoid Wide Guard: spread move is not discouraged when no foe knows Wide Guard")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_ROCK_SLIDE, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN {
            SCORE_EQ_VAL(opponentLeft, MOVE_ROCK_SLIDE, AI_SCORE_DEFAULT, target: playerLeft);
            SCORE_EQ(opponentLeft, MOVE_ROCK_SLIDE, MOVE_SCRATCH, target: playerLeft);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Avoid Wide Guard: spread move is not discouraged if the Wide Guard user protected last turn")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_WIDE_GUARD, MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_ROCK_SLIDE, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_WIDE_GUARD); }
        TURN {
            MOVE(playerLeft, MOVE_CELEBRATE);
            SCORE_EQ_VAL(opponentLeft, MOVE_ROCK_SLIDE, AI_SCORE_DEFAULT, target: playerLeft);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Avoid Wide Guard: single-target move is never discouraged even when a foe knows Wide Guard")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_WIDE_GUARD, MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_SCRATCH, MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN {
            SCORE_EQ_VAL(opponentLeft, MOVE_SCRATCH, AI_SCORE_DEFAULT, target: playerLeft);
        }
    }
}
