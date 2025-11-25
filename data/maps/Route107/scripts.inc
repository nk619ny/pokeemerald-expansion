# 1 "data/maps/Route107/scripts.pory"

# 2 "data/maps/Route107/scripts.pory"
Route107_MapScripts::
# 3 "data/maps/Route107/scripts.pory"
	.byte 0
# 4 "data/maps/Route107/scripts.pory"

# 5 "data/maps/Route107/scripts.pory"
Route107_EventScript_Darrin::
# 6 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
# 7 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/Route107/scripts.pory"
	end
# 9 "data/maps/Route107/scripts.pory"

# 10 "data/maps/Route107/scripts.pory"
Route107_EventScript_Tony::
# 11 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
# 12 "data/maps/Route107/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 13 "data/maps/Route107/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route107_EventScript_TonyRematch
# 14 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
# 15 "data/maps/Route107/scripts.pory"
	release
# 16 "data/maps/Route107/scripts.pory"
	end
# 17 "data/maps/Route107/scripts.pory"

# 18 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 19 "data/maps/Route107/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 20 "data/maps/Route107/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 22 "data/maps/Route107/scripts.pory"
	//register_matchcall TRAINER_TONY_1
# 23 "data/maps/Route107/scripts.pory"
	release
# 24 "data/maps/Route107/scripts.pory"
	end
# 25 "data/maps/Route107/scripts.pory"

# 26 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRematch::
# 27 "data/maps/Route107/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 28 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route107/scripts.pory"
	end
# 30 "data/maps/Route107/scripts.pory"

# 31 "data/maps/Route107/scripts.pory"
Route107_EventScript_Denise::
# 32 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 33 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route107/scripts.pory"
	end
# 35 "data/maps/Route107/scripts.pory"

# 36 "data/maps/Route107/scripts.pory"
Route107_EventScript_Beth::
# 37 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 38 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route107/scripts.pory"
	end
# 40 "data/maps/Route107/scripts.pory"

# 41 "data/maps/Route107/scripts.pory"
Route107_EventScript_Lisa::
# 42 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 43 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route107/scripts.pory"
	end
# 45 "data/maps/Route107/scripts.pory"

# 46 "data/maps/Route107/scripts.pory"
Route107_EventScript_Ray::
# 47 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 48 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route107/scripts.pory"
	end
# 50 "data/maps/Route107/scripts.pory"

# 51 "data/maps/Route107/scripts.pory"
Route107_EventScript_Camron::
# 52 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 53 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route107/scripts.pory"
	end

Route107_EventScript_FlipTurnSwimmer::
# 60 "data/maps/Route107/scripts.pory"
	lock
# 61 "data/maps/Route107/scripts.pory"
	faceplayer
# 62 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_FlipTurnSwimmer_Text_0, MSGBOX_DEFAULT
# 63 "data/maps/Route107/scripts.pory"
	closemessage
# 64 "data/maps/Route107/scripts.pory"
	checkitem ITEM_TM_FLIP_TURN
# 65 "data/maps/Route107/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route107_EventScript_FlipTurnSwimmer_2
Route107_EventScript_FlipTurnSwimmer_1:
# 69 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_FlipTurnSwimmer_Text_1, MSGBOX_DEFAULT
# 70 "data/maps/Route107/scripts.pory"
	closemessage
# 71 "data/maps/Route107/scripts.pory"
	releaseall
	end

Route107_EventScript_FlipTurnSwimmer_2:
# 66 "data/maps/Route107/scripts.pory"
	giveitem ITEM_TM_FLIP_TURN
# 67 "data/maps/Route107/scripts.pory"
	waitfanfare
	goto Route107_EventScript_FlipTurnSwimmer_1


Route107_EventScript_FlipTurnSwimmer_Text_0:
# 62 "data/maps/Route107/scripts.pory"
	.string "In competitive swimming, being able to\n"
	.string "turn quickly at the edge of the pool is\l"
	.string "just as important as your frontward\l"
	.string "speed.$"

Route107_EventScript_FlipTurnSwimmer_Text_1:
# 69 "data/maps/Route107/scripts.pory"
	.string "I learned how to turn underwater from\n"
	.string "watching Pokémon!$"
