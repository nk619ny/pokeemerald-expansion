IceCave_2F_MapScripts::
	.byte 0


IceCave_2F_EventScript_Tabitha::
# 6 "data/maps/IceCave_2F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_GLACIER, IceCave_2F_Text_TabithaMonologue, IceCave_2F_Text_TabithaPostBattle, IceCave_2F_EventScript_TabithaDefeated
# 7 "data/maps/IceCave_2F/scripts.pory"
	releaseall
	end


IceCave_2F_EventScript_TabithaDefeated::
# 12 "data/maps/IceCave_2F/scripts.pory"
	lock
# 13 "data/maps/IceCave_2F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_GLACIER
# 14 "data/maps/IceCave_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 15 "data/maps/IceCave_2F/scripts.pory"
	clearflag FLAG_HIDE_CABLE_CAR_ATTENDANT
# 16 "data/maps/IceCave_2F/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 17 "data/maps/IceCave_2F/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 18 "data/maps/IceCave_2F/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 19 "data/maps/IceCave_2F/scripts.pory"
	msgbox IceCave_2F_Text_TabithaOutro
# 20 "data/maps/IceCave_2F/scripts.pory"
	waitmessage
# 21 "data/maps/IceCave_2F/scripts.pory"
	delay 20
# 22 "data/maps/IceCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 23 "data/maps/IceCave_2F/scripts.pory"
	removeobject LOCALID_GLACIER_TABITHA
# 24 "data/maps/IceCave_2F/scripts.pory"
	removeobject LOCALID_GLACIER_GRUNT_1
# 25 "data/maps/IceCave_2F/scripts.pory"
	removeobject LOCALID_GLACIER_GRUNT_2
# 26 "data/maps/IceCave_2F/scripts.pory"
	removeobject LOCALID_GLACIER_GRUNT_3
# 27 "data/maps/IceCave_2F/scripts.pory"
	delay 40
# 28 "data/maps/IceCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 29 "data/maps/IceCave_2F/scripts.pory"
	delay 20
# 30 "data/maps/IceCave_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 43
# 31 "data/maps/IceCave_2F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 32 "data/maps/IceCave_2F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 33 "data/maps/IceCave_2F/scripts.pory"
	releaseall
	end


IceCave_2F_EventScript_Grunt1::
# 51 "data/maps/IceCave_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_GLACIER_1, IceCave_2F_Text_Grunt1Intro, IceCave_2F_Text_Grunt1Defeat
# 52 "data/maps/IceCave_2F/scripts.pory"
	msgbox IceCave_2F_Text_Grunt1PostBattle, MSGBOX_NPC
# 53 "data/maps/IceCave_2F/scripts.pory"
	release
	end


IceCave_2F_EventScript_Grunt2::
# 58 "data/maps/IceCave_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_GLACIER_2, IceCave_2F_Text_Grunt2Intro, IceCave_2F_Text_Grunt2Defeat
# 59 "data/maps/IceCave_2F/scripts.pory"
	msgbox IceCave_2F_Text_Grunt2PostBattle, MSGBOX_NPC
# 60 "data/maps/IceCave_2F/scripts.pory"
	release
	end


IceCave_2F_EventScript_Grunt3::
# 65 "data/maps/IceCave_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_GLACIER_3, IceCave_2F_Text_Grunt3Intro, IceCave_2F_Text_Grunt3Defeat
# 66 "data/maps/IceCave_2F/scripts.pory"
	msgbox IceCave_2F_Text_Grunt3PostBattle, MSGBOX_NPC
# 67 "data/maps/IceCave_2F/scripts.pory"
	release
	end


IceCave_2F_Text_TabithaMonologue::
# 37 "data/maps/IceCave_2F/scripts.pory"
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

IceCave_2F_Text_TabithaPostBattle::
# 41 "data/maps/IceCave_2F/scripts.pory"
	.string "I can't believe it! We were so close!$"

IceCave_2F_Text_TabithaOutro::
# 45 "data/maps/IceCave_2F/scripts.pory"
	.string "You and those fools in Team Aqua don't\n"
	.string "understand. These plans are necessary.\p"
	.string "Land expansion is inevitable. And\n"
	.string "Leader Maxie is much smarter than you\l"
	.string "all.\p"
	.string "He will find a way - trust me.$"

IceCave_2F_Text_Grunt1Intro::
# 71 "data/maps/IceCave_2F/scripts.pory"
	.string "There isn't supposed to be anyone up\n"
	.string "here!$"

IceCave_2F_Text_Grunt1Defeat::
# 75 "data/maps/IceCave_2F/scripts.pory"
	.string "This was supposed to be an easy job...$"

IceCave_2F_Text_Grunt1PostBattle::
# 79 "data/maps/IceCave_2F/scripts.pory"
	.string "What are the odds of a powerful trainer\n"
	.string "like you showing up here?$"

IceCave_2F_Text_Grunt2Intro::
# 83 "data/maps/IceCave_2F/scripts.pory"
	.string "We're on an important mission.\n"
	.string "You can't be allowed to interfere!$"

IceCave_2F_Text_Grunt2Defeat::
# 87 "data/maps/IceCave_2F/scripts.pory"
	.string "Defeat feels colder than the ice around\n"
	.string "us...$"

IceCave_2F_Text_Grunt2PostBattle::
# 91 "data/maps/IceCave_2F/scripts.pory"
	.string "I just can't wait to get back down to\n"
	.string "the base...$"

IceCave_2F_Text_Grunt3Intro::
# 95 "data/maps/IceCave_2F/scripts.pory"
	.string "We're on a special mission with Tabitha!$"

IceCave_2F_Text_Grunt3Defeat::
# 99 "data/maps/IceCave_2F/scripts.pory"
	.string "I hope he wasn't watching...$"

IceCave_2F_Text_Grunt3PostBattle::
# 103 "data/maps/IceCave_2F/scripts.pory"
	.string "Tabitha is by far the best admin to work\n"
	.string "with.$"
