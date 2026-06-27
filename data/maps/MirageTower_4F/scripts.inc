# 1 "data/maps/MirageTower_4F/scripts.pory"

# 2 "data/maps/MirageTower_4F/scripts.pory"
//.set LOCALID_MIRAGE_ROOT_FOSSIL, 1
# 3 "data/maps/MirageTower_4F/scripts.pory"
//.set LOCALID_MIRAGE_CLAW_FOSSIL, 2
# 4 "data/maps/MirageTower_4F/scripts.pory"

# 5 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_MapScripts::
# 6 "data/maps/MirageTower_4F/scripts.pory"
	.byte 0
# 7 "data/maps/MirageTower_4F/scripts.pory"

# 8 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil::
# 9 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 10 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 11 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
# 12 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveRootFossil
# 13 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 14 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 15 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 16 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 17 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 18 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_ROOT_FOSSIL
# 19 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 20 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 21 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 22 "data/maps/MirageTower_4F/scripts.pory"
	end
# 23 "data/maps/MirageTower_4F/scripts.pory"

# 24 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveRootFossil::
# 25 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
# 26 "data/maps/MirageTower_4F/scripts.pory"
	release
# 27 "data/maps/MirageTower_4F/scripts.pory"
	end
# 28 "data/maps/MirageTower_4F/scripts.pory"

# 29 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil::
# 30 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 31 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 32 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
# 33 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveClawFossil
# 34 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 35 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 36 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 37 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 38 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 39 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_CLAW_FOSSIL
# 40 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 41 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 42 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 43 "data/maps/MirageTower_4F/scripts.pory"
	end
# 44 "data/maps/MirageTower_4F/scripts.pory"

# 45 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveClawFossil::
# 46 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
# 47 "data/maps/MirageTower_4F/scripts.pory"
	release
# 48 "data/maps/MirageTower_4F/scripts.pory"
	end
# 49 "data/maps/MirageTower_4F/scripts.pory"

# 50 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_CollapseMirageTower::
# 51 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 52 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 53 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32  @ num shakes
# 54 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2   @ shake delay
# 55 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 56 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 57 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 58 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 59 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 60 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 61 "data/maps/MirageTower_4F/scripts.pory"
	release
# 62 "data/maps/MirageTower_4F/scripts.pory"
	end
# 63 "data/maps/MirageTower_4F/scripts.pory"

# 64 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeRootFossil:
# 65 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the ROOT FOSSIL.\p"
# 66 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 67 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 68 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the ROOT FOSSIL anyway?$"
# 69 "data/maps/MirageTower_4F/scripts.pory"

# 70 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftRootFossilAlone:
# 71 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the ROOT FOSSIL alone.$"
# 72 "data/maps/MirageTower_4F/scripts.pory"

# 73 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeClawFossil:
# 74 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the CLAW FOSSIL.\p"
# 75 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 76 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 77 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the CLAW FOSSIL anyway?$"
# 78 "data/maps/MirageTower_4F/scripts.pory"

# 79 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveClawFossilAlone:
# 80 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the CLAW FOSSIL alone.$"

MirageTower_EventScript_GiveRandomFossil::
# 87 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 88 "data/maps/MirageTower_4F/scripts.pory"
	random 15
# 89 "data/maps/MirageTower_4F/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/MirageTower_4F/scripts.pory"
	case 0, MirageTower_EventScript_GiveRandomFossil_3
# 93 "data/maps/MirageTower_4F/scripts.pory"
	case 1, MirageTower_EventScript_GiveRandomFossil_4
# 96 "data/maps/MirageTower_4F/scripts.pory"
	case 2, MirageTower_EventScript_GiveRandomFossil_5
# 99 "data/maps/MirageTower_4F/scripts.pory"
	case 3, MirageTower_EventScript_GiveRandomFossil_6
# 102 "data/maps/MirageTower_4F/scripts.pory"
	case 4, MirageTower_EventScript_GiveRandomFossil_7
# 105 "data/maps/MirageTower_4F/scripts.pory"
	case 5, MirageTower_EventScript_GiveRandomFossil_8
# 108 "data/maps/MirageTower_4F/scripts.pory"
	case 6, MirageTower_EventScript_GiveRandomFossil_9
# 111 "data/maps/MirageTower_4F/scripts.pory"
	case 7, MirageTower_EventScript_GiveRandomFossil_10
# 114 "data/maps/MirageTower_4F/scripts.pory"
	case 8, MirageTower_EventScript_GiveRandomFossil_11
# 117 "data/maps/MirageTower_4F/scripts.pory"
	case 9, MirageTower_EventScript_GiveRandomFossil_12
# 120 "data/maps/MirageTower_4F/scripts.pory"
	case 10, MirageTower_EventScript_GiveRandomFossil_13
# 123 "data/maps/MirageTower_4F/scripts.pory"
	case 11, MirageTower_EventScript_GiveRandomFossil_14
# 126 "data/maps/MirageTower_4F/scripts.pory"
	case 12, MirageTower_EventScript_GiveRandomFossil_15
# 129 "data/maps/MirageTower_4F/scripts.pory"
	case 13, MirageTower_EventScript_GiveRandomFossil_16
# 132 "data/maps/MirageTower_4F/scripts.pory"
	case 14, MirageTower_EventScript_GiveRandomFossil_17
# 136 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_NONE
MirageTower_EventScript_GiveRandomFossil_1:
# 139 "data/maps/MirageTower_4F/scripts.pory"
	giveitem VAR_TEMP_6
# 140 "data/maps/MirageTower_4F/scripts.pory"
	waitfanfare
# 141 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
	return

MirageTower_EventScript_GiveRandomFossil_3:
# 91 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_HELIX_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_4:
# 94 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_DOME_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_5:
# 97 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_ROOT_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_6:
# 100 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_CLAW_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_7:
# 103 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_SKULL_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_8:
# 106 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_ARMOR_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_9:
# 109 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_JAW_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_10:
# 112 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_SAIL_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_11:
# 115 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_PLUME_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_12:
# 118 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_COVER_FOSSIL
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_13:
# 121 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_OLD_AMBER
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_14:
# 124 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_FOSSILIZED_BIRD
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_15:
# 127 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_FOSSILIZED_DRAKE
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_16:
# 130 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_FOSSILIZED_FISH
	goto MirageTower_EventScript_GiveRandomFossil_1

MirageTower_EventScript_GiveRandomFossil_17:
# 133 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_TEMP_6, ITEM_FOSSILIZED_DINO
	goto MirageTower_EventScript_GiveRandomFossil_1

