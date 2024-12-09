SlateportCity_FarmCorridor_MapScripts::
# 2 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_FarmCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SlateportCity_FarmCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_FarmCorridor_EventScript_CheckforBrawly
	.2byte 0


SlateportCity_FarmCorridor_EventScript_CheckforBrawly::
# 10 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	goto_if_set FLAG_SLATEPORT_BAY_FLOODED, SlateportCity_FarmCorridor_EventScript_CheckforBrawly_4
SlateportCity_FarmCorridor_EventScript_CheckforBrawly_3:
# 14 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
SlateportCity_FarmCorridor_EventScript_CheckforBrawly_1:
# 16 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	releaseall
	end

SlateportCity_FarmCorridor_EventScript_CheckforBrawly_2:
# 11 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	goto SlateportCity_FarmCorridor_EventScript_BrawlyPostBattle
	goto SlateportCity_FarmCorridor_EventScript_CheckforBrawly_1

SlateportCity_FarmCorridor_EventScript_CheckforBrawly_4:
# 10 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	goto_if_unset FLAG_SLATEPORT_FARM_COMPLETED, SlateportCity_FarmCorridor_EventScript_CheckforBrawly_2
	goto SlateportCity_FarmCorridor_EventScript_CheckforBrawly_3


SlateportCity_FarmCorridor_EventScript_BrawlyPostBattle::
# 21 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	lock
# 22 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	addobject 1
# 23 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	applymovement 1, SlateportCity_FarmCorridor_BrawlyApproach
# 24 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	waitmovement 0
# 25 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 26 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	waitmovement 0
# 27 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	msgbox BrawlyPostAquaFarmWinText
# 28 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	waitmessage
# 29 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	applymovement 1, SlateportCity_FarmCorridor_BrawlyDepart
# 30 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	waitmovement 0
# 31 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	removeobject 1
# 32 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	setflag FLAG_SLATEPORT_FARM_COMPLETED
# 33 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	release
	end


# 42 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
SlateportCity_FarmCorridor_BrawlyApproach:
# 43 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_right
# 43 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_right
	step_end

# 46 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
SlateportCity_FarmCorridor_BrawlyDepart:
# 47 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_down
# 48 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_right
# 48 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_right
# 48 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_right
# 48 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_right
# 48 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_right
# 48 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_right
# 48 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_right
# 49 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_down
# 49 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	walk_down
	step_end

BrawlyPostAquaFarmWinText::
# 38 "data/maps/SlateportCity_FarmCorridor/scripts.pory"
	.string "Brawly: So, Team Aqua managed to\n"
	.string "re-flood Slateport Bay.\p"
	.string "I'm not completely surprised. A lot of\n"
	.string "people were very unhappy with how\l"
	.string "closing the Bay impacted life in and\l"
	.string "around Slateport.\p"
	.string "Well, what's done is done.\p"
	.string "But who are you? You don't seem like a\n"
	.string "member of either Team Aqua or Team\l"
	.string "Magma, and I don't recognize you from\l"
	.string "around here.\p"
	.string "Oh, you're a new trainer taking the\n"
	.string "Hoenn League Challenge!\p"
	.string "I'll head back to my Gym in Dewford. I'll\n"
	.string "be awaiting your challenge!$"
