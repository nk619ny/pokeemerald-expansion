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


# 22 "data/maps/PetalburgCity_Gym/scripts.pory"

# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
//.set LOCALID_PETALBURG_GYM_NORMAN, 1
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
//.set LOCALID_PETALBURG_GYM_WALLY, 10
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
//.set LOCALID_PETALBURG_GYM_WALLYS_DAD, 11
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"

# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
//goto_if_eq VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_WallyNormanIntroNew
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"

# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
//PetalburgCity_Gym_MapScripts::
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script MAP_SCRIPT_ON_FRAME_TABLE, {
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
//		VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_WallyNormanIntroNew
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
//		}
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
//	end
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"

# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"

# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	//call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	//call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	//call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	//call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	//call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	//call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
	//call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"

# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_CloseMischiefRoomDoors
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_CloseSacrificeRoomDoors
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_CloseNightmareRoomDoors
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_CloseNecromancyRoomDoors
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_CloseAvariceRoomDoors
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"

# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"

# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"

# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"

# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"

# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"

# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"

# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
//PetalburgCity_Gym_OnFrame:
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_eq VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_WallyNormanIntroNew
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
//	end
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
//	closemessage
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
//	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
//	waitmovement 0
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
//	playse SE_EXIT
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
//	removeobject LOCALID_PETALBURG_GYM_WALLY
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
//	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
//	delay 30
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
//	waitmovement 0
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
//	setvar VAR_PETALBURG_GYM_STATE, 2
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
//	releaseall
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"

# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"

# 129 "data/maps/PetalburgCity_Gym/scripts.pory"

# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	//vsseeker_rematchid TRAINER_NORMAN_1
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_NormanGoWest
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanPostBattle
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
//	closemessage
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
//	switch VAR_FACING
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"

# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"

# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"

# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"

# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"

# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"

# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"

# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"

# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"

# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"

# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"

# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"

# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"

# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"

# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_WalkInPlaceFasterDown
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"

# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"

# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"

# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"

# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"

# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"

# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"

# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
//PetalburgCity_Gym_EventScript_NormanPostBattle::
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
//	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
//	release
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
//	end
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"

# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"

# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"

# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"

# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"

# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"

# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_KNOCK_OFF
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"

# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"

# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"

# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"

# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"

# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"

# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"

# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"

# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"

# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"

# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"

# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"

# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"

# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"

# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"

# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"

# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"

# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"

# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"

# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"

# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"

# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"

# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"

# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"

# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"

# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"

# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"

# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"

# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"

# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"

# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"

# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"

# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"

# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"

# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MischiefRoomDoor::
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 26
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterMischiefRoom, MSGBOX_YESNO
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"

# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"

# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"

# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"

# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeaderDoorLocked::
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LeaderDoorLocked, MSGBOX_DEFAULT
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"

# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SacrificeRoomDoor::
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 42
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSacrificeRoom, MSGBOX_YESNO
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"

# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftNecromancyRoomDoor::
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 42
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterNecromancyRoom, MSGBOX_YESNO
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"

# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightNecromancyRoomDoor::
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 48
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterNecromancyRoom, MSGBOX_YESNO
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"

# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftNightmareRoomDoor::
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 22
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterNightmareRoom, MSGBOX_YESNO
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"

# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightNightmareRoomDoor::
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 26
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterNightmareRoom, MSGBOX_YESNO
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"

# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"

# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"

# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"

# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftAvariceRoomDoor::
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 22
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAvariceRoom, MSGBOX_YESNO
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"

# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightAvariceRoomDoor::
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 26
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAvariceRoom, MSGBOX_YESNO
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"

# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NewGymLeadersRoomDoor::
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_LeaderDoorLocked
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_LeaderDoorLocked
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_LeaderDoorLocked
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_LeaderDoorLocked
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_LeaderDoorLocked
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 33
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"

# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"

# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"

# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"

# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"

# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"

# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"

# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"

# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"

# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"

# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"

# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"

# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"

# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"

# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"

# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CloseMischiefRoomDoors::
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 21, 92, 0x220, TRUE
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 21, 91, 0x218, TRUE
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 27, 92, 0x220, TRUE
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 27, 91, 0x218, TRUE
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 66, 0x220, TRUE //leader door
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 65, 0x218, TRUE //leader door
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CloseSacrificeRoomDoors::
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 41, 92, 0x220, TRUE
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 41, 91, 0x218, TRUE
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 47, 92, 0x220, TRUE
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 47, 91, 0x218, TRUE
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 66, 0x220, TRUE //leader door
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 65, 0x218, TRUE //leader door
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CloseNightmareRoomDoors::
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 27, 79, 0x220, TRUE
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 27, 78, 0x218, TRUE
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 66, 0x220, TRUE //leader door
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 65, 0x218, TRUE //leader door
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CloseNecromancyRoomDoors::
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 41, 79, 0x220, TRUE
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 41, 78, 0x218, TRUE
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 66, 0x220, TRUE //leader door
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 65, 0x218, TRUE //leader door
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CloseAvariceRoomDoors::
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 66, 0x220, TRUE //leader door
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 24, 65, 0x218, TRUE //leader door
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?$"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I'm going to go stay with my\n"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in VERDANTURF TOWN.\p"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I see.$"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\n"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with WALLY and make sure that he\n"
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, I'll loan you my Pokémon.\p"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a ZIGZAGOON!$"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!\p"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I'll give you a POKé BALL, too.\n"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a POKé BALL!$"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: So, did it work out?$"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER, ROXANNE.\p"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a GYM LEADER, too.\n"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon GYM in RUSTBORO CITY?\p"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named BRAWLY.\p"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm…\n"
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four GYM BADGES.\p"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon battle.\p"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a GYM LEADER to win.\p"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Vito!$"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: As the GYM LEADER, I can't\n"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of Pokémon is deep.\p"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome a\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "new Leader at the top of their!\n"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "game! That's amazing!$"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
/*
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our LEADER's kid.\p"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's ATTACK power will be\n"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "last LEADER's kid!$"
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The new GYM LEADER\n"
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "is waiting!$"
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
*/
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterMischiefRoom:
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“MISCHIEF ROOM,” the sign says.\p"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSacrificeRoom:
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SACRIFICE ROOM,” the sign says.\p"
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterNecromancyRoom:
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“NECROMANCY ROOM,” the sign says.\p"
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterNightmareRoom:
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“NIGHTMARE ROOM,” the sign says.\p"
# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAvariceRoom:
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“AVARICE ROOM,” the sign says.\p"
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what Pokémon await\n"
# 1675 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1680 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1681 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "VITO'S CERTIFIED TRAINERS:\n"
# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1690 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1692 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1701 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1702 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1706 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1707 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1708 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1710 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1711 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1712 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1717 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon that is\n"
# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1721 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1723 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Vito_PostBattle::
# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_TRAINER_HILL_STATE, 5
# 1728 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 56
# 1729 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems5
# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1733 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 1734 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 1737 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 1742 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 1 //TempVar_Vito_Dialogue 
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1745 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1748 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 1749 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1750 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Vito_GoodLuck, MSGBOX_NPC
# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
	end

PetalburgCity_Gym_EventScript_WallyNormanIntroNew::
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_ExclamationMark
# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_0
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_1
# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_2
# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_ExclamationMark
# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PETALBURG_GYM_WALLY, DIR_SOUTH
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_3
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_4
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_5
# 1776 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PETALBURG_GYM_WALLY, DIR_NORTH
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_6
# 1779 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PETALBURG_GYM_WALLY, DIR_SOUTH
# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_7
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1783 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 1784 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_WallyLeave
# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1786 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 1787 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1788 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_PlayerApproachNorman
# 1789 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1790 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 5
# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_8
# 1792 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1793 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 1794 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 1797 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


# 1802 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_WallyLeave:
# 1803 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

# 1807 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_PlayerApproachNorman:
# 1808 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1808 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1808 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
	step_end

PetalburgCity_Gym_EventScript_NormanGoWest::
# 1812 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1813 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanGoWest_Text_0, MSGBOX_NPC
# 1814 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle::
# 1820 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1821 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_0, MSGBOX_NPC
# 1822 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_1, MSGBOX_YESNO
# 1823 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1824 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_3
# 1828 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_4
	end

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_3:
# 1825 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_2, MSGBOX_NPC
# 1826 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_4:
# 1829 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NORMAN_1, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_3, PetalburgCity_Gym_NormanDefeatedText, PetalburgCity_Gym_EventScript_DefeatedNorman
# 1830 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_NormanPostBattle::
# 1837 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1838 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_FacePlayer
# 1839 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_0
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"
	dynmultichoice 25, 2, 0, 5, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_1, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_2, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_3, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_4, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_5
# 1841 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1842 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_NormanPostBattle_3
# 1844 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_NormanPostBattle_4
# 1846 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanPostBattle_5
# 1848 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanPostBattle_6
# 1860 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanPostBattle_7
# 1863 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
PetalburgCity_Gym_EventScript_NormanPostBattle_1:
# 1865 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1866 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_NormanPostBattle_3:
# 1843 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_6, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_4:
# 1845 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_7, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_5:
# 1847 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_8
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_6:
# 1849 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_EEVEE_FROM_NORMAN, PetalburgCity_Gym_EventScript_NormanPostBattle_9
# 1855 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_11, MSGBOX_YESNO
# 1856 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCity_Gym_EventScript_NormanPostBattle_12
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_7:
# 1861 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_12
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_9:
# 1850 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_9
# 1851 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1852 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_10
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_12:
# 1857 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GiveEevee
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1


PetalburgCity_Gym_EventScript_DefeatedNorman::
# 1876 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1877 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_RemoveOptionalItems0
# 1878 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 21
# 1879 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 1880 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 1886 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_0, MSGBOX_DEFAULT
# 1887 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_SWIFT
# 1888 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1889 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_1, MSGBOX_NPC
# 1890 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1891 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_2
# 1892 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1893 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1894 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_NORMAN_INTRO
# 1895 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 1896 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 1897 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 1898 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 1899 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1900 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1901 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 1902 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1903 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 1904 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 3
# 1905 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1906 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 2
# 1907 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_BRINEY_FONT_OF_DOOR
# 1908 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 1909 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 1910 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_3, MSGBOX_NPC
# 1911 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_4, MSGBOX_YESNO
# 1912 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1913 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_DefeatedNorman_3
# 1915 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_DefeatedNorman_4
PetalburgCity_Gym_EventScript_DefeatedNorman_1:
# 1918 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_6, MSGBOX_NPC
# 1919 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_DefeatedNorman_3:
# 1914 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_5, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_DefeatedNorman_1

PetalburgCity_Gym_EventScript_DefeatedNorman_4:
# 1916 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveEevee
	goto PetalburgCity_Gym_EventScript_DefeatedNorman_1


PetalburgCity_Gym_EventScript_GiveEevee::
# 1924 "data/maps/PetalburgCity_Gym/scripts.pory"
	givemon SPECIES_EEVEE, 5, 0, 0, 0, 2
# 1925 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1926 "data/maps/PetalburgCity_Gym/scripts.pory"
	case MON_GIVEN_TO_PARTY, PetalburgCity_Gym_EventScript_GiveEevee_2
# 1933 "data/maps/PetalburgCity_Gym/scripts.pory"
	case MON_GIVEN_TO_PC, PetalburgCity_Gym_EventScript_GiveEevee_3
# 1940 "data/maps/PetalburgCity_Gym/scripts.pory"
	case MON_CANT_GIVE, PetalburgCity_Gym_EventScript_GiveEevee_4
PetalburgCity_Gym_EventScript_GiveEevee_4:
# 1942 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_1
	return

PetalburgCity_Gym_EventScript_GiveEevee_2:
# 1927 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1928 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_0
# 1929 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1930 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknamePartyMon
# 1931 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_EEVEE_FROM_NORMAN
# 1932 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGaveEevee, MSGBOX_NPC
	return

PetalburgCity_Gym_EventScript_GiveEevee_3:
# 1934 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1935 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_0
# 1936 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1937 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknameBoxMon
# 1938 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_EEVEE_FROM_NORMAN
# 1939 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGaveEevee, MSGBOX_NPC
	return


PetalburgCity_Gym_EventScript_Vito::
# 1951 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1952 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1953 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Vito_2
# 1955 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VITO, PetalburgCity_Gym_Text_Vito_Intro, PetalburgCity_Gym_Text_Vito_BattleOutro, PetalburgCity_Gym_EventScript_Vito_PostBattle
PetalburgCity_Gym_EventScript_Vito_1:
# 1957 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_Vito_2:
# 1953 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge
	goto PetalburgCity_Gym_EventScript_Vito_1


PetalburgCity_Gym_EventScript_Vito_GymBattle::
	return


PetalburgCity_Gym_EventScript_Vito_PostBadge::
# 1975 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PetalburgCity_Gym_EventScript_Vito_PostBadge_2
PetalburgCity_Gym_EventScript_Vito_PostBadge_1:
# 1980 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_TEMP_3
# 1981 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_Vito_PostBadge_6
# 1984 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_Vito_PostBadge_7
# 1987 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_Vito_PostBadge_8
PetalburgCity_Gym_EventScript_Vito_PostBadge_4:
# 1991 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1992 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_Vito_PostBadge_2:
# 1976 "data/maps/PetalburgCity_Gym/scripts.pory"
	random 3
# 1977 "data/maps/PetalburgCity_Gym/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1978 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge_1

PetalburgCity_Gym_EventScript_Vito_PostBadge_6:
# 1982 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Vito_DarkUnderrepresented, MSGBOX_NPC
# 1983 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge_4

PetalburgCity_Gym_EventScript_Vito_PostBadge_7:
# 1985 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Vito_TooManyLegendaries, MSGBOX_NPC
# 1986 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge_4

PetalburgCity_Gym_EventScript_Vito_PostBadge_8:
# 1988 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Vito_OweWinstrateFamily, MSGBOX_NPC
# 1989 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge_4


PetalburgCity_Gym_EventScript_Vito_Rematch::
# 1997 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_0:
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I finally did it! I won!$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_1:
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Well done, Wally.\p"
	.string "You've trained your Pokémon well, and\n"
	.string "today you commanded them skillfully.\p"
	.string "You are ready to take on the Hoenn\n"
	.string "League. I will let your parents know.\p"
	.string "$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_2:
# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Thanks, Norman! I've learned a\n"
	.string "lot from battling you.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_3:
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Ah, {PLAYER}!\p"
	.string "It is wonderful to see you with Pokémon\n"
	.string "of your own.\p"
	.string "$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_4:
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me introduce you to Wally, a new\n"
	.string "trainer like yourself, from here in\l"
	.string "Petalburg.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_5:
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Hi, {PLAYER}! It's nice to meet\n"
	.string "you.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_6:
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Well, now that I've proven I'm\n"
	.string "ready, I'm finally going to leave\l"
	.string "Petalburg.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_7:
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Hopefully I see you around,\n"
	.string "{PLAYER}.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_8:
# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: It makes me so proud that this\n"
	.string "moment has finally come, {PLAYER}. I\l"
	.string "would be honored to finally get the\l"
	.string "chance to have a Pokémon battle with\l"
	.string "my own child. Why don't you go out,\l"
	.string "catch a few more Pokémon, and prepare\l"
	.string "your team. Then come back, and I'll show\l"
	.string "you what a Gym Battle is like.$"

PetalburgCity_Gym_EventScript_NormanGoWest_Text_0:
# 1813 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Why don't you try heading West to\n"
	.string "Route 104? You can't get to Rustboro\l"
	.string "City right now, but there are still many\l"
	.string "Pokémon to find along the way.$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_0:
# 1821 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: So, {PLAYER}, have you found any\n"
	.string "more Pokémon?$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_1:
# 1822 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you think you're ready for a Pokémon\n"
	.string "battle against me now?$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_2:
# 1825 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: I see. Well, come back when you're\n"
	.string "ready.$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_3:
# 1829 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Excellent! Let's see what you've\n"
	.string "got!$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_0:
# 1839 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Did you have another question for\n"
	.string "me, {PLAYER}?$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_1:
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Where To Go$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_2:
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Slaking$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_3:
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Retirement$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_4:
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gift Pokémon$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_5:
# 1840 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nothing$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_6:
# 1843 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Unfortunately, the bridge to\n"
	.string "Rustboro City is down.\p"
	.string "However, my friend Mr. Briney can take\n"
	.string "you to Dewford to start the Gym\l"
	.string "Challenge there.\p"
	.string "He lives just West of Petalburg in\n"
	.string "Route 104 South.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_7:
# 1845 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Ah, yes, many trainers are\n"
	.string "confused about the low-level Slaking.\p"
	.string "Well, it is my signature Pokémon, and\n"
	.string "even for new trainers it presents an\l"
	.string "interested challenge to manage.\p"
	.string "I found a strange seed in a faraway\n"
	.string "land that actually allows me to reduce\l"
	.string "the level of my Pokémon - I used this to\l"
	.string "weaken a Slaking after evolving it, so I\l"
	.string "could use it in battles against Trainers\l"
	.string "without a badge yet.\p"
	.string "I'll tell you more about this place I\n"
	.string "visited another time - I'd never seen\l"
	.string "Kecleon as strong as the ones that\l"
	.string "were there.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_8:
# 1847 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Yes, retiring is bittersweet, but I\n"
	.string "feel like I've found the perfect Trainer\l"
	.string "to replace me. I gave it a lot of\l"
	.string "thought, and I think they will do a\l"
	.string "great job.\p"
	.string "I'm really excited for you to meet them.\n"
	.string "It will take a little more time for them\l"
	.string "to return and get the gym set up, but I\l"
	.string "will call you when they do.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_9:
# 1850 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That Pokémon is an Eevee. It's a\n"
	.string "special Normal-type Pokémon that can\l"
	.string "evolve a variety of different ways\l"
	.string "based on what rare stone you give it.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_10:
# 1852 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That one is extra special, as it\n"
	.string "possesses a rare ability.\p"
	.string "Based on the stone you give it, it will\n"
	.string "influence the environment around it.\p"
	.string "Not many Pokémon can do this. I trust\n"
	.string "you'll decide wisely how to train this\l"
	.string "Eevee.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_11:
# 1855 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Are you ready to take the special\n"
	.string "Pokémon now?$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_12:
# 1861 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Alright then {PLAYER}, if there's\n"
	.string "nothing else, I'll just wish you good\l"
	.string "luck.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_0:
# 1886 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That was an impressive battle,\n"
	.string "{PLAYER}. You've defeated a Gym\l"
	.string "Leader.\p"
	.string "Traditionally, when this happens, one\n"
	.string "will give you a TM. I'd like you to have\l"
	.string "this.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_1:
# 1889 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Unfortunately, because I'm in the\n"
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

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_2:
# 1891 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Received PokéNAV!$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_3:
# 1910 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: This is a PokéNAV. It's a device\n"
	.string "that allows you to keep in touch with\l"
	.string "other trainers you've met, and even call\l"
	.string "me or your Mother while you're out on\l"
	.string "your journey.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_4:
# 1911 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: One last thing. To celebrate you\n"
	.string "becoming a Pokémon Trainer, I want to\l"
	.string "give you a special Pokémon. Are you\l"
	.string "ready to take it now?$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_5:
# 1914 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That's fine. Just come back for it\n"
	.string "whenever you're ready.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_6:
# 1918 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Well, {PLAYER}, I think that's\n"
	.string "everything. I'm so proud of you. Good\l"
	.string "luck.$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_0:
# 1928 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Received Eevee.$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_1:
# 1942 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: You have too many Pokémon to receive Eevee.$"

PetalburgCity_Gym_NormanDefeatedText::
# 1871 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy to have finally had the\n"
	.string "chance to battle you, {PLAYER}. I'm so\l"
	.string "proud.$"

PetalburgCity_Gym_Text_NormanGaveEevee::
# 1946 "data/maps/PetalburgCity_Gym/scripts.pory"
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

PetalburgCity_Gym_Text_Vito_BattleOutro::
# 1965 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't have asked for a better\n"
	.string "inaugural battle, {PLAYER}. You're\l"
	.string "everything I would've expected from\l"
	.string "Norman's child.$"

PetalburgCity_Gym_Text_Vito_GoodLuck::
# 1970 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: You've cleared a major hurdle\n"
	.string "getting your fifth badge.\p"
	.string "But trust me, {PLAYER}, it still gets\n"
	.string "harder from here.\p"
	.string "But I think you have what it takes to\n"
	.string "make it all the way to becoming a Hoenn\l"
	.string "League Champion.\n"
	.string "Good luck.$"

PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis::
# 2001 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: With that badge, the HM move Surf\n"
	.string "will allow your Pokémon to travel over\l"
	.string "water.\p"
	.string "This will open up the Eastern half of\n"
	.string "Hoenn to you.\p"
	.string "This is my gift to you. {PLAYER}, I'm\n"
	.string "sure you can use it correctly.$"

PetalburgCity_Gym_Text_Vito_Intro::
# 2005 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, {PLAYER}! Your Dad told me you\n"
	.string "would be here to challenge me soon.\p"
	.string "You're actually the first person to\n"
	.string "reach me since I took over the Gym.\p"
	.string "My name's Vito. I grew up outside\n"
	.string "Mauville, but I've been traveling\l"
	.string "throughout Hoenn and the entire\l"
	.string "country honing my battle skills.\p"
	.string "Along the way, I've picked up a\n"
	.string "particular affinity for Dark-type\l"
	.string "Pokémon.\p"
	.string "Allow me to show you everything I've\n"
	.string "learned. This will be a test for both of\l"
	.string "us!$"

PetalburgCity_Gym_Text_Vito_DarkUnderrepresented::
# 2009 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: Norman recognized that Dark-type\n"
	.string "Pokémon are underrepresented among\l"
	.string "Gym Leaders across regions.\p"
	.string "So, he was specifically looking for a\n"
	.string "Dark specialist to take over his Gym.$"

PetalburgCity_Gym_Text_Vito_TooManyLegendaries::
# 2013 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: When I submitted my team to the\n"
	.string "Hoenn league, I was nervous they would\l"
	.string "object to Darkrai because it is\l"
	.string "technically mythical.\p"
	.string "But it was either that or Yveltal, so I\n"
	.string "think everyone made peace with it.$"

PetalburgCity_Gym_Text_Vito_OweWinstrateFamily::
# 2017 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: I really owe everything I've\n"
	.string "accomplished to my family.\p"
	.string "They taught me all about battling,\n"
	.string "trained me, and most importantly\l"
	.string "encouraged me to go out and pursue\l"
	.string "this dream.\p"
	.string "I wouldn't have made it here without all\n"
	.string "their help!$"

PetalburgCity_Gym_Text_ExplainFacade::
# 2021 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: This TM contains Knock Off.\p"
	.string "It removes your foe's item, dealing\n"
	.string "double damage in the process.\p"
	.string "Trainers rely heavily on their items,\n"
	.string "you this can disrupt their entire plan.$"

PetalburgCity_Gym_Text_LeaderDoorLocked::
# 2025 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\p"
	.string "right now…\p"
	.string "Perhaps defeating more Trainers will\n"
	.string "open it.$"

PetalburgCity_Gym_Text_ParkerIntro::
# 2032 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We will gather power like you've never\n"
	.string "seen!\n"
	.string "We will dominate!$"

PetalburgCity_Gym_Text_ParkerDefeat::
# 2036 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We overreached…\n"
	.string "I can't believe it…$"

PetalburgCity_Gym_Text_ParkerPostBattle::
# 2040 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Up ahead is the Leader himself.\n"
	.string "Can you take him on?$"

PetalburgCity_Gym_Text_ParkerPostBadge::
# 2044 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
	.string "training has become a lot tougher.$"

PetalburgCity_Gym_Text_GeorgeIntro::
# 2049 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if one of us falls, their life force\n"
	.string "rejuvenates us…\l"
	.string "Fu Fu Fu Fu Fu…$"

PetalburgCity_Gym_Text_GeorgeDefeat::
# 2053 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Down… for good…$"

PetalburgCity_Gym_Text_GeorgePostBattle::
# 2057 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gather strength from our fallen team…$"

PetalburgCity_Gym_Text_GeorgePostBadge::
# 2061 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defeats will only strengthen us.$"

PetalburgCity_Gym_Text_MaryIntro::
# 2066 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So what if I'm tough on my Pokémon?\n"
	.string "I want them to be the best they can be!$"

PetalburgCity_Gym_Text_MaryDefeat::
# 2070 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Not tough enough…$"

PetalburgCity_Gym_Text_MaryPostBattle::
# 2074 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even tougher TRAINERS\n"
	.string "waiting for you.$"

PetalburgCity_Gym_Text_MaryPostBadge::
# 2078 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
	.string "achieve as TRAINERS?$"

PetalburgCity_Gym_Text_AlexiaIntro::
# 2082 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Have you met your sleep paralysis\n"
	.string "demon?$"

PetalburgCity_Gym_Text_AlexiaDefeat::
# 2087 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wake me from this nightmare…$"

PetalburgCity_Gym_Text_AlexiaPostBattle::
# 2091 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You clearly fear nothing.$"

PetalburgCity_Gym_Text_AlexiaPostBadge::
# 2095 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Don't underestimate the value of a good\n"
	.string "night's sleep.$"

PetalburgCity_Gym_Text_JodyIntro::
# 2099 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He He He He He He!$"

PetalburgCity_Gym_Text_JodyDefeat::
# 2103 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not having fun anymore.$"

PetalburgCity_Gym_Text_JodyPostBattle::
# 2107 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The Leader says I need to take things\n"
	.string "more seriously.$"

PetalburgCity_Gym_Text_JodyPostBadge::
# 2111 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hope you had fun taking on the Gym!$"
