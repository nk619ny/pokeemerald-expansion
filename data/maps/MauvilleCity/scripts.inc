# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
//.set LOCALID_MAUVILLE_WALLY, 6
# 3 "data/maps/MauvilleCity/scripts.pory"
//.set LOCALID_MAUVILLE_WALLYS_UNCLE, 7
# 4 "data/maps/MauvilleCity/scripts.pory"
//.set LOCALID_MAUVILLE_SCOTT, 11
# 5 "data/maps/MauvilleCity/scripts.pory"
//.set LOCALID_MAUVILLE_GALLADE, 12
# 6 "data/maps/MauvilleCity/scripts.pory"

# 7 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 8 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 9 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 10 "data/maps/MauvilleCity/scripts.pory"

# 11 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 12 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 13 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 14 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 15 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 16 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 17 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 18 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 19 "data/maps/MauvilleCity/scripts.pory"
	end
# 20 "data/maps/MauvilleCity/scripts.pory"

# 21 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 22 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 23 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 24 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 25 "data/maps/MauvilleCity/scripts.pory"
	return
# 26 "data/maps/MauvilleCity/scripts.pory"

# 27 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 28 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 29 "data/maps/MauvilleCity/scripts.pory"
	end
# 30 "data/maps/MauvilleCity/scripts.pory"

# 31 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 32 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 33 "data/maps/MauvilleCity/scripts.pory"
	end
# 34 "data/maps/MauvilleCity/scripts.pory"

# 35 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 36 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 37 "data/maps/MauvilleCity/scripts.pory"
	end
# 38 "data/maps/MauvilleCity/scripts.pory"

# 39 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 40 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 41 "data/maps/MauvilleCity/scripts.pory"
	end
# 42 "data/maps/MauvilleCity/scripts.pory"

# 43 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 44 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 45 "data/maps/MauvilleCity/scripts.pory"
	end
# 46 "data/maps/MauvilleCity/scripts.pory"

# 47 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 48 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 49 "data/maps/MauvilleCity/scripts.pory"
	end
# 50 "data/maps/MauvilleCity/scripts.pory"

# 51 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 52 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 53 "data/maps/MauvilleCity/scripts.pory"
	end
# 54 "data/maps/MauvilleCity/scripts.pory"

# 55 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 56 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 57 "data/maps/MauvilleCity/scripts.pory"
	end
# 58 "data/maps/MauvilleCity/scripts.pory"

# 59 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 60 "data/maps/MauvilleCity/scripts.pory"
	lock
# 61 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 62 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 63 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 64 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 65 "data/maps/MauvilleCity/scripts.pory"
	release
# 66 "data/maps/MauvilleCity/scripts.pory"
	end
# 67 "data/maps/MauvilleCity/scripts.pory"

# 68 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 69 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 70 "data/maps/MauvilleCity/scripts.pory"
	release
# 71 "data/maps/MauvilleCity/scripts.pory"
	end
# 72 "data/maps/MauvilleCity/scripts.pory"

# 73 "data/maps/MauvilleCity/scripts.pory"
/*
# 74 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 75 "data/maps/MauvilleCity/scripts.pory"
	lock
# 76 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 77 "data/maps/MauvilleCity/scripts.pory"
	//goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 78 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 79 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 80 "data/maps/MauvilleCity/scripts.pory"
	//applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 81 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/MauvilleCity/scripts.pory"
	release
# 83 "data/maps/MauvilleCity/scripts.pory"
	end
# 84 "data/maps/MauvilleCity/scripts.pory"

# 85 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 86 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 87 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 88 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 89 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/MauvilleCity/scripts.pory"
	release
# 91 "data/maps/MauvilleCity/scripts.pory"
	end
# 92 "data/maps/MauvilleCity/scripts.pory"

# 93 "data/maps/MauvilleCity/scripts.pory"
 MauvilleCity_EventScript_Wally::
# 94 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 95 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 96 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 97 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 99 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 100 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 101 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 102 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 104 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 105 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 107 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 109 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 110 "data/maps/MauvilleCity/scripts.pory"
	end 
# 111 "data/maps/MauvilleCity/scripts.pory"

# 112 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 113 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 114 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 115 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 116 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 117 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 118 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 119 "data/maps/MauvilleCity/scripts.pory"
	end
# 120 "data/maps/MauvilleCity/scripts.pory"

# 121 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 122 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 123 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 124 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 125 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 127 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 128 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 130 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 131 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 132 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 133 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 134 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 136 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 137 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 139 "data/maps/MauvilleCity/scripts.pory"
	end
# 140 "data/maps/MauvilleCity/scripts.pory"

# 141 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 143 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast1
# 144 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 145 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 147 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 149 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 150 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 151 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 152 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 155 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast2
# 156 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 158 "data/maps/MauvilleCity/scripts.pory"
	end
# 159 "data/maps/MauvilleCity/scripts.pory"

# 160 "data/maps/MauvilleCity/scripts.pory"
*/
# 161 "data/maps/MauvilleCity/scripts.pory"

# 162 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 163 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 164 "data/maps/MauvilleCity/scripts.pory"
	//removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 165 "data/maps/MauvilleCity/scripts.pory"
	//clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 166 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 167 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 168 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 169 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 170 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 171 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 172 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 173 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 174 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 175 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 176 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 177 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 178 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 179 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 180 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, MauvilleCity_EventScript_ScottExitEast
# 181 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 182 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_LEVEL_CAP, 36
# 183 "data/maps/MauvilleCity/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 184 "data/maps/MauvilleCity/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 185 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 186 "data/maps/MauvilleCity/scripts.pory"
	end
# 187 "data/maps/MauvilleCity/scripts.pory"

# 188 "data/maps/MauvilleCity/scripts.pory"

# 189 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 190 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 191 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 192 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 193 "data/maps/MauvilleCity/scripts.pory"
	return
# 194 "data/maps/MauvilleCity/scripts.pory"

# 195 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 196 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 197 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 198 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 199 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 200 "data/maps/MauvilleCity/scripts.pory"
	return
# 201 "data/maps/MauvilleCity/scripts.pory"

# 202 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 203 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 204 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 205 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/MauvilleCity/scripts.pory"
	return
# 207 "data/maps/MauvilleCity/scripts.pory"

# 208 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 209 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 210 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
# 211 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 212 "data/maps/MauvilleCity/scripts.pory"
	return
# 213 "data/maps/MauvilleCity/scripts.pory"

# 214 "data/maps/MauvilleCity/scripts.pory"
/*
# 215 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 216 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 217 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 218 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 219 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 220 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 221 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 222 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 224 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 225 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 227 "data/maps/MauvilleCity/scripts.pory"
	return
# 228 "data/maps/MauvilleCity/scripts.pory"

# 229 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 230 "data/maps/MauvilleCity/scripts.pory"
	//setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 231 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 232 "data/maps/MauvilleCity/scripts.pory"
	release
# 233 "data/maps/MauvilleCity/scripts.pory"
	end
# 234 "data/maps/MauvilleCity/scripts.pory"

# 235 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 236 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 237 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 238 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 239 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 240 "data/maps/MauvilleCity/scripts.pory"
	end
# 241 "data/maps/MauvilleCity/scripts.pory"
*/
# 242 "data/maps/MauvilleCity/scripts.pory"

# 243 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 244 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 247 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 248 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 249 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 250 "data/maps/MauvilleCity/scripts.pory"

# 251 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 252 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 254 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 257 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 258 "data/maps/MauvilleCity/scripts.pory"

# 259 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 260 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 261 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 263 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 264 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 265 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 266 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 267 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 268 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 269 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 270 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 271 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 272 "data/maps/MauvilleCity/scripts.pory"

# 273 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 274 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 275 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 277 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 278 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 279 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 280 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 281 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 282 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 283 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 284 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 285 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 286 "data/maps/MauvilleCity/scripts.pory"

# 287 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 288 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 289 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 290 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 291 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 292 "data/maps/MauvilleCity/scripts.pory"

# 293 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 294 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 295 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 296 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 298 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 299 "data/maps/MauvilleCity/scripts.pory"

# 300 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 301 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 302 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 303 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 304 "data/maps/MauvilleCity/scripts.pory"

# 305 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 306 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 307 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 308 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 310 "data/maps/MauvilleCity/scripts.pory"

# 311 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 312 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 313 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 314 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 315 "data/maps/MauvilleCity/scripts.pory"

# 316 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 317 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 318 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 319 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 320 "data/maps/MauvilleCity/scripts.pory"

# 321 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 322 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 323 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 325 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 327 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 328 "data/maps/MauvilleCity/scripts.pory"

# 329 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 333 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 335 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 336 "data/maps/MauvilleCity/scripts.pory"

# 337 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 338 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 339 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 340 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 342 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 343 "data/maps/MauvilleCity/scripts.pory"

# 344 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 348 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 349 "data/maps/MauvilleCity/scripts.pory"

# 350 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 353 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 354 "data/maps/MauvilleCity/scripts.pory"

# 355 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 358 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 362 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 363 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 364 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 365 "data/maps/MauvilleCity/scripts.pory"

# 366 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 376 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 377 "data/maps/MauvilleCity/scripts.pory"

# 378 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 390 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 391 "data/maps/MauvilleCity/scripts.pory"

# 392 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 404 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 405 "data/maps/MauvilleCity/scripts.pory"

# 406 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 411 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 413 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 414 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 415 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 416 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 417 "data/maps/MauvilleCity/scripts.pory"

# 418 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 419 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 420 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 422 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 424 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 425 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 426 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 427 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 428 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 429 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 430 "data/maps/MauvilleCity/scripts.pory"

# 431 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 432 "data/maps/MauvilleCity/scripts.pory"
	lock
# 433 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 434 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 435 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 436 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 437 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 438 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 439 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 440 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 441 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 442 "data/maps/MauvilleCity/scripts.pory"
	release
# 443 "data/maps/MauvilleCity/scripts.pory"
	end
# 444 "data/maps/MauvilleCity/scripts.pory"

# 445 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 446 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 447 "data/maps/MauvilleCity/scripts.pory"
	release
# 448 "data/maps/MauvilleCity/scripts.pory"
	end
# 449 "data/maps/MauvilleCity/scripts.pory"

# 450 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 451 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 452 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 453 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 454 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 455 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 456 "data/maps/MauvilleCity/scripts.pory"
	release
# 457 "data/maps/MauvilleCity/scripts.pory"
	end
# 458 "data/maps/MauvilleCity/scripts.pory"

# 459 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 460 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 461 "data/maps/MauvilleCity/scripts.pory"
	release
# 462 "data/maps/MauvilleCity/scripts.pory"
	end
# 463 "data/maps/MauvilleCity/scripts.pory"

# 464 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 465 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 466 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 467 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 468 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 469 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 470 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 471 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 472 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 473 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 474 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 475 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 476 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 477 "data/maps/MauvilleCity/scripts.pory"
	end
# 478 "data/maps/MauvilleCity/scripts.pory"

# 479 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 480 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 481 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 482 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 483 "data/maps/MauvilleCity/scripts.pory"

# 484 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 485 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 488 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 489 "data/maps/MauvilleCity/scripts.pory"

# 490 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 495 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 496 "data/maps/MauvilleCity/scripts.pory"

# 497 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 501 "data/maps/MauvilleCity/scripts.pory"

# 502 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 510 "data/maps/MauvilleCity/scripts.pory"

# 511 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 515 "data/maps/MauvilleCity/scripts.pory"

# 516 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 522 "data/maps/MauvilleCity/scripts.pory"

# 523 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 526 "data/maps/MauvilleCity/scripts.pory"

# 527 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 530 "data/maps/MauvilleCity/scripts.pory"

# 531 "data/maps/MauvilleCity/scripts.pory"
/*MauvilleCity_Text_WallyDefeat:
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$" */
# 535 "data/maps/MauvilleCity/scripts.pory"
//original Wally defeat text
# 536 "data/maps/MauvilleCity/scripts.pory"

# 537 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 540 "data/maps/MauvilleCity/scripts.pory"

# 541 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 547 "data/maps/MauvilleCity/scripts.pory"

# 548 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 555 "data/maps/MauvilleCity/scripts.pory"

# 556 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 564 "data/maps/MauvilleCity/scripts.pory"

# 565 "data/maps/MauvilleCity/scripts.pory"

# 566 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 576 "data/maps/MauvilleCity/scripts.pory"

# 577 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 580 "data/maps/MauvilleCity/scripts.pory"

# 581 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 593 "data/maps/MauvilleCity/scripts.pory"

# 594 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 608 "data/maps/MauvilleCity/scripts.pory"

# 609 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 616 "data/maps/MauvilleCity/scripts.pory"

# 617 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 622 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 624 "data/maps/MauvilleCity/scripts.pory"

# 625 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 629 "data/maps/MauvilleCity/scripts.pory"

# 630 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 635 "data/maps/MauvilleCity/scripts.pory"

# 636 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 641 "data/maps/MauvilleCity/scripts.pory"

# 642 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 646 "data/maps/MauvilleCity/scripts.pory"

# 647 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 650 "data/maps/MauvilleCity/scripts.pory"

# 651 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 654 "data/maps/MauvilleCity/scripts.pory"

# 655 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 659 "data/maps/MauvilleCity/scripts.pory"

# 660 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 664 "data/maps/MauvilleCity/scripts.pory"

# 665 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 668 "data/maps/MauvilleCity/scripts.pory"

# 669 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 673 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 674 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 676 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 677 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 678 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 679 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 680 "data/maps/MauvilleCity/scripts.pory"

# 681 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 682 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_Gallade::
# 686 "data/maps/MauvilleCity/scripts.pory"
	lock
# 687 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Gallade_Text_0
# 688 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 689 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Wally::
# 694 "data/maps/MauvilleCity/scripts.pory"
	lock
# 695 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_single TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyIntro, MauvilleCity_Text_WallyDefeat, MauvilleCity_EventScript_WallyPostBattle
# 696 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallyPostBattle::
# 709 "data/maps/MauvilleCity/scripts.pory"
	lock
# 710 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyPostBattle_Text_0
# 711 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 712 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 713 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_WallyAndGalladeDepart
# 714 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_GALLADE, MauvilleCity_WallyAndGalladeDepart
# 715 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 717 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_GALLADE
# 718 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 719 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_DefeatedWally
# 720 "data/maps/MauvilleCity/scripts.pory"
	release
	end


# 724 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_WallyAndGalladeDepart:
# 725 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 725 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 726 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 726 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 726 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 726 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 726 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 726 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 726 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 726 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 727 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
	step_end

MauvilleCity_EventScript_Gallade_Text_0:
# 687 "data/maps/MauvilleCity/scripts.pory"
	.string "Gallade: Aiii!$"

MauvilleCity_EventScript_WallyPostBattle_Text_0:
# 710 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: You're good! I think you're\n"
	.string "definitely ready to face Wattson.\p"
	.string "I'm going to head North now. I hear\n"
	.string "there's a family on Route 111 that can\l"
	.string "teach my Pokémon to break rocks.\p"
	.string "Good luck, {PLAYER}!$"

MauvilleCity_Text_WallyDefeat::
# 700 "data/maps/MauvilleCity/scripts.pory"
	.string "Wow, you're learning much faster than I\n"
	.string "did!$"

MauvilleCity_Text_WallyIntro::
# 704 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Oh, hi {PLAYER}! I remember you\n"
	.string "from Petalburg!\p"
	.string "How is your journey going?\p"
	.string "I just beat Wattson! It was a tough\n"
	.string "battle.\p"
	.string "Hey, now that we're both real Pokémon\n"
	.string "Trainers, how about we battle? My team\l"
	.string "is all healed up and ready to go!$"
