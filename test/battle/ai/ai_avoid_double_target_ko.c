#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

// Exercises AI_AVOID_DOUBLE_TARGET_KO (include/config/ai.h): in doubles, the AI avoids
// wasting both attacks on a target its partner is already expected to KO.

#define DOUBLE_TARGET_BASIC_FLAGS (AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY)

ASSUMPTIONS
{
    ASSUME(AI_AVOID_DOUBLE_TARGET_KO == TRUE);
    ASSUME(GetMovePower(MOVE_SCRATCH) > 0);
    ASSUME(GetMovePower(MOVE_SHADOW_BALL) > 0);
}

AI_DOUBLE_BATTLE_TEST("Avoid Double Target KO: mon with kills on both foes claims the target its partner cannot kill")
{
    GIVEN {
        AI_FLAGS(DOUBLE_TARGET_BASIC_FLAGS);
        // Gastly is immune to opponentRight's Scratch, so only opponentLeft can kill it.
        PLAYER(SPECIES_GASTLY) { Speed(1); HP(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); HP(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_SHADOW_BALL); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_SCRATCH); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_SHADOW_BALL, target: playerLeft);
            EXPECT_MOVE(opponentRight, MOVE_SCRATCH, target: playerRight);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Avoid Double Target KO: mon with only a slow kill defers to its partner's fast kill")
{
    GIVEN {
        AI_FLAGS(DOUBLE_TARGET_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); HP(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_SCRATCH); } // Slow kill on playerLeft.
        OPPONENT(SPECIES_WOBBUFFET) { Speed(30); Moves(MOVE_SCRATCH); } // Fast kill on playerLeft.
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_SCRATCH, target: playerRight);
            EXPECT_MOVE(opponentRight, MOVE_SCRATCH, target: playerLeft);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Avoid Double Target KO: slow killer joins in as insurance when the fast killer is threatened")
{
    PASSES_RANDOMLY(DOUBLE_TARGET_UNRELIABLE_KILL_CHANCE, 100, RNG_AI_DOUBLE_TARGET_INSURANCE);
    GIVEN {
        AI_FLAGS(DOUBLE_TARGET_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); HP(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(50); Moves(MOVE_SCRATCH); } // Fast kill threat on opponentRight.
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_SCRATCH); } // Slow kill on playerLeft.
        OPPONENT(SPECIES_WOBBUFFET) { Speed(30); HP(1); Moves(MOVE_SCRATCH); } // Fast kill on playerLeft, but may die first.
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_SCRATCH, target: playerLeft);
            EXPECT_MOVE(opponentRight, MOVE_SCRATCH, target: playerLeft);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Avoid Double Target KO: single-target attack is not wasted on a foe the partner's spread move kills")
{
    GIVEN {
        ASSUME(GetMoveTarget(MOVE_EARTHQUAKE) == TARGET_FOES_AND_ALLY);
        AI_FLAGS(DOUBLE_TARGET_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); HP(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_EARTHQUAKE); } // Spread kill on playerRight.
        OPPONENT(SPECIES_CROBAT) { Speed(20); Moves(MOVE_WING_ATTACK); } // Immune to partner's Earthquake.
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_EARTHQUAKE);
            EXPECT_MOVE(opponentRight, MOVE_WING_ATTACK, target: playerLeft);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Avoid Double Target KO: two slow kills still double up DOUBLE_TARGET_SLOW_KILL_CHANCE percent of the time")
{
    PASSES_RANDOMLY(DOUBLE_TARGET_SLOW_KILL_CHANCE, 100, RNG_AI_DOUBLE_TARGET_SLOW_KILL);
    GIVEN {
        AI_FLAGS(DOUBLE_TARGET_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(50); HP(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_SCRATCH); } // Slow kill on playerLeft.
        OPPONENT(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_SCRATCH); } // Also only a slow kill on playerLeft.
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_SCRATCH, target: playerLeft);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Avoid Double Target KO: the unthreatened mon claims the kill and the threatened one redirects")
{
    GIVEN {
        AI_FLAGS(DOUBLE_TARGET_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); HP(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(50); Moves(MOVE_SCRATCH); } // Fast kill threat on opponentRight only.
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_SCRATCH); } // Reliable fast kill on playerLeft.
        OPPONENT(SPECIES_WOBBUFFET) { Speed(30); HP(1); Moves(MOVE_SCRATCH); } // Fast kill on playerLeft, but may die first.
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_SCRATCH, target: playerLeft);
            EXPECT_MOVE(opponentRight, MOVE_SCRATCH, target: playerRight);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Avoid Double Target KO: both mons double up when both their kills are threatened")
{
    PASSES_RANDOMLY(DOUBLE_TARGET_UNRELIABLE_KILL_CHANCE, 100, RNG_AI_DOUBLE_TARGET_INSURANCE);
    GIVEN {
        AI_FLAGS(DOUBLE_TARGET_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(1); HP(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(50); Moves(MOVE_SCRATCH); } // Fast kill threat on both AI mons.
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); HP(1); Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(30); HP(1); Moves(MOVE_SCRATCH); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_SCRATCH, target: playerLeft);
            EXPECT_MOVE(opponentRight, MOVE_SCRATCH, target: playerLeft);
        }
    }
}
