PetalburgWoods2_MapScripts::
	.byte 0


PetalburgWoods2_EventScript_StrugglingBugCatcher::
# 4 "data/maps/PetalburgWoods2/scripts.pory"
	lock
# 5 "data/maps/PetalburgWoods2/scripts.pory"
	faceplayer
# 6 "data/maps/PetalburgWoods2/scripts.pory"
	msgbox PetalburgWoods2_EventScript_StrugglingBugCatcher_Text_0
# 7 "data/maps/PetalburgWoods2/scripts.pory"
	closemessage
# 8 "data/maps/PetalburgWoods2/scripts.pory"
	checkitem ITEM_TM_STRUGGLE_BUG
# 9 "data/maps/PetalburgWoods2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods2_EventScript_StrugglingBugCatcher_2
PetalburgWoods2_EventScript_StrugglingBugCatcher_1:
# 15 "data/maps/PetalburgWoods2/scripts.pory"
	releaseall
	end

PetalburgWoods2_EventScript_StrugglingBugCatcher_2:
# 10 "data/maps/PetalburgWoods2/scripts.pory"
	msgbox PetalburgWoods2_EventScript_StrugglingBugCatcher_Text_1, MSGBOX_DEFAULT
# 11 "data/maps/PetalburgWoods2/scripts.pory"
	closemessage
# 12 "data/maps/PetalburgWoods2/scripts.pory"
	giveitem ITEM_TM_STRUGGLE_BUG
# 13 "data/maps/PetalburgWoods2/scripts.pory"
	waitfanfare
	goto PetalburgWoods2_EventScript_StrugglingBugCatcher_1


PetalburgWoods2_EventScript_StrugglingBugCatcher_Text_0:
# 6 "data/maps/PetalburgWoods2/scripts.pory"
	.string "Bugs have a way of wriggling out of\n"
	.string "danger. I think it's pretty impressive!$"

PetalburgWoods2_EventScript_StrugglingBugCatcher_Text_1:
# 10 "data/maps/PetalburgWoods2/scripts.pory"
	.string "You should make sure even your weak\n"
	.string "Pokémon can always put up a fight.$"
