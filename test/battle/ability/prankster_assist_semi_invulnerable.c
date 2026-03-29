#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_ASSIST) == EFFECT_ASSIST);
    ASSUME(GetMoveCategory(MOVE_ASSIST) == DAMAGE_CATEGORY_STATUS);
    ASSUME(GetMoveEffect(MOVE_DIVE_CATS) == EFFECT_SEMI_INVULNERABLE);
    ASSUME(GetMoveCategory(MOVE_DIVE_CATS) != DAMAGE_CATEGORY_STATUS);
    ASSUME(!IsMoveAssistBanned(MOVE_DIVE_CATS));
    ASSUME(GetMoveEffect(MOVE_FLY_CATS) == EFFECT_SEMI_INVULNERABLE);
    ASSUME(GetMoveCategory(MOVE_FLY_CATS) != DAMAGE_CATEGORY_STATUS);
    ASSUME(!IsMoveAssistBanned(MOVE_FLY_CATS));
}

SINGLE_BATTLE_TEST("Prankster gives Assist +1 priority on turn 1, but not the called semi-invulnerable move on turn 2")
{
    enum Move move;
    PARAMETRIZE { move = MOVE_DIVE_CATS; }
    PARAMETRIZE { move = MOVE_FLY_CATS; }

    GIVEN {
        PLAYER(SPECIES_VOLBEAT) { Speed(5); Ability(ABILITY_PRANKSTER); Moves(MOVE_ASSIST, MOVE_NONE, MOVE_NONE, MOVE_NONE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(move, MOVE_NONE, MOVE_NONE, MOVE_NONE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); }
    } WHEN {
        TURN { MOVE(player, MOVE_ASSIST); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { SKIP_TURN(player); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        // Turn 1: Prankster boosts Assist to priority +1, so player moves first despite lower speed.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ASSIST, player);
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        // Turn 2: The locked semi-invulnerable move is not status, so Prankster does not apply.
        // Player has priority 0 and higher speed is opponent (10 > 5), so opponent moves first.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, move, player);
    }
}

SINGLE_BATTLE_TEST("Lagging Tail makes Prankster+Assist user move last on turn 1 within its priority bracket, and also applies on turn 2 of the called semi-invulnerable move")
{
    enum Move move;
    PARAMETRIZE { move = MOVE_DIVE_CATS; }
    PARAMETRIZE { move = MOVE_FLY_CATS; }

    GIVEN {
        PLAYER(SPECIES_VOLBEAT) { Speed(100); Ability(ABILITY_PRANKSTER); Item(ITEM_LAGGING_TAIL); Moves(MOVE_ASSIST, MOVE_NONE, MOVE_NONE, MOVE_NONE); }
        PLAYER(SPECIES_WOBBUFFET) { Moves(move, MOVE_NONE, MOVE_NONE, MOVE_NONE); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_ASSIST); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { SKIP_TURN(player); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        // Turn 1: Prankster boosts Assist to priority +1 (bracket +1).
        // Opponent uses Celebrate at priority 0. Player is in a higher bracket, so moves first
        // even though Lagging Tail makes it last within its bracket (only one mon in bracket +1).
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ASSIST, player);
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        // Turn 2: No Prankster (+0 priority). Both in bracket 0.
        // Lagging Tail makes player move last despite higher speed (100 vs 50).
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, move, player);
    }
}
