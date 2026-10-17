#include "global.h"
#include "test/battle.h"

// Covers TryRestoreHeldItems: items taken by the opponent are returned after battle, items the holder used up are not.

SINGLE_BATTLE_TEST("Held items knocked off by a trainer are restored after battle")
{
    GIVEN {
        ASSUME(B_KNOCK_OFF_REMOVAL >= GEN_5);
        ASSUME(GetMoveEffect(MOVE_KNOCK_OFF) == EFFECT_KNOCK_OFF);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_LEFTOVERS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_KNOCK_OFF); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_LEFTOVERS);
    }
}

SINGLE_BATTLE_TEST("Held items swapped away by a trainer's Trick are restored after battle")
{
    GIVEN {
        ASSUME(B_TRAINERS_KNOCK_OFF_ITEMS == TRUE);
        ASSUME(GetMoveEffect(MOVE_TRICK) == EFFECT_TRICK);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_CHOICE_SCARF); }
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_LAGGING_TAIL); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TRICK); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_LAGGING_TAIL);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_CHOICE_SCARF);
    }
}

SINGLE_BATTLE_TEST("Held items stolen by a trainer's Thief are restored after battle")
{
    GIVEN {
        ASSUME(B_TRAINERS_KNOCK_OFF_ITEMS == TRUE);
        ASSUME(GetMoveEffect(MOVE_THIEF) == EFFECT_STEAL_ITEM);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_LEFTOVERS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_THIEF); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_LEFTOVERS);
    }
}

SINGLE_BATTLE_TEST("Held items melted by Corrosive Gas are restored after battle")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_CORROSIVE_GAS) == EFFECT_CORROSIVE_GAS);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_LEFTOVERS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CORROSIVE_GAS); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_LEFTOVERS);
    }
}

SINGLE_BATTLE_TEST("Berries eaten by an opponent's Pluck are restored after battle")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_PLUCK, MOVE_EFFECT_BUG_BITE));
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_SITRUS_BERRY); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PLUCK); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_SITRUS_BERRY);
    }
}

SINGLE_BATTLE_TEST("Consumed held items are not restored after battle")
{
    GIVEN {
        ASSUME(B_RESTORE_HELD_BATTLE_ITEMS < GEN_9);
        ASSUME(gItemsInfo[ITEM_WHITE_HERB].holdEffect == HOLD_EFFECT_WHITE_HERB);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_GROWL); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Popped Air Balloons are not restored after battle")
{
    GIVEN {
        ASSUME(B_RESTORE_HELD_BATTLE_ITEMS < GEN_9);
        ASSUME(gItemsInfo[ITEM_AIR_BALLOON].holdEffect == HOLD_EFFECT_AIR_BALLOON);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_AIR_BALLOON); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Pickup recovers its own consumed held item after battle")
{
    GIVEN {
        ASSUME(B_RESTORE_HELD_BATTLE_ITEMS < GEN_9);
        ASSUME(gItemsInfo[ITEM_WHITE_HERB].holdEffect == HOLD_EFFECT_WHITE_HERB);
        PLAYER(SPECIES_MEOWTH) { Ability(ABILITY_PICKUP); Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_GROWL); }
    } THEN {
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_WHITE_HERB);
    }
}

SINGLE_BATTLE_TEST("Items received from a trainer's Trick after consuming the original item are not kept after battle")
{
    GIVEN {
        ASSUME(B_TRAINERS_KNOCK_OFF_ITEMS == TRUE);
        ASSUME(B_RETURN_STOLEN_NPC_ITEMS >= GEN_5);
        ASSUME(B_RESTORE_HELD_BATTLE_ITEMS < GEN_9);
        ASSUME(gItemsInfo[ITEM_WHITE_HERB].holdEffect == HOLD_EFFECT_WHITE_HERB);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_LAGGING_TAIL); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_GROWL); }
        TURN { MOVE(opponent, MOVE_TRICK); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_LAGGING_TAIL);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Knocking off a received item does not restore an original item that was consumed")
{
    GIVEN {
        ASSUME(B_TRAINERS_KNOCK_OFF_ITEMS == TRUE);
        ASSUME(B_KNOCK_OFF_REMOVAL >= GEN_5);
        ASSUME(B_RESTORE_HELD_BATTLE_ITEMS < GEN_9);
        ASSUME(gItemsInfo[ITEM_WHITE_HERB].holdEffect == HOLD_EFFECT_WHITE_HERB);
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_WHITE_HERB); }
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_LAGGING_TAIL); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_GROWL); }
        TURN { MOVE(opponent, MOVE_TRICK); }
        TURN { MOVE(opponent, MOVE_KNOCK_OFF); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Items the player steals from a trainer with Thief are returned after battle")
{
    GIVEN {
        ASSUME(B_RETURN_STOLEN_NPC_ITEMS >= GEN_5);
        ASSUME(GetMoveEffect(MOVE_THIEF) == EFFECT_STEAL_ITEM);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_LEFTOVERS); }
    } WHEN {
        TURN { MOVE(player, MOVE_THIEF); }
    } THEN {
        EXPECT_EQ(player->item, ITEM_LEFTOVERS);
        EXPECT_EQ(GetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_HELD_ITEM), ITEM_NONE);
    }
}
