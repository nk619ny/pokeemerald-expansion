# 1 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
EverGrandeCity_SelectionRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SelectionRoom_OnWarp
# 4 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"

# 6 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
EverGrandeCity_SelectionRoom_OnWarp:
# 7 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	//map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SelectionRoom_EventScript_PlayerTurnNorth
# 8 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	.2byte 0
# 9 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"

# 10 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
EverGrandeCity_SelectionRoom_EventScript_PlayerTurnNorth::
# 11 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 12 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	end

EverGrandeCity_SelectionRoom_EventScript_DoorGuard::
# 18 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	lockall
# 19 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	faceplayer
# 20 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	waitmovement 0
# 21 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	setvar VAR_TEMP_4, 0
# 22 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	goto_if_unset 0x4FB, EverGrandeCity_SelectionRoom_EventScript_DoorGuard_2
EverGrandeCity_SelectionRoom_EventScript_DoorGuard_1:
# 23 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	goto_if_unset 0x4FC, EverGrandeCity_SelectionRoom_EventScript_DoorGuard_5
EverGrandeCity_SelectionRoom_EventScript_DoorGuard_4:
# 24 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	goto_if_unset 0x4FD, EverGrandeCity_SelectionRoom_EventScript_DoorGuard_8
EverGrandeCity_SelectionRoom_EventScript_DoorGuard_7:
# 25 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	goto_if_unset 0x4FE, EverGrandeCity_SelectionRoom_EventScript_DoorGuard_11
EverGrandeCity_SelectionRoom_EventScript_DoorGuard_10:
# 26 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_4
# 27 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	switch VAR_TEMP_4
# 28 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	case 0, EverGrandeCity_SelectionRoom_EventScript_DoorGuard_15
# 30 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	case 1, EverGrandeCity_SelectionRoom_EventScript_DoorGuard_16
# 32 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	case 2, EverGrandeCity_SelectionRoom_EventScript_DoorGuard_17
# 33 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	case 3, EverGrandeCity_SelectionRoom_EventScript_DoorGuard_17
# 35 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	case 4, EverGrandeCity_SelectionRoom_EventScript_DoorGuard_18
EverGrandeCity_SelectionRoom_EventScript_DoorGuard_13:
# 38 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	waitmessage
# 39 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_2:
# 22 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto EverGrandeCity_SelectionRoom_EventScript_DoorGuard_1

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_5:
# 23 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto EverGrandeCity_SelectionRoom_EventScript_DoorGuard_4

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_8:
# 24 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto EverGrandeCity_SelectionRoom_EventScript_DoorGuard_7

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_11:
# 25 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto EverGrandeCity_SelectionRoom_EventScript_DoorGuard_10

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_15:
# 29 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	msgbox EverGrandeCity_SelectionRoom_EventScript_DoorGuard_Text_0, MSGBOX_NPC
	goto EverGrandeCity_SelectionRoom_EventScript_DoorGuard_13

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_16:
# 31 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	msgbox EverGrandeCity_SelectionRoom_EventScript_DoorGuard_Text_1, MSGBOX_NPC
	goto EverGrandeCity_SelectionRoom_EventScript_DoorGuard_13

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_17:
# 34 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	msgbox EverGrandeCity_SelectionRoom_EventScript_DoorGuard_Text_2, MSGBOX_NPC
	goto EverGrandeCity_SelectionRoom_EventScript_DoorGuard_13

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_18:
# 36 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	msgbox EverGrandeCity_SelectionRoom_EventScript_DoorGuard_Text_3, MSGBOX_NPC
	goto EverGrandeCity_SelectionRoom_EventScript_DoorGuard_13


EverGrandeCity_SelectionRoom_EventScript_DoorGuard_Text_0:
# 29 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	.string "You've managed to defeat all of the\n"
	.string "Elite Four.\p"
	.string "Now, the Champion is all that awaits.$"

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_Text_1:
# 31 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	.string "You still have to defeat the\n"
	.string "{STR_VAR_1}\l"
	.string "remaining member of the Elite Four\l"
	.string "before you can take on the Champion.$"

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_Text_2:
# 34 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	.string "You still have to defeat the\n"
	.string "{STR_VAR_1}\l"
	.string "remaining members of the Elite Four\l"
	.string "before you can take on the Champion.$"

EverGrandeCity_SelectionRoom_EventScript_DoorGuard_Text_3:
# 36 "data/maps/EverGrandeCity_SelectionRoom/scripts.pory"
	.string "You must defeat all 4 members of the\n"
	.string "Elite Four before you can challenge the\l"
	.string "Champion.$"
