# 1 "data/maps/BattleFrontier_Mart/scripts.pory"

# 2 "data/maps/BattleFrontier_Mart/scripts.pory"
.set LOCALID_OLD_WOMAN, 2
# 3 "data/maps/BattleFrontier_Mart/scripts.pory"

# 4 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_MapScripts::
# 5 "data/maps/BattleFrontier_Mart/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_Mart/scripts.pory"

# 7 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Clerk::
# 8 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/BattleFrontier_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_Mart_Pokemart
# 13 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 14 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 15 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 16 "data/maps/BattleFrontier_Mart/scripts.pory"

# 17 "data/maps/BattleFrontier_Mart/scripts.pory"
	.align 2
# 18 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Pokemart:
# 19 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 22 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 23 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 24 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 26 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 27 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 28 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_IRON
# 29 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 30 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 31 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 32 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NONE
# 33 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemartlistend
# 34 "data/maps/BattleFrontier_Mart/scripts.pory"

# 35 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldMan::
# 36 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
# 37 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_Mart/scripts.pory"

# 39 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldWoman::
# 40 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 41 "data/maps/BattleFrontier_Mart/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, Common_Movement_FaceDown
# 42 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmovement 0
# 43 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
# 44 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 45 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 46 "data/maps/BattleFrontier_Mart/scripts.pory"

# 47 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Boy::
# 48 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
# 49 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 50 "data/maps/BattleFrontier_Mart/scripts.pory"

# 51 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ChaperonGrandson:
# 52 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "We came here to chaperon our\n"
# 53 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "grandson.\p"
# 54 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "But since we're here, we thought\n"
# 55 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "we should get some souvenirs.$"
# 56 "data/maps/BattleFrontier_Mart/scripts.pory"

# 57 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ProteinMakeNiceGift:
# 58 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Dear, what do you think of this?\n"
# 59 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Wouldn't this make a nice gift?\p"
# 60 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It's…PRO…TE…IN?\n"
# 61 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It sounds delicious, doesn't it?$"
# 62 "data/maps/BattleFrontier_Mart/scripts.pory"

# 63 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_FacilitiesDontAllowItems:
# 64 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "A lot of the BATTLE FRONTIER's\n"
# 65 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "facilities don't allow the use of items\l"
# 66 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "during battles.\p"
# 67 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "That rule makes things tougher than\n"
# 68 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "they already are!$"
