Route135_North_MapScripts::
	.byte 0


Route135_North_EventScript_Amber::
# 6 "data/maps/Route135_North/scripts.pory"
	trainerbattle_single TRAINER_AMBER, Route135_North_Text_AmberIntro, Route135_North_Text_AmberDefeated
# 7 "data/maps/Route135_North/scripts.pory"
	msgbox Route135_North_Text_AmberPostBattle, MSGBOX_NPC
# 8 "data/maps/Route135_North/scripts.pory"
	releaseall
	end


Route135_North_EventScript_Morris::
# 25 "data/maps/Route135_North/scripts.pory"
	trainerbattle_single TRAINER_MORRIS, Route135_North_Text_MorrisIntro, Route135_North_Text_MorrisDefeated
# 26 "data/maps/Route135_North/scripts.pory"
	msgbox Route135_North_Text_MorrisPostBattle, MSGBOX_NPC
# 27 "data/maps/Route135_North/scripts.pory"
	releaseall
	end


Route135_North_Text_AmberIntro::
# 12 "data/maps/Route135_North/scripts.pory"
	.string "The Ice Caves up ahead can be\n"
	.string "dangerous, if you're not careful.$"

Route135_North_Text_AmberDefeated::
# 16 "data/maps/Route135_North/scripts.pory"
	.string "You definitely know how to handle\n"
	.string "yourself!$"

Route135_North_Text_AmberPostBattle::
# 20 "data/maps/Route135_North/scripts.pory"
	.string "You can even climb to the top of the\n"
	.string "Glacier, if you're brave enough.$"

Route135_North_Text_MorrisIntro::
# 31 "data/maps/Route135_North/scripts.pory"
	.string "Climbing a glacier requires a whole\n"
	.string "different set of equipment and skills!$"

Route135_North_Text_MorrisDefeated::
# 35 "data/maps/Route135_North/scripts.pory"
	.string "I guess I'm not quite there yet.$"

Route135_North_Text_MorrisPostBattle::
# 39 "data/maps/Route135_North/scripts.pory"
	.string "Staying on the move will keep you\n"
	.string "surprisingly warm in these parts.$"
