GlacierPath_MapScripts::
	.byte 0


GlacierPath_EventScript_Tabitha::
# 6 "data/maps/GlacierPath/scripts.pory"
	lock
# 7 "data/maps/GlacierPath/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_GLACIER, GlacierPath_Text_TabithaMonologue, GlacierPath_Text_TabithaPostBattle, GlacierPath_EventScript_TabithaDefeated
	end


GlacierPath_EventScript_TabithaDefeated::
# 12 "data/maps/GlacierPath/scripts.pory"
	lock
# 13 "data/maps/GlacierPath/scripts.pory"
	setflag FLAG_HIDE_MAGMA_GLACIER
# 14 "data/maps/GlacierPath/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 15 "data/maps/GlacierPath/scripts.pory"
	clearflag FLAG_HIDE_CABLE_CAR_ATTENDANT
# 16 "data/maps/GlacierPath/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 17 "data/maps/GlacierPath/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 18 "data/maps/GlacierPath/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 19 "data/maps/GlacierPath/scripts.pory"
	msgbox GlacierPath_Text_TabithaOutro
# 20 "data/maps/GlacierPath/scripts.pory"
	waitmessage
# 21 "data/maps/GlacierPath/scripts.pory"
	delay 20
# 22 "data/maps/GlacierPath/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/GlacierPath/scripts.pory"
	removeobject 1
# 24 "data/maps/GlacierPath/scripts.pory"
	delay 40
# 25 "data/maps/GlacierPath/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 26 "data/maps/GlacierPath/scripts.pory"
	delay 20
# 27 "data/maps/GlacierPath/scripts.pory"
	setvar VAR_LEVEL_CAP, 43
# 28 "data/maps/GlacierPath/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 29 "data/maps/GlacierPath/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 30 "data/maps/GlacierPath/scripts.pory"
	releaseall
	end


GlacierPath_Text_TabithaMonologue::
# 34 "data/maps/GlacierPath/scripts.pory"
	.string "Underneath this glacier, there is\n"
	.string "plenty of unused land. Courtney tells\l"
	.string "me that it's especially rich in minerals,\l"
	.string "or something.\p"
	.string "By melting away the accumulated ice, we\n"
	.string "can give the people of Hoenn access to\l"
	.string "a huge amount of unused land.\p"
	.string "And once the ice is gone, there will be\n"
	.string "nothing you or Team Aqua can do to undo\l"
	.string "it!$"

GlacierPath_Text_TabithaPostBattle::
# 38 "data/maps/GlacierPath/scripts.pory"
	.string "I can't believe it! We were so close!$"

GlacierPath_Text_TabithaOutro::
# 42 "data/maps/GlacierPath/scripts.pory"
	.string "You and those fools in Team Aqua don't\n"
	.string "understand. These plans are necessary.\p"
	.string "Land expansion is inevitable. And\n"
	.string "Leader Maxie is much smarter than you\l"
	.string "all.\p"
	.string "He will find a way - trust me.$"
