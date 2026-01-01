VerdantGrove_MapScripts::
	.byte 0


VerdantGrove_EventScript_GenerateNectar::
# 11 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_0, 1
# 12 "data/maps/VerdantGrove/scripts.pory"
	special GetPlayerTrainerIdOnesDigit
# 13 "data/maps/VerdantGrove/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/VerdantGrove/scripts.pory"
	case 0, VerdantGrove_EventScript_GenerateNectar_3
# 15 "data/maps/VerdantGrove/scripts.pory"
	case 1, VerdantGrove_EventScript_GenerateNectar_3
# 17 "data/maps/VerdantGrove/scripts.pory"
	case 2, VerdantGrove_EventScript_GenerateNectar_4
# 18 "data/maps/VerdantGrove/scripts.pory"
	case 3, VerdantGrove_EventScript_GenerateNectar_4
# 20 "data/maps/VerdantGrove/scripts.pory"
	case 4, VerdantGrove_EventScript_GenerateNectar_5
# 21 "data/maps/VerdantGrove/scripts.pory"
	case 5, VerdantGrove_EventScript_GenerateNectar_5
# 23 "data/maps/VerdantGrove/scripts.pory"
	case 6, VerdantGrove_EventScript_GenerateNectar_6
# 24 "data/maps/VerdantGrove/scripts.pory"
	case 7, VerdantGrove_EventScript_GenerateNectar_6
# 26 "data/maps/VerdantGrove/scripts.pory"
	case 8, VerdantGrove_EventScript_GenerateNectar_7
# 34 "data/maps/VerdantGrove/scripts.pory"
	case 9, VerdantGrove_EventScript_GenerateNectar_8
# 43 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_1, 0
VerdantGrove_EventScript_GenerateNectar_1:
# 45 "data/maps/VerdantGrove/scripts.pory"
	switch VAR_TEMP_1
# 46 "data/maps/VerdantGrove/scripts.pory"
	case ITEM_PINK_NECTAR, VerdantGrove_EventScript_GenerateNectar_12
# 49 "data/maps/VerdantGrove/scripts.pory"
	case ITEM_PURPLE_NECTAR, VerdantGrove_EventScript_GenerateNectar_13
# 52 "data/maps/VerdantGrove/scripts.pory"
	case ITEM_RED_NECTAR, VerdantGrove_EventScript_GenerateNectar_14
# 55 "data/maps/VerdantGrove/scripts.pory"
	case ITEM_YELLOW_NECTAR, VerdantGrove_EventScript_GenerateNectar_15
VerdantGrove_EventScript_GenerateNectar_10:
# 59 "data/maps/VerdantGrove/scripts.pory"
	releaseall
	end

VerdantGrove_EventScript_GenerateNectar_3:
# 16 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_1, ITEM_PINK_NECTAR
	goto VerdantGrove_EventScript_GenerateNectar_1

VerdantGrove_EventScript_GenerateNectar_4:
# 19 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_1, ITEM_PURPLE_NECTAR
	goto VerdantGrove_EventScript_GenerateNectar_1

VerdantGrove_EventScript_GenerateNectar_5:
# 22 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_1, ITEM_RED_NECTAR
	goto VerdantGrove_EventScript_GenerateNectar_1

VerdantGrove_EventScript_GenerateNectar_6:
# 25 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_1, ITEM_YELLOW_NECTAR
	goto VerdantGrove_EventScript_GenerateNectar_1

VerdantGrove_EventScript_GenerateNectar_7:
# 27 "data/maps/VerdantGrove/scripts.pory"
	checkplayergender
# 28 "data/maps/VerdantGrove/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq VerdantGrove_EventScript_GenerateNectar_16
# 32 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_1, ITEM_PURPLE_NECTAR
	goto VerdantGrove_EventScript_GenerateNectar_1

VerdantGrove_EventScript_GenerateNectar_8:
# 35 "data/maps/VerdantGrove/scripts.pory"
	checkplayergender
# 36 "data/maps/VerdantGrove/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq VerdantGrove_EventScript_GenerateNectar_19
# 40 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_1, ITEM_YELLOW_NECTAR
	goto VerdantGrove_EventScript_GenerateNectar_1

VerdantGrove_EventScript_GenerateNectar_12:
# 47 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_1
# 48 "data/maps/VerdantGrove/scripts.pory"
	call VerdantGrove_EventScript_SetPinkNectar
	goto VerdantGrove_EventScript_GenerateNectar_10

VerdantGrove_EventScript_GenerateNectar_13:
# 50 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_2
# 51 "data/maps/VerdantGrove/scripts.pory"
	call VerdantGrove_EventScript_SetPurpleNectar
	goto VerdantGrove_EventScript_GenerateNectar_10

VerdantGrove_EventScript_GenerateNectar_14:
# 53 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_3
# 54 "data/maps/VerdantGrove/scripts.pory"
	call VerdantGrove_EventScript_SetRedNectar
	goto VerdantGrove_EventScript_GenerateNectar_10

VerdantGrove_EventScript_GenerateNectar_15:
# 56 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_4
# 57 "data/maps/VerdantGrove/scripts.pory"
	call VerdantGrove_EventScript_SetYellowNectar
	goto VerdantGrove_EventScript_GenerateNectar_10

VerdantGrove_EventScript_GenerateNectar_16:
# 29 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_1, ITEM_PINK_NECTAR
	goto VerdantGrove_EventScript_GenerateNectar_1

VerdantGrove_EventScript_GenerateNectar_19:
# 37 "data/maps/VerdantGrove/scripts.pory"
	setvar VAR_TEMP_1, ITEM_RED_NECTAR
	goto VerdantGrove_EventScript_GenerateNectar_1


VerdantGrove_EventScript_SetPinkNectar::
# 64 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_1
# 65 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_2
# 66 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_3
# 67 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_4
# 68 "data/maps/VerdantGrove/scripts.pory"
	clearflag FLAG_TEMP_1
# 69 "data/maps/VerdantGrove/scripts.pory"
	setmetatile 9, 8, 0x208, FALSE
# 71 "data/maps/VerdantGrove/scripts.pory"
	special DrawWholeMapView
# 72 "data/maps/VerdantGrove/scripts.pory"
	releaseall
	return


VerdantGrove_EventScript_SetPurpleNectar::
# 77 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_1
# 78 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_2
# 79 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_3
# 80 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_4
# 81 "data/maps/VerdantGrove/scripts.pory"
	clearflag FLAG_TEMP_2
# 83 "data/maps/VerdantGrove/scripts.pory"
	setmetatile 9, 8, 0x210, FALSE
# 84 "data/maps/VerdantGrove/scripts.pory"
	special DrawWholeMapView
# 85 "data/maps/VerdantGrove/scripts.pory"
	releaseall
	return


VerdantGrove_EventScript_SetRedNectar::
# 90 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_1
# 91 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_2
# 92 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_3
# 93 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_4
# 94 "data/maps/VerdantGrove/scripts.pory"
	clearflag FLAG_TEMP_3
# 95 "data/maps/VerdantGrove/scripts.pory"
	setmetatile 9, 8, 0x208, FALSE
# 97 "data/maps/VerdantGrove/scripts.pory"
	special DrawWholeMapView
# 98 "data/maps/VerdantGrove/scripts.pory"
	releaseall
	return


VerdantGrove_EventScript_SetYellowNectar::
# 103 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_1
# 104 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_2
# 105 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_3
# 106 "data/maps/VerdantGrove/scripts.pory"
	setflag FLAG_TEMP_4
# 107 "data/maps/VerdantGrove/scripts.pory"
	clearflag FLAG_TEMP_4
# 109 "data/maps/VerdantGrove/scripts.pory"
	setmetatile 9, 8, 0x210, FALSE
# 110 "data/maps/VerdantGrove/scripts.pory"
	special DrawWholeMapView
# 111 "data/maps/VerdantGrove/scripts.pory"
	releaseall
	return

