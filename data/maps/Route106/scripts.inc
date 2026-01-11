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
Route106_EventScript_Douglas::
# 10 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 11 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/Route106/scripts.pory"
	end
# 13 "data/maps/Route106/scripts.pory"

# 14 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 15 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 16 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/Route106/scripts.pory"
	end
# 18 "data/maps/Route106/scripts.pory"

# 19 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 20 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro_New, Route106_Text_ElliotDefeated_New
# 21 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle_New, MSGBOX_DEFAULT
# 22 "data/maps/Route106/scripts.pory"
	release
# 23 "data/maps/Route106/scripts.pory"
	end
# 24 "data/maps/Route106/scripts.pory"

# 25 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 26 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 27 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route106/scripts.pory"
	end
# 29 "data/maps/Route106/scripts.pory"

# 30 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 31 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 32 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route106/scripts.pory"
	end
# 34 "data/maps/Route106/scripts.pory"

# 35 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 36 "data/maps/Route106/scripts.pory"
	.string "TRAINER TIPS\p"
# 37 "data/maps/Route106/scripts.pory"
	.string "Advice on catching Pokémon with a ROD:\n"
# 38 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"

Route106_Text_ElliotIntro_New::
# 42 "data/maps/Route106/scripts.pory"
	.string "Which do you prefer, hiking in the\n"
	.string "mountains or a stroll on the beach?$"

Route106_Text_ElliotDefeated_New::
# 46 "data/maps/Route106/scripts.pory"
	.string "Like in cave delving, I lost\n"
	.string "spectacularly!$"

Route106_Text_ElliotPostBattle_New::
# 50 "data/maps/Route106/scripts.pory"
	.string "Hiking is the greatest whether it's in\n"
	.string "the high mountains or deep\l"
	.string "underground. You agree with me, right?$"
