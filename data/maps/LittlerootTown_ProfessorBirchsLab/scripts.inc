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
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setmaplayoutindex LAYOUT_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB_WITH_TABLE
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_WANDER_UP_AND_DOWN
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCH
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_NORTH
# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_AIDE, DIR_EAST
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_AIDE, 10, 10
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CYNDAQUIL
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_TOTODILE
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BALL_CHIKORITA
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_RIVAL
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CYNDAQUIL, DIR_SOUTH
# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CYNDAQUIL, 8, 4
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_TOTODILE, DIR_SOUTH
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_TOTODILE, 9, 4
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BALL_CHIKORITA, DIR_SOUTH
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BALL_CHIKORITA, 10, 4
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_BIRCH, DIR_SOUTH
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_BIRCH, 6, 4
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_RIVAL, DIR_EAST
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setobjectxy LOCALID_RIVAL, 5, 5
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.2byte 0
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
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
	step_end
# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational, MSGBOX_DEFAULT
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 10
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_CLICK
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playse SE_PC_ON
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitse
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone, MSGBOX_DEFAULT
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 0
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool, MSGBOX_DEFAULT
# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe, MSGBOX_DEFAULT
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon, MSGBOX_DEFAULT
# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	lock
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	faceplayer
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	setflag FLAG_BIRCH_AIDE_MET
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	release
# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
//	end
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil, MSGBOX_YESNO
# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile, MSGBOX_YESNO
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita, MSGBOX_YESNO
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime
# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone, MSGBOX_DEFAULT
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable, MSGBOX_DEFAULT
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CYNDAQUIL
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CYNDAQUIL
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TOTODILE
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_TOTODILE
# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHIKORITA
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty
# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BALL_CHIKORITA
# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting, MSGBOX_DEFAULT
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3, ProfBirch_EventScript_RatePokedexOrRegister
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, ProfBirch_EventScript_RatePokedexOrRegister
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 511 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 512 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 523 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 524 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 548 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 550 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 570 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 577 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 602 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 603 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 643 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 645 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 647 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 648 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 649 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 651 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 652 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 653 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 654 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 655 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 656 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 657 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 658 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 659 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 660 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 663 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 667 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RemoveRivalIntroFlag::
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 669 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, ProfessorBirchsLab_EventScript_HideMayInBedroom
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, ProfessorBirchsLab_EventScript_HideBrendanInBedroom
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
    return
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfessorBirchsLab_EventScript_HideMayInBedroom::
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 675 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 677 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
ProfessorBirchsLab_EventScript_HideBrendanInBedroom::
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 683 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 685 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 689 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 691 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 695 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 697 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of POKéMON.\p"
# 703 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 705 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own POKéMON yet.\p"
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the POKéMON you\l"
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 719 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 721 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 722 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: While you're at it, why not\n"
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 724 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 725 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\n"
# 727 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good TRAINER.\p"
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON while helping me out.\p"
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 733 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 735 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Great!\n"
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a TRAINER.$"
# 739 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 741 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, don't be that way.\n"
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should go meet my kid.$"
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 745 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: {RIVAL}?\n"
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 747 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your POKéMON get tired,\n"
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 751 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 753 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a TRAINER already.\p"
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 762 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéDEX.$"
# 763 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 764 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 765 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 766 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 768 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 769 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 770 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any POKéMON you meet or catch.\p"
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 772 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 773 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare POKéMON\n"
# 774 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the POKéDEX,\l"
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 776 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 777 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 778 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON\n"
# 780 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 781 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 782 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 784 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 785 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 786 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 788 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 789 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 790 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 792 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON!\p"
# 793 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 794 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different POKéMON.\p"
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute POKéMON, I'll catch\n"
# 796 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 797 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 798 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 800 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 801 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 802 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for POKéMON next?$"
# 804 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 805 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 806 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 808 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 809 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 810 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 812 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 813 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of POKéMON.\p"
# 814 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different POKéMON.\p"
# 816 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool POKéMON, you bet\n"
# 817 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 818 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 820 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 821 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 822 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 824 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON next…$"
# 825 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 826 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 828 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The PROF must use this for research.$"
# 829 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 830 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
# 832 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better not mess around with it.$"
# 833 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 834 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on POKéMON.$"
# 836 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 837 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 838 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 840 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 841 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 843 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 844 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 845 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "are coming to light.\p"
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 847 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 848 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "regions.\p"
# 849 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 851 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "happen to be.\p"
# 852 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 853 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 855 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 856 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 857 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 859 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 860 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "is getting updated!\p"
# 861 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's because you went out and caught\n"
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 863 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 864 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 865 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 867 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can thank me for getting\n"
# 868 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 869 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 871 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 872 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 873 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 875 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 876 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 877 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 879 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 880 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 881 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 883 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 884 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 885 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 887 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 888 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 889 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 891 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 892 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 893 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 895 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 896 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 897 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 899 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 900 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 901 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 903 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\p"
# 904 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 905 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 906 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "region's POKéDEX.\p"
# 907 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's more than just impressive.\p"
# 908 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I have a gift for you.\p"
# 909 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in another region!\p"
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 915 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 916 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 917 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 918 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "only found in another region!\p"
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You can have any one of these\n"
# 920 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "three POKéMON!$"
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 924 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 925 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 926 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 927 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 928 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 935 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 936 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 941 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you decide.\p"
# 943 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 945 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 946 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 947 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 950 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 952 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 953 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 954 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 955 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Want to give a nickname to\n"
# 957 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 958 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 959 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 960 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 961 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 962 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 963 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is POKéMON.\p"
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 972 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ Unused
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 974 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this POKéMON.$"
# 976 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 977 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 978 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 979 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 980 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 989 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 991 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 993 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 994 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 995 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 996 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 997 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Beep!\p"
# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 1006 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 1008 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "By the way…\p"
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 1010 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "invite you to for a visit.\p"
# 1011 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 1012 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 1013 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 1014 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 1015 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … Click!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen::
# 1035 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1036 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1037 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_REMOVE_LAB_STARTERS, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_2
# 1051 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_13
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_1:
# 1053 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_2:
# 1038 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_8, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_6
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_5:
# 1041 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_1
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultichoice 25, 3, 1, 4, 2, DYN_MULTICHOICE_CB_NONE, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_11
# 1043 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
# 1044 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_8, 1
# 1045 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1046 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_12
# 1047 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1048 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_6:
# 1039 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_0
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_5


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter::
# 1058 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1059 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_7, NO
# 1060 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_8
# 1061 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_3
# 1066 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4
# 1073 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_5
# 1080 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_6
# 1087 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_7
# 1094 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_8
# 1101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_9
# 1108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_10
# 1115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_11
# 1122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_12
# 1129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_13
# 1137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1:
# 1142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_16
# 1159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_15:
# 1161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_3:
# 1062 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1063 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1064 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_4:
# 1067 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 1068 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_1, MSGBOX_YESNO
# 1069 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1070 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_19
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_5:
# 1074 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 1075 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_3, MSGBOX_YESNO
# 1076 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1077 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_21
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_6:
# 1081 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 1082 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_5, MSGBOX_YESNO
# 1083 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1084 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_23
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_7:
# 1088 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 1089 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_7, MSGBOX_YESNO
# 1090 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1091 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_25
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_8:
# 1095 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 1096 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_9, MSGBOX_YESNO
# 1097 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1098 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_27
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_9:
# 1102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 1103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_11, MSGBOX_YESNO
# 1104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_29
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_10:
# 1109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 1110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_13, MSGBOX_YESNO
# 1111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_31
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_11:
# 1116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 1117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_15, MSGBOX_YESNO
# 1118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_33
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_12:
# 1123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 1124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_17, MSGBOX_YESNO
# 1125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_35
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_13:
# 1130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 1131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_13, MSGBOX_YESNO
# 1132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_37
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_16:
# 1143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 7
# 1146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 8
# 1147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 9
# 1148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_REMOVE_LAB_STARTERS
# 1149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
# 1150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 1151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 1153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 10, BirchApproachGivePokedex_GrassStarter
# 1154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorBirchsLab_EventScript_RevisedIntroSequence
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_15

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_19:
# 1071 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 1072 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_21:
# 1078 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_23:
# 1085 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 1086 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_25:
# 1092 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 1093 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_27:
# 1099 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 1100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_10
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_29:
# 1106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 1107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_12
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_31:
# 1113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 1114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_14
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_33:
# 1120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 1121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_16
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_35:
# 1127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 1128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_18
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_37:
# 1134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 1135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_14
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_1


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter::
# 1168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_7, NO
# 1170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_8
# 1171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_3
# 1176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4
# 1183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_5
# 1190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_6
# 1197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_7
# 1204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_8
# 1211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_9
# 1218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_10
# 1225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_11
# 1232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_12
# 1239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_13
# 1247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1:
# 1252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_16
# 1269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_15:
# 1271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_3:
# 1172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_4:
# 1177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 1178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_0, MSGBOX_YESNO
# 1179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_19
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_5:
# 1184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 1185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_2, MSGBOX_YESNO
# 1186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_21
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_6:
# 1191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 1192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_4, MSGBOX_YESNO
# 1193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_23
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_7:
# 1198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 1199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_6, MSGBOX_YESNO
# 1200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_25
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_8:
# 1205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 1206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_8, MSGBOX_YESNO
# 1207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_27
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_9:
# 1212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 1213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_10, MSGBOX_YESNO
# 1214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_29
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_10:
# 1219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 1220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_12, MSGBOX_YESNO
# 1221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_31
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_11:
# 1226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 1227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_14, MSGBOX_YESNO
# 1228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_33
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_12:
# 1233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 1234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_16, MSGBOX_YESNO
# 1235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_35
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_13:
# 1240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 1241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_2, MSGBOX_YESNO
# 1242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_37
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_16:
# 1253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 7
# 1256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 8
# 1257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 9
# 1258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_REMOVE_LAB_STARTERS
# 1259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
# 1260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 1261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 1263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 10, BirchApproachGivePokedex_FireStarter
# 1264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorBirchsLab_EventScript_RevisedIntroSequence
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_15

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_19:
# 1181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 1182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_21:
# 1188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 1189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_23:
# 1195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 1196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_25:
# 1202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 1203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_27:
# 1209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 1210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_29:
# 1216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 1217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_11
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_31:
# 1223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 1224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_13
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_33:
# 1230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 1231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_15
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_35:
# 1237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 1238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_17
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_37:
# 1244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 1245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_1


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter::
# 1277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_7, NO
# 1279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_8
# 1280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_3
# 1285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4
# 1292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_5
# 1299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_6
# 1306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_7
# 1313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_8
# 1320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_9
# 1327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_10
# 1334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_11
# 1341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_12
# 1348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_13
# 1356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1:
# 1361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_16
# 1378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_15:
# 1380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_3:
# 1281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0
# 1282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_4:
# 1286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 1287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_0, MSGBOX_YESNO
# 1288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_19
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_5:
# 1293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 1294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_2, MSGBOX_YESNO
# 1295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_21
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_6:
# 1300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 1301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_4, MSGBOX_YESNO
# 1302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_23
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_7:
# 1307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 1308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_6, MSGBOX_YESNO
# 1309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_25
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_8:
# 1314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 1315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_8, MSGBOX_YESNO
# 1316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_27
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_9:
# 1321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 1322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_10, MSGBOX_YESNO
# 1323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_29
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_10:
# 1328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 1329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_12, MSGBOX_YESNO
# 1330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_31
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_11:
# 1335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 1336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_14, MSGBOX_YESNO
# 1337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_33
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_12:
# 1342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 1343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_16, MSGBOX_YESNO
# 1344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_35
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_13:
# 1349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 1350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_8, MSGBOX_YESNO
# 1351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 1352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_7, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_37
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_16:
# 1362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 1364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 7
# 1365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 8
# 1366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject 9
# 1367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_REMOVE_LAB_STARTERS
# 1368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call NicknamePartyMon
# 1369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 1370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 20
# 1372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement 10, BirchApproachGivePokedex_WaterStarter
# 1373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 1374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 1375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfessorBirchsLab_EventScript_RevisedIntroSequence
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_15

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_19:
# 1290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 1291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_21:
# 1297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 1298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_23:
# 1304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 1305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_25:
# 1311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 1312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_27:
# 1318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 1319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_29:
# 1325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 1326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_11
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_31:
# 1332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 1333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_13
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_33:
# 1339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 1340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_15
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_35:
# 1346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 1347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_17
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_37:
# 1353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 1354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_1


ProfessorBirchsLab_EventScript_RevisedIntroSequence::
# 1386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 1387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 1389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 1390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 1391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 1392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_NO_BAG_ITEMS_IN_BATTLE
# 1393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDDEN_BY_DEFAULT
# 1394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 1395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 1397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 1398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_0
# 1399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_1
# 1401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 1402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 1404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 1405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 1406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 1407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 1408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 1409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_2
# 1410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 1411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_3
# 1413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_CANDY_BAG
# 1414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 1415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_FULL_RESTORE
# 1416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_UNLIMITED_REPEL
# 1417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LEVEL_CAP, 10
# 1419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 1420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 1421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 0
# 1422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 0
# 1423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 1424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_4
# 1426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	return


NicknamePartyMon::
# 1431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
	return

NicknamePartyMon_2:
# 1433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 1440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 1444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 1442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


# 1447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchApproachGivePokedex_GrassStarter:
# 1448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 1448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 1451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchApproachGivePokedex_FireStarter:
# 1452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
	step_end

# 1455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
BirchApproachGivePokedex_WaterStarter:
# 1456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	face_left
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 1460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1
# 1465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro
	return

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_1:
# 1462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap
	return


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro::
# 1470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro_Text_0
# 1473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	end


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap::
# 1478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 1479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 1480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainHandicap
# 1481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_HANDICAP
# 1483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_2
# 1487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_1, MSGBOX_YESNO
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_1:
# 1489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_6
# 1495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_2
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_5:
# 1497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_2:
# 1484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_0, MSGBOX_YESNO
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_6:
# 1491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_5


LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes::
# 1507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 10
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_1
# 1513 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_2
# 1553 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_HANDICAP
# 1554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_4, VAR_LEVEL_HANDICAP
# 1555 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_2, 0
# 1556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 9
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_12
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_11:
# 1557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 8
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_18
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_17:
# 1558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 7
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_21
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_20:
# 1559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 6
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_24
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_23:
# 1560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 5
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_27
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_26:
# 1561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 4
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_30
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_29:
# 1562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 3
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_33
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_32:
# 1563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 2
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_36
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_35:
# 1564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_LEVEL_HANDICAP, 1
	goto_if_le LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_39
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_38:
# 1566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_16
# 1567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 1, 0, DYN_MULTICHOICE_CB_NONE
# 1568 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_9, VAR_RESULT
# 1569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_9
# 1572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_43
# 1578 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_44
# 1580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_45
# 1582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_46
# 1584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_47
# 1586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_48
# 1588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_49
# 1590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_50
# 1592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_51
# 1594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_52
# 1596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_53
# 1599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_17
# 1600 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_1:
# 1508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_0
# 1509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1510 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_2:
# 1514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_1
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultichoice 25, 2, 0, 5, 0, DYN_MULTICHOICE_CB_NONE, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_2, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_3, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_4, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_5, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_6, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_7, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_8, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_9, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_10, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_11, LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_12
# 1516 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_TEMP_9, VAR_RESULT
# 1517 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_9, 0
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_6
# 1525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_TEMP_9, 127
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_7
# 1533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_9
# 1534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_14, MSGBOX_YESNO
# 1536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_14
# 1545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13
# 1546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_6:
# 1520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13
# 1521 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_7:
# 1526 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1527 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13
# 1528 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1529 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_12:
# 1556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_3, 1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_11

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_14:
# 1537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_LEVEL_HANDICAP, VAR_TEMP_9
# 1538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_15
# 1539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap
# 1541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_18:
# 1557 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_4, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_17

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_21:
# 1558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_5, 3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_20

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_24:
# 1559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_6, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_23

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_27:
# 1560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_7, 5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_26

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_30:
# 1561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_8, 6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_29

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_33:
# 1562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_9, 7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_32

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_36:
# 1563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_10, 8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_35

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_39:
# 1564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_11, 9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_38

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41:
# 1604 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_4
# 1605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_18, MSGBOX_YESNO
# 1606 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_56
# 1613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_20
LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_55:
# 1615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_43:
# 1573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_17
# 1574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1575 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 1576 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_44:
# 1579 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_45:
# 1581 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_46:
# 1583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_47:
# 1585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_48:
# 1587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_49:
# 1589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_50:
# 1591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_51:
# 1593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_52:
# 1595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_53:
# 1597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_TEMP_4, 10
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_41

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_56:
# 1608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_LEVEL_HANDICAP, VAR_TEMP_4
# 1609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap
# 1610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_19
	goto LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_55


LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap::
# 1622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_TEMP_9
# 1623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_3
# 1625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_4
# 1627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_5
# 1629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_6
# 1631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_7
# 1633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_8
# 1635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_9
# 1637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_10
# 1639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_11
# 1641 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_12
# 1644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 1
LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1:
# 1646 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_TEMP_9, 0
	return

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_3:
# 1624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 1
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_4:
# 1626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 2
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_5:
# 1628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 3
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_6:
# 1630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 4
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_7:
# 1632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 5
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_8:
# 1634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 6
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_9:
# 1636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 7
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_10:
# 1638 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 8
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_11:
# 1640 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 9
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1

LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_12:
# 1642 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addvar VAR_LEVEL_CAP, 10
	goto LittlerootTown_ProfessorBirchsLab_EventScript_ApplyNewHandicap_1


LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_0:
# 1039 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Ah, hello {PLAYER}!\lI heard you were going to begin your\njourney as a Pokemon Trainer today.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_1:
# 1041 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What region would you like to choose\n"
	.string "your starter Pokemon from?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_2:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Kanto$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_3:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Johto$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_4:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hoenn$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_5:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Sinnoh$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_6:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Unova$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_7:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Kalos$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_8:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Alola$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_9:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Galar$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_10:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Paldea$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_11:
# 1042 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hisui$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_12:
# 1046 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm sure you'll choose well!\lCome speak to me again if you want to\nsee other options.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseStarterGen_Text_13:
# 1051 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Take care of your Pokemon, and good\n"
	.string "luck on your journey!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_0:
# 1062 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better go speak with Prof. Birch before\n"
	.string "taking a Pokemon.$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_1:
# 1068 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_2:
# 1072 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Bulbasaur!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_3:
# 1075 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Chikorita?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_4:
# 1079 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Chikorita!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_5:
# 1082 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Treecko?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_6:
# 1086 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Treecko!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_7:
# 1089 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_8:
# 1093 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Turtwig!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_9:
# 1096 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Snivy?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_10:
# 1100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Snivy!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_11:
# 1103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Chespin?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_12:
# 1107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Chespin!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_13:
# 1110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Rowlet?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_14:
# 1114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Rowlet!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_15:
# 1117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Grookey?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_16:
# 1121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Grookey!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_17:
# 1124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseGrassStarter_Text_18:
# 1128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Sprigatito!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_0:
# 1178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Charmander?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_1:
# 1182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Charmander!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_2:
# 1185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_3:
# 1189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Cyndaquil!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_4:
# 1192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Torchic?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_5:
# 1196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Torchic!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_6:
# 1199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Chimchar?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_7:
# 1203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Chimchar!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_8:
# 1206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Tepig?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_9:
# 1210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Tepig!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_10:
# 1213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Fennekin?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_11:
# 1217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Fennekin!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_12:
# 1220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Litten?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_13:
# 1224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Litten!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_14:
# 1227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_15:
# 1231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Scorbunny!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_16:
# 1234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseFireStarter_Text_17:
# 1238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Fuecoco!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_0:
# 1287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Squirtle?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_1:
# 1291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Squirtle!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_2:
# 1294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Totodile?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_3:
# 1298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Totodile!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_4:
# 1301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Mudkip?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_5:
# 1305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Mudkip!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_6:
# 1308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Piplup?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_7:
# 1312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Piplup!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_8:
# 1315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_9:
# 1319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Oshawott!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_10:
# 1322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Froakie?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_11:
# 1326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Froakie!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_12:
# 1329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Popplio?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_13:
# 1333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Popplio!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_14:
# 1336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Sobble?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_15:
# 1340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Sobble!$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_16:
# 1343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose Quaxly?$"

LittlerootTown_ProfessorBirchsLab_EventScript_ChooseWaterStarter_Text_17:
# 1347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Quaxly!$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_0:
# 1398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: With that choice, {PLAYER},\nyou have begun your Pokémon journey!\pPlease take this Pokédex too, to record\nall of the Pokémon you encounter.$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_1:
# 1400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Received Pokédex!$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_2:
# 1409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: You will also need these\nPokéballs, in order to catch new\lPokémon to add to your team.$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_3:
# 1412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: And here are some utility\n"
	.string "items that will make your life as a\l"
	.string "Trainer much easier.$"

ProfessorBirchsLab_EventScript_RevisedIntroSequence_Text_4:
# 1424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Double battles are the\n"
	.string "standard format in Hoenn now, so you\l"
	.string "should hurry and catch another\l"
	.string "Pokémon. {RIVAL} is waiting in Oldale\l"
	.string "Town to see you off.$"

NicknamePartyMon_Text_0:
# 1431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give it a nickname?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_Intro_Text_0:
# 1472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hello, {PLAYER}! Professor Birch is\n"
	.string "very excited about your Pokémon\l"
	.string "journey.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_0:
# 1484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You currently do not have a handicap.\p"
	.string "Would you like to set one?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_1:
# 1487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You currently have a handicap of\n"
	.string "{STR_VAR_1}.\p"
	.string "Would you like to change it?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicap_Text_2:
# 1495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you ever change your mind, come back\n"
	.string "and talk to me.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_0:
# 1508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You currently have a handicap of 10.\p"
	.string "We cannot change it any further.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_1:
# 1514 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What level handicap would you like?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_2:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "0$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_3:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "1$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_4:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "2$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_5:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "3$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_6:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "4$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_7:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "5$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_8:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "6$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_9:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "7$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_10:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "8$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_11:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "9$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_12:
# 1515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "10$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_13:
# 1520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Very well, you still do not have a\n"
	.string "handicap.\p"
	.string "Come back if you ever decide to add one.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_14:
# 1534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you sure you would like a handicap\n"
	.string "of {STR_VAR_2} levels?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_15:
# 1538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Your handicap has been set to\n"
	.string "{STR_VAR_2} levels.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_16:
# 1566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "How much would you like to increase it?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_17:
# 1573 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Your handicap remains at\n"
	.string "{STR_VAR_1}.\p"
	.string "Come back if you ever decide to\n"
	.string "increase it.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_18:
# 1605 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you sure you would like to increase\n"
	.string "your handicap from {STR_VAR_1} to\l"
	.string "{STR_VAR_2}?$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_19:
# 1610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Very well. Your handicap has been set to\n"
	.string "{STR_VAR_2}.\p"
	.string "Come back if you ever decide to\n"
	.string "increase it.$"

LittlerootTown_ProfessorBirchsLab_EventScript_Aide_SetHandicapYes_Text_20:
# 1613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Very well. Your handicap remains at\n"
	.string "{STR_VAR_1}.\p"
	.string "Come back if you ever decide to\n"
	.string "increase it.$"

LittlerootTown_ProfessorBirchsLab_Text_ExplainHandicap::
# 1502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I can help you register a handicap for\n"
	.string "your adventure.\p"
	.string "A handicap will let you use slightly\n"
	.string "higher level Pokémon than you\l"
	.string "otherwise could, in all battles.\p"
	.string "Remember, though, that once a handicap\n"
	.string "is set it can’t be lowered, and it will be\l"
	.string "recorded by the Pokémon League\l"
	.string "challenge.$"
