#include "global.h"
#include "test/battle.h"

// AI_FLAG_ILLUSION_TRICKS: when the AI is about to send out its benched Illusion mon (or the mon
// Illusion would disguise it as), there is a SHOULD_ILLUSION_TRICK% chance it sends out the other
// one instead, creating uncertainty about which Pokémon was 'really' sent out.

#define ILLUSION_TRICKS_BASIC_FLAGS (AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY)

AI_SINGLE_BATTLE_TEST("AI_FLAG_ILLUSION_TRICKS: AI sometimes sends the back mon instead of the Illusion mon after a KO")
{
    PASSES_RANDOMLY(SHOULD_ILLUSION_TRICK, 100, RNG_AI_ILLUSION_TRICK);
    GIVEN {
        ASSUME(GetMoveCategory(MOVE_CELEBRATE) == DAMAGE_CATEGORY_STATUS);
        AI_FLAGS(ILLUSION_TRICKS_BASIC_FLAGS | AI_FLAG_ILLUSION_TRICKS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ZOROARK) { Ability(ABILITY_ILLUSION); Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); } // No damaging move, so the AI would normally pick Zoroark
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_ILLUSION_TRICKS: AI sometimes sends the Illusion mon instead of the back mon after a KO")
{
    PASSES_RANDOMLY(SHOULD_ILLUSION_TRICK, 100, RNG_AI_ILLUSION_TRICK);
    GIVEN {
        ASSUME(GetMoveCategory(MOVE_CELEBRATE) == DAMAGE_CATEGORY_STATUS);
        AI_FLAGS(ILLUSION_TRICKS_BASIC_FLAGS | AI_FLAG_ILLUSION_TRICKS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ZOROARK) { Ability(ABILITY_ILLUSION); Moves(MOVE_CELEBRATE); } // No damaging move, so the AI would normally pick Wynaut
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_SCRATCH); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); EXPECT_SEND_OUT(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_ILLUSION_TRICKS: swap also applies to mid-turn switches")
{
    PASSES_RANDOMLY(SHOULD_ILLUSION_TRICK, 100, RNG_AI_ILLUSION_TRICK);
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_U_TURN) == EFFECT_HIT_ESCAPE);
        AI_FLAGS(ILLUSION_TRICKS_BASIC_FLAGS | AI_FLAG_ILLUSION_TRICKS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_U_TURN); }
        OPPONENT(SPECIES_ZOROARK) { Ability(ABILITY_ILLUSION); Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); } // No damaging move, so the AI would normally pick Zoroark
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_U_TURN); EXPECT_SEND_OUT(opponent, 2); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_ILLUSION_TRICKS: AI without the flag always sends its preferred mon")
{
    GIVEN {
        AI_FLAGS(ILLUSION_TRICKS_BASIC_FLAGS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ZOROARK) { Ability(ABILITY_ILLUSION); Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); EXPECT_SEND_OUT(opponent, 1); }
    }
}

AI_SINGLE_BATTLE_TEST("AI_FLAG_ILLUSION_TRICKS: no swap when the AI has no benched Illusion mon")
{
    GIVEN {
        AI_FLAGS(ILLUSION_TRICKS_BASIC_FLAGS | AI_FLAG_ILLUSION_TRICKS);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ZIGZAGOON) { Moves(MOVE_SCRATCH); }
        OPPONENT(SPECIES_WYNAUT) { Moves(MOVE_CELEBRATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); EXPECT_SEND_OUT(opponent, 1); }
    }
}
