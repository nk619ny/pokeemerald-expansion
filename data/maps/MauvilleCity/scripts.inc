# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 3 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 4 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 5 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_GALLADE, 12
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
MauvilleCity_EventScript_WallysUncle::
# 74 "data/maps/MauvilleCity/scripts.pory"
	lock
# 75 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 76 "data/maps/MauvilleCity/scripts.pory"
	//goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 77 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 78 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 79 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 80 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/MauvilleCity/scripts.pory"
	release
# 82 "data/maps/MauvilleCity/scripts.pory"
	end
# 83 "data/maps/MauvilleCity/scripts.pory"

# 84 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 85 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 86 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 87 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 88 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/MauvilleCity/scripts.pory"
	release
# 90 "data/maps/MauvilleCity/scripts.pory"
	end
# 91 "data/maps/MauvilleCity/scripts.pory"

# 92 "data/maps/MauvilleCity/scripts.pory"
/* MauvilleCity_EventScript_Wally::
# 93 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 94 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 95 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 96 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 98 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 99 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 100 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 101 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 103 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 104 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 106 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 108 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 109 "data/maps/MauvilleCity/scripts.pory"
	end */
# 110 "data/maps/MauvilleCity/scripts.pory"

# 111 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 112 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 113 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 114 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 115 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 116 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 117 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 118 "data/maps/MauvilleCity/scripts.pory"
	end
# 119 "data/maps/MauvilleCity/scripts.pory"

# 120 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 121 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 122 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 123 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 124 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 125 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 126 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 127 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 128 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 130 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 131 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 132 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 134 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 136 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 138 "data/maps/MauvilleCity/scripts.pory"
	end
# 139 "data/maps/MauvilleCity/scripts.pory"

# 140 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 143 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 144 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 145 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 146 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 147 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 148 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 149 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 151 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 155 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 157 "data/maps/MauvilleCity/scripts.pory"
	end
# 158 "data/maps/MauvilleCity/scripts.pory"

# 159 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 160 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 161 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 162 "data/maps/MauvilleCity/scripts.pory"
	//clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 163 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 164 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 165 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 166 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 167 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 168 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 169 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 170 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 171 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 172 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 173 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 174 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 175 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 176 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 177 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 178 "data/maps/MauvilleCity/scripts.pory"
	end
# 179 "data/maps/MauvilleCity/scripts.pory"

# 180 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 181 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 182 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 183 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 184 "data/maps/MauvilleCity/scripts.pory"
	return
# 185 "data/maps/MauvilleCity/scripts.pory"

# 186 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 187 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 188 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 189 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 190 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 191 "data/maps/MauvilleCity/scripts.pory"
	return
# 192 "data/maps/MauvilleCity/scripts.pory"

# 193 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 194 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 195 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 196 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 197 "data/maps/MauvilleCity/scripts.pory"
	return
# 198 "data/maps/MauvilleCity/scripts.pory"

# 199 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 200 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 201 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 202 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 203 "data/maps/MauvilleCity/scripts.pory"
	return
# 204 "data/maps/MauvilleCity/scripts.pory"

# 205 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 206 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 207 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 208 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 209 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 211 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 212 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 213 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 214 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 215 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 216 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 217 "data/maps/MauvilleCity/scripts.pory"
	return
# 218 "data/maps/MauvilleCity/scripts.pory"

# 219 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 220 "data/maps/MauvilleCity/scripts.pory"
	//setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 221 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 222 "data/maps/MauvilleCity/scripts.pory"
	release
# 223 "data/maps/MauvilleCity/scripts.pory"
	end
# 224 "data/maps/MauvilleCity/scripts.pory"

# 225 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 226 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 227 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 229 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 230 "data/maps/MauvilleCity/scripts.pory"
	end
# 231 "data/maps/MauvilleCity/scripts.pory"

# 232 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 233 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 235 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 236 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 237 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 238 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 239 "data/maps/MauvilleCity/scripts.pory"

# 240 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 241 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 242 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 243 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 244 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 246 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 247 "data/maps/MauvilleCity/scripts.pory"

# 248 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 249 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 250 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 251 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 252 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 254 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 257 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 258 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 260 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 261 "data/maps/MauvilleCity/scripts.pory"

# 262 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 263 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 264 "data/maps/MauvilleCity/scripts.pory"
	delay_16
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
	walk_left
# 271 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 272 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 273 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 274 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 275 "data/maps/MauvilleCity/scripts.pory"

# 276 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 277 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 278 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 279 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 280 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 281 "data/maps/MauvilleCity/scripts.pory"

# 282 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 283 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 284 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 285 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 286 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 287 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 288 "data/maps/MauvilleCity/scripts.pory"

# 289 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 290 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 291 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 292 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 293 "data/maps/MauvilleCity/scripts.pory"

# 294 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
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
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 301 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 302 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 303 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 304 "data/maps/MauvilleCity/scripts.pory"

# 305 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 306 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 307 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 308 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 309 "data/maps/MauvilleCity/scripts.pory"

# 310 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 311 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 312 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 313 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 316 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 317 "data/maps/MauvilleCity/scripts.pory"

# 318 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 319 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 320 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 321 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 322 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 323 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 325 "data/maps/MauvilleCity/scripts.pory"

# 326 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 327 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 328 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 329 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 331 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 332 "data/maps/MauvilleCity/scripts.pory"

# 333 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 337 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 338 "data/maps/MauvilleCity/scripts.pory"

# 339 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 342 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 343 "data/maps/MauvilleCity/scripts.pory"

# 344 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 345 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 354 "data/maps/MauvilleCity/scripts.pory"

# 355 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_down
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
	walk_left
# 365 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 366 "data/maps/MauvilleCity/scripts.pory"

# 367 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 379 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 380 "data/maps/MauvilleCity/scripts.pory"

# 381 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 393 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 394 "data/maps/MauvilleCity/scripts.pory"

# 395 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_left
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
	walk_left
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 406 "data/maps/MauvilleCity/scripts.pory"

# 407 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_down
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
	walk_left
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 418 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 419 "data/maps/MauvilleCity/scripts.pory"

# 420 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 421 "data/maps/MauvilleCity/scripts.pory"
	lock
# 422 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 423 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 424 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 425 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 426 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 427 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 428 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 429 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 430 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 431 "data/maps/MauvilleCity/scripts.pory"
	release
# 432 "data/maps/MauvilleCity/scripts.pory"
	end
# 433 "data/maps/MauvilleCity/scripts.pory"

# 434 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 435 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 436 "data/maps/MauvilleCity/scripts.pory"
	release
# 437 "data/maps/MauvilleCity/scripts.pory"
	end
# 438 "data/maps/MauvilleCity/scripts.pory"

# 439 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 440 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 441 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 442 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 443 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 444 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 445 "data/maps/MauvilleCity/scripts.pory"
	release
# 446 "data/maps/MauvilleCity/scripts.pory"
	end
# 447 "data/maps/MauvilleCity/scripts.pory"

# 448 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt::
# 449 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 450 "data/maps/MauvilleCity/scripts.pory"
	release
# 451 "data/maps/MauvilleCity/scripts.pory"
	end
# 452 "data/maps/MauvilleCity/scripts.pory"

# 453 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 454 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 455 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 456 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 457 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 458 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 459 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 460 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 461 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 462 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 463 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 464 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 465 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 466 "data/maps/MauvilleCity/scripts.pory"
	end
# 467 "data/maps/MauvilleCity/scripts.pory"

# 468 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 469 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 470 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 471 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 472 "data/maps/MauvilleCity/scripts.pory"

# 473 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 474 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 475 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 476 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 477 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 478 "data/maps/MauvilleCity/scripts.pory"

# 479 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 480 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 481 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 482 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 483 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 484 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 485 "data/maps/MauvilleCity/scripts.pory"

# 486 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 488 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 489 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 490 "data/maps/MauvilleCity/scripts.pory"

# 491 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 495 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 499 "data/maps/MauvilleCity/scripts.pory"

# 500 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 504 "data/maps/MauvilleCity/scripts.pory"

# 505 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 511 "data/maps/MauvilleCity/scripts.pory"

# 512 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 515 "data/maps/MauvilleCity/scripts.pory"

# 516 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 519 "data/maps/MauvilleCity/scripts.pory"

# 520 "data/maps/MauvilleCity/scripts.pory"
/*MauvilleCity_Text_WallyDefeat:
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$" */
# 524 "data/maps/MauvilleCity/scripts.pory"
//original Wally defeat text
# 525 "data/maps/MauvilleCity/scripts.pory"

# 526 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 529 "data/maps/MauvilleCity/scripts.pory"

# 530 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 536 "data/maps/MauvilleCity/scripts.pory"

# 537 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 538 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 544 "data/maps/MauvilleCity/scripts.pory"

# 545 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 553 "data/maps/MauvilleCity/scripts.pory"

# 554 "data/maps/MauvilleCity/scripts.pory"

# 555 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 561 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 562 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 565 "data/maps/MauvilleCity/scripts.pory"

# 566 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 569 "data/maps/MauvilleCity/scripts.pory"

# 570 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 578 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 582 "data/maps/MauvilleCity/scripts.pory"

# 583 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 591 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 597 "data/maps/MauvilleCity/scripts.pory"

# 598 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 605 "data/maps/MauvilleCity/scripts.pory"

# 606 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 613 "data/maps/MauvilleCity/scripts.pory"

# 614 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 618 "data/maps/MauvilleCity/scripts.pory"

# 619 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 622 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 624 "data/maps/MauvilleCity/scripts.pory"

# 625 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 630 "data/maps/MauvilleCity/scripts.pory"

# 631 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 635 "data/maps/MauvilleCity/scripts.pory"

# 636 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 638 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 639 "data/maps/MauvilleCity/scripts.pory"

# 640 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 643 "data/maps/MauvilleCity/scripts.pory"

# 644 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 648 "data/maps/MauvilleCity/scripts.pory"

# 649 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 650 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 653 "data/maps/MauvilleCity/scripts.pory"

# 654 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 655 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 656 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 657 "data/maps/MauvilleCity/scripts.pory"

# 658 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 660 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 664 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 665 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 669 "data/maps/MauvilleCity/scripts.pory"

# 670 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_Gallade::
# 675 "data/maps/MauvilleCity/scripts.pory"
	lock
# 676 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Gallade_Text_0
# 677 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 678 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Wally::
# 683 "data/maps/MauvilleCity/scripts.pory"
	lock
# 684 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_single TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyIntro, MauvilleCity_Text_WallyDefeat, MauvilleCity_EventScript_WallyPostBattle
# 685 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallyPostBattle::
# 698 "data/maps/MauvilleCity/scripts.pory"
	lock
# 699 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyPostBattle_Text_0
# 700 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 701 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 702 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_WallyAndGalladeDepart
# 703 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_GALLADE, MauvilleCity_WallyAndGalladeDepart
# 704 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 705 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 706 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_GALLADE
# 707 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 708 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_DefeatedWally
# 709 "data/maps/MauvilleCity/scripts.pory"
	release
	end


# 713 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_WallyAndGalladeDepart:
# 714 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 714 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 715 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 715 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 715 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 715 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 715 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 715 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 715 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 715 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
# 716 "data/maps/MauvilleCity/scripts.pory"
	walk_fast_up
	step_end

MauvilleCity_EventScript_Temporary::
# 720 "data/maps/MauvilleCity/scripts.pory"
	lock
# 721 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_LEVEL_CAP, 5
# 722 "data/maps/MauvilleCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_CAP
# 723 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Temporary_Text_0
# 724 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 725 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_UNLIMITED_REPEL
# 726 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 727 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 728 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_EventScript_Gallade_Text_0:
# 676 "data/maps/MauvilleCity/scripts.pory"
	.string "Gallade: Aiii!$"

MauvilleCity_EventScript_WallyPostBattle_Text_0:
# 699 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: You're good! I think you're\n"
	.string "definitely ready to face Wattson.\p"
	.string "I'm going to head North now. I hear\n"
	.string "there's a family on Route 111 that can\l"
	.string "teach my Pokémon to break rocks.\p"
	.string "Good luck, {PLAYER}!$"

MauvilleCity_EventScript_Temporary_Text_0:
# 723 "data/maps/MauvilleCity/scripts.pory"
	.string "New level cap is {STR_VAR_1}$"

MauvilleCity_Text_WallyDefeat::
# 689 "data/maps/MauvilleCity/scripts.pory"
	.string "Wow, you're learning much faster than I\n"
	.string "did!$"

MauvilleCity_Text_WallyIntro::
# 693 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Oh, hi {PLAYER}! I remember you\n"
	.string "from Petalburg!\p"
	.string "How is your journey going?\p"
	.string "I just beat Wattson! It was a tough\n"
	.string "battle.\p"
	.string "Hey, now that we're both real Pokémon\n"
	.string "Trainers, how about we battle? My team\l"
	.string "is all healed up and ready to go!$"
