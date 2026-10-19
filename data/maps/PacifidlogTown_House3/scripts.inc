# 1 "data/maps/PacifidlogTown_House3/scripts.pory"

# 2 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_MapScripts::
# 3 "data/maps/PacifidlogTown_House3/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"

# 5 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader::
# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto PacifidlogTown_House3_EventScript_TradeCompleted
# 9 "data/maps/PacifidlogTown_House3/scripts.pory"
	//goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
	//ingame_trade INGAME_TRADE_HORSEA, PacifidlogTown_House3_Text_WillingToTradeIt, PacifidlogTown_House3_EventScript_DeclineTrade, PacifidlogTown_House3_EventScript_NotRequestedMon, PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou
# 11 "data/maps/PacifidlogTown_House3/scripts.pory"
	//setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 12 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 13 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown_House3/scripts.pory"

# 15 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_DeclineTrade::
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 18 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 19 "data/maps/PacifidlogTown_House3/scripts.pory"

# 20 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_NotRequestedMon::
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 25 "data/maps/PacifidlogTown_House3/scripts.pory"

# 26 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_TradeCompleted::
# 27 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"

# 31 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Girl::
# 32 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 34 "data/maps/PacifidlogTown_House3/scripts.pory"

# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WillingToTradeIt:
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Check out this {STR_VAR_2}!\p"
# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's the {STR_VAR_2} that I caught\n"
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "yesterday to celebrate my birthday!\p"
# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, I can see that you want it!\n"
# 40 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "After all, it's priceless!\p"
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I'll tell you what. I might be willing\n"
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "to trade it for a {STR_VAR_1}.$"
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"

# 44 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
# 45 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so this is a {STR_VAR_1}?\p"
# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's sort of like a {STR_VAR_2},\n"
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "and yet it's subtly different.\p"
# 48 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Thank you!$"
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"

# 50 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
# 51 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "No, no, no! I won't accept any\n"
# 52 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "less than a real {STR_VAR_1}!$"
# 53 "data/maps/PacifidlogTown_House3/scripts.pory"

# 54 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_NotDesperateOrAnything:
# 55 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so you're not going to go through\n"
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "with this?\p"
# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "That's cool. I'm not desperate to make\n"
# 58 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "a trade or anything.$"
# 59 "data/maps/PacifidlogTown_House3/scripts.pory"

# 60 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I know I could go looking for one\n"
# 62 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "on my own, but…\p"
# 63 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "But I really wanted to get a BAGON\n"
# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "that another TRAINER caught…$"
# 65 "data/maps/PacifidlogTown_House3/scripts.pory"

# 66 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_IsThatAPokedex:
# 67 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Is that a POKéDEX?\p"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Did you get to meet a lot of different\n"
# 69 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Pokémon?\p"
# 70 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I wish I was like you.$"
