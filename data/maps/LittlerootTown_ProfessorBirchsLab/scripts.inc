# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE, 1
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BIRCH, 2
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_RIVAL, 3
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CYNDAQUIL, 4
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_TOTODILE, 5
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BALL_CHIKORITA, 6
# 8 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 9 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_MapScripts::
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_ProfessorBirchsLab_OnTransition
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_OnFrame
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.byte 0
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 17 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Received National Dex
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 6: Chose Johto starter
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 23 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 1: Never occurs
# 25 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 2: Chose starter
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 3: Received starter in lab
# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	@ 5: Received pokedex
# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
/*
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
*/
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
/*
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	*/
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
/*
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
*/
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	lock
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	faceplayer
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	setflag FLAG_BIRCH_AIDE_MET
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	release
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	end
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
/*
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
*/
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RemoveRivalIntroFlag::
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, ProfessorBirchsLab_EventScript_HideMayInBedroom
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, ProfessorBirchsLab_EventScript_HideBrendanInBedroom
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfessorBirchsLab_EventScript_HideMayInBedroom::
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfessorBirchsLab_EventScript_HideBrendanInBedroom::
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of POKéMON.\p"
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own POKéMON yet.\p"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the POKéMON you\l"
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: While you're at it, why not\n"
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\n"
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good TRAINER.\p"
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON while helping me out.\p"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Great!\n"
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a TRAINER.$"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, don't be that way.\n"
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should go meet my kid.$"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: {RIVAL}?\n"
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your POKéMON get tired,\n"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a TRAINER already.\p"
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéDEX.$"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any POKéMON you meet or catch.\p"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare POKéMON\n"
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the POKéDEX,\l"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON\n"
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON!\p"
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different POKéMON.\p"
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute POKéMON, I'll catch\n"
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for POKéMON next?$"
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of POKéMON.\p"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different POKéMON.\p"
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool POKéMON, you bet\n"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON next…$"
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF must use this for research.$"
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on POKéMON.$"
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 1017 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 1018 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 1019 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 1022 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1027 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen::
# 1046 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1047 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1048 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_REMOVE_LAB_STARTERS, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_2
# 1062 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_13
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_1:
# 1064 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_2:
# 1049 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_6
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_5:
# 1052 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_1
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultichoice 25, 3, 1, 4, 2, DYN_MULTICHOICE_CB_NONE, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_11
# 1054 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
# 1055 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_8, 1
# 1056 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1057 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_12
# 1058 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1059 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_6:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_0
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_5


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter::
# 1070 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1071 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_7, NO
# 1072 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_8
# 1073 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_3
# 1078 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4
# 1085 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_5
# 1092 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_6
# 1099 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_7
# 1106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_8
# 1113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_9
# 1120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_10
# 1127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_11
# 1134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_12
# 1141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_13
# 1149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1:
# 1154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_16
# 1171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_15:
# 1173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_3:
# 1074 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1075 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1076 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4:
# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 1080 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_1, MSGBOX_YESNO
# 1081 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1082 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_19
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_5:
# 1086 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 1087 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_3, MSGBOX_YESNO
# 1088 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1089 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_21
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_6:
# 1093 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 1094 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_5, MSGBOX_YESNO
# 1095 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1096 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_23
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_7:
# 1100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 1101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_7, MSGBOX_YESNO
# 1102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_25
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_8:
# 1107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 1108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_9, MSGBOX_YESNO
# 1109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_27
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_9:
# 1114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 1115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_11, MSGBOX_YESNO
# 1116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_29
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_10:
# 1121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 1122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_13, MSGBOX_YESNO
# 1123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_31
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_11:
# 1128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 1129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_15, MSGBOX_YESNO
# 1130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_33
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_12:
# 1135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 1136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_17, MSGBOX_YESNO
# 1137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_35
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_13:
# 1142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET_HISUI, 10, 3
# 1143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_13, MSGBOX_YESNO
# 1144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_37
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_16:
# 1155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 7
# 1158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 8
# 1159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 9
# 1160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_REMOVE_LAB_STARTERS
# 1161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
# 1162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 1165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 10, BirchApproachGivePokedex_GrassStarter
# 1166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorBirchsLab_EventScript_RevisedIntroSequence
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_15

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_19:
# 1083 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 1084 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_21:
# 1090 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 1091 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_23:
# 1097 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 1098 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_25:
# 1104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 1105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_27:
# 1111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 1112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_10
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_29:
# 1118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 1119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_12
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_31:
# 1125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 1126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_14
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_33:
# 1132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 1133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_16
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_35:
# 1139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 1140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_18
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_37:
# 1146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_ROWLET_HISUI, 5
# 1147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_14
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter::
# 1180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_7, NO
# 1182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_8
# 1183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_3
# 1188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4
# 1195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_5
# 1202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_6
# 1209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_7
# 1216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_8
# 1223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_9
# 1230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_10
# 1237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_11
# 1244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_12
# 1251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_13
# 1259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1:
# 1264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_16
# 1281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_15:
# 1283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_3:
# 1184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4:
# 1189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 1190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_0, MSGBOX_YESNO
# 1191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_19
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_5:
# 1196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 1197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_2, MSGBOX_YESNO
# 1198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_21
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_6:
# 1203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 1204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_4, MSGBOX_YESNO
# 1205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_23
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_7:
# 1210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 1211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_6, MSGBOX_YESNO
# 1212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_25
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_8:
# 1217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 1218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_8, MSGBOX_YESNO
# 1219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_27
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_9:
# 1224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 1225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_10, MSGBOX_YESNO
# 1226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_29
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_10:
# 1231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 1232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_12, MSGBOX_YESNO
# 1233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_31
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_11:
# 1238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 1239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_14, MSGBOX_YESNO
# 1240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_33
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_12:
# 1245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 1246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_16, MSGBOX_YESNO
# 1247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_35
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_13:
# 1252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL_HISUI, 10, 3
# 1253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_2, MSGBOX_YESNO
# 1254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_37
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_16:
# 1265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 7
# 1268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 8
# 1269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 9
# 1270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_REMOVE_LAB_STARTERS
# 1271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
# 1272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 1275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 10, BirchApproachGivePokedex_FireStarter
# 1276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorBirchsLab_EventScript_RevisedIntroSequence
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_15

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_19:
# 1193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 1194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_21:
# 1200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 1201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_23:
# 1207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 1208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_25:
# 1214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 1215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_27:
# 1221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 1222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_29:
# 1228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 1229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_11
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_31:
# 1235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 1236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_13
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_33:
# 1242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 1243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_15
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_35:
# 1249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 1250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_17
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_37:
# 1256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL_HISUI, 5
# 1257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter::
# 1289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_7, NO
# 1291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_8
# 1292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_3
# 1297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4
# 1304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_5
# 1311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_6
# 1318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_7
# 1325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_8
# 1332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_9
# 1339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_10
# 1346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_11
# 1353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_12
# 1360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_13
# 1368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1:
# 1373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_16
# 1390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_15:
# 1392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_3:
# 1293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4:
# 1298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 1299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_0, MSGBOX_YESNO
# 1300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_19
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_5:
# 1305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 1306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_2, MSGBOX_YESNO
# 1307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_21
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_6:
# 1312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 1313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_4, MSGBOX_YESNO
# 1314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_23
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_7:
# 1319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 1320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_6, MSGBOX_YESNO
# 1321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_25
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_8:
# 1326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 1327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_8, MSGBOX_YESNO
# 1328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_27
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_9:
# 1333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 1334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_10, MSGBOX_YESNO
# 1335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_29
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_10:
# 1340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 1341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_12, MSGBOX_YESNO
# 1342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_31
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_11:
# 1347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 1348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_14, MSGBOX_YESNO
# 1349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_33
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_12:
# 1354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 1355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_16, MSGBOX_YESNO
# 1356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_35
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_13:
# 1361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT_HISUI, 10, 3
# 1362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_8, MSGBOX_YESNO
# 1363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_37
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_16:
# 1374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 7
# 1377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 8
# 1378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 9
# 1379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_REMOVE_LAB_STARTERS
# 1380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
# 1381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 1382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 1384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 10, BirchApproachGivePokedex_WaterStarter
# 1385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorBirchsLab_EventScript_RevisedIntroSequence
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_15

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_19:
# 1302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 1303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_21:
# 1309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 1310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_23:
# 1316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 1317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_25:
# 1323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 1324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_27:
# 1330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 1331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_29:
# 1337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 1338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_11
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_31:
# 1344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 1345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_13
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_33:
# 1351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 1352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_15
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_35:
# 1358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 1359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_17
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_37:
# 1365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_OSHAWOTT_HISUI, 5
# 1366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1


ProfessorBirchsLab_EventScript_RevisedIntroSequence::
# 1398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 1401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 1404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_NO_BAG_ITEMS_IN_BATTLE
# 1405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDDEN_BY_DEFAULT
# 1406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 1409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 1410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_0
# 1411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_1
# 1413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 1414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 1416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 1417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 1418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 1419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 1420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 1421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_2
# 1422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 1423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_3
# 1425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKEMON_BOX_LINK
# 1426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_CANDY_BAG
# 1427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 1428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_FULL_RESTORE
# 1429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_UNLIMITED_REPEL
# 1430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LEVEL_CAP, 10
# 1432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 1433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 1434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 0
# 1435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 0
# 1436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 1437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_4
	return


NicknamePartyMon::
# 1444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
	return

NicknamePartyMon_2:
# 1446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 1453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 1455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


# 1460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchApproachGivePokedex_GrassStarter:
# 1461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 1461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 1464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchApproachGivePokedex_FireStarter:
# 1465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 1468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchApproachGivePokedex_WaterStarter:
# 1469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_left
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 1473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1
# 1478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro
	return

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1:
# 1475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap
	return


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro::
# 1483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro_Text_0
# 1486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap::
# 1491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainHandicap
# 1494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_HANDICAP
# 1496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_2
# 1500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_1, MSGBOX_YESNO
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_1:
# 1502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_6
# 1508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_2
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_5:
# 1510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_2:
# 1497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_0, MSGBOX_YESNO
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_6:
# 1504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_5


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes::
# 1520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 10
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_1
# 1526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_2
# 1566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_HANDICAP
# 1567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_4, VAR_LEVEL_HANDICAP
# 1568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_2, 0
# 1569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 9
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_12
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_11:
# 1570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 8
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_18
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_17:
# 1571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 7
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_21
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_20:
# 1572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 6
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_24
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_23:
# 1573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 5
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_27
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_26:
# 1574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 4
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_30
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_29:
# 1575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 3
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_33
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_32:
# 1576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 2
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_36
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_35:
# 1577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 1
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_39
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_38:
# 1579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_16
# 1580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 1, 0, DYN_MULTICHOICE_CB_NONE
# 1581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_9, VAR_RESULT
# 1582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_9
# 1585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_43
# 1591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_44
# 1593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_45
# 1595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_46
# 1597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_47
# 1599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_48
# 1601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_49
# 1603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_50
# 1605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_51
# 1607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_52
# 1609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_53
# 1612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_17
# 1613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_1:
# 1521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_0
# 1522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_2:
# 1527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_1
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultichoice 25, 2, 0, 5, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_2, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_3, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_4, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_5, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_6, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_7, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_8, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_9, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_10, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_11, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_12
# 1529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_9, VAR_RESULT
# 1530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_6
# 1538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_9, 127
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_7
# 1546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_9
# 1547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_14, MSGBOX_YESNO
# 1549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_14
# 1558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13
# 1559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_6:
# 1533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13
# 1534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_7:
# 1539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13
# 1541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_12:
# 1569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_3, 1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_11

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_14:
# 1550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_LEVEL_HANDICAP, VAR_TEMP_9
# 1551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_15
# 1552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap
# 1554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_18:
# 1570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_4, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_17

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_21:
# 1571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_5, 3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_20

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_24:
# 1572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_6, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_23

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_27:
# 1573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_7, 5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_26

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_30:
# 1574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_8, 6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_29

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_33:
# 1575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_9, 7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_32

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_36:
# 1576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_10, 8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_35

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_39:
# 1577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_11, 9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_38

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41:
# 1617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_4
# 1618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_18, MSGBOX_YESNO
# 1619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_56
# 1626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_20
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_55:
# 1628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_43:
# 1586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_17
# 1587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_44:
# 1592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_45:
# 1594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_46:
# 1596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_47:
# 1598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_48:
# 1600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_49:
# 1602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_50:
# 1604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_51:
# 1606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_52:
# 1608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_53:
# 1610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 10
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_56:
# 1621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_LEVEL_HANDICAP, VAR_TEMP_4
# 1622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap
# 1623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_19
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_55


LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap::
# 1635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_9
# 1636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_3
# 1638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_4
# 1640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_5
# 1642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_6
# 1644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_7
# 1646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_8
# 1648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_9
# 1650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_10
# 1652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_11
# 1654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_12
# 1657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 1
LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1:
# 1659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_9, 0
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_3:
# 1637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_4:
# 1639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_5:
# 1641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_6:
# 1643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_7:
# 1645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_8:
# 1647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_9:
# 1649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_10:
# 1651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_11:
# 1653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_12:
# 1655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 10
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_0:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Ah, hello {PLAYER}!\lI heard you were going to begin your\njourney as a Pokemon Trainer today.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_1:
# 1052 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What region would you like to choose\n"
	.string "your starter Pokemon from?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_2:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Kanto$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_3:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Johto$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_4:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hoenn$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_5:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Sinnoh$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_6:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Unova$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_7:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Kalos$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_8:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Alola$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_9:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Galar$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_10:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Paldea$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_11:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hisui$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_12:
# 1057 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm sure you'll choose well!\lCome speak to me again if you want to\nsee other options.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_13:
# 1062 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Take care of your Pokemon, and good\n"
	.string "luck on your journey!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0:
# 1074 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better go speak with Prof. Birch before\n"
	.string "taking a Pokemon.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_1:
# 1080 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_2:
# 1084 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Bulbasaur!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_3:
# 1087 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_4:
# 1091 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Chikorita!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_5:
# 1094 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_6:
# 1098 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Treecko!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_7:
# 1101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_8:
# 1105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Turtwig!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_9:
# 1108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_10:
# 1112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Snivy!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_11:
# 1115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_12:
# 1119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Chespin!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_13:
# 1122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Rowlet?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_14:
# 1126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Rowlet!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_15:
# 1129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_16:
# 1133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Grookey!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_17:
# 1136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_18:
# 1140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Sprigatito!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_0:
# 1190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_1:
# 1194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Charmander!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_2:
# 1197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_3:
# 1201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Cyndaquil!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_4:
# 1204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_5:
# 1208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Torchic!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_6:
# 1211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_7:
# 1215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Chimchar!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_8:
# 1218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_9:
# 1222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Tepig!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_10:
# 1225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_11:
# 1229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Fennekin!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_12:
# 1232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Litten?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_13:
# 1236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Litten!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_14:
# 1239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_15:
# 1243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Scorbunny!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_16:
# 1246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_17:
# 1250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Fuecoco!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_0:
# 1299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_1:
# 1303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Squirtle!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_2:
# 1306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_3:
# 1310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Totodile!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_4:
# 1313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_5:
# 1317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Mudkip!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_6:
# 1320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_7:
# 1324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Piplup!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_8:
# 1327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_9:
# 1331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Oshawott!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_10:
# 1334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_11:
# 1338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Froakie!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_12:
# 1341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_13:
# 1345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Popplio!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_14:
# 1348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Sobble?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_15:
# 1352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Sobble!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_16:
# 1355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_17:
# 1359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Quaxly!$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_0:
# 1410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: With that choice, {PLAYER},\nyou have begun your Pokémon journey!\pPlease take this Pokédex too, to record\nall of the Pokémon you encounter.$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_1:
# 1412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Pokédex!$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_2:
# 1421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: You will also need these\nPokéballs, in order to catch new\lPokémon to add to your team.$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_3:
# 1424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: And here are some utility\n"
	.string "items that will make your life as a\l"
	.string "Trainer much easier.$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_4:
# 1437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Double battles are the\n"
	.string "standard format in Hoenn now, so you\l"
	.string "should hurry and catch another\l"
	.string "Pokémon. {RIVAL} is waiting in Oldale\l"
	.string "Town to see you off.$"

NicknamePartyMon_Text_0:
# 1444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give it a nickname?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro_Text_0:
# 1485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hello, {PLAYER}! Professor Birch is\n"
	.string "very excited about your Pokémon\l"
	.string "journey.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_0:
# 1497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You currently do not have a handicap.\p"
	.string "Would you like to set one?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_1:
# 1500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You currently have a handicap of\n"
	.string "{STR_VAR_1}.\p"
	.string "Would you like to change it?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_2:
# 1508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you ever change your mind, come back\n"
	.string "and talk to me.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_0:
# 1521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You currently have a handicap of 10.\p"
	.string "We cannot change it any further.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_1:
# 1527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What level handicap would you like?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_2:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "0$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_3:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "1$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_4:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "2$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_5:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "3$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_6:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "4$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_7:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "5$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_8:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "6$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_9:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "7$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_10:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "8$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_11:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "9$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_12:
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "10$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13:
# 1533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Very well, you still do not have a\n"
	.string "handicap.\p"
	.string "Come back if you ever decide to add one.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_14:
# 1547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you sure you would like a handicap\n"
	.string "of {STR_VAR_2} levels?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_15:
# 1551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Your handicap has been set to\n"
	.string "{STR_VAR_2} levels.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_16:
# 1579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "How much would you like to increase it?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_17:
# 1586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Your handicap remains at\n"
	.string "{STR_VAR_1}.\p"
	.string "Come back if you ever decide to\n"
	.string "increase it.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_18:
# 1618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you sure you would like to increase\n"
	.string "your handicap from {STR_VAR_1} to\l"
	.string "{STR_VAR_2}?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_19:
# 1623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Very well. Your handicap has been set to\n"
	.string "{STR_VAR_2}.\p"
	.string "Come back if you ever decide to\n"
	.string "increase it.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_20:
# 1626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Very well. Your handicap remains at\n"
	.string "{STR_VAR_1}.\p"
	.string "Come back if you ever decide to\n"
	.string "increase it.$"

LittlerootTown_ProfessorBirchsLab_Text_ExplainHandicap::
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I can help you register a handicap for\n"
	.string "your adventure.\p"
	.string "A handicap will let you use slightly\n"
	.string "higher level Pokémon than you\l"
	.string "otherwise could, in all battles.\p"
	.string "Remember, though, that once a handicap\n"
	.string "is set it can’t be lowered, and it will be\l"
	.string "recorded by the Pokémon League\l"
	.string "challenge.$"
