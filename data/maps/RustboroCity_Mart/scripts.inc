# 1 "data/maps/RustboroCity_Mart/scripts.pory"

# 2 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_MapScripts::
# 3 "data/maps/RustboroCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Mart/scripts.pory"

# 5 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk::
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 13 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 14 "data/maps/RustboroCity_Mart/scripts.pory"

# 15 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartBasic::
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 19 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 20 "data/maps/RustboroCity_Mart/scripts.pory"

# 21 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic:
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 32 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 33 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 34 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 35 "data/maps/RustboroCity_Mart/scripts.pory"

# 36 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartExpanded::
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 41 "data/maps/RustboroCity_Mart/scripts.pory"

# 42 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 43 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded:
# 44 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 46 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 48 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 49 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 51 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 55 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 56 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 57 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 58 "data/maps/RustboroCity_Mart/scripts.pory"

# 59 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF::
# 60 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
# 61 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Mart/scripts.pory"

# 63 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Boy::
# 64 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
# 65 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 66 "data/maps/RustboroCity_Mart/scripts.pory"

# 67 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher::
# 68 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 69 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 70 "data/maps/RustboroCity_Mart/scripts.pory"

# 71 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish:
# 72 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some PARLYZ HEALS and\n"
# 73 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "ANTIDOTES.\p"
# 74 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Just in case I run into SHROOMISH\n"
# 75 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "in PETALBURG WOODS.$"
# 76 "data/maps/RustboroCity_Mart/scripts.pory"

# 77 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead:
# 78 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My Pokémon evolved.\n"
# 79 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "It has a lot of HP now.\p"
# 80 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I should buy SUPER POTIONS for it\n"
# 81 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "instead of ordinary POTIONS.$"
# 82 "data/maps/RustboroCity_Mart/scripts.pory"

# 83 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase:
# 84 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an ESCAPE ROPE just in\n"
# 85 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "case I get lost in a cave.\p"
# 86 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I just need to use it to get back to\n"
# 87 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "the entrance.$"
