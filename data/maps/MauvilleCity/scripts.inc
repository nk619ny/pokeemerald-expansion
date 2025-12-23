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
	call_if_eq VAR_FACING, DIR_WEST, MauvilleCity_EventScript_ScottApproachPlayerWest
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
MauvilleCity_EventScript_ScottApproachPlayerWest::
# 196 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 197 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerWest
# 198 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 199 "data/maps/MauvilleCity/scripts.pory"
	return
# 200 "data/maps/MauvilleCity/scripts.pory"

# 201 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 202 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 203 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 204 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 205 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/MauvilleCity/scripts.pory"
	return
# 207 "data/maps/MauvilleCity/scripts.pory"

# 208 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 209 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 210 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 211 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 212 "data/maps/MauvilleCity/scripts.pory"
	return
# 213 "data/maps/MauvilleCity/scripts.pory"

# 214 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 215 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 216 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
# 217 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/MauvilleCity/scripts.pory"
	return
# 219 "data/maps/MauvilleCity/scripts.pory"

# 220 "data/maps/MauvilleCity/scripts.pory"
/*
# 221 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 222 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 223 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 224 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 225 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 226 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 227 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 228 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 229 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 231 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 232 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 233 "data/maps/MauvilleCity/scripts.pory"
	return
# 234 "data/maps/MauvilleCity/scripts.pory"

# 235 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 236 "data/maps/MauvilleCity/scripts.pory"
	//setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 237 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 238 "data/maps/MauvilleCity/scripts.pory"
	release
# 239 "data/maps/MauvilleCity/scripts.pory"
	end
# 240 "data/maps/MauvilleCity/scripts.pory"

# 241 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 242 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 243 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 244 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 245 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 246 "data/maps/MauvilleCity/scripts.pory"
	end
# 247 "data/maps/MauvilleCity/scripts.pory"
*/
# 248 "data/maps/MauvilleCity/scripts.pory"

# 249 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 251 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 252 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 254 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 256 "data/maps/MauvilleCity/scripts.pory"

# 257 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 258 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 260 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 263 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 264 "data/maps/MauvilleCity/scripts.pory"

# 265 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 266 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 267 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 268 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 269 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 270 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 271 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 272 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 273 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 274 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 275 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 276 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 277 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 278 "data/maps/MauvilleCity/scripts.pory"

# 279 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 280 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 281 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 282 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 283 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 284 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 285 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 286 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 287 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 288 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 289 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 290 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 291 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 292 "data/maps/MauvilleCity/scripts.pory"

# 293 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 294 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 295 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 298 "data/maps/MauvilleCity/scripts.pory"

# 299 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 300 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 301 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 302 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 303 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 304 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 305 "data/maps/MauvilleCity/scripts.pory"

# 306 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 307 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 308 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 310 "data/maps/MauvilleCity/scripts.pory"

# 311 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 312 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 313 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 316 "data/maps/MauvilleCity/scripts.pory"

# 317 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 318 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 319 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 320 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 321 "data/maps/MauvilleCity/scripts.pory"

# 322 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 323 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 325 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 326 "data/maps/MauvilleCity/scripts.pory"

# 327 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 329 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 332 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 333 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 334 "data/maps/MauvilleCity/scripts.pory"

# 335 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 337 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 339 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 341 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 342 "data/maps/MauvilleCity/scripts.pory"

# 343 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 344 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 345 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 346 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 348 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 349 "data/maps/MauvilleCity/scripts.pory"

# 350 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 354 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 355 "data/maps/MauvilleCity/scripts.pory"

# 356 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 358 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 359 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 360 "data/maps/MauvilleCity/scripts.pory"

# 361 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 362 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 363 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 370 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 371 "data/maps/MauvilleCity/scripts.pory"

# 372 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 382 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 383 "data/maps/MauvilleCity/scripts.pory"

# 384 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 396 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 397 "data/maps/MauvilleCity/scripts.pory"

# 398 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 408 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 409 "data/maps/MauvilleCity/scripts.pory"

# 410 "data/maps/MauvilleCity/scripts.pory"

# 411 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerWest:
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 413 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 414 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 415 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 418 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 419 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 420 "data/maps/MauvilleCity/scripts.pory"

# 421 "data/maps/MauvilleCity/scripts.pory"

# 422 "data/maps/MauvilleCity/scripts.pory"

# 423 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
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
	walk_left
# 430 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 431 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 432 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 433 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 434 "data/maps/MauvilleCity/scripts.pory"

# 435 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 436 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 437 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 438 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 439 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 440 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 441 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 442 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 443 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 444 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 445 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 446 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 447 "data/maps/MauvilleCity/scripts.pory"

# 448 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 449 "data/maps/MauvilleCity/scripts.pory"
	lock
# 450 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 451 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 452 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 453 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 454 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 455 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 456 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 457 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 458 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 459 "data/maps/MauvilleCity/scripts.pory"
	release
# 460 "data/maps/MauvilleCity/scripts.pory"
	end
# 461 "data/maps/MauvilleCity/scripts.pory"

# 462 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 463 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 464 "data/maps/MauvilleCity/scripts.pory"
	release
# 465 "data/maps/MauvilleCity/scripts.pory"
	end
# 466 "data/maps/MauvilleCity/scripts.pory"

# 467 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 468 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 469 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 470 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 471 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 472 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 473 "data/maps/MauvilleCity/scripts.pory"
	release
# 474 "data/maps/MauvilleCity/scripts.pory"
	end
# 475 "data/maps/MauvilleCity/scripts.pory"

# 476 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 477 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 478 "data/maps/MauvilleCity/scripts.pory"
	release
# 479 "data/maps/MauvilleCity/scripts.pory"
	end
# 480 "data/maps/MauvilleCity/scripts.pory"

# 481 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 482 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 483 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 484 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 485 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 486 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 487 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 488 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 489 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 490 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 491 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 492 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 493 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 494 "data/maps/MauvilleCity/scripts.pory"
	end
# 495 "data/maps/MauvilleCity/scripts.pory"

# 496 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 499 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 500 "data/maps/MauvilleCity/scripts.pory"

# 501 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 506 "data/maps/MauvilleCity/scripts.pory"

# 507 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 513 "data/maps/MauvilleCity/scripts.pory"

# 514 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 518 "data/maps/MauvilleCity/scripts.pory"

# 519 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 527 "data/maps/MauvilleCity/scripts.pory"

# 528 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 532 "data/maps/MauvilleCity/scripts.pory"

# 533 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 537 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 539 "data/maps/MauvilleCity/scripts.pory"

# 540 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 543 "data/maps/MauvilleCity/scripts.pory"

# 544 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 545 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 547 "data/maps/MauvilleCity/scripts.pory"

# 548 "data/maps/MauvilleCity/scripts.pory"
/*MauvilleCity_Text_WallyDefeat:
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$" */
# 552 "data/maps/MauvilleCity/scripts.pory"
//original Wally defeat text
# 553 "data/maps/MauvilleCity/scripts.pory"

# 554 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 557 "data/maps/MauvilleCity/scripts.pory"

# 558 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 564 "data/maps/MauvilleCity/scripts.pory"

# 565 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 572 "data/maps/MauvilleCity/scripts.pory"

# 573 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 581 "data/maps/MauvilleCity/scripts.pory"

# 582 "data/maps/MauvilleCity/scripts.pory"

# 583 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 593 "data/maps/MauvilleCity/scripts.pory"

# 594 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 597 "data/maps/MauvilleCity/scripts.pory"

# 598 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 610 "data/maps/MauvilleCity/scripts.pory"

# 611 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 622 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 625 "data/maps/MauvilleCity/scripts.pory"

# 626 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 633 "data/maps/MauvilleCity/scripts.pory"

# 634 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 641 "data/maps/MauvilleCity/scripts.pory"

# 642 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 643 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 646 "data/maps/MauvilleCity/scripts.pory"

# 647 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 652 "data/maps/MauvilleCity/scripts.pory"

# 653 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 655 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 658 "data/maps/MauvilleCity/scripts.pory"

# 659 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 663 "data/maps/MauvilleCity/scripts.pory"

# 664 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 667 "data/maps/MauvilleCity/scripts.pory"

# 668 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 669 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 671 "data/maps/MauvilleCity/scripts.pory"

# 672 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 673 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 674 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 676 "data/maps/MauvilleCity/scripts.pory"

# 677 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 678 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 679 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 680 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 681 "data/maps/MauvilleCity/scripts.pory"

# 682 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 683 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 684 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 685 "data/maps/MauvilleCity/scripts.pory"

# 686 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 687 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 688 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 689 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 690 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 691 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 692 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 693 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 694 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 695 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 696 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 697 "data/maps/MauvilleCity/scripts.pory"

# 698 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 699 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_Gallade::
# 703 "data/maps/MauvilleCity/scripts.pory"
	lock
# 704 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Gallade_Text_0
# 705 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 706 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Wally::
# 711 "data/maps/MauvilleCity/scripts.pory"
	lock
# 712 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_single TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyIntro, MauvilleCity_Text_WallyDefeat, MauvilleCity_EventScript_WallyPostBattle
# 713 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallyPostBattle::
# 726 "data/maps/MauvilleCity/scripts.pory"
	lock
# 727 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyPostBattle_Text_0
# 728 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 729 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 730 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_WallyAndGalladeDepart
# 731 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_GALLADE, MauvilleCity_WallyAndGalladeDepart
# 732 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 734 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_GALLADE
# 735 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 736 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_DefeatedWally
# 737 "data/maps/MauvilleCity/scripts.pory"
	release
	end


# 741 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_WallyAndGalladeDepart:
# 742 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 742 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 743 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 743 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 743 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 743 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 743 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 743 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 743 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 743 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 744 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
	step_end

MauvilleCity_EventScript_Gallade_Text_0:
# 704 "data/maps/MauvilleCity/scripts.pory"
	.string "Gallade: Aiii!$"

MauvilleCity_EventScript_WallyPostBattle_Text_0:
# 727 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: You're good! I think you're\n"
	.string "definitely ready to face Wattson.\p"
	.string "I'm going to head North now. I hear\n"
	.string "there's a family on Route 111 that can\l"
	.string "teach my Pokémon to break rocks.\p"
	.string "Good luck, {PLAYER}!$"

MauvilleCity_Text_WallyDefeat::
# 717 "data/maps/MauvilleCity/scripts.pory"
	.string "Wow, you're learning much faster than I\n"
	.string "did!$"

MauvilleCity_Text_WallyIntro::
# 721 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Oh, hi {PLAYER}! I remember you\n"
	.string "from Petalburg!\p"
	.string "How is your journey going?\p"
	.string "I just beat Wattson! It was a tough\n"
	.string "battle.\p"
	.string "Hey, now that we're both real Pokémon\n"
	.string "Trainers, how about we battle? My team\l"
	.string "is all healed up and ready to go!$"
