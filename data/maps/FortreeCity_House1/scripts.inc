# 1 "data/maps/FortreeCity_House1/scripts.pory"

# 2 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_MapScripts::
# 3 "data/maps/FortreeCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House1/scripts.pory"

# 5 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Trader::
# 6 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_PLUSLE, FortreeCity_House1_Text_YouWillTradeWontYou, FortreeCity_House1_EventScript_DeclineTrade, FortreeCity_House1_EventScript_NotRequestedMon, FortreeCity_House1_Text_MonYouTakeCare
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
# 32 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 33 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 34 "data/maps/FortreeCity_House1/scripts.pory"

# 35 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_DeclineTrade::
# 36 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
# 37 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 38 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 39 "data/maps/FortreeCity_House1/scripts.pory"

# 40 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_NotRequestedMon::
# 41 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 42 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
# 43 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 44 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 45 "data/maps/FortreeCity_House1/scripts.pory"

# 46 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_TradeCompleted::
# 47 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
# 48 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 49 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 50 "data/maps/FortreeCity_House1/scripts.pory"

# 51 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_ExpertF::
# 52 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
# 53 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 54 "data/maps/FortreeCity_House1/scripts.pory"

# 55 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Zigzagoon::
# 56 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 57 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 58 "data/maps/FortreeCity_House1/scripts.pory"
	waitse
# 59 "data/maps/FortreeCity_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 60 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 61 "data/maps/FortreeCity_House1/scripts.pory"
	waitmoncry
# 62 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 63 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 64 "data/maps/FortreeCity_House1/scripts.pory"

# 65 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWillTradeWontYou:
# 66 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Wrooooaaar! I need it!\n"
# 67 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I have to get me a {STR_VAR_1}!\l"
# 68 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I'll do anything for it!\p"
# 69 "data/maps/FortreeCity_House1/scripts.pory"
	.string "…Uh… Did you hear that?\n"
# 70 "data/maps/FortreeCity_House1/scripts.pory"
	.string "My shout from the bottom of my heart?\p"
# 71 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Having heard that, you will trade\n"
# 72 "data/maps/FortreeCity_House1/scripts.pory"
	.string "your {STR_VAR_1} for my {STR_VAR_2},\l"
# 73 "data/maps/FortreeCity_House1/scripts.pory"
	.string "won't you?$"
# 74 "data/maps/FortreeCity_House1/scripts.pory"

# 75 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_MonYouTakeCare:
# 76 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Oh, yeah, right on!\p"
# 77 "data/maps/FortreeCity_House1/scripts.pory"
	.string "{STR_VAR_1}, welcome!\n"
# 78 "data/maps/FortreeCity_House1/scripts.pory"
	.string "{STR_VAR_2}, you take care!$"
# 79 "data/maps/FortreeCity_House1/scripts.pory"

# 80 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_ThisIsntAMon:
# 81 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Uh, no, I don't think so.\n"
# 82 "data/maps/FortreeCity_House1/scripts.pory"
	.string "That isn't a {STR_VAR_1}.$"
# 83 "data/maps/FortreeCity_House1/scripts.pory"

# 84 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWontTradeMe:
# 85 "data/maps/FortreeCity_House1/scripts.pory"
	.string "No? You won't trade me?\n"
# 86 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Even after I bared my heart to you?$"
# 87 "data/maps/FortreeCity_House1/scripts.pory"

# 88 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_GoingToMakeVolbeatStrong:
# 89 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I'm going to make VOLBEAT super\n"
# 90 "data/maps/FortreeCity_House1/scripts.pory"
	.string "strong from this moment on!\p"
# 91 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I hope you do the same with PLUSLE!$"
# 92 "data/maps/FortreeCity_House1/scripts.pory"

# 93 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_TradingMemoriesWithOthers:
# 94 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Trading Pokémon with others…\p"
# 95 "data/maps/FortreeCity_House1/scripts.pory"
	.string "It's as if you're trading your own\n"
# 96 "data/maps/FortreeCity_House1/scripts.pory"
	.string "memories with other people.$"
# 97 "data/maps/FortreeCity_House1/scripts.pory"

# 98 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_Zigzagoon:
# 99 "data/maps/FortreeCity_House1/scripts.pory"
	.string "ZIGZAGOON: Gumomoh?$"
