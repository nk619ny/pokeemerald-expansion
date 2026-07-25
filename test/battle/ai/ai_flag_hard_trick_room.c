#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

#define HARD_TRICK_ROOM_BASIC_FLAGS (AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_HARD_TRICK_ROOM)

AI_DOUBLE_BATTLE_TEST("Hard Trick Room: AI sets Trick Room over a slow kill")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TRICK_ROOM) == EFFECT_TRICK_ROOM);
        ASSUME(GetMovePower(MOVE_SCRATCH) > 0);
        AI_FLAGS(HARD_TRICK_ROOM_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); HP(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_TRICK_ROOM, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); }
    }
}

AI_DOUBLE_BATTLE_TEST("Hard Trick Room: AI sets Trick Room over a fast kill SHOULD_TRICK_ROOM_OVER_FAST_KILL percent of the time")
{
    PASSES_RANDOMLY(SHOULD_TRICK_ROOM_OVER_FAST_KILL, 100, RNG_AI_HARD_TRICK_ROOM_OVER_FAST_KILL);
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TRICK_ROOM) == EFFECT_TRICK_ROOM);
        ASSUME(GetMovePriority(MOVE_QUICK_ATTACK) > 0);
        AI_FLAGS(HARD_TRICK_ROOM_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); HP(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_TRICK_ROOM, MOVE_QUICK_ATTACK); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); }
    }
}

AI_DOUBLE_BATTLE_TEST("Hard Trick Room: AI uses Follow Me to protect a partner that knows Trick Room")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TRICK_ROOM) == EFFECT_TRICK_ROOM);
        ASSUME(GetMoveEffect(MOVE_FOLLOW_ME) == EFFECT_FOLLOW_ME);
        AI_FLAGS(HARD_TRICK_ROOM_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_FOLLOW_ME, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_TRICK_ROOM, MOVE_SCRATCH); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_FOLLOW_ME);
            EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Hard Trick Room: AI takes a fast kill instead of using Follow Me")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TRICK_ROOM) == EFFECT_TRICK_ROOM);
        ASSUME(GetMoveEffect(MOVE_FOLLOW_ME) == EFFECT_FOLLOW_ME);
        ASSUME(GetMovePriority(MOVE_QUICK_ATTACK) > 0);
        AI_FLAGS(HARD_TRICK_ROOM_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); HP(1); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WYNAUT) { Speed(20); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_FOLLOW_ME, MOVE_QUICK_ATTACK); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_TRICK_ROOM, MOVE_SCRATCH); }
    } WHEN {
        TURN {
            NOT_EXPECT_MOVE(opponentLeft, MOVE_FOLLOW_ME);
            EXPECT_MOVE(opponentLeft, MOVE_QUICK_ATTACK);
            SEND_OUT(playerLeft, 2);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Hard Trick Room: only one AI mon uses Trick Room when both know it")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TRICK_ROOM) == EFFECT_TRICK_ROOM);
        AI_FLAGS(HARD_TRICK_ROOM_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_TRICK_ROOM, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_TRICK_ROOM, MOVE_SCRATCH); }
    } WHEN {
        TURN {
            EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM);
            NOT_EXPECT_MOVE(opponentRight, MOVE_TRICK_ROOM);
        }
    }
}

AI_DOUBLE_BATTLE_TEST("Hard Trick Room: AI does not set Trick Room when its side is faster than both foes")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TRICK_ROOM) == EFFECT_TRICK_ROOM);
        AI_FLAGS(HARD_TRICK_ROOM_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_TRICK_ROOM, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_SCRATCH); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponentLeft, MOVE_TRICK_ROOM); }
    }
}

AI_DOUBLE_BATTLE_TEST("Hard Trick Room: AI does not use Follow Me when partner does not know Trick Room")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_FOLLOW_ME) == EFFECT_FOLLOW_ME);
        AI_FLAGS(HARD_TRICK_ROOM_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_CELEBRATE); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_FOLLOW_ME, MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); Moves(MOVE_CELEBRATE, MOVE_SCRATCH); }
    } WHEN {
        TURN { NOT_EXPECT_MOVE(opponentLeft, MOVE_FOLLOW_ME); }
    }
}
