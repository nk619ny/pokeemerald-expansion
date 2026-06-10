FallarborTown_MoveRelearnersHouse_MapScripts::
	.byte 0


FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1:
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2:
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1


FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_2
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_1:
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_6
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_4:
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_2:
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_1

FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_6:
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove_4


FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_1:
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_5
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_4:
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_8
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_7:
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2:
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_1

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_5:
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_4

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_8:
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_7


FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_1:
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2:
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_1


FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end


FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
	end


FallarborTown_MoveRelearnersHouse_EventScript_HeartScaleExchange::
# 121 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 122 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HeartStoneExplained, MSGBOX_DEFAULT
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_HeartScaleExchange_2
FallarborTown_MoveRelearnersHouse_EventScript_HeartScaleExchange_1:
# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ExchangeHeartScale, MSGBOX_YESNO
# 129 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_HeartScaleExchange_5
FallarborTown_MoveRelearnersHouse_EventScript_HeartScaleExchange_4:
# 132 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 133 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_HEART_STONE
# 135 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
	end

FallarborTown_MoveRelearnersHouse_EventScript_HeartScaleExchange_2:
# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_NoHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_HeartScaleExchange_1

FallarborTown_MoveRelearnersHouse_EventScript_HeartScaleExchange_5:
# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_DeclineExchange
	goto FallarborTown_MoveRelearnersHouse_EventScript_HeartScaleExchange_4


FallarborTown_MoveRelearnersHouse_EventScript_NoHeartScale::
# 140 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_NoHeartScale, MSGBOX_DEFAULT
# 141 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
	end


FallarborTown_MoveRelearnersHouse_EventScript_DeclineExchange::
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DeclineExchange, MSGBOX_DEFAULT
# 147 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
	end


FallarborTown_MoveRelearnersHouse_EventScript_HeartStoneFarewell::
# 152 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lock
# 153 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_TEMP_0
# 154 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case 0, FallarborTown_MoveRelearnersHouse_EventScript_HeartStoneFarewell_3
FallarborTown_MoveRelearnersHouse_EventScript_HeartStoneFarewell_1:
# 157 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
	end

FallarborTown_MoveRelearnersHouse_EventScript_HeartStoneFarewell_3:
# 155 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_HeartStoneFarewell_Text_0, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_HeartStoneFarewell_1


FallarborTown_MoveRelearnersHouse_EventScript_HeartStoneFarewell_Text_0:
# 155 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "A$"

FallarborTown_MoveRelearnersHouse_Text_HeartStoneExplained::
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Some Pokémon can only evolve based on\n"
	.string "their gender.\p"
	.string "However, a Heart Stone can be used to\n"
	.string "evolve Pokémon of the opposite gender.\p"
	.string "I can turn Heart Scales into Heart\n"
	.string "Stones you can use to trigger these\l"
	.string "evolutions.$"

FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor::
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the MOVE TUTOR.\p"
	.string "I know all the moves that Pokémon\n"
	.string "learn--every one of them--and I can\l"
	.string "teach Pokémon those moves.\p"
	.string "I can teach a move to a Pokémon of\n"
	.string "yours if you'd like.\p"
	.string "I'll do it for a HEART SCALE. I'm\n"
	.string "collecting those now.$"

FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove::
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness HEART SCALE!\p"
	.string "Let me guess, you want me to teach a\n"
	.string "move?$"

FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon::
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which Pokémon needs tutoring?$"

FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove::
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"

FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon::
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that Pokémon.$"

FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale::
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
	.string "in exchange.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale::
# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your Pokémon need to learn a move,\n"
	.string "come back with a HEART SCALE.$"

FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg::
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that I\n"
	.string "can teach an EGG.$"

FallarborTown_MoveRelearnersHouse_Text_ExchangeHeartScale::
# 161 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Would you like to exchange a HEART\n"
	.string "SCALE for a HEART STONE?$"

FallarborTown_MoveRelearnersHouse_Text_NoHeartScale::
# 165 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It looks like you don't have a Heart\n"
	.string "Scale.\p"
	.string "Come back when you do.$"

FallarborTown_MoveRelearnersHouse_Text_ExchangeComplete::
# 169 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} exchanged the HEART SCALE\n"
	.string "for a HEART STONE!$"

FallarborTown_MoveRelearnersHouse_Text_DeclineExchange::
# 173 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Come back if you change your mind.$"
