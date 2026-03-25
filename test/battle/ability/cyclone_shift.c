#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Cyclone Shift creates strong winds when entering the battle")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_CYCLONE_SHIFT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_CYCLONE_SHIFT);
        MESSAGE("Mysterious strong winds are protecting Flying-type Pokémon!");
    }
}

SINGLE_BATTLE_TEST("Cyclone Shift removes Flying-type weaknesses", s16 damage)
{
    bool32 cycloneShift;

    PARAMETRIZE { cycloneShift = FALSE; }
    PARAMETRIZE { cycloneShift = TRUE; }

    GIVEN {
        ASSUME(GetMoveType(MOVE_THUNDER_SHOCK) == TYPE_ELECTRIC);
        ASSUME(GetSpeciesType(SPECIES_PIDGEY, 0) == TYPE_NORMAL);
        ASSUME(GetSpeciesType(SPECIES_PIDGEY, 1) == TYPE_FLYING);
        if (cycloneShift)
            PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_CYCLONE_SHIFT); }
        else
            PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIDGEY) { Moves(MOVE_THUNDER_SHOCK); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_THUNDER_SHOCK, target: player); }
    } SCENE {
        if (cycloneShift)
            MESSAGE("The mysterious strong winds weakened the attack!");
    }
}

SINGLE_BATTLE_TEST("Cyclone Shift does not prevent other weather from being set")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_CYCLONE_SHIFT); Moves(MOVE_CELEBRATE); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_RAIN_DANCE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_CYCLONE_SHIFT);
        MESSAGE("Mysterious strong winds are protecting Flying-type Pokémon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAIN_DANCE, opponent);
        MESSAGE("It started to rain!");
    } THEN {
        EXPECT(gFieldStatuses & STATUS_FIELD_CYCLONE_SHIFT);
        EXPECT(gBattleWeather & B_WEATHER_RAIN_NORMAL);
    }
}

SINGLE_BATTLE_TEST("Cyclone Shift is suppressed by Cloud Nine")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_ICE_BEAM) == TYPE_ICE);
        ASSUME(GetSpeciesType(SPECIES_PIDGEY, 0) == TYPE_NORMAL);
        ASSUME(GetSpeciesType(SPECIES_PIDGEY, 1) == TYPE_FLYING);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_CYCLONE_SHIFT); }
        OPPONENT(SPECIES_GOLDUCK) { Ability(ABILITY_CLOUD_NINE); Moves(MOVE_ICE_BEAM); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_ICE_BEAM, target: player); }
    } SCENE {
        NOT MESSAGE("The mysterious strong winds weakened the attack!");
    }
}

DOUBLE_BATTLE_TEST("Cyclone Shift strong winds persist as long as a Pokémon with it is on the field")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_CYCLONE_SHIFT); HP(1); }
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_CYCLONE_SHIFT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SCRATCH, target: playerLeft); SEND_OUT(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponentLeft);
        HP_BAR(playerLeft, hp: 0);
        MESSAGE("Wobbuffet fainted!");
        SEND_IN_MESSAGE("Wobbuffet");
        NOT MESSAGE("The mysterious strong winds have dissipated!");
    } THEN {
        EXPECT(gFieldStatuses & STATUS_FIELD_CYCLONE_SHIFT);
    }
}

DOUBLE_BATTLE_TEST("Cyclone Shift doesn't activate if strong winds are already present")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_CYCLONE_SHIFT); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_CYCLONE_SHIFT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(playerLeft, 2); }
    } SCENE {
        ABILITY_POPUP(opponentLeft, ABILITY_CYCLONE_SHIFT);
        MESSAGE("Mysterious strong winds are protecting Flying-type Pokémon!");
        NONE_OF {
            ABILITY_POPUP(playerLeft, ABILITY_CYCLONE_SHIFT);
        }
    }
}
