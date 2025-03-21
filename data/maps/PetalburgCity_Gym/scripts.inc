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
.set LOCALID_NORMAN, 1
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
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
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"

# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"

# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"

# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"

# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"

# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"

# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"

# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
//PetalburgCity_Gym_OnFrame:
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
//	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_eq VAR_PETALBURG_GYM_STATE, 0, PetalburgCity_Gym_EventScript_WallyNormanIntroNew
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
//	end
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"

# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
//	closemessage
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
//	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
//	waitmovement 0
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
//	playse SE_EXIT
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
//	removeobject LOCALID_WALLY
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
//	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
//	delay 30
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
//	waitmovement 0
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
//	setvar VAR_PETALBURG_GYM_STATE, 2
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
//	releaseall
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"

# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"

# 123 "data/maps/PetalburgCity_Gym/scripts.pory"

# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_NormanGoWest
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanPostBattle
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
//	closemessage
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
//	switch VAR_FACING
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
//	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"

# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"

# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"

# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"

# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"

# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"

# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"

# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"

# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"

# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"

# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"

# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"

# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"

# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"

# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"

# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"

# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"

# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"

# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"

# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"

# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"

# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"

# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"

# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"

# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"

# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"

# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
//PetalburgCity_Gym_EventScript_NormanPostBattle::
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
//	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
//	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
//	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
//	release
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
//	end
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"

# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"

# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"

# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"

# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"

# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLYS_DAD
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"

# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"

# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"

# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"

# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"

# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"

# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"

# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"

# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"

# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"

# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"

# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"

# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"

# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"

# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
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
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"

# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"

# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"

# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"

# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"

# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"

# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"

# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"

# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"

# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"

# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"

# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"

# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"

# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"

# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"

# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"

# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"

# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"

# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"

# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"

# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"

# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"

# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"

# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"

# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"

# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"

# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"

# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"

# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"

# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"

# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"

# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"

# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"

# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"

# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"

# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"

# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"

# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"

# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"

# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"

# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"

# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"

# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"

# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"

# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"

# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"

# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"

# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"

# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"

# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"

# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"

# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your POKéMON.\p"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a POKéMON, please…$"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?$"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I'm going to go stay with my\n"
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in VERDANTURF TOWN.\p"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a POKéMON along.\p"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a POKéMON before.\n"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I see.$"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\n"
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with WALLY and make sure that he\n"
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a POKéMON.$"
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, I'll loan you my POKéMON.\p"
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a ZIGZAGOON!$"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A POKéMON!\p"
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I'll give you a POKé BALL, too.\n"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a POKé BALL!$"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: So, did it work out?$"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your POKéMON back.\p"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my POKéMON.\p"
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER, ROXANNE.\p"
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other POKéMON\n"
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a GYM LEADER, too.\n"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER named BRAWLY.\p"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm…\n"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did get four GYM BADGES.\p"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON battle.\p"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a GYM LEADER to win.\p"
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Vito!$"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: As the GYM LEADER, I can't\n"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a TRAINER to\n"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of POKéMON is deep.\p"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this GYM open when you\n"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting TRAINERS.\p"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The TRAINERS of PETALBURG GYM\n"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the SPEED ROOM.\p"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ACCURACY ROOM.\p"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the CONFUSION ROOM.\p"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the DEFENSE\n"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ROOM.$"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your POKéMON.\p"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYM LEADER is all about.$"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your POKéMON!$"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What ATTACK power…$"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our LEADER's kid.\p"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A TRAINER's abilities are\n"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The ONE-HIT KO ROOM is next.$"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a LEADER.$"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our LEADER's kid.\p"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a POKéMON to take a critical hit!$"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a TRAINER worth my respect.\p"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the TRAINERS of PETALBURG CITY have\l"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the ACCURACY ROOM.\p"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "TRAINERS waiting for you.\p"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the DEFENSE ROOM, and\n"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the RECOVERY ROOM.\p"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your POKéMON's ATTACK power will be\n"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as TRAINERS?\p"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our POKéMON.$"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the STRENGTH ROOM.\p"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the ONE-HIT KO ROOM.\p"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have TRAINERS who are\n"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "last LEADER's kid!$"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The new GYM LEADER\n"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "is waiting!$"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings TRAINERS have\n"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their POKéMON.$"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what POKéMON await\n"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a GYM, it doesn't matter that\n"
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one POKéMON that is\n"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Vito_PostBattle::
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 24
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 1 //TempVar_Vito_Dialogue 
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Vito_GoodLuck, MSGBOX_NPC
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
	end

PetalburgCity_Gym_EventScript_WallyNormanIntroNew::
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_0
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_1
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_2
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_ExclamationMark
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_WALLY, DIR_SOUTH
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_3
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_4
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_5
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_WALLY, DIR_NORTH
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_6
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_WALLY, DIR_SOUTH
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_7
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_WallyLeave
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_PlayerApproachNorman
# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 5
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_8
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_WallyLeave:
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_PlayerApproachNorman:
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
	step_end

PetalburgCity_Gym_EventScript_NormanGoWest::
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanGoWest_Text_0, MSGBOX_NPC
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle::
# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_0, MSGBOX_NPC
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_1, MSGBOX_YESNO
# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_3
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_4
	end

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_3:
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_2, MSGBOX_NPC
# 1701 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_4:
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NORMAN_1, PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_3, PetalburgCity_Gym_NormanDefeatedText, PetalburgCity_Gym_EventScript_DefeatedNorman
# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_NormanPostBattle::
# 1712 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_FacePlayer
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_0
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	dynmultichoice 25, 3, 0, 5, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_1, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_2, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_3, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_4, PetalburgCity_Gym_EventScript_NormanPostBattle_Text_5
# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1717 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_NormanPostBattle_3
# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_NormanPostBattle_4
# 1721 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanPostBattle_5
# 1723 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanPostBattle_6
# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanPostBattle_7
# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
PetalburgCity_Gym_EventScript_NormanPostBattle_1:
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_NormanPostBattle_3:
# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_6, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_4:
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_7, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_5:
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_8
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_6:
# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_EEVEE_FROM_NORMAN, PetalburgCity_Gym_EventScript_NormanPostBattle_9
# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_11, MSGBOX_YESNO
# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCity_Gym_EventScript_NormanPostBattle_12
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_7:
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_12
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_9:
# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_9
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_NormanPostBattle_Text_10
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1

PetalburgCity_Gym_EventScript_NormanPostBattle_12:
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GiveEevee
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_1


PetalburgCity_Gym_EventScript_DefeatedNorman::
# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP, 24
# 1753 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 1754 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_0, MSGBOX_NPC
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_1
# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 3
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_BRINEY_FONT_OF_DOOR
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 1776 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_2, MSGBOX_NPC
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_3, MSGBOX_YESNO
# 1779 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_DefeatedNorman_3
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_DefeatedNorman_4
PetalburgCity_Gym_EventScript_DefeatedNorman_1:
# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_5, MSGBOX_NPC
# 1786 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_DefeatedNorman_3:
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_DefeatedNorman_Text_4, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_DefeatedNorman_1

PetalburgCity_Gym_EventScript_DefeatedNorman_4:
# 1783 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveEevee
	goto PetalburgCity_Gym_EventScript_DefeatedNorman_1


PetalburgCity_Gym_EventScript_GiveEevee::
# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
	givemon SPECIES_EEVEE, 5, 0, 0, 0, 2
# 1792 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 1793 "data/maps/PetalburgCity_Gym/scripts.pory"
	case MON_GIVEN_TO_PARTY, PetalburgCity_Gym_EventScript_GiveEevee_2
# 1800 "data/maps/PetalburgCity_Gym/scripts.pory"
	case MON_GIVEN_TO_PC, PetalburgCity_Gym_EventScript_GiveEevee_3
# 1807 "data/maps/PetalburgCity_Gym/scripts.pory"
	case MON_CANT_GIVE, PetalburgCity_Gym_EventScript_GiveEevee_4
PetalburgCity_Gym_EventScript_GiveEevee_4:
# 1809 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_1
	return

PetalburgCity_Gym_EventScript_GiveEevee_2:
# 1794 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_0
# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1797 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknamePartyMon
# 1798 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_EEVEE_FROM_NORMAN
# 1799 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGaveEevee, MSGBOX_NPC
	return

PetalburgCity_Gym_EventScript_GiveEevee_3:
# 1801 "data/maps/PetalburgCity_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1802 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_GiveEevee_Text_0
# 1803 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	call NicknameBoxMon
# 1805 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_EEVEE_FROM_NORMAN
# 1806 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGaveEevee, MSGBOX_NPC
	return


PetalburgCity_Gym_EventScript_Vito::
# 1818 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1819 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1820 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Vito_2
# 1822 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VITO, PetalburgCity_Gym_Text_Vito_Intro, PetalburgCity_Gym_Text_Vito_BattleOutro, PetalburgCity_Gym_EventScript_Vito_PostBattle
PetalburgCity_Gym_EventScript_Vito_1:
# 1824 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_Vito_2:
# 1820 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge
	goto PetalburgCity_Gym_EventScript_Vito_1


PetalburgCity_Gym_EventScript_Vito_GymBattle::
	return


PetalburgCity_Gym_EventScript_Vito_PostBadge::
# 1842 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq PetalburgCity_Gym_EventScript_Vito_PostBadge_2
PetalburgCity_Gym_EventScript_Vito_PostBadge_1:
# 1847 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_TEMP_3
# 1848 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_Vito_PostBadge_6
# 1851 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_Vito_PostBadge_7
# 1854 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_Vito_PostBadge_8
PetalburgCity_Gym_EventScript_Vito_PostBadge_4:
# 1858 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 1859 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end

PetalburgCity_Gym_EventScript_Vito_PostBadge_2:
# 1843 "data/maps/PetalburgCity_Gym/scripts.pory"
	random 3
# 1844 "data/maps/PetalburgCity_Gym/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1845 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge_1

PetalburgCity_Gym_EventScript_Vito_PostBadge_6:
# 1849 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Vito_DarkUnderrepresented, MSGBOX_NPC
# 1850 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge_4

PetalburgCity_Gym_EventScript_Vito_PostBadge_7:
# 1852 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Vito_TooManyLegendaries, MSGBOX_NPC
# 1853 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_TEMP_3, 1
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge_4

PetalburgCity_Gym_EventScript_Vito_PostBadge_8:
# 1855 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_Vito_OweWinstrateFamily, MSGBOX_NPC
# 1856 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto PetalburgCity_Gym_EventScript_Vito_PostBadge_4


PetalburgCity_Gym_EventScript_Vito_Rematch::
# 1864 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_0:
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I finally did it! I won!$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_1:
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Well done, Wally.\p"
	.string "You've trained your Pokémon well, and\n"
	.string "today you commanded them skillfully.\p"
	.string "You are ready to take on the Hoenn\n"
	.string "League. I will let your parents know.\p"
	.string "$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_2:
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Thanks, Norman! I've learned a\n"
	.string "lot from battling you.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_3:
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Ah, {PLAYER}!\p"
	.string "It is wonderful to see you with Pokémon\n"
	.string "of your own.\p"
	.string "$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_4:
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me introduce you to Wally, a new\n"
	.string "trainer like yourself, from here in\l"
	.string "Petalburg.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_5:
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Hi, {PLAYER}! It's nice to meet\n"
	.string "you.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_6:
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Well, now that I've proven I'm\n"
	.string "ready, I'm finally going to leave\l"
	.string "Petalburg.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_7:
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Hopefully I see you around,\n"
	.string "{PLAYER}.$"

PetalburgCity_Gym_EventScript_WallyNormanIntroNew_Text_8:
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: It makes me so proud that this\n"
	.string "moment has finally come, {PLAYER}. I\l"
	.string "would be honored to finally get the\l"
	.string "chance to have a Pokémon battle with\l"
	.string "my own child. Why don't you go out,\l"
	.string "catch a few more Pokémon, and prepare\l"
	.string "your team. Then come back, and I'll show\l"
	.string "you what a Gym Battle is like.$"

PetalburgCity_Gym_EventScript_NormanGoWest_Text_0:
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Why don't you try heading West to\n"
	.string "Route 104? You can't get to Rustboro\l"
	.string "City right now, but there are still many\l"
	.string "Pokémon to find along the way.$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_0:
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: So, {PLAYER}, have you found any\n"
	.string "more Pokémon?$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_1:
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you think you're ready for a Pokémon\n"
	.string "battle against me now?$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_2:
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: I see. Well, come back when you're\n"
	.string "ready.$"

PetalburgCity_Gym_EventScript_NormanAreYouReadyToBattle_Text_3:
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Excellent! Let's see what you've\n"
	.string "got!$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_0:
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Did you have another question for\n"
	.string "me, {PLAYER}?$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_1:
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Where To Go$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_2:
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Slaking$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_3:
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Retirement$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_4:
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gift Pokémon$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_5:
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nothing$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_6:
# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Unfortunately, the bridge to\n"
	.string "Rustboro City is down. However, my\l"
	.string "friend Mr. Briney can take you to\l"
	.string "Dewford to start the Gym Challenge\l"
	.string "there. He lives just West of Petalburg\l"
	.string "in Route 104 South.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_7:
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"
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
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Yes, retiring is bittersweet, but I\n"
	.string "feel like I've found the perfect Trainer\l"
	.string "to replace me. I gave it a lot of\l"
	.string "thought, and I think they will do a\l"
	.string "great job. I'm really excited for you to\l"
	.string "meet them. It will take a little more\l"
	.string "time for them to return and get the gym\l"
	.string "set up, but I will call you when they do.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_9:
# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That Pokémon is an Eevee. It's a\n"
	.string "special Normal-type Pokémon that can\l"
	.string "evolve a variety of different ways\l"
	.string "based on what rare stone you give it.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_10:
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That one is extra special, as it\n"
	.string "possesses a rare ability. Based on the\l"
	.string "stone you give it, it will influence the\l"
	.string "environment around it. Not many\l"
	.string "Pokémon can do this. I trust you'll\l"
	.string "decide wisely how to train this Eevee.$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_11:
# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Are you ready to take the special\n"
	.string "Pokémon now?$"

PetalburgCity_Gym_EventScript_NormanPostBattle_Text_12:
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Alright then {PLAYER}, if there's\n"
	.string "nothing else, I'll just wish you good\l"
	.string "luck.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_0:
# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"
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
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Received PokéNAV!$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_2:
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: This is a PokéNAV. It's a device\n"
	.string "that allows you to keep in touch with\l"
	.string "other trainers you've met, and even call\l"
	.string "me or your Mother while you're out on\l"
	.string "your journey.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_3:
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: One last thing. To celebrate you\n"
	.string "becoming a Pokémon Trainer, I want to\l"
	.string "give you a special Pokémon. Are you\l"
	.string "ready to take it now?$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_4:
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That's fine. Just come back for it\n"
	.string "whenever you're ready.$"

PetalburgCity_Gym_EventScript_DefeatedNorman_Text_5:
# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Well, {PLAYER}, I think that's\n"
	.string "everything. I'm so proud of you. Good\l"
	.string "luck.$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_0:
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Received Eevee.$"

PetalburgCity_Gym_EventScript_GiveEevee_Text_1:
# 1809 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: You have too many Pokémon to receive Eevee.$"

PetalburgCity_Gym_NormanDefeatedText::
# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy to have finally had the\n"
	.string "chance to battle you, {PLAYER}. I'm so\l"
	.string "proud.$"

PetalburgCity_Gym_Text_NormanGaveEevee::
# 1813 "data/maps/PetalburgCity_Gym/scripts.pory"
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
# 1832 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't have asked for a better\n"
	.string "inaugural battle, {PLAYER}. You're\l"
	.string "everything I would've expected from\l"
	.string "Norman's child.$"

PetalburgCity_Gym_Text_Vito_GoodLuck::
# 1837 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: You've cleared a major hurdle\n"
	.string "getting your fifth badge.\p"
	.string "But trust me, {PLAYER}, it still gets\n"
	.string "harder from here.\p"
	.string "But I think you have what it takes to\n"
	.string "make it all the way to becoming a Hoenn\l"
	.string "League Champion.\n"
	.string "Good luck.$"

PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis::
# 1868 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: With that badge, the HM move Surf\n"
	.string "will allow your Pokémon to travel over\l"
	.string "water.\p"
	.string "This will open up the Eastern half of\n"
	.string "Hoenn to you.\p"
	.string "This is my gift to you. {PLAYER}, I'm\n"
	.string "sure you can use it correctly.$"

PetalburgCity_Gym_Text_Vito_Intro::
# 1872 "data/maps/PetalburgCity_Gym/scripts.pory"
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
# 1876 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: Norman recognized that Dark-type\n"
	.string "Pokémon are underrepresented among\l"
	.string "Gym Leaders across regions.\p"
	.string "So, he was specifically looking for a\n"
	.string "Dark specialist to take over his Gym.$"

PetalburgCity_Gym_Text_Vito_TooManyLegendaries::
# 1880 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: Yeah, I know that the other Gym\n"
	.string "Leaders all only use one Legendary\l"
	.string "Pokémon.\p"
	.string "Technically though, Darkrai is mythical,\n"
	.string "so it doesn't count.\p"
	.string "...\p"
	.string "Yes, I know Yveltal is an Uber...$"

PetalburgCity_Gym_Text_Vito_OweWinstrateFamily::
# 1884 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: I really owe everything I've\n"
	.string "accomplished to my family.\p"
	.string "They taught me all about battling,\n"
	.string "trained me, and most importantly\l"
	.string "encouraged me to go out and pursue\l"
	.string "this dream.\p"
	.string "I wouldn't have made it here without all\n"
	.string "their help!$"

PetalburgCity_Gym_Text_ExplainFacade::
# 1888 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vito: TM42 contains FACADE.\p"
	.string "It doubles the power of moves if the\n"
	.string "POKéMON is poisoned, paralyzed, or\l"
	.string "burned.\p"
	.string "It might be able to turn a bad situation\n"
	.string "into an advantage.$"
