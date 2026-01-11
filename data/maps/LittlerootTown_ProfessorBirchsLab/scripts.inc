# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//.set LOCALID_BIRCHS_LAB_AIDE, 1
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//.set LOCALID_BIRCHS_LAB_BIRCH, 2
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//.set LOCALID_BIRCHS_LAB_RIVAL, 3
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//.set LOCALID_BIRCHS_LAB_BALL_CYNDAQUIL, 4
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//.set LOCALID_BIRCHS_LAB_BALL_TOTODILE, 5
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//.set LOCALID_BIRCHS_LAB_BALL_CHIKORITA, 6
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
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
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
	setobjectmovementtype LOCALID_BIRCHS_LAB_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_BIRCHS_LAB_RIVAL, 5, 10
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
/*
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_BIRCH
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_NORTH
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_AIDE, DIR_EAST
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_AIDE, 10, 10
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_BALL_CYNDAQUIL
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_BALL_TOTODILE
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_BALL_CHIKORITA
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BALL_CYNDAQUIL, DIR_SOUTH
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BALL_CYNDAQUIL, 8, 4
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BALL_TOTODILE, DIR_SOUTH
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BALL_TOTODILE, 9, 4
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BALL_CHIKORITA, DIR_SOUTH
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BALL_CHIKORITA, 10, 4
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_BIRCH, DIR_SOUTH
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_BIRCH, 6, 4
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCHS_LAB_RIVAL, DIR_EAST
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCHS_LAB_RIVAL, 5, 5
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
*/
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
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
	walk_up
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
/*
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
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
	delay 10
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	*/
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
/*
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
*/
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
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
	walk_up
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	lock
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	faceplayer
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	setflag FLAG_BIRCH_AIDE_MET
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	release
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	end
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
/*
# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_BALL_CYNDAQUIL
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_BALL_CYNDAQUIL
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_BALL_TOTODILE
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_BALL_TOTODILE
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_BALL_CHIKORITA
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_BALL_CHIKORITA
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
*/
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_DEFEATED_NORMAN_INTRO, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	//goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RemoveRivalIntroFlag::
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, ProfessorBirchsLab_EventScript_HideMayInBedroom
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, ProfessorBirchsLab_EventScript_HideBrendanInBedroom
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfessorBirchsLab_EventScript_HideMayInBedroom::
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfessorBirchsLab_EventScript_HideBrendanInBedroom::
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of Pokémon.\p"
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own Pokémon yet.\p"
# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the Pokémon you\l"
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: While you're at it, why not\n"
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: If you work at Pokémon\n"
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good TRAINER.\p"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon while helping me out.\p"
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Great!\n"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a TRAINER.$"
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, don't be that way.\n"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should go meet my kid.$"
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: {RIVAL}?\n"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your Pokémon get tired,\n"
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a TRAINER already.\p"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéDEX.$"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any Pokémon you meet or catch.\p"
# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare Pokémon\n"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the POKéDEX,\l"
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Countless Pokémon\n"
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon!\p"
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different Pokémon.\p"
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute Pokémon, I'll catch\n"
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for Pokémon next?$"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of Pokémon.\p"
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different Pokémon.\p"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool Pokémon, you bet\n"
# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon next…$"
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF must use this for research.$"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study Pokémon.\p"
# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also Pokémon from other\l"
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many Pokémon, {PLAYER}{KUN}!$"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out Pokémon.\p"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare Pokémon only found\n"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three Pokémon!$"
# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare Pokémon\n"
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three Pokémon!$"
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE Pokémon\n"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER Pokémon\n"
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS Pokémon\n"
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable Pokémon.$"
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine Pokémon!$"
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised Pokémon.\n"
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this Pokémon.$"
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon, I prefer slowly and \l"
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 1017 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1018 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 1019 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 1021 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 1022 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 1023 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 1024 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1025 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 1026 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1027 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1028 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1029 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen::
# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1044 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1045 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_REMOVE_LAB_STARTERS, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_2
# 1059 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_13
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_1:
# 1061 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_2:
# 1046 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_6
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_5:
# 1049 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_1
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultichoice 25, 3, 1, 4, 2, DYN_MULTICHOICE_CB_NONE, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_11
# 1051 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
# 1052 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_8, 1
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1054 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_12
# 1055 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1056 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_6:
# 1047 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_0
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_5


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter::
# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1068 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_FACING
# 1069 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case DIR_EAST, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_3
# 1070 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case DIR_WEST, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_3
# 1071 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case DIR_SOUTH, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_3
# 1077 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_7, NO
# 1078 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_8
# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_6
# 1084 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_7
# 1091 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_8
# 1098 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_9
# 1105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_10
# 1112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_11
# 1119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_12
# 1126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_13
# 1133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_14
# 1140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_15
# 1147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_16
# 1155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_3:
# 1072 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4:
# 1160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_19
# 1177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_18:
# 1179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_6:
# 1080 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1081 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1082 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_7:
# 1085 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 1086 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_1, MSGBOX_YESNO
# 1087 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1088 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_22
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_8:
# 1092 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 1093 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_3, MSGBOX_YESNO
# 1094 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1095 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_24
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_9:
# 1099 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 1100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_5, MSGBOX_YESNO
# 1101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_26
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_10:
# 1106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 1107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_7, MSGBOX_YESNO
# 1108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_28
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_11:
# 1113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 1114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_9, MSGBOX_YESNO
# 1115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_30
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_12:
# 1120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 1121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_11, MSGBOX_YESNO
# 1122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_32
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_13:
# 1127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 1128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_13, MSGBOX_YESNO
# 1129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_34
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_14:
# 1134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 1135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_15, MSGBOX_YESNO
# 1136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_36
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_15:
# 1141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 1142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_17, MSGBOX_YESNO
# 1143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_38
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_16:
# 1148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET_HISUI, 10, 3
# 1149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_13, MSGBOX_YESNO
# 1150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_40
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_19:
# 1161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_GRASS_STARTER_BALL
# 1164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_FIRE_STARTER_BALL
# 1165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_WATER_STARTER_BALL
# 1166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_REMOVE_LAB_STARTERS
# 1167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
# 1168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 1171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, BirchApproachGivePokedex_GrassStarter
# 1172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorBirchsLab_EventScript_RevisedIntroSequence
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_18

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_22:
# 1089 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 1090 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_24:
# 1096 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 1097 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_26:
# 1103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 1104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_28:
# 1110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 1111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_30:
# 1117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 1118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_10
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_32:
# 1124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 1125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_12
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_34:
# 1131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 1132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_14
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_36:
# 1138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 1139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_16
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_38:
# 1145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 1146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_18
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_40:
# 1152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_ROWLET_HISUI, 5
# 1153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_14
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter::
# 1186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_FACING
# 1188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case DIR_EAST, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_3
# 1189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case DIR_WEST, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_3
# 1190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case DIR_SOUTH, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_3
# 1196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_7, NO
# 1197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_8
# 1198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_6
# 1203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_7
# 1210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_8
# 1217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_9
# 1224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_10
# 1231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_11
# 1238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_12
# 1245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_13
# 1252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_14
# 1259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_15
# 1266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_16
# 1274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_3:
# 1191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4:
# 1279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_19
# 1296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_18:
# 1298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_6:
# 1199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_7:
# 1204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 1205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_0, MSGBOX_YESNO
# 1206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_22
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_8:
# 1211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 1212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_2, MSGBOX_YESNO
# 1213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_24
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_9:
# 1218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 1219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_4, MSGBOX_YESNO
# 1220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_26
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_10:
# 1225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 1226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_6, MSGBOX_YESNO
# 1227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_28
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_11:
# 1232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 1233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_8, MSGBOX_YESNO
# 1234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_30
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_12:
# 1239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 1240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_10, MSGBOX_YESNO
# 1241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_32
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_13:
# 1246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 1247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_12, MSGBOX_YESNO
# 1248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_34
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_14:
# 1253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 1254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_14, MSGBOX_YESNO
# 1255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_36
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_15:
# 1260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 1261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_16, MSGBOX_YESNO
# 1262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_38
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_16:
# 1267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL_HISUI, 10, 3
# 1268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_2, MSGBOX_YESNO
# 1269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_40
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_19:
# 1280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_GRASS_STARTER_BALL
# 1283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_FIRE_STARTER_BALL
# 1284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_WATER_STARTER_BALL
# 1285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_REMOVE_LAB_STARTERS
# 1286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
# 1287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 1290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, BirchApproachGivePokedex_FireStarter
# 1291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorBirchsLab_EventScript_RevisedIntroSequence
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_18

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_22:
# 1208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 1209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_24:
# 1215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 1216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_26:
# 1222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 1223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_28:
# 1229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 1230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_30:
# 1236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 1237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_32:
# 1243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 1244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_11
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_34:
# 1250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 1251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_13
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_36:
# 1257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 1258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_15
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_38:
# 1264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 1265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_17
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_40:
# 1271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL_HISUI, 5
# 1272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter::
# 1304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_FACING
# 1306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case DIR_EAST, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_3
# 1307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case DIR_WEST, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_3
# 1308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case DIR_SOUTH, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_3
# 1314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_7, NO
# 1315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_8
# 1316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_6
# 1321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_7
# 1328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_8
# 1335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_9
# 1342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_10
# 1349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_11
# 1356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_12
# 1363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_13
# 1370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_14
# 1377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_15
# 1384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_16
# 1392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_3:
# 1309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4:
# 1397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_19
# 1414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_18:
# 1416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_6:
# 1317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_7:
# 1322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 1323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_0, MSGBOX_YESNO
# 1324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_22
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_8:
# 1329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 1330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_2, MSGBOX_YESNO
# 1331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_24
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_9:
# 1336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 1337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_4, MSGBOX_YESNO
# 1338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_26
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_10:
# 1343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 1344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_6, MSGBOX_YESNO
# 1345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_28
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_11:
# 1350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 1351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_8, MSGBOX_YESNO
# 1352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_30
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_12:
# 1357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 1358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_10, MSGBOX_YESNO
# 1359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_32
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_13:
# 1364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 1365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_12, MSGBOX_YESNO
# 1366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_34
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_14:
# 1371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 1372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_14, MSGBOX_YESNO
# 1373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_36
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_15:
# 1378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 1379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_16, MSGBOX_YESNO
# 1380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_38
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_16:
# 1385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT_HISUI, 10, 3
# 1386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_8, MSGBOX_YESNO
# 1387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_40
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_19:
# 1398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_GRASS_STARTER_BALL
# 1401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_FIRE_STARTER_BALL
# 1402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_WATER_STARTER_BALL
# 1403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_REMOVE_LAB_STARTERS
# 1404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
# 1405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 1406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 1408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_BIRCH, BirchApproachGivePokedex_WaterStarter
# 1409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorBirchsLab_EventScript_RevisedIntroSequence
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_18

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_22:
# 1326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 1327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_24:
# 1333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 1334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_26:
# 1340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 1341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_28:
# 1347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 1348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_30:
# 1354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 1355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_32:
# 1361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 1362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_11
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_34:
# 1368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 1369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_13
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_36:
# 1375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 1376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_15
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_38:
# 1382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 1383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_17
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_40:
# 1389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_OSHAWOTT_HISUI, 5
# 1390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4


ProfessorBirchsLab_EventScript_RevisedIntroSequence::
# 1422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 1425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 1428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_NO_BAG_ITEMS_IN_BATTLE
# 1429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDDEN_BY_DEFAULT
# 1430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 1433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 1434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_0
# 1435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_1
# 1437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 1438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 1440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 1441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 1443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 1444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 1445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_2
# 1446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_PREMIER_BALL, 1
# 1447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_3
# 1449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKEMON_BOX_LINK
# 1451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_EXP_CANDY_S
# 1452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL
# 1453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 1454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_FULL_RESTORE
# 1455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_UNLIMITED_REPEL
# 1456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 1457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LEVEL_CAP, 10
# 1459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 1460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 1461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 0
# 1462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 0
# 1463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 1464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_4
	return


NicknamePartyMon::
# 1471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
	return

NicknamePartyMon_2:
# 1473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 1480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 1482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


# 1487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchApproachGivePokedex_GrassStarter:
# 1488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 1488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 1491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchApproachGivePokedex_FireStarter:
# 1492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 1495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchApproachGivePokedex_WaterStarter:
# 1496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_left
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 1500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1
# 1505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro
	return

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1:
# 1502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap
	return


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro::
# 1510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro_Text_0
# 1513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap::
# 1518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainHandicap
# 1521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_HANDICAP
# 1523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_2
# 1527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_1, MSGBOX_YESNO
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_1:
# 1529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_6
# 1535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_2
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_5:
# 1537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_2:
# 1524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_0, MSGBOX_YESNO
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_6:
# 1531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_5


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes::
# 1547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 10
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_1
# 1553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_2
# 1593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_HANDICAP
# 1594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_4, VAR_LEVEL_HANDICAP
# 1595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_2, 0
# 1596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 9
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_12
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_11:
# 1597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 8
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_18
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_17:
# 1598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 7
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_21
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_20:
# 1599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 6
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_24
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_23:
# 1600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 5
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_27
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_26:
# 1601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 4
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_30
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_29:
# 1602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 3
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_33
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_32:
# 1603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 2
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_36
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_35:
# 1604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 1
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_39
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_38:
# 1606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_16
# 1607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 1, 0, DYN_MULTICHOICE_CB_NONE
# 1608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_9, VAR_RESULT
# 1609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_9
# 1612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_43
# 1618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_44
# 1620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_45
# 1622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_46
# 1624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_47
# 1626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_48
# 1628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_49
# 1630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_50
# 1632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_51
# 1634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_52
# 1636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_53
# 1639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_17
# 1640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_1:
# 1548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_0
# 1549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_2:
# 1554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_1
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultichoice 25, 2, 0, 5, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_2, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_3, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_4, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_5, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_6, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_7, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_8, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_9, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_10, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_11, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_12
# 1556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_9, VAR_RESULT
# 1557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_6
# 1565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_9, 127
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_7
# 1573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_9
# 1574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_14, MSGBOX_YESNO
# 1576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_14
# 1585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13
# 1586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_6:
# 1560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13
# 1561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_7:
# 1566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13
# 1568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_12:
# 1596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_3, 1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_11

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_14:
# 1577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_LEVEL_HANDICAP, VAR_TEMP_9
# 1578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_15
# 1579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap
# 1581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_18:
# 1597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_4, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_17

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_21:
# 1598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_5, 3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_20

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_24:
# 1599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_6, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_23

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_27:
# 1600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_7, 5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_26

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_30:
# 1601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_8, 6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_29

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_33:
# 1602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_9, 7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_32

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_36:
# 1603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_10, 8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_35

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_39:
# 1604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_11, 9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_38

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41:
# 1644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_4
# 1645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_18, MSGBOX_YESNO
# 1646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_56
# 1653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_20
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_55:
# 1655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_43:
# 1613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_17
# 1614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_44:
# 1619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_45:
# 1621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_46:
# 1623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_47:
# 1625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_48:
# 1627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_49:
# 1629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_50:
# 1631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_51:
# 1633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_52:
# 1635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_53:
# 1637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 10
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_56:
# 1648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_LEVEL_HANDICAP, VAR_TEMP_4
# 1649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap
# 1650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_19
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_55


LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap::
# 1662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_9
# 1663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_3
# 1665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_4
# 1667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_5
# 1669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_6
# 1671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_7
# 1673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_8
# 1675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_9
# 1677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_10
# 1679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_11
# 1681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_12
# 1684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 1
LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1:
# 1686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_9, 0
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_3:
# 1664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_4:
# 1666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_5:
# 1668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_6:
# 1670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_7:
# 1672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_8:
# 1674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_9:
# 1676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_10:
# 1678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_11:
# 1680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_12:
# 1682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 10
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_0:
# 1047 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Ah, hello {PLAYER}!\lI heard you were going to begin your\njourney as a Pokemon Trainer today.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_1:
# 1049 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What region would you like to choose\n"
	.string "your starter Pokemon from?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_2:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Kanto$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_3:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Johto$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_4:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hoenn$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_5:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Sinnoh$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_6:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Unova$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_7:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Kalos$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_8:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Alola$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_9:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Galar$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_10:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Paldea$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_11:
# 1050 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hisui$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_12:
# 1054 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm sure you'll choose well!\lCome speak to me again if you want to\nsee other options.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_13:
# 1059 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Take care of your Pokemon, and good\n"
	.string "luck on your journey!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0:
# 1080 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better go speak with Prof. Birch before\n"
	.string "taking a Pokemon.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_1:
# 1086 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_2:
# 1090 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Bulbasaur!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_3:
# 1093 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_4:
# 1097 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Chikorita!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_5:
# 1100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_6:
# 1104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Treecko!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_7:
# 1107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_8:
# 1111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Turtwig!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_9:
# 1114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_10:
# 1118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Snivy!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_11:
# 1121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_12:
# 1125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Chespin!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_13:
# 1128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Rowlet?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_14:
# 1132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Rowlet!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_15:
# 1135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_16:
# 1139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Grookey!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_17:
# 1142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_18:
# 1146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Sprigatito!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_0:
# 1205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_1:
# 1209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Charmander!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_2:
# 1212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_3:
# 1216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Cyndaquil!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_4:
# 1219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_5:
# 1223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Torchic!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_6:
# 1226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_7:
# 1230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Chimchar!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_8:
# 1233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_9:
# 1237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Tepig!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_10:
# 1240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_11:
# 1244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Fennekin!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_12:
# 1247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Litten?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_13:
# 1251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Litten!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_14:
# 1254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_15:
# 1258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Scorbunny!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_16:
# 1261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_17:
# 1265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Fuecoco!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_0:
# 1323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_1:
# 1327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Squirtle!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_2:
# 1330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_3:
# 1334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Totodile!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_4:
# 1337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_5:
# 1341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Mudkip!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_6:
# 1344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_7:
# 1348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Piplup!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_8:
# 1351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_9:
# 1355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Oshawott!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_10:
# 1358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_11:
# 1362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Froakie!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_12:
# 1365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_13:
# 1369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Popplio!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_14:
# 1372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Sobble?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_15:
# 1376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Sobble!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_16:
# 1379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_17:
# 1383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Quaxly!$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_0:
# 1434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: With that choice, {PLAYER},\nyou have begun your Pokémon journey!\pPlease take this Pokédex too, to record\nall of the Pokémon you encounter.$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_1:
# 1436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Pokédex!$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_2:
# 1445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: You will also need\n"
	.string "Pokéballs, in order to catch new\l"
	.string "Pokémon to add to your team. This\l"
	.string "should help you get started, but you\l"
	.string "can buy more at the Mart in Oldale Town.$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_3:
# 1448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: And here are some utility\n"
	.string "items that will make your life as a\l"
	.string "Trainer much easier.$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_4:
# 1464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Double battles are the\n"
	.string "standard format in Hoenn now, so you\l"
	.string "should hurry and catch another\l"
	.string "Pokémon. {RIVAL} is waiting in Oldale\l"
	.string "Town to see you off.$"

NicknamePartyMon_Text_0:
# 1471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give it a nickname?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro_Text_0:
# 1512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hello, {PLAYER}! Professor Birch is\n"
	.string "very excited about your Pokémon\l"
	.string "journey.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_0:
# 1524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You currently do not have a handicap.\p"
	.string "Would you like to set one?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_1:
# 1527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You currently have a handicap of\n"
	.string "{STR_VAR_1}.\p"
	.string "Would you like to change it?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_2:
# 1535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you ever change your mind, come back\n"
	.string "and talk to me.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_0:
# 1548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You currently have a handicap of 10.\p"
	.string "We cannot change it any further.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_1:
# 1554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What level handicap would you like?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_2:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "0$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_3:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "1$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_4:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "2$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_5:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "3$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_6:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "4$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_7:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "5$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_8:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "6$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_9:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "7$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_10:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "8$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_11:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "9$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_12:
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "10$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13:
# 1560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Very well, you still do not have a\n"
	.string "handicap.\p"
	.string "Come back if you ever decide to add one.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_14:
# 1574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you sure you would like a handicap\n"
	.string "of {STR_VAR_2} levels?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_15:
# 1578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Your handicap has been set to\n"
	.string "{STR_VAR_2} levels.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_16:
# 1606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "How much would you like to increase it?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_17:
# 1613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Your handicap remains at\n"
	.string "{STR_VAR_1}.\p"
	.string "Come back if you ever decide to\n"
	.string "increase it.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_18:
# 1645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you sure you would like to increase\n"
	.string "your handicap from {STR_VAR_1} to\l"
	.string "{STR_VAR_2}?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_19:
# 1650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Very well. Your handicap has been set to\n"
	.string "{STR_VAR_2}.\p"
	.string "Come back if you ever decide to\n"
	.string "increase it.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_20:
# 1653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Very well. Your handicap remains at\n"
	.string "{STR_VAR_1}.\p"
	.string "Come back if you ever decide to\n"
	.string "increase it.$"

LittlerootTown_ProfessorBirchsLab_Text_ExplainHandicap::
# 1542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I can help you register a handicap for\n"
	.string "your adventure.\p"
	.string "A handicap will let you use slightly\n"
	.string "higher level Pokémon than you\l"
	.string "otherwise could, in all battles.\p"
	.string "Remember, though, that once a handicap\n"
	.string "is set it can’t be lowered, and it will be\l"
	.string "recorded by the Pokémon League\l"
	.string "challenge.$"
