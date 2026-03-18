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
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_HORSEA, PacifidlogTown_House3_Text_WillingToTradeIt, PacifidlogTown_House3_EventScript_DeclineTrade, PacifidlogTown_House3_EventScript_NotRequestedMon, PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 32 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 34 "data/maps/PacifidlogTown_House3/scripts.pory"

# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_DeclineTrade::
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 39 "data/maps/PacifidlogTown_House3/scripts.pory"

# 40 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_NotRequestedMon::
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 45 "data/maps/PacifidlogTown_House3/scripts.pory"

# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_TradeCompleted::
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
# 48 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 50 "data/maps/PacifidlogTown_House3/scripts.pory"

# 51 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Girl::
# 52 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
# 53 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 54 "data/maps/PacifidlogTown_House3/scripts.pory"

# 55 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WillingToTradeIt:
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Check out this {STR_VAR_2}!\p"
# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's the {STR_VAR_2} that I caught\n"
# 58 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "yesterday to celebrate my birthday!\p"
# 59 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, I can see that you want it!\n"
# 60 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "After all, it's priceless!\p"
# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I'll tell you what. I might be willing\n"
# 62 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "to trade it for a {STR_VAR_1}.$"
# 63 "data/maps/PacifidlogTown_House3/scripts.pory"

# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
# 65 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so this is a {STR_VAR_1}?\p"
# 66 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's sort of like a {STR_VAR_2},\n"
# 67 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "and yet it's subtly different.\p"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Thank you!$"
# 69 "data/maps/PacifidlogTown_House3/scripts.pory"

# 70 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
# 71 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "No, no, no! I won't accept any\n"
# 72 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "less than a real {STR_VAR_1}!$"
# 73 "data/maps/PacifidlogTown_House3/scripts.pory"

# 74 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_NotDesperateOrAnything:
# 75 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so you're not going to go through\n"
# 76 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "with this?\p"
# 77 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "That's cool. I'm not desperate to make\n"
# 78 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "a trade or anything.$"
# 79 "data/maps/PacifidlogTown_House3/scripts.pory"

# 80 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
# 81 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I know I could go looking for one\n"
# 82 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "on my own, but…\p"
# 83 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "But I really wanted to get a BAGON\n"
# 84 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "that another TRAINER caught…$"
# 85 "data/maps/PacifidlogTown_House3/scripts.pory"

# 86 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_IsThatAPokedex:
# 87 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Is that a POKéDEX?\p"
# 88 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Did you get to meet a lot of different\n"
# 89 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Pokémon?\p"
# 90 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I wish I was like you.$"
