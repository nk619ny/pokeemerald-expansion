# 1 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 2 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_MapScripts::
# 3 "data/maps/Route117_PokemonDayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
# 4 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.byte 0
# 5 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 6 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_OnTransition:
# 7 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
# 8 "data/maps/Route117_PokemonDayCare/scripts.pory"
	end

Route117_PokemonDayCare_EventScript_Breeder::
# 13 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock
# 14 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_EventScript_Breeder_Text_0, MSGBOX_NPC
# 15 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmessage
# 16 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_EventScript_Breeder_Text_1, MSGBOX_YESNO
# 17 "data/maps/Route117_PokemonDayCare/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case YES, Route117_PokemonDayCare_EventScript_Breeder_3
# 26 "data/maps/Route117_PokemonDayCare/scripts.pory"
	case NO, Route117_PokemonDayCare_EventScript_Breeder_4
Route117_PokemonDayCare_EventScript_Breeder_1:
# 29 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	end

Route117_PokemonDayCare_EventScript_Breeder_3:
# 19 "data/maps/Route117_PokemonDayCare/scripts.pory"
	getpartysize
# 20 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Route117_PokemonDayCare_EventScript_Breeder_5
# 24 "data/maps/Route117_PokemonDayCare/scripts.pory"
	call Route117_PokemonDayCare_EventScript_BabyPokemonEgg
	goto Route117_PokemonDayCare_EventScript_Breeder_1

Route117_PokemonDayCare_EventScript_Breeder_4:
# 27 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_EventScript_Breeder_Text_2, MSGBOX_NPC
	goto Route117_PokemonDayCare_EventScript_Breeder_1

Route117_PokemonDayCare_EventScript_Breeder_5:
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto Route117_PokemonDayCare_EventScript_NoRoomForEgg
	goto Route117_PokemonDayCare_EventScript_Breeder_1


Route117_PokemonDayCare_EventScript_BabyPokemonEgg::
# 34 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_EventScript_BabyPokemonEgg_Text_0, MSGBOX_NPC
# 35 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmessage
# 36 "data/maps/Route117_PokemonDayCare/scripts.pory"
	randomelement SPECIES_PICHU, SPECIES_CLEFFA, SPECIES_IGGLYBUFF, SPECIES_TOGEPI, SPECIES_TYROGUE, SPECIES_SMOOCHUM, SPECIES_ELEKID, SPECIES_MAGBY, SPECIES_AZURILL, SPECIES_WYNAUT, SPECIES_BUDEW, SPECIES_CHINGLING, SPECIES_BONSLY, SPECIES_MIME_JR, SPECIES_HAPPINY, SPECIES_MUNCHLAX, SPECIES_RIOLU, SPECIES_MANTYKE, SPECIES_TOXEL
# 37 "data/maps/Route117_PokemonDayCare/scripts.pory"
	giveegg VAR_RESULT
# 38 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	end


Route117_PokemonDayCare_EventScript_NoRoomForEgg::
# 43 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_EventScript_NoRoomForEgg_Text_0
# 44 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitmessage
# 45 "data/maps/Route117_PokemonDayCare/scripts.pory"
	closemessage
# 46 "data/maps/Route117_PokemonDayCare/scripts.pory"
	releaseall
	end


Route117_PokemonDayCare_EventScript_Breeder_Text_0:
# 14 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Sometimes the Pokémon left here lay\n"
	.string "eggs, but the Trainers don't always\l"
	.string "want them. We save these eggs for other\l"
	.string "Trainers who can raise them.$"

Route117_PokemonDayCare_EventScript_Breeder_Text_1:
# 16 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Would you like to take care of a baby\n"
	.string "Pokémon egg?$"

Route117_PokemonDayCare_EventScript_Breeder_Text_2:
# 27 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "If you're ever interested in raising a\n"
	.string "baby Pokémon, let us know.$"

Route117_PokemonDayCare_EventScript_BabyPokemonEgg_Text_0:
# 34 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Oh, wonderful! Here is an egg you can\n"
	.string "raise.$"

Route117_PokemonDayCare_EventScript_NoRoomForEgg_Text_0:
# 43 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Oh, but if you want an egg, you will have\n"
	.string "to make room in your party first.\p"
	.string "Come back after you've done that!$"
