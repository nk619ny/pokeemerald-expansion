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


Common_EventScript_LevelCapUpdate_Text_0:
# 10 "data/maps/TradeCenter/scripts.pory"
	.string "{PLAYER} grew to Trainer Level\n"
	.string "{STR_VAR_1}!$"
