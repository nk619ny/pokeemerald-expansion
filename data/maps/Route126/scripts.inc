# 1 "data/maps/Route126/scripts.pory"

# 2 "data/maps/Route126/scripts.pory"
Route126_MapScripts::
# 3 "data/maps/Route126/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route126_OnTransition
# 4 "data/maps/Route126/scripts.pory"
	.byte 0
# 5 "data/maps/Route126/scripts.pory"

# 6 "data/maps/Route126/scripts.pory"
Route126_OnTransition:
# 7 "data/maps/Route126/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/Route126/scripts.pory"
	end
# 9 "data/maps/Route126/scripts.pory"

# 10 "data/maps/Route126/scripts.pory"
Route126_EventScript_Barry::
# 11 "data/maps/Route126/scripts.pory"
	//trainerbattle_single TRAINER_BARRY, Route126_Text_BarryIntro, Route126_Text_BarryDefeat
# 12 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BarryIntro, MSGBOX_NPC
# 13 "data/maps/Route126/scripts.pory"
	end
# 14 "data/maps/Route126/scripts.pory"

# 15 "data/maps/Route126/scripts.pory"
Route126_EventScript_Dean::
# 16 "data/maps/Route126/scripts.pory"
	//trainerbattle_single TRAINER_DEAN, Route126_Text_DeanIntro, Route126_Text_DeanDefeat
# 17 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_DeanNoBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Route126/scripts.pory"
	end
# 19 "data/maps/Route126/scripts.pory"

# 20 "data/maps/Route126/scripts.pory"
//Route126_EventScript_Nikki::
# 21 "data/maps/Route126/scripts.pory"
//	trainerbattle_single TRAINER_NIKKI, Route126_Text_NikkiIntro, Route126_Text_NikkiDefeat
# 22 "data/maps/Route126/scripts.pory"
//	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route126/scripts.pory"
//	end
# 24 "data/maps/Route126/scripts.pory"

# 25 "data/maps/Route126/scripts.pory"
Route126_EventScript_Leonardo::
# 26 "data/maps/Route126/scripts.pory"
	//trainerbattle_single TRAINER_LEONARDO, Route126_Text_LeonardoIntro, Route126_Text_LeonardoDefeat
# 27 "data/maps/Route126/scripts.pory"
	//msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_LeonardoNoBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route126/scripts.pory"
	end
# 30 "data/maps/Route126/scripts.pory"

# 31 "data/maps/Route126/scripts.pory"
Route126_EventScript_Isobel::
# 32 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_ISOBEL, Route126_Text_IsobelIntro, Route126_Text_IsobelDefeat
# 33 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route126/scripts.pory"
	end
# 35 "data/maps/Route126/scripts.pory"

# 36 "data/maps/Route126/scripts.pory"
Route126_EventScript_Sienna::
# 37 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_SIENNA, Route126_Text_SiennaIntro, Route126_Text_SiennaDefeat
# 38 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route126/scripts.pory"
	end
# 40 "data/maps/Route126/scripts.pory"

# 41 "data/maps/Route126/scripts.pory"
Route126_EventScript_Pablo::
# 42 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_PABLO_1, Route126_Text_PabloIntro, Route126_Text_PabloDefeat, Route126_EventScript_RegisterPablo
# 43 "data/maps/Route126/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 44 "data/maps/Route126/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route126_EventScript_RematchPablo
# 45 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostBattle, MSGBOX_DEFAULT
# 46 "data/maps/Route126/scripts.pory"
	release
# 47 "data/maps/Route126/scripts.pory"
	end
# 48 "data/maps/Route126/scripts.pory"

# 49 "data/maps/Route126/scripts.pory"
Route126_EventScript_RegisterPablo::
# 50 "data/maps/Route126/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 51 "data/maps/Route126/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloRegister, MSGBOX_DEFAULT
# 53 "data/maps/Route126/scripts.pory"
	//register_matchcall TRAINER_PABLO_1
# 54 "data/maps/Route126/scripts.pory"
	release
# 55 "data/maps/Route126/scripts.pory"
	end
# 56 "data/maps/Route126/scripts.pory"

# 57 "data/maps/Route126/scripts.pory"
Route126_EventScript_RematchPablo::
# 58 "data/maps/Route126/scripts.pory"
	trainerbattle_rematch TRAINER_PABLO_1, Route126_Text_PabloRematchIntro, Route126_Text_PabloRematchDefeat
# 59 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostRematch, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route126/scripts.pory"
	end

Route126_EventScript_Nikki_New::
# 65 "data/maps/Route126/scripts.pory"
	msgbox Route126_EventScript_Nikki_New_Text_0, MSGBOX_AUTOCLOSE
	end


Route126_EventScript_Nikki_New_Text_0:
# 65 "data/maps/Route126/scripts.pory"
	.string "Swimming around outside the walls of\n"
	.string "Sootopolis is really nice.\p"
	.string "There's more peace and quiet than at\n"
	.string "home.$"

Route126_Text_LeonardoNoBattle::
# 69 "data/maps/Route126/scripts.pory"
	.string "It's really incredible how large the\n"
	.string "Ocean is.$"

Route126_Text_DeanNoBattle::
# 73 "data/maps/Route126/scripts.pory"
	.string "Sootopolis City is inside the white\n"
	.string "mountain over there.$"
