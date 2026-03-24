#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_DARK_VOID) == EFFECT_DARK_VOID);
}

SINGLE_BATTLE_TEST("Dark Void inflicts 1-3 turns of sleep")
{
    u32 turns, count;
    ASSUME(B_SLEEP_TURNS >= GEN_5);
    PARAMETRIZE { turns = 1; }
    PARAMETRIZE { turns = 2; }
    PARAMETRIZE { turns = 3; }
    PASSES_RANDOMLY(1, 3, RNG_SLEEP_TURNS);
    GIVEN {
        PLAYER(SPECIES_DARKRAI);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DARK_VOID); MOVE(opponent, MOVE_CELEBRATE); }
        for (count = 0; count < turns; ++count)
            TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DARK_VOID, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("The opposing Wobbuffet fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        for (count = 0; count < turns; ++count)
        {
            if (count < turns - 1)
                MESSAGE("The opposing Wobbuffet is fast asleep.");
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        }
        MESSAGE("The opposing Wobbuffet woke up!");
        STATUS_ICON(opponent, none: TRUE);
    }
}

TO_DO_BATTLE_TEST("Dark Void can only be used by Darkrai (Gen7+)");
TO_DO_BATTLE_TEST("Dark Void can be used by Pokémon other than Darkrai (Gen4-6)");
TO_DO_BATTLE_TEST("Dark Void can be used by a Pokémon transformed into Darkrai");

SINGLE_BATTLE_TEST("Dark Void has 80 accuracy when used by Darkrai")
{
    PASSES_RANDOMLY(80, 100, RNG_ACCURACY);
    GIVEN {
        PLAYER(SPECIES_DARKRAI);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DARK_VOID); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DARK_VOID, player);
    }
}

SINGLE_BATTLE_TEST("Dark Void has 50 accuracy when used by a non-Darkrai Pokemon")
{
    PASSES_RANDOMLY(50, 100, RNG_ACCURACY);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_DARK_VOID); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DARK_VOID); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DARK_VOID, player);
    }
}

SINGLE_BATTLE_TEST("Dark Void has 80 accuracy when used by a Pokemon transformed into Darkrai")
{
    PASSES_RANDOMLY(80, 100, RNG_ACCURACY);
    GIVEN {
        PLAYER(SPECIES_DITTO) { Moves(MOVE_TRANSFORM); }
        OPPONENT(SPECIES_DARKRAI) { Moves(MOVE_DARK_VOID); }
    } WHEN {
        TURN { MOVE(player, MOVE_TRANSFORM); }
        TURN { MOVE(player, MOVE_DARK_VOID); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRANSFORM, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DARK_VOID, player);
    }
}
