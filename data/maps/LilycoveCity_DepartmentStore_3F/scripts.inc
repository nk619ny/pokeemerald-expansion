# 1 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeftNoVitamins
# 8 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 9 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 10 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 11 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
# 12 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 14 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 16 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins:
# 18 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTEIN
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALCIUM
# 20 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON
# 21 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZINC
# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CARBOS
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HP_UP
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 27 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 28 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 29 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 31 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 32 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 38 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPEED
# 40 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 43 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 45 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 47 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemartlistend
# 48 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 49 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 50 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 52 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 53 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 54 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 56 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 57 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 58 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
# 59 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 61 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
# 62 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up Pokémon,\n"
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "items are the best.\p"
# 64 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "PROTEIN boosts ATTACK,\n"
# 65 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and CALCIUM raises SP. ATK.$"
# 66 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 67 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
# 68 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my Pokémon to have more\n"
# 69 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "endurance.\p"
# 70 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I'm trying to decide whether to raise\n"
# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "DEFENSE with IRON, or SP. DEF with ZINC.$"
# 72 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 73 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
# 74 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave a CARBOS to my Pokémon,\n"
# 75 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and its SPEED went up.$"

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeftNoVitamins::
# 80 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 81 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeftNoVitamins_Text_0, MSGBOX_DEFAULT
# 82 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 83 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeftNoVitamins_Text_0:
# 81 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I'm sorry, but the vitamins are\n"
	.string "currently out of stock.\n"
	.string "Please check back later.$"
