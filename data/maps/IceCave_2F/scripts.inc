IceCave_2F_MapScripts::
# 2 "data/maps/IceCave_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IceCave_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IceCave_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/IceCave_2F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, IceCave_2F_FlashCheck
	.2byte 0


IceCave_2F_FlashCheck::
# 8 "data/maps/IceCave_2F/scripts.pory"
	goto_if_set FLAG_SYS_USE_FLASH, IceCave_2F_FlashCheck_2
# 13 "data/maps/IceCave_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, IceCave_2F_FlashCheck_4
# 28 "data/maps/IceCave_2F/scripts.pory"
	lock
# 29 "data/maps/IceCave_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 30 "data/maps/IceCave_2F/scripts.pory"
	msgbox Common_Text_CaveIsDarkNeedFlash
# 31 "data/maps/IceCave_2F/scripts.pory"
	closemessage
# 32 "data/maps/IceCave_2F/scripts.pory"
	delay 20
# 33 "data/maps/IceCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 34 "data/maps/IceCave_2F/scripts.pory"
	waitmovement
# 35 "data/maps/IceCave_2F/scripts.pory"
	warp MAP_ICE_CAVE_1F, 15, 4
# 36 "data/maps/IceCave_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 37 "data/maps/IceCave_2F/scripts.pory"
	waitmovement
# 38 "data/maps/IceCave_2F/scripts.pory"
	release
	return

IceCave_2F_FlashCheck_2:
# 9 "data/maps/IceCave_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 10 "data/maps/IceCave_2F/scripts.pory"
	releaseall
	return

IceCave_2F_FlashCheck_4:
# 14 "data/maps/IceCave_2F/scripts.pory"
	lock
# 15 "data/maps/IceCave_2F/scripts.pory"
	msgbox Common_Text_CaveIsDarkUseFlash
# 16 "data/maps/IceCave_2F/scripts.pory"
	waitmessage
# 17 "data/maps/IceCave_2F/scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 18 "data/maps/IceCave_2F/scripts.pory"
	playse SE_M_REFLECT
# 19 "data/maps/IceCave_2F/scripts.pory"
	delay 20
# 20 "data/maps/IceCave_2F/scripts.pory"
	setflag FLAG_SYS_USE_FLASH
# 21 "data/maps/IceCave_2F/scripts.pory"
	animateflash 0
# 22 "data/maps/IceCave_2F/scripts.pory"
	setflashlevel 0
# 23 "data/maps/IceCave_2F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 24 "data/maps/IceCave_2F/scripts.pory"
	release
	return


IceCave_2F_EventScript_Tabitha::
# 44 "data/maps/IceCave_2F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_GLACIER, IceCave_2F_Text_TabithaMonologue, IceCave_2F_Text_TabithaPostBattle, IceCave_2F_EventScript_TabithaDefeated
# 45 "data/maps/IceCave_2F/scripts.pory"
	releaseall
	end


IceCave_2F_EventScript_TabithaDefeated::
# 50 "data/maps/IceCave_2F/scripts.pory"
	lock
# 51 "data/maps/IceCave_2F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_GLACIER
# 52 "data/maps/IceCave_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 53 "data/maps/IceCave_2F/scripts.pory"
	clearflag FLAG_HIDE_CABLE_CAR_ATTENDANT
# 54 "data/maps/IceCave_2F/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 55 "data/maps/IceCave_2F/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 56 "data/maps/IceCave_2F/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 57 "data/maps/IceCave_2F/scripts.pory"
	msgbox IceCave_2F_Text_TabithaOutro
# 58 "data/maps/IceCave_2F/scripts.pory"
	waitmessage
# 59 "data/maps/IceCave_2F/scripts.pory"
	delay 20
# 60 "data/maps/IceCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 61 "data/maps/IceCave_2F/scripts.pory"
	removeobject LOCALID_GLACIER_TABITHA
# 62 "data/maps/IceCave_2F/scripts.pory"
	removeobject LOCALID_GLACIER_GRUNT_1
# 63 "data/maps/IceCave_2F/scripts.pory"
	removeobject LOCALID_GLACIER_GRUNT_2
# 64 "data/maps/IceCave_2F/scripts.pory"
	removeobject LOCALID_GLACIER_GRUNT_3
# 65 "data/maps/IceCave_2F/scripts.pory"
	delay 40
# 66 "data/maps/IceCave_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 67 "data/maps/IceCave_2F/scripts.pory"
	delay 20
# 68 "data/maps/IceCave_2F/scripts.pory"
	setvar VAR_LEVEL_CAP, 43
# 69 "data/maps/IceCave_2F/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 70 "data/maps/IceCave_2F/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 71 "data/maps/IceCave_2F/scripts.pory"
	releaseall
	end


IceCave_2F_EventScript_Grunt1::
# 89 "data/maps/IceCave_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_GLACIER_1, IceCave_2F_Text_Grunt1Intro, IceCave_2F_Text_Grunt1Defeat
# 90 "data/maps/IceCave_2F/scripts.pory"
	msgbox IceCave_2F_Text_Grunt1PostBattle, MSGBOX_NPC
# 91 "data/maps/IceCave_2F/scripts.pory"
	release
	end


IceCave_2F_EventScript_Grunt2::
# 96 "data/maps/IceCave_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_GLACIER_2, IceCave_2F_Text_Grunt2Intro, IceCave_2F_Text_Grunt2Defeat
# 97 "data/maps/IceCave_2F/scripts.pory"
	msgbox IceCave_2F_Text_Grunt2PostBattle, MSGBOX_NPC
# 98 "data/maps/IceCave_2F/scripts.pory"
	release
	end


IceCave_2F_EventScript_Grunt3::
# 103 "data/maps/IceCave_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_GLACIER_3, IceCave_2F_Text_Grunt3Intro, IceCave_2F_Text_Grunt3Defeat
# 104 "data/maps/IceCave_2F/scripts.pory"
	msgbox IceCave_2F_Text_Grunt3PostBattle, MSGBOX_NPC
# 105 "data/maps/IceCave_2F/scripts.pory"
	release
	end


IceCave_2F_EventScript_Bradley::
# 110 "data/maps/IceCave_2F/scripts.pory"
	trainerbattle_single TRAINER_BRADLEY, IceCave_2F_Text_BradleyIntro, IceCave_2F_Text_BradleyDefeat
# 111 "data/maps/IceCave_2F/scripts.pory"
	msgbox IceCave_2F_Text_BradleyPostBattle, MSGBOX_NPC
# 112 "data/maps/IceCave_2F/scripts.pory"
	release
	end


IceCave_2F_Text_TabithaMonologue::
# 75 "data/maps/IceCave_2F/scripts.pory"
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
# 79 "data/maps/IceCave_2F/scripts.pory"
	.string "I can't believe it! We were so close!$"

IceCave_2F_Text_TabithaOutro::
# 83 "data/maps/IceCave_2F/scripts.pory"
	.string "You and those fools in Team Aqua don't\n"
	.string "understand. These plans are necessary.\p"
	.string "Land expansion is inevitable. And\n"
	.string "Leader Maxie is much smarter than you\l"
	.string "all.\p"
	.string "He will find a way - trust me.$"

IceCave_2F_Text_Grunt1Intro::
# 116 "data/maps/IceCave_2F/scripts.pory"
	.string "There isn't supposed to be anyone up\n"
	.string "here!$"

IceCave_2F_Text_Grunt1Defeat::
# 120 "data/maps/IceCave_2F/scripts.pory"
	.string "This was supposed to be an easy job...$"

IceCave_2F_Text_Grunt1PostBattle::
# 124 "data/maps/IceCave_2F/scripts.pory"
	.string "What are the odds of a powerful trainer\n"
	.string "like you showing up here?$"

IceCave_2F_Text_Grunt2Intro::
# 128 "data/maps/IceCave_2F/scripts.pory"
	.string "We're on an important mission.\n"
	.string "You can't be allowed to interfere!$"

IceCave_2F_Text_Grunt2Defeat::
# 132 "data/maps/IceCave_2F/scripts.pory"
	.string "Defeat feels colder than the ice around\n"
	.string "us...$"

IceCave_2F_Text_Grunt2PostBattle::
# 136 "data/maps/IceCave_2F/scripts.pory"
	.string "I just can't wait to get back down to\n"
	.string "the base...$"

IceCave_2F_Text_Grunt3Intro::
# 140 "data/maps/IceCave_2F/scripts.pory"
	.string "We're on a special mission with Tabitha!$"

IceCave_2F_Text_Grunt3Defeat::
# 144 "data/maps/IceCave_2F/scripts.pory"
	.string "I hope he wasn't watching...$"

IceCave_2F_Text_Grunt3PostBattle::
# 148 "data/maps/IceCave_2F/scripts.pory"
	.string "Tabitha is by far the best admin to work\n"
	.string "with.$"

IceCave_2F_Text_BradleyIntro::
# 153 "data/maps/IceCave_2F/scripts.pory"
	.string "The Pokémon in these caves are mighty\n"
	.string "fearsome!$"

IceCave_2F_Text_BradleyDefeat::
# 157 "data/maps/IceCave_2F/scripts.pory"
	.string "You might be even scarier!$"

IceCave_2F_Text_BradleyPostBattle::
# 161 "data/maps/IceCave_2F/scripts.pory"
	.string "Ever since I got up here, I can't see my\n"
	.string "Eiscue's face anymore.$"
