# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_1F/scripts.pory"

# 5 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 15 "data/maps/GraniteCave_1F/scripts.pory"

# 16 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 20 "data/maps/GraniteCave_1F/scripts.pory"

# 21 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 22 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\n"
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It gets awfully dark ahead.\l"
# 24 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It'll be tough trying to explore.\p"
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	.string "That guy who came by earlier…\n"
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	.string "STEVEN, I think it was.\p"
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	.string "He knew how to use FLASH, so he ought\n"
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	.string "to be all right, but…\p"
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Well, for us HIKERS, helping out those\n"
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	.string "that we meet is our motto.\p"
# 31 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 32 "data/maps/GraniteCave_1F/scripts.pory"

# 33 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 34 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	.string "a Pokémon and use it.\p"
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It lights up even the inky darkness\n"
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	.string "of caves.\p"
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	.string "But, to use it, you need the GYM BADGE\n"
# 39 "data/maps/GraniteCave_1F/scripts.pory"
	.string "from DEWFORD's Pokémon GYM.$"

GraniteCave_1F_EventScript_SmackDownHiker::
# 45 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 46 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 47 "data/maps/GraniteCave_1F/scripts.pory"
	checkitem ITEM_TM_SMACK_DOWN
# 48 "data/maps/GraniteCave_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GraniteCave_1F_EventScript_SmackDownHiker_2
# 55 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_SmackDownHiker_Text_1, MSGBOX_DEFAULT
GraniteCave_1F_EventScript_SmackDownHiker_1:
# 57 "data/maps/GraniteCave_1F/scripts.pory"
	releaseall
	end

GraniteCave_1F_EventScript_SmackDownHiker_2:
# 49 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_SmackDownHiker_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 51 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_TM_SMACK_DOWN
# 52 "data/maps/GraniteCave_1F/scripts.pory"
	waitfanfare
	goto GraniteCave_1F_EventScript_SmackDownHiker_1


GraniteCave_1F_EventScript_SmackDownHiker_Text_0:
# 49 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Sometimes when exploring, you need to\n"
	.string "knock obstacles or Pokémon out of the\l"
	.string "way.\p"
	.string "With this TM, your Pokémon can smack\n"
	.string "opponents down.$"

GraniteCave_1F_EventScript_SmackDownHiker_Text_1:
# 55 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It gets pretty dark deeper in the cave.\p"
	.string "You won't be able to progress further\n"
	.string "until your Pokémon can light the way.$"
