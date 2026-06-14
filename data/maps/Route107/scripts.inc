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
/*
# 42 "data/maps/Route107/scripts.pory"
Route107_EventScript_Lisa::
# 43 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 44 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route107/scripts.pory"
	end
# 46 "data/maps/Route107/scripts.pory"

# 47 "data/maps/Route107/scripts.pory"
Route107_EventScript_Ray::
# 48 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 49 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route107/scripts.pory"
	end
# 51 "data/maps/Route107/scripts.pory"
*/
# 52 "data/maps/Route107/scripts.pory"

# 53 "data/maps/Route107/scripts.pory"
Route107_EventScript_Camron::
# 54 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 55 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route107/scripts.pory"
	end

Route107_EventScript_FlipTurnSwimmer::
# 62 "data/maps/Route107/scripts.pory"
	lock
# 63 "data/maps/Route107/scripts.pory"
	faceplayer
# 64 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_FlipTurnSwimmer_Text_0, MSGBOX_DEFAULT
# 65 "data/maps/Route107/scripts.pory"
	closemessage
# 66 "data/maps/Route107/scripts.pory"
	checkitem ITEM_TM_FLIP_TURN
# 67 "data/maps/Route107/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route107_EventScript_FlipTurnSwimmer_2
Route107_EventScript_FlipTurnSwimmer_1:
# 71 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_FlipTurnSwimmer_Text_1, MSGBOX_DEFAULT
# 72 "data/maps/Route107/scripts.pory"
	closemessage
# 73 "data/maps/Route107/scripts.pory"
	releaseall
	end

Route107_EventScript_FlipTurnSwimmer_2:
# 68 "data/maps/Route107/scripts.pory"
	giveitem ITEM_TM_FLIP_TURN
# 69 "data/maps/Route107/scripts.pory"
	waitfanfare
	goto Route107_EventScript_FlipTurnSwimmer_1


Route107_EventScript_Ray::
# 80 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_EventScript_RayTryGiveVitamin
# 81 "data/maps/Route107/scripts.pory"
	goto_if_set FLAG_TEMP_A, Route107_EventScript_RayTryGiveVitamin
# 82 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_NPC
# 83 "data/maps/Route107/scripts.pory"
	release
	end


Route107_EventScript_RayTryGiveVitamin::
# 88 "data/maps/Route107/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route107_EventScript_RayTryGiveVitamin_2
# 92 "data/maps/Route107/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Route107_EventScript_RayTryGiveVitamin_5
# 96 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_RayTryGiveVitamin_Text_1, MSGBOX_NPC
Route107_EventScript_RayTryGiveVitamin_4:
# 98 "data/maps/Route107/scripts.pory"
	checkitemspace ITEM_PROTEIN
# 99 "data/maps/Route107/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route107_EventScript_RayTryGiveVitamin_9
# 104 "data/maps/Route107/scripts.pory"
	setflag FLAG_TEMP_A
# 105 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_RayTryGiveVitamin_Text_2, MSGBOX_NPC
Route107_EventScript_RayTryGiveVitamin_8:
# 107 "data/maps/Route107/scripts.pory"
	release
	end

Route107_EventScript_RayTryGiveVitamin_2:
# 89 "data/maps/Route107/scripts.pory"
	releaseall
	end

Route107_EventScript_RayTryGiveVitamin_5:
# 93 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_RayTryGiveVitamin_Text_0, MSGBOX_NPC
	goto Route107_EventScript_RayTryGiveVitamin_4

Route107_EventScript_RayTryGiveVitamin_9:
# 100 "data/maps/Route107/scripts.pory"
	giveitem ITEM_PROTEIN
# 101 "data/maps/Route107/scripts.pory"
	clearflag FLAG_TEMP_A
	goto Route107_EventScript_RayTryGiveVitamin_8


Route107_EventScript_Lisa::
# 112 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_EventScript_LisaTryGiveVitamin
# 113 "data/maps/Route107/scripts.pory"
	goto_if_set FLAG_TEMP_A, Route107_EventScript_LisaTryGiveVitamin
# 114 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_NPC
# 115 "data/maps/Route107/scripts.pory"
	release
	end


Route107_EventScript_LisaTryGiveVitamin::
# 120 "data/maps/Route107/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route107_EventScript_LisaTryGiveVitamin_2
# 124 "data/maps/Route107/scripts.pory"
	goto_if_unset FLAG_TEMP_A, Route107_EventScript_LisaTryGiveVitamin_5
# 128 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_LisaTryGiveVitamin_Text_1, MSGBOX_NPC
Route107_EventScript_LisaTryGiveVitamin_4:
# 130 "data/maps/Route107/scripts.pory"
	checkitemspace ITEM_PROTEIN
# 131 "data/maps/Route107/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route107_EventScript_LisaTryGiveVitamin_9
# 136 "data/maps/Route107/scripts.pory"
	setflag FLAG_TEMP_A
# 137 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_LisaTryGiveVitamin_Text_2, MSGBOX_NPC
Route107_EventScript_LisaTryGiveVitamin_8:
# 139 "data/maps/Route107/scripts.pory"
	release
	end

Route107_EventScript_LisaTryGiveVitamin_2:
# 121 "data/maps/Route107/scripts.pory"
	releaseall
	end

Route107_EventScript_LisaTryGiveVitamin_5:
# 125 "data/maps/Route107/scripts.pory"
	msgbox Route107_EventScript_LisaTryGiveVitamin_Text_0, MSGBOX_NPC
	goto Route107_EventScript_LisaTryGiveVitamin_4

Route107_EventScript_LisaTryGiveVitamin_9:
# 132 "data/maps/Route107/scripts.pory"
	giveitem ITEM_PROTEIN
# 133 "data/maps/Route107/scripts.pory"
	clearflag FLAG_TEMP_A
	goto Route107_EventScript_LisaTryGiveVitamin_8


Route107_EventScript_FlipTurnSwimmer_Text_0:
# 64 "data/maps/Route107/scripts.pory"
	.string "In competitive swimming, being able to\n"
	.string "turn quickly at the edge of the pool is\l"
	.string "just as important as your frontward\l"
	.string "speed.$"

Route107_EventScript_FlipTurnSwimmer_Text_1:
# 71 "data/maps/Route107/scripts.pory"
	.string "I learned how to turn underwater from\n"
	.string "watching Pokémon!$"

Route107_EventScript_RayTryGiveVitamin_Text_0:
# 93 "data/maps/Route107/scripts.pory"
	.string "My sister told me I wasn't supposed to\n"
	.string "bring this swimming with us.\p"
	.string "Do you want it?$"

Route107_EventScript_RayTryGiveVitamin_Text_1:
# 96 "data/maps/Route107/scripts.pory"
	.string "My sister is still really upset I brought\n"
	.string "this vitamin into the water.\p"
	.string "You should take it.$"

Route107_EventScript_RayTryGiveVitamin_Text_2:
# 105 "data/maps/Route107/scripts.pory"
	.string "Are you not supposed to carry this much\n"
	.string "stuff when swimming either?$"

Route107_EventScript_LisaTryGiveVitamin_Text_0:
# 125 "data/maps/Route107/scripts.pory"
	.string "My brother keeps bringing junk he finds\n"
	.string "into the water, and then losing it.\p"
	.string "I told him he's not allowed to bring them\n"
	.string "with us until he's responsible.\p"
	.string "Would you like it instead?$"

Route107_EventScript_LisaTryGiveVitamin_Text_1:
# 128 "data/maps/Route107/scripts.pory"
	.string "You should take the vitamin so it\n"
	.string "doesn't end up at the bottom of the\l"
	.string "sea.$"

Route107_EventScript_LisaTryGiveVitamin_Text_2:
# 137 "data/maps/Route107/scripts.pory"
	.string "You should make room in your bag and\n"
	.string "come back before he drops it.$"
