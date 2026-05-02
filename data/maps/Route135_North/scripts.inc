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


Route135_South_EventScript_GiveIcyWind::
# 44 "data/maps/Route135_North/scripts.pory"
	lock
# 45 "data/maps/Route135_North/scripts.pory"
	faceplayer
# 46 "data/maps/Route135_North/scripts.pory"
	checkitem ITEM_TM_ICY_WIND
# 47 "data/maps/Route135_North/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route135_South_EventScript_GiveIcyWind_2
# 54 "data/maps/Route135_North/scripts.pory"
	msgbox Route135_South_EventScript_GiveIcyWind_Text_1, MSGBOX_NPC
Route135_South_EventScript_GiveIcyWind_1:
# 56 "data/maps/Route135_North/scripts.pory"
	closemessage
# 57 "data/maps/Route135_North/scripts.pory"
	releaseall
	end

Route135_South_EventScript_GiveIcyWind_2:
# 48 "data/maps/Route135_North/scripts.pory"
	msgbox Route135_South_EventScript_GiveIcyWind_Text_0, MSGBOX_NPC
# 49 "data/maps/Route135_North/scripts.pory"
	closemessage
# 50 "data/maps/Route135_North/scripts.pory"
	giveitem ITEM_TM_ICY_WIND
# 51 "data/maps/Route135_North/scripts.pory"
	waitfanfare
	goto Route135_South_EventScript_GiveIcyWind_1


Route135_South_EventScript_GiveIcyWind_Text_0:
# 48 "data/maps/Route135_North/scripts.pory"
	.string "I want to explore up ahead, but it's\n"
	.string "just too cold for me.\p"
	.string "Maybe you should have this TM instead\n"
	.string "of me.$"

Route135_South_EventScript_GiveIcyWind_Text_1:
# 54 "data/maps/Route135_North/scripts.pory"
	.string "I bet the snow is really pretty up there.$"

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
