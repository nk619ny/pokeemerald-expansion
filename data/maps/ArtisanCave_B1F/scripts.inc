# 1 "data/maps/ArtisanCave_B1F/scripts.pory"

# 2 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_MapScripts::
# 3 "data/maps/ArtisanCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ArtisanCave_B1F_OnTransition
# 4 "data/maps/ArtisanCave_B1F/scripts.pory"
	.byte 0
# 5 "data/maps/ArtisanCave_B1F/scripts.pory"

# 6 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_OnTransition:
# 7 "data/maps/ArtisanCave_B1F/scripts.pory"
	setflag FLAG_LANDMARK_ARTISAN_CAVE
# 8 "data/maps/ArtisanCave_B1F/scripts.pory"
	end

ArtisanCave_B1F_EventScript_SwordsDancer::
# 13 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 14 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 15 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox ArtisanCave_B1F_EventScript_SwordsDancer_Text_0, MSGBOX_DEFAULT
# 16 "data/maps/ArtisanCave_B1F/scripts.pory"
	checkitem ITEM_TM_SWORDS_DANCE
# 17 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ArtisanCave_B1F_EventScript_SwordsDancer_2
ArtisanCave_B1F_EventScript_SwordsDancer_1:
# 24 "data/maps/ArtisanCave_B1F/scripts.pory"
	releaseall
	end

ArtisanCave_B1F_EventScript_SwordsDancer_2:
# 18 "data/maps/ArtisanCave_B1F/scripts.pory"
	lockall
# 19 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox ArtisanCave_B1F_EventScript_SwordsDancer_Text_1, MSGBOX_DEFAULT
# 20 "data/maps/ArtisanCave_B1F/scripts.pory"
	closemessage
# 21 "data/maps/ArtisanCave_B1F/scripts.pory"
	giveitem ITEM_TM_SWORDS_DANCE
# 22 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitfanfare
	goto ArtisanCave_B1F_EventScript_SwordsDancer_1


ArtisanCave_B1F_EventScript_SwordsDancer_Text_0:
# 15 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "I come here often seeking inspiration\n"
	.string "from the Pokémon in this cave.$"

ArtisanCave_B1F_EventScript_SwordsDancer_Text_1:
# 19 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Your Pokémon can take inspiration from\n"
	.string "this beautiful choreography, too.$"
