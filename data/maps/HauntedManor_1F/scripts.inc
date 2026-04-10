HauntedManor_1F_MapScripts::
	.byte 0


HauntedManor_1F_EventScript_Hazel::
# 5 "data/maps/HauntedManor_1F/scripts.pory"
	trainerbattle_single TRAINER_HAZEL, HauntedManor_1F_Text_HazelIntro, HauntedManor_1F_Text_HazelDefeat
# 6 "data/maps/HauntedManor_1F/scripts.pory"
	msgbox HauntedManor_1F_Text_HazelPostBattle, MSGBOX_NPC
# 7 "data/maps/HauntedManor_1F/scripts.pory"
	release
	end


HauntedManor_1F_EventScript_Sage::
# 12 "data/maps/HauntedManor_1F/scripts.pory"
	trainerbattle_single TRAINER_SAGE, HauntedManor_1F_Text_SageIntro, HauntedManor_1F_Text_SageDefeat, HauntedManor_1F_EventScript_GiveHex
# 13 "data/maps/HauntedManor_1F/scripts.pory"
	goto HauntedManor_1F_EventScript_GiveHex
# 14 "data/maps/HauntedManor_1F/scripts.pory"
	release
	end


HauntedManor_1F_EventScript_GiveHex::
# 45 "data/maps/HauntedManor_1F/scripts.pory"
	lock
# 46 "data/maps/HauntedManor_1F/scripts.pory"
	faceplayer
# 47 "data/maps/HauntedManor_1F/scripts.pory"
	checkitem ITEM_TM_HEX
# 48 "data/maps/HauntedManor_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HauntedManor_1F_EventScript_GiveHex_2
# 55 "data/maps/HauntedManor_1F/scripts.pory"
	msgbox HauntedManor_1F_Text_ExplainHex, MSGBOX_DEFAULT
HauntedManor_1F_EventScript_GiveHex_1:
# 57 "data/maps/HauntedManor_1F/scripts.pory"
	closemessage
# 58 "data/maps/HauntedManor_1F/scripts.pory"
	releaseall
	end

HauntedManor_1F_EventScript_GiveHex_2:
# 49 "data/maps/HauntedManor_1F/scripts.pory"
	msgbox HauntedManor_1F_EventScript_GiveHex_Text_0, MSGBOX_DEFAULT
# 50 "data/maps/HauntedManor_1F/scripts.pory"
	closemessage
# 51 "data/maps/HauntedManor_1F/scripts.pory"
	giveitem ITEM_TM_HEX
# 52 "data/maps/HauntedManor_1F/scripts.pory"
	waitfanfare
	goto HauntedManor_1F_EventScript_GiveHex_1


HauntedManor_1F_EventScript_GiveHex_Text_0:
# 49 "data/maps/HauntedManor_1F/scripts.pory"
	.string "Allow me to teach your Pokémon some of\n"
	.string "my hexes.$"

HauntedManor_1F_Text_HazelIntro::
# 18 "data/maps/HauntedManor_1F/scripts.pory"
	.string "The spirits brought you here.\p"
	.string "I could sense your presence before you\n"
	.string "stepped foot through that door.$"

HauntedManor_1F_Text_HazelDefeat::
# 22 "data/maps/HauntedManor_1F/scripts.pory"
	.string "What does it all mean…$"

HauntedManor_1F_Text_HazelPostBattle::
# 26 "data/maps/HauntedManor_1F/scripts.pory"
	.string "You have a strange energy about you.\p"
	.string "The manor's ghosts are drawn to those\n"
	.string "like you. Be careful in here…$"

HauntedManor_1F_Text_SageIntro::
# 32 "data/maps/HauntedManor_1F/scripts.pory"
	.string "Who are you, to intrude in this place?$"

HauntedManor_1F_Text_SageDefeat::
# 36 "data/maps/HauntedManor_1F/scripts.pory"
	.string "My incantations have failed me…$"

HauntedManor_1F_Text_ExplainHex::
# 40 "data/maps/HauntedManor_1F/scripts.pory"
	.string "A hex is particularly potent against a\n"
	.string "foe who is already afflicted.$"
