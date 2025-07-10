# 1 "data/maps/TradeCenter/scripts.pory"

# 2 "data/maps/TradeCenter/scripts.pory"
TradeCenter_MapScripts::
# 3 "data/maps/TradeCenter/scripts.pory"
	.byte 0

Common_EventScript_LevelCapUpdate::
# 9 "data/maps/TradeCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_LEVEL_CAP
# 10 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_LevelCapUpdate_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/TradeCenter/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 12 "data/maps/TradeCenter/scripts.pory"
	waitfanfare
# 13 "data/maps/TradeCenter/scripts.pory"
	closemessage
	return


Common_EventScript_SetStartingFlagStates::
# 18 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDDEN_BY_DEFAULT
# 19 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_CABLE_CAR_ATTENDANT
# 20 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 21 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 22 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_TRAINER_HILL_AUDIENCE
# 23 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 24 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_ROUTE_120_STEVEN
# 25 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
# 26 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
	return


Common_EventScript_ApplyHandicap::
# 31 "data/maps/TradeCenter/scripts.pory"
	switch VAR_LEVEL_HANDICAP
# 32 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_ApplyHandicap_3
# 34 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_ApplyHandicap_4
# 36 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_ApplyHandicap_5
# 38 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_ApplyHandicap_6
# 40 "data/maps/TradeCenter/scripts.pory"
	case 4, Common_EventScript_ApplyHandicap_7
# 42 "data/maps/TradeCenter/scripts.pory"
	case 5, Common_EventScript_ApplyHandicap_8
# 44 "data/maps/TradeCenter/scripts.pory"
	case 6, Common_EventScript_ApplyHandicap_9
# 46 "data/maps/TradeCenter/scripts.pory"
	case 7, Common_EventScript_ApplyHandicap_10
# 48 "data/maps/TradeCenter/scripts.pory"
	case 8, Common_EventScript_ApplyHandicap_11
# 50 "data/maps/TradeCenter/scripts.pory"
	case 9, Common_EventScript_ApplyHandicap_12
# 52 "data/maps/TradeCenter/scripts.pory"
	case 10, Common_EventScript_ApplyHandicap_13
	return

Common_EventScript_ApplyHandicap_1:
# 57 "data/maps/TradeCenter/scripts.pory"
	compare VAR_LEVEL_CAP, 100
	goto_if_gt Common_EventScript_ApplyHandicap_16
Common_EventScript_ApplyHandicap_15:
	return

Common_EventScript_ApplyHandicap_3:
	return

Common_EventScript_ApplyHandicap_4:
# 35 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 1
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_5:
# 37 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 2
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_6:
# 39 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 3
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_7:
# 41 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 4
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_8:
# 43 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 5
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_9:
# 45 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 6
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_10:
# 47 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 7
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_11:
# 49 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 8
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_12:
# 51 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 9
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_13:
# 53 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 10
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_16:
# 58 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 100
	goto Common_EventScript_ApplyHandicap_15


# 71 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkDownOneStep:
# 72 "data/maps/TradeCenter/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkUpOneStep:
# 76 "data/maps/TradeCenter/scripts.pory"
	walk_up
	step_end

# 79 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkLeftOneStep:
# 80 "data/maps/TradeCenter/scripts.pory"
	walk_left
	step_end

# 83 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkRightOneStep:
# 84 "data/maps/TradeCenter/scripts.pory"
	walk_right
	step_end

# 87 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkDownOneStepFast:
# 88 "data/maps/TradeCenter/scripts.pory"
	walk_fast_down
	step_end

# 91 "data/maps/TradeCenter/scripts.pory"
Common_Movement_WalkUpOneStepFast:
# 92 "data/maps/TradeCenter/scripts.pory"
	walk_fast_up
	step_end

Common_EventScript_SetFlashTest::
# 96 "data/maps/TradeCenter/scripts.pory"
	lock
# 97 "data/maps/TradeCenter/scripts.pory"
	msgbox Common_EventScript_SetFlashTest_Text_0, MSGBOX_YESNO
# 98 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_SetFlashTest_2
# 101 "data/maps/TradeCenter/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Common_EventScript_SetFlashTest_3
Common_EventScript_SetFlashTest_1:
# 104 "data/maps/TradeCenter/scripts.pory"
	releaseall
	return

Common_EventScript_SetFlashTest_2:
# 99 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
	goto Common_EventScript_SetFlashTest_1

Common_EventScript_SetFlashTest_3:
# 102 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_RECEIVED_HM_FLASH
	goto Common_EventScript_SetFlashTest_1


Common_EventScript_CheckIfHideoutsComplete::
# 109 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, Common_EventScript_CheckIfHideoutsComplete_4
Common_EventScript_CheckIfHideoutsComplete_3:
# 115 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 66
Common_EventScript_CheckIfHideoutsComplete_1:
	return

Common_EventScript_CheckIfHideoutsComplete_2:
# 110 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_BOTH_HIDEOUTS_COMPLETE
# 111 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 68
# 112 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
	goto Common_EventScript_CheckIfHideoutsComplete_1

Common_EventScript_CheckIfHideoutsComplete_4:
# 109 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, Common_EventScript_CheckIfHideoutsComplete_2
	goto Common_EventScript_CheckIfHideoutsComplete_3


# 120 "data/maps/TradeCenter/scripts.pory"
Common_Movement_EliteFourNewEntranceLeft:
# 122 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 122 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 123 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 123 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 123 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 123 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 124 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 124 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 125 "data/maps/TradeCenter/scripts.pory"
	walk_in_place_fast_up
	step_end

# 128 "data/maps/TradeCenter/scripts.pory"
Common_Movement_EliteFourNewEntranceRight:
# 130 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 130 "data/maps/TradeCenter/scripts.pory"
	walk_right
# 131 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 131 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 131 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 131 "data/maps/TradeCenter/scripts.pory"
	walk_down
# 132 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 132 "data/maps/TradeCenter/scripts.pory"
	walk_left
# 133 "data/maps/TradeCenter/scripts.pory"
	walk_in_place_fast_up
	step_end

Common_EventScript_CheckIfEliteFourComplete::
# 138 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, Common_EventScript_CheckIfEliteFourComplete_5
Common_EventScript_CheckIfEliteFourComplete_3:
# 142 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_ALL_ELITE_FOUR_BEATEN
Common_EventScript_CheckIfEliteFourComplete_1:
	return

Common_EventScript_CheckIfEliteFourComplete_2:
# 139 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ALL_ELITE_FOUR_BEATEN
	goto Common_EventScript_CheckIfEliteFourComplete_1

Common_EventScript_CheckIfEliteFourComplete_4:
# 138 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, Common_EventScript_CheckIfEliteFourComplete_8
	goto Common_EventScript_CheckIfEliteFourComplete_3

Common_EventScript_CheckIfEliteFourComplete_5:
# 138 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, Common_EventScript_CheckIfEliteFourComplete_4
	goto Common_EventScript_CheckIfEliteFourComplete_3

Common_EventScript_CheckIfEliteFourComplete_8:
# 138 "data/maps/TradeCenter/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, Common_EventScript_CheckIfEliteFourComplete_2
	goto Common_EventScript_CheckIfEliteFourComplete_3


MauvilleCity_EventScript_Temporary::
# 148 "data/maps/TradeCenter/scripts.pory"
	lock
# 149 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 173 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_PROTEIN, 30
# 174 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_HP_UP, 30
# 175 "data/maps/TradeCenter/scripts.pory"
	giveitem ITEM_IRON, 30
# 176 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_VISITED_RUSTBORO_CITY
# 177 "data/maps/TradeCenter/scripts.pory"
	clearflag FLAG_HIDE_REGIROCK_RUINS_ROCK
# 178 "data/maps/TradeCenter/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 180 "data/maps/TradeCenter/scripts.pory"
	delay 40
# 181 "data/maps/TradeCenter/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 182 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 183 "data/maps/TradeCenter/scripts.pory"
	givemon SPECIES_DARMANITAN, 90, , , , 2, , , , , , , , , , , , , , MOVE_TERA_STARSTORM, MOVE_WIDE_GUARD, MOVE_SHELL_SMASH, MOVE_MYSTICAL_FIRE
# 184 "data/maps/TradeCenter/scripts.pory"
	givemon SPECIES_DARMANITAN_GALAR, 90, , , , 2, , , , , , , , , , , , , , MOVE_TERA_STARSTORM, MOVE_WIDE_GUARD, MOVE_SHELL_SMASH, MOVE_MYSTICAL_FIRE
# 197 "data/maps/TradeCenter/scripts.pory"
	waitmessage
# 198 "data/maps/TradeCenter/scripts.pory"
	closemessage
# 199 "data/maps/TradeCenter/scripts.pory"
	releaseall
	end


Common_EventScript_HideGym0OptionalRewards::
# 204 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 205 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_POTION
# 206 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_X_ACCURACY
# 207 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_ITEM_ROUTE_104_NORTH_NEW
	return


Common_EventScript_HideGym1OptionalRewards::
# 212 "data/maps/TradeCenter/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
	return


Common_EventScript_LevelCapUpdate_Text_0:
# 10 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} grew to Trainer Level\n"
	.string "{STR_VAR_1}!$"

Common_EventScript_SetFlashTest_Text_0:
# 97 "data/maps/TradeCenter/scripts.pory"
	.string "Do you have flash?$"

Common_Text_CaveIsDarkUseFlash::
# 63 "data/maps/TradeCenter/scripts.pory"
	.string "This cave is too dark to explore\n"
	.string "without a light.\p"
	.string "{PLAYER}'s Pokémon used Flash!$"

Common_Text_CaveIsDarkNeedFlash::
# 67 "data/maps/TradeCenter/scripts.pory"
	.string "This cave is too dark to explore\n"
	.string "without a light.\p"
	.string "It's better to turn back.$"
