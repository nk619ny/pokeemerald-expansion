SlateportCity_FarmCorridor_B1F_MapScripts::
	.byte 0


SlateportCity_FarmCorridorB1F_CheckIfFarmFlooded::
# 5 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	goto_if_set FLAG_SLATEPORT_BAY_FLOODED, SlateportCity_FarmCorridorB1F_CheckIfFarmFlooded_2
# 9 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	setdynamicwarp MAP_SLATEPORT_FARM, 40, 5
SlateportCity_FarmCorridorB1F_CheckIfFarmFlooded_1:
# 11 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 12 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	releaseall
	end

SlateportCity_FarmCorridorB1F_CheckIfFarmFlooded_2:
# 6 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	setdynamicwarp MAP_SLATEPORT_BAY, 45, 5
	goto SlateportCity_FarmCorridorB1F_CheckIfFarmFlooded_1


SlateportCity_FarmCorridor_TestDynamic::
# 20 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	lockall
# 21 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	setflag FLAG_HIDDEN_BY_DEFAULT
# 22 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	msgbox SlateportCity_FarmCorridor_TestDynamic_Text_0
# 23 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	dynmultichoice 25, 3, 0, 2, 0, DYN_MULTICHOICE_CB_NONE, SlateportCity_FarmCorridor_TestDynamic_Text_1, SlateportCity_FarmCorridor_TestDynamic_Text_2
# 24 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	case 0, SlateportCity_FarmCorridor_TestDynamic_3
# 27 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	case 1, SlateportCity_FarmCorridor_TestDynamic_4
# 30 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	closemessage
SlateportCity_FarmCorridor_TestDynamic_1:
# 32 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	waitmessage
# 33 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	releaseall
	end

SlateportCity_FarmCorridor_TestDynamic_3:
# 26 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	setdynamicwarp MAP_SLATEPORT_FARM, 40, 5
	goto SlateportCity_FarmCorridor_TestDynamic_1

SlateportCity_FarmCorridor_TestDynamic_4:
# 28 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	setdynamicwarp MAP_SLATEPORT_BAY, 45, 5
	goto SlateportCity_FarmCorridor_TestDynamic_1


SlateportCity_FarmCorridor_TestDynamic_Text_0:
# 22 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	.string "Where would you like to go, {PLAYER}?$"

SlateportCity_FarmCorridor_TestDynamic_Text_1:
# 23 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	.string "Farm$"

SlateportCity_FarmCorridor_TestDynamic_Text_2:
# 23 "data/maps/SlateportCity_FarmCorridor_B1F/scripts.pory"
	.string "Bay$"
