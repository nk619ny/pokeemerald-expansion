# 1 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_MapScripts::
# 3 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1::
# 6 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
# 7 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 10 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt2::
# 11 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Intro, SeafloorCavern_Room1_Text_Grunt2Defeat
# 12 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 14 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 15 "data/maps/SeafloorCavern_Room1/scripts.pory"
/*
# 16 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Intro:
# 17 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "We don't need a kid around!\n"
# 18 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Go on home already!$"
# 19 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 20 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Defeat:
# 21 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to go home…$"
# 22 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 23 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 24 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I want to get a promotion so I can\n"
# 25 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "boss around the GRUNTS…$"
# 26 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 27 "data/maps/SeafloorCavern_Room1/scripts.pory"
*/
# 28 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 29 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Intro:
# 30 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine… It's tiny inside.\n"
# 31 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "I'm sore all over!$"
# 32 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 33 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Defeat:
# 34 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Losing makes me sore!$"
# 35 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 36 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 37 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "That submarine we jacked, man,\n"
# 38 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "it's brutal as a ride.\l"
# 39 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "It's way too tight in there!$"

SeafloorCavern_Room1_Text_Grunt2Intro::
# 43 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Do you feel it yet?\n"
	.string "The energy in the air?$"

SeafloorCavern_Room1_Text_Grunt2Defeat::
# 47 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Maybe I couldn't handle it...$"

SeafloorCavern_Room1_Text_Grunt2PostBattle::
# 51 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "The colors in the mist... the tremors of\n"
	.string "the stone... the smell of the sea...$"
