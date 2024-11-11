PetalburgCity_Gym_MapScripts::
# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_WallyNormanIntroNew
	.2byte 0


# 10 "data/maps/PetalburgCity_Gym/scripts.pory"

# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"

# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
//goto_if_eq VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_WallyNormanIntroNew
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"

# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
//PetalburgCity_Gym_MapScripts::
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script MAP_SCRIPT_ON_FRAME_TABLE, {
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
//		VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_WallyNormanIntroNew
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
//		}
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
//	end
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"

# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"

# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"

# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"

# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"

# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"

# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"

# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"

# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"

# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
//PetalburgCity_Gym_OnFrame:
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_eq VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_WallyNormanIntroNew
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
//	end
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"

# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
//	closemessage
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
//	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
//	waitmovement 0
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
//	playse SE_EXIT
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
//	removeobject LOCALID_WALLY
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
//	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
//	delay 30
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
//	waitmovement 0
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
//	setvar VAR_PETALBURG_GYM_STATE, 2
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
//	releaseall
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"

# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"

# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_NormanGoWest
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanPostBattle
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
//	closemessage
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
//	switch VAR_FACING
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"

# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"

# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"

# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"

# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"

# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"

# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"

# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"

# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"

# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"

# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"

# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"

# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"

# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"

# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"

# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"

# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
//PetalburgCity_Gym_EventScript_NormanPostBattle::
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
//	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
//	release
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
//	end
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"

# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"

# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"

# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"

# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"

# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"

# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"

# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"

# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"

# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"

# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"

# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"

# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"

# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"

# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"

# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"

# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"

# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"

# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"

# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"

# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"

# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"

# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"

# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"

# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"

# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"

# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"

# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"

# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"

# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"

# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"

# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"

# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"

# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"

# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"

# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"

# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"

# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"

# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"

# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"

# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"

# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"

# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"

# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"

# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"

# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"

# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"

# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"

# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"

# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"

# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"

# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"

# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"

# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"

# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"

# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"

# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"

# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"

# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"

# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"

# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"

# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"

# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"

# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"

# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"

# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"

# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"

# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"

# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"

# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"

# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?$"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I'm going to go stay with my\n"
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in VERDANTURF TOWN.\p"
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a POKéMON along.\p"
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a POKéMON before.\n"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I see.$"
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\n"
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with WALLY and make sure that he\n"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a POKéMON.$"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, I'll loan you my POKéMON.\p"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a ZIGZAGOON!$"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A POKéMON!\p"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I'll give you a POKé BALL, too.\n"
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a POKé BALL!$"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: So, did it work out?$"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your POKéMON back.\p"
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my POKéMON.\p"
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER, ROXANNE.\p"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other POKéMON\n"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a GYM LEADER, too.\n"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named BRAWLY.\p"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm…\n"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four GYM BADGES.\p"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON battle.\p"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a GYM LEADER to win.\p"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from DAD!$"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: With that BADGE, the DEFENSE\n"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of all your POKéMON will increase.\p"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON that know the HM move SURF\n"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be able to travel over water.\p"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is my gift to you. {PLAYER}, I'm\n"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sure you can use it correctly.$"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: TM42 contains FACADE.\p"
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the POKéMON is poisoned, paralyzed,\l"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: As the GYM LEADER, I can't\n"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our LEADER's kid.\p"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "LEADER's kid!$"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The GYM LEADER, your\n"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one POKéMON that is\n"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two POKéMON.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew::
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_0
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_1
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_2
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_ExclamationMark
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_WALLY, DIR_SOUTH
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_3
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_4
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_5
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_WALLY, DIR_NORTH
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_6
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_WALLY, DIR_SOUTH
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_7
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_WallyLeave
# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_PlayerApproachNorman
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 5
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_8
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_WallyLeave:
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_PlayerApproachNorman:
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
	step_end

PetalburgCity_Gym_EventScript_NormanGoWest::
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanGoWest_Text_0, MSGBOX_NPC
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle::
# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_0, MSGBOX_NPC
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_1, MSGBOX_YESNO
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_3
# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_4
	end

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_3:
# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_2, MSGBOX_NPC
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_4:
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NORMAN_1, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_3, PetalburgCity_Gym_NormanDefeatedText, PetalburgCity_Gym_EventScript_DefeatedNorman
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_NormanPostBattle::
# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_FacePlayer
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_0
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	dynmultichoice 25, 3, 0, 5, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_1, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_2, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_3, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_4, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_5
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1690 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_NormanPostBattle_3
# 1692 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_NormanPostBattle_4
# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanPostBattle_5
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanPostBattle_6
# 1708 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanPostBattle_7
# 1711 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
PetalburgCity_Gym_EventScript_NormanPostBattle_1:
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_NormanPostBattle_3:
# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_6, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_4:
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_7, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_5:
# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_8
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_6:
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_EEVEE_FROM_NORMAN, PetalburgCity_Gym_EventScript_NormanPostBattle_9
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_11, MSGBOX_YESNO
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCity_Gym_EventScript_NormanPostBattle_12
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_7:
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_12
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_9:
# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_9
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_10
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_12:
# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GiveEevee
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1


PetalburgCity_Gym_EventScript_DefeatedNorman::
# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_0, MSGBOX_NPC
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_1
# 1728 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1729 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1733 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1734 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 1737 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 3
# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 25
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_BRINEY_FONT_OF_DOOR
# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 1742 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_2, MSGBOX_NPC
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_3, MSGBOX_YESNO
# 1745 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_DefeatedNorman_3
# 1748 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_DefeatedNorman_4
PetalburgCity_Gym_EventScript_DefeatedNorman_1:
# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_5, MSGBOX_NPC
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_DefeatedNorman_3:
# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_4, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_DefeatedNorman_1

PetalburgCity_Gym_EventScript_DefeatedNorman_4:
# 1749 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveEevee
	goto PetalburgCity_Gym_EventScript_DefeatedNorman_1


PetalburgCity_Gym_EventScript_GiveEevee::
# 1757 "data/maps/PetalburgCity_Gym/scripts.pory"
	givemon SPECIES_EEVEE, 5, 0, 0, 0, 2
# 1758 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1759 "data/maps/PetalburgCity_Gym/scripts.pory"
	case MON_GIVEN_TO_PARTY, PetalburgCity_Gym_EventScript_GiveEevee_2
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
	case MON_GIVEN_TO_PC, PetalburgCity_Gym_EventScript_GiveEevee_3
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	case MON_CANT_GIVE, PetalburgCity_Gym_EventScript_GiveEevee_4
PetalburgCity_Gym_EventScript_GiveEevee_4:
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_1
	return

PetalburgCity_Gym_EventScript_GiveEevee_2:
# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_0
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknamePartyMon
# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_EEVEE_FROM_NORMAN
# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGaveEevee, MSGBOX_NPC
	return

PetalburgCity_Gym_EventScript_GiveEevee_3:
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_0
# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknameBoxMon
# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_EEVEE_FROM_NORMAN
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGaveEevee, MSGBOX_NPC
	return


PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_0:
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I finally did it! I won!$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_1:
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Well done, Wally.\p"
	.string "You've trained your Pokémon well, and\n"
	.string "today you commanded them skillfully.\p"
	.string "You are ready to take on the Hoenn\n"
	.string "League. I will let your parents know.\p"
	.string "$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_2:
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Thanks, Norman! I've learned a\n"
	.string "lot from battling you.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_3:
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Ah, {PLAYER}!\p"
	.string "It is wonderful to see you with Pokémon\n"
	.string "of your own.\p"
	.string "$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_4:
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me introduce you to Wally, a new\n"
	.string "trainer like yourself, from here in\l"
	.string "Petalburg.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_5:
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Hi, {PLAYER}! It's nice to meet\n"
	.string "you.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_6:
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Well, now that I've proven I'm\n"
	.string "ready, I'm finally going to leave\l"
	.string "Petalburg.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_7:
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Hopefully I see you around,\n"
	.string "{PLAYER}.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_8:
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: It makes me so proud that this\n"
	.string "moment has finally come, {PLAYER}. I\l"
	.string "would be honored to finally get the\l"
	.string "chance to have a Pokémon battle with\l"
	.string "my own child. Why don't you go out,\l"
	.string "catch a few more Pokémon, and prepare\l"
	.string "your team. Then come back, and I'll show\l"
	.string "you what a Gym Battle is like.$"

PetalburgCity_Gym_EventScript_NormanGoWest_Text_0:
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Why don't you try heading West to\n"
	.string "Route 104? You can't get to Rustboro\l"
	.string "City right now, but there are still many\l"
	.string "Pokémon to find along the way.$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_0:
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: So, {PLAYER}, have you found any\n"
	.string "more Pokémon?$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_1:
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you think you're ready for a Pokémon\n"
	.string "battle against me now?$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_2:
# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: I see. Well, come back when you're\n"
	.string "ready.$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_3:
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Excellent! Let's see what you've\n"
	.string "got!$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_0:
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Did you have another question for\n"
	.string "me, {PLAYER}?$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_1:
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Where To Go$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_2:
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Slaking$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_3:
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Retirement$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_4:
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gift Pokémon$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_5:
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nothing$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_6:
# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Unfortunately, the bridge to\n"
	.string "Rustboro City is down. However, my\l"
	.string "friend Mr. Briney can take you to\l"
	.string "Dewford to start the Gym Challenge\l"
	.string "there. He lives just West of Petalburg\l"
	.string "in Route 104 South.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_7:
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Ah, yes, many trainers are\n"
	.string "confused about the low-level Slaking.\l"
	.string "Well, it is my signature Pokémon, and\l"
	.string "even for new trainers it presents an\l"
	.string "interested challenge to manage. I\l"
	.string "found a strange seed in a faraway land\l"
	.string "that actually allows me to reduce the\l"
	.string "level of my Pokémon - I used this to\l"
	.string "weaken a Slaking after evolving it, so I\l"
	.string "could use it in battles against Trainers\l"
	.string "without a badge yet. I'll tell you more\l"
	.string "about this place I visited another time\l"
	.string "- I'd never seen Kecleon as strong as\l"
	.string "the ones that were there.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_8:
# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Yes, retiring is bittersweet, but I\n"
	.string "feel like I've found the perfect Trainer\l"
	.string "to replace me. I gave it a lot of\l"
	.string "thought, and I think they will do a\l"
	.string "great job. I'm really excited for you to\l"
	.string "meet them. It will take a little more\l"
	.string "time for them to return and get the gym\l"
	.string "set up, but I will call you when they do.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_9:
# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That Pokémon is an Eevee. It's a\n"
	.string "special Normal-type Pokémon that can\l"
	.string "evolve a variety of different ways\l"
	.string "based on what rare stone you give it.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_10:
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That one is extra special, as it\n"
	.string "possesses a rare ability. Based on the\l"
	.string "stone you give it, it will influence the\l"
	.string "environment around it. Not many\l"
	.string "Pokémon can do this. I trust you'll\l"
	.string "decide wisely how to train this Eevee.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_11:
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Are you ready to take the special\n"
	.string "Pokémon now?$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_12:
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Alright then {PLAYER}, if there's\n"
	.string "nothing else, I'll just wish you good\l"
	.string "luck.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_0:
# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That was an impressive battle,\n"
	.string "{PLAYER}. You've defeated a Gym\l"
	.string "Leader.\p"
	.string "Unfortunately, because I'm in the\n"
	.string "process of retiring, I cannot give you\l"
	.string "or Wally a badge.\p"
	.string "However, I can now say you are ready to\n"
	.string "take on the Hoenn League.\p"
	.string "I have a friend, Mr. Briney, who lives out\n"
	.string "to the West of Petalburg. He can take\l"
	.string "you to the next step in your journey.\p"
	.string "Oh, you've already met? Wonderful. I'll\n"
	.string "give him a call and ask him to take you\l"
	.string "to Dewford once you're ready.\p"
	.string "Speaking of which, I want to give you\n"
	.string "this.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_1:
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Received PokéNAV!$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_2:
# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: This is a PokéNAV. It's a device\n"
	.string "that allows you to keep in touch with\l"
	.string "other trainers you've met, and even call\l"
	.string "me or your Mother while you're out on\l"
	.string "your journey.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_3:
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: One last thing. To celebrate you\n"
	.string "becoming a Pokémon Trainer, I want to\l"
	.string "give you a special Pokémon. Are you\l"
	.string "ready to take it now?$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_4:
# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That's fine. Just come back for it\n"
	.string "whenever you're ready.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_5:
# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Well, {PLAYER}, I think that's\n"
	.string "everything. I'm so proud of you. Good\l"
	.string "luck.$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_0:
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Received Eevee.$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_1:
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: You have too many Pokémon to receive Eevee.$"

PetalburgCity_Gym_NormanDefeatedText::
# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy to have finally had the\n"
	.string "chance to battle you, {PLAYER}. I'm so\l"
	.string "proud.$"

PetalburgCity_Gym_Text_NormanGaveEevee::
# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Here you go, {PLAYER}.\p"
	.string "This is an Eevee. It's a special\n"
	.string "Normal-type Pokémon that can evolve a\l"
	.string "variety of different ways based on\l"
	.string "what rare stone you give it.\p"
	.string "This one is extra special, as it\n"
	.string "possesses a rare ability. Based on the\l"
	.string "stone you give it, it will influence the\l"
	.string "environment around it.\p"
	.string "Not many Pokémon can do this. I trust\n"
	.string "you'll decide wisely how to train this\l"
	.string "Eevee.$"
