# 1 "data/maps/RustboroCity_House1/scripts.pory"

# 2 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_MapScripts::
# 3 "data/maps/RustboroCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House1/scripts.pory"

# 5 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader::
# 6 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 9 "data/maps/RustboroCity_House1/scripts.pory"
	//goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
# 10 "data/maps/RustboroCity_House1/scripts.pory"
	//ingame_trade INGAME_TRADE_SEEDOT, RustboroCity_House1_Text_IllTradeIfYouWant, RustboroCity_House1_EventScript_DeclineTrade, RustboroCity_House1_EventScript_NotRequestedMon, RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
# 11 "data/maps/RustboroCity_House1/scripts.pory"
	//setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 12 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 13 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 14 "data/maps/RustboroCity_House1/scripts.pory"

# 15 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_DeclineTrade::
# 16 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 18 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 19 "data/maps/RustboroCity_House1/scripts.pory"

# 20 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_NotRequestedMon::
# 21 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 22 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 23 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 24 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 25 "data/maps/RustboroCity_House1/scripts.pory"

# 26 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_TradeCompleted::
# 27 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 28 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 29 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 30 "data/maps/RustboroCity_House1/scripts.pory"

# 31 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Hiker::
# 32 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
# 33 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 34 "data/maps/RustboroCity_House1/scripts.pory"

# 35 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_IllTradeIfYouWant:
# 36 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? My Pokémon is cute?\n"
# 37 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Sure, I knew that.\p"
# 38 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But if you really want, I'm willing\n"
# 39 "data/maps/RustboroCity_House1/scripts.pory"
	.string "to trade it to you.\p"
# 40 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I'll trade you my {STR_VAR_2} for\n"
# 41 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} if you want.$"
# 42 "data/maps/RustboroCity_House1/scripts.pory"

# 43 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
# 44 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Eheheh…\n"
# 45 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Please be good to my Pokémon.$"
# 46 "data/maps/RustboroCity_House1/scripts.pory"

# 47 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_DoesntLookLikeMonToMe:
# 48 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 49 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} to me.$"
# 50 "data/maps/RustboroCity_House1/scripts.pory"

# 51 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_YouDontWantToThatsOkay:
# 52 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
# 53 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But my Pokémon is cute, you know…$"
# 54 "data/maps/RustboroCity_House1/scripts.pory"

# 55 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AnyPokemonCanBeCute:
# 56 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Any Pokémon can be cute if you raise\n"
# 57 "data/maps/RustboroCity_House1/scripts.pory"
	.string "it with care and kindness.$"
# 58 "data/maps/RustboroCity_House1/scripts.pory"

# 59 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AllSortsOfPlaces:
# 60 "data/maps/RustboroCity_House1/scripts.pory"
	.string "In all sorts of places, there are all\n"
# 61 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of Pokémon and people.\p"
# 62 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I find that fascinating, so I go to all\n"
# 63 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of places.$"
