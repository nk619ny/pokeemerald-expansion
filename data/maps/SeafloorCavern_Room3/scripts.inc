# 1 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room3/scripts.pory"
.set LOCALID_SHELLY, 8
# 3 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 4 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_MapScripts::
# 5 "data/maps/SeafloorCavern_Room3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafloorCavern_Room3_OnTransition
# 6 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.byte 0
# 7 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 8 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_OnTransition:
# 9 "data/maps/SeafloorCavern_Room3/scripts.pory"
	call_if_set FLAG_SEAFLOOR_SHELLY_DEFEATED_MOVED, SeafloorCavern_Room3_EventScript_MoveShelly
# 10 "data/maps/SeafloorCavern_Room3/scripts.pory"
	end
# 11 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 12 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_EventScript_MoveShelly::
# 13 "data/maps/SeafloorCavern_Room3/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 8, 4
# 14 "data/maps/SeafloorCavern_Room3/scripts.pory"
	return
# 15 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 16 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_EventScript_Grunt5::
# 17 "data/maps/SeafloorCavern_Room3/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_5, SeafloorCavern_Room3_Text_Grunt5Intro, SeafloorCavern_Room3_Text_Grunt5Defeat
# 18 "data/maps/SeafloorCavern_Room3/scripts.pory"
	msgbox SeafloorCavern_Room3_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/SeafloorCavern_Room3/scripts.pory"
	end
# 20 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 21 "data/maps/SeafloorCavern_Room3/scripts.pory"
/*
# 22 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_EventScript_Shelly::
# 23 "data/maps/SeafloorCavern_Room3/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room3_Text_ShellyIntro, SeafloorCavern_Room3_Text_ShellyDefeat
# 24 "data/maps/SeafloorCavern_Room3/scripts.pory"
	msgbox SeafloorCavern_Room3_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/SeafloorCavern_Room3/scripts.pory"
	end
# 26 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 27 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_ShellyIntro:
# 28 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ahahahaha!\p"
# 29 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "How did you manage to get here without\n"
# 30 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "a submarine?\l"
# 31 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "What an impressive child!\p"
# 32 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "But… It won't do to have you\n"
# 33 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "meddling about here.\p"
# 34 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "And, I do want payback for what\n"
# 35 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "happened at the WEATHER INSTITUTE…\p"
# 36 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "I'm going to give you a little taste\n"
# 37 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "of pain! Resign yourself to it!$"
# 38 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 39 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_ShellyDefeat:
# 40 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ahahahaha!\p"
# 41 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ouch!$"
# 42 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 43 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_ShellyPostBattle:
# 44 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Ahahahaha!\n"
# 45 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "You're so darn strong.\p"
# 46 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "It's terribly disappointing that you're\n"
# 47 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "not a TEAM AQUA member.\p"
# 48 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "You could have enjoyed the fabulous\n"
# 49 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "world our BOSS has promised as\l"
# 50 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "one of us…$"
# 51 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 52 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_Grunt5Intro:
# 53 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "For our dream to become real, we need\n"
# 54 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "the power of Pokémon.\p"
# 55 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "But meddlers like you use the power of\n"
# 56 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Pokémon to mess with us even at\l"
# 57 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "a place like this!\p"
# 58 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Life just doesn't work the way we\n"
# 59 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "need it to!$"
# 60 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 61 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_Grunt5Defeat:
# 62 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Gwah!$"
# 63 "data/maps/SeafloorCavern_Room3/scripts.pory"

# 64 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Text_Grunt5PostBattle:
# 65 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "You know, we don't dare question\n"
# 66 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "the motives of our leader.\p"
# 67 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "But here you are, just some punk,\n"
# 68 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "going up against our BOSS.\p"
# 69 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Maybe…\n"
# 70 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "You must be something…$"
# 71 "data/maps/SeafloorCavern_Room3/scripts.pory"
*/

SeafloorCavern_Room3_EventScript_Shelly::
# 76 "data/maps/SeafloorCavern_Room3/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room3_Text_ShellyIntro, SeafloorCavern_Room3_Text_ShellyDefeat, SeafloorCavern_Room3_EventScript_ShellyPostBattle
# 77 "data/maps/SeafloorCavern_Room3/scripts.pory"
	msgbox SeafloorCavern_Room3_Text_ShellyAfterBattle, MSGBOX_NPC
# 78 "data/maps/SeafloorCavern_Room3/scripts.pory"
	waitmessage
# 79 "data/maps/SeafloorCavern_Room3/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_FaceUp
# 80 "data/maps/SeafloorCavern_Room3/scripts.pory"
	waitmovement 0
# 81 "data/maps/SeafloorCavern_Room3/scripts.pory"
	releaseall
	end


SeafloorCavern_Room3_EventScript_ShellyPostBattle::
# 86 "data/maps/SeafloorCavern_Room3/scripts.pory"
	lock
# 87 "data/maps/SeafloorCavern_Room3/scripts.pory"
	msgbox SeafloorCavern_Room3_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 88 "data/maps/SeafloorCavern_Room3/scripts.pory"
	closemessage
# 89 "data/maps/SeafloorCavern_Room3/scripts.pory"
	switch VAR_FACING
# 90 "data/maps/SeafloorCavern_Room3/scripts.pory"
	case DIR_NORTH, SeafloorCavern_Room3_EventScript_ShellyPostBattle_3
# 91 "data/maps/SeafloorCavern_Room3/scripts.pory"
	case DIR_SOUTH, SeafloorCavern_Room3_EventScript_ShellyPostBattle_3
# 93 "data/maps/SeafloorCavern_Room3/scripts.pory"
	case DIR_EAST, SeafloorCavern_Room3_EventScript_ShellyPostBattle_4
# 94 "data/maps/SeafloorCavern_Room3/scripts.pory"
	case DIR_WEST, SeafloorCavern_Room3_EventScript_ShellyPostBattle_4
SeafloorCavern_Room3_EventScript_ShellyPostBattle_1:
# 98 "data/maps/SeafloorCavern_Room3/scripts.pory"
	waitmovement 0
# 99 "data/maps/SeafloorCavern_Room3/scripts.pory"
	setflag FLAG_SEAFLOOR_SHELLY_DEFEATED_MOVED
# 100 "data/maps/SeafloorCavern_Room3/scripts.pory"
	release
	return

SeafloorCavern_Room3_EventScript_ShellyPostBattle_3:
# 92 "data/maps/SeafloorCavern_Room3/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Room3_Movement_ShellyWalksAround
	goto SeafloorCavern_Room3_EventScript_ShellyPostBattle_1

SeafloorCavern_Room3_EventScript_ShellyPostBattle_4:
# 95 "data/maps/SeafloorCavern_Room3/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Room3_Movement_ShellyWalksDown
	goto SeafloorCavern_Room3_EventScript_ShellyPostBattle_1


# 119 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Movement_ShellyWalksDown:
# 120 "data/maps/SeafloorCavern_Room3/scripts.pory"
	walk_down
# 120 "data/maps/SeafloorCavern_Room3/scripts.pory"
	walk_down
# 121 "data/maps/SeafloorCavern_Room3/scripts.pory"
	walk_in_place_up
	step_end

# 124 "data/maps/SeafloorCavern_Room3/scripts.pory"
SeafloorCavern_Room3_Movement_ShellyWalksAround:
# 125 "data/maps/SeafloorCavern_Room3/scripts.pory"
	walk_left
# 126 "data/maps/SeafloorCavern_Room3/scripts.pory"
	walk_down
# 126 "data/maps/SeafloorCavern_Room3/scripts.pory"
	walk_down
# 127 "data/maps/SeafloorCavern_Room3/scripts.pory"
	walk_right
# 128 "data/maps/SeafloorCavern_Room3/scripts.pory"
	walk_in_place_up
	step_end

SeafloorCavern_Room3_Text_ShellyIntro::
# 103 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Shelly: Hm?\n"
	.string "Ah, it's you.\p"
	.string "I was just… no matter.\p"
	.string "Archie is committed to… He's ordered me\n"
	.string "not to let anyone into the inner\l"
	.string "chamber.\p"
	.string "So… that's it, I guess. I have to stop\n"
	.string "you, right here.$"

SeafloorCavern_Room3_Text_ShellyDefeat::
# 107 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "It's… kind of a relief.$"

SeafloorCavern_Room3_Text_ShellyPostBattle::
# 111 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Shelly: I did my best, but despite my\n"
	.string "tactics and the mystical energy of this\l"
	.string "cavern, you won anyway.\p"
	.string "…\n"
	.string "Maybe this is a sign.\p"
	.string "The more I read through the research\n"
	.string "from the Weather Institute, the more it\l"
	.string "seems… awakening Kyogre won't have the\l"
	.string "effect Archie hopes it will.\p"
	.string "But he's convinced this is the only way…\n"
	.string "he isn't listening to me anymore.\p"
	.string "Please… you need to stop him. For\n"
	.string "everyone's sake.$"

SeafloorCavern_Room3_Text_ShellyAfterBattle::
# 115 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Shelly: Please… you need to stop him.\n"
	.string "It's the only way.$"

SeafloorCavern_Room3_Text_Grunt5Intro::
# 131 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "Hahahaha, can't you tell?\p"
	.string "Shelly helped each of us build a team to\n"
	.string "perfectly capitalize on the natural\l"
	.string "power of this cavern.\p"
	.string "You don't stand a chance!$"

SeafloorCavern_Room3_Text_Grunt5Defeat::
# 135 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "This cavern was supposed to protect\n"
	.string "us!$"

SeafloorCavern_Room3_Text_Grunt5PostBattle::
# 139 "data/maps/SeafloorCavern_Room3/scripts.pory"
	.string "You might have beaten us, but there's\n"
	.string "no way you'll get past Shelly.\p"
	.string "The rainbow makes her team unbeatable!$"
