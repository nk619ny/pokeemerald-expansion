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
	return


Common_EventScript_ApplyHandicap::
# 28 "data/maps/TradeCenter/scripts.pory"
	switch VAR_LEVEL_HANDICAP
# 29 "data/maps/TradeCenter/scripts.pory"
	case 0, Common_EventScript_ApplyHandicap_3
# 31 "data/maps/TradeCenter/scripts.pory"
	case 1, Common_EventScript_ApplyHandicap_4
# 33 "data/maps/TradeCenter/scripts.pory"
	case 2, Common_EventScript_ApplyHandicap_5
# 35 "data/maps/TradeCenter/scripts.pory"
	case 3, Common_EventScript_ApplyHandicap_6
# 37 "data/maps/TradeCenter/scripts.pory"
	case 4, Common_EventScript_ApplyHandicap_7
# 39 "data/maps/TradeCenter/scripts.pory"
	case 5, Common_EventScript_ApplyHandicap_8
# 41 "data/maps/TradeCenter/scripts.pory"
	case 6, Common_EventScript_ApplyHandicap_9
# 43 "data/maps/TradeCenter/scripts.pory"
	case 7, Common_EventScript_ApplyHandicap_10
# 45 "data/maps/TradeCenter/scripts.pory"
	case 8, Common_EventScript_ApplyHandicap_11
# 47 "data/maps/TradeCenter/scripts.pory"
	case 9, Common_EventScript_ApplyHandicap_12
# 49 "data/maps/TradeCenter/scripts.pory"
	case 10, Common_EventScript_ApplyHandicap_13
	return

Common_EventScript_ApplyHandicap_1:
# 54 "data/maps/TradeCenter/scripts.pory"
	compare VAR_LEVEL_CAP, 100
	goto_if_gt Common_EventScript_ApplyHandicap_16
Common_EventScript_ApplyHandicap_15:
	return

Common_EventScript_ApplyHandicap_3:
	return

Common_EventScript_ApplyHandicap_4:
# 32 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 1
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_5:
# 34 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 2
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_6:
# 36 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 3
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_7:
# 38 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 4
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_8:
# 40 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 5
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_9:
# 42 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 6
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_10:
# 44 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 7
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_11:
# 46 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 8
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_12:
# 48 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 9
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_13:
# 50 "data/maps/TradeCenter/scripts.pory"
	addvar VAR_LEVEL_CAP, 10
	goto Common_EventScript_ApplyHandicap_1

Common_EventScript_ApplyHandicap_16:
# 55 "data/maps/TradeCenter/scripts.pory"
	setvar VAR_LEVEL_CAP, 100
	goto Common_EventScript_ApplyHandicap_15


Common_EventScript_LevelCapUpdate_Text_0:
# 10 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} grew to Trainer Level\n"
	.string "{STR_VAR_1}!$"
