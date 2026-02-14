# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"

# 15 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"

# 31 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_ExpandedItems::
# 32 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"

# 37 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 53 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"

# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 58 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 59 "data/maps/PetalburgCity_Mart/scripts.pory"

# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"

# 64 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 65 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"

# 68 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 69 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Even if a Pokémon is weak now,\n"
# 70 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "it will grow stronger.\p"
# 71 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "The most important thing is love!\n"
# 72 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Love for your Pokémon!$"
# 73 "data/maps/PetalburgCity_Mart/scripts.pory"

# 74 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 75 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you use REPEL?\n"
# 76 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "It keeps Pokémon away, so it's\l"
# 77 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "useful when you're in a hurry.$"
# 78 "data/maps/PetalburgCity_Mart/scripts.pory"

# 79 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 80 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with\n"
# 81 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "you?\p"
# 82 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "If you walk around with a poisoned\n"
# 83 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Pokémon, it will lose HP until it faints.\l"
# 84 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Take some ANTIDOTES with you.$"
