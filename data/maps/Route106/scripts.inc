# 1 "data/maps/Route106/scripts.pory"

# 2 "data/maps/Route106/scripts.pory"
Route106_MapScripts::
# 3 "data/maps/Route106/scripts.pory"
	.byte 0
# 4 "data/maps/Route106/scripts.pory"

# 5 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 6 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 7 "data/maps/Route106/scripts.pory"
	end
# 8 "data/maps/Route106/scripts.pory"

# 9 "data/maps/Route106/scripts.pory"
/*
# 10 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 11 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 12 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/Route106/scripts.pory"
	end
# 14 "data/maps/Route106/scripts.pory"
*/
# 15 "data/maps/Route106/scripts.pory"

# 16 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 17 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 18 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route106/scripts.pory"
	end
# 20 "data/maps/Route106/scripts.pory"

# 21 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 22 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro_New, Route106_Text_ElliotDefeated_New
# 23 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle_New, MSGBOX_DEFAULT
# 24 "data/maps/Route106/scripts.pory"
	release
# 25 "data/maps/Route106/scripts.pory"
	end
# 26 "data/maps/Route106/scripts.pory"

# 27 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 28 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 29 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/Route106/scripts.pory"
	end
# 31 "data/maps/Route106/scripts.pory"

# 32 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 33 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 34 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route106/scripts.pory"
	end
# 36 "data/maps/Route106/scripts.pory"

# 37 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 38 "data/maps/Route106/scripts.pory"
	.string "TRAINER TIPS\p"
# 39 "data/maps/Route106/scripts.pory"
	.string "Advice on catching Pokémon with a ROD:\n"
# 40 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"

Route106_EventScript_Douglas::
# 59 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated, Route106_EventScript_DouglasTryGiveVitamin
# 60 "data/maps/Route106/scripts.pory"
	goto_if_set FLAG_TEMP_A, Route106_EventScript_DouglasTryGiveVitamin
# 61 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route106/scripts.pory"
	release
	end


Route106_EventScript_DouglasTryGiveVitamin::
# 67 "data/maps/Route106/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route106_EventScript_DouglasTryGiveVitamin_2
# 71 "data/maps/Route106/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Route106_EventScript_DouglasTryGiveVitamin_5
# 75 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_DouglasTryGiveVitamin_Text_1, MSGBOX_NPC
Route106_EventScript_DouglasTryGiveVitamin_4:
# 77 "data/maps/Route106/scripts.pory"
	checkitemspace ITEM_CALCIUM
# 78 "data/maps/Route106/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route106_EventScript_DouglasTryGiveVitamin_9
# 83 "data/maps/Route106/scripts.pory"
	setflag FLAG_TEMP_A
# 84 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_DouglasTryGiveVitamin_Text_2, MSGBOX_NPC
Route106_EventScript_DouglasTryGiveVitamin_8:
# 86 "data/maps/Route106/scripts.pory"
	release
	end

Route106_EventScript_DouglasTryGiveVitamin_2:
# 68 "data/maps/Route106/scripts.pory"
	releaseall
	end

Route106_EventScript_DouglasTryGiveVitamin_5:
# 72 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_DouglasTryGiveVitamin_Text_0, MSGBOX_NPC
	goto Route106_EventScript_DouglasTryGiveVitamin_4

Route106_EventScript_DouglasTryGiveVitamin_9:
# 79 "data/maps/Route106/scripts.pory"
	giveitem ITEM_CALCIUM
# 80 "data/maps/Route106/scripts.pory"
	clearflag FLAG_TEMP_A
	goto Route106_EventScript_DouglasTryGiveVitamin_8


Route106_EventScript_DouglasTryGiveVitamin_Text_0:
# 72 "data/maps/Route106/scripts.pory"
	.string "I've battled trainers who were swimming,\n"
	.string "and trainers surfing on Pokémon, but\l"
	.string "never a trainer in a boat before.\p"
	.string "Take this as thanks for the new\n"
	.string "experience!$"

Route106_EventScript_DouglasTryGiveVitamin_Text_1:
# 75 "data/maps/Route106/scripts.pory"
	.string "Oh hey, it's the guy on the boat again!$"

Route106_EventScript_DouglasTryGiveVitamin_Text_2:
# 84 "data/maps/Route106/scripts.pory"
	.string "Would this vitamin weigh down your boat\n"
	.string "too much?\p"
	.string "Try dropping some weight and come back.$"

Route106_Text_ElliotIntro_New::
# 44 "data/maps/Route106/scripts.pory"
	.string "Which do you prefer, hiking in the\n"
	.string "mountains or a stroll on the beach?$"

Route106_Text_ElliotDefeated_New::
# 48 "data/maps/Route106/scripts.pory"
	.string "Like in cave delving, I lost\n"
	.string "spectacularly!$"

Route106_Text_ElliotPostBattle_New::
# 52 "data/maps/Route106/scripts.pory"
	.string "Hiking is the greatest whether it's in\n"
	.string "the high mountains or deep\l"
	.string "underground. You agree with me, right?$"
