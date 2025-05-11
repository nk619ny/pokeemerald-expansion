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
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
# 9 "data/maps/RustboroCity_House1/scripts.pory"
	setvar VAR_0x8003, 1
# 10 "data/maps/RustboroCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SEEDOT
# 11 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 12 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 13 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 14 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 15 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_House1_EventScript_DeclineTrade
# 16 "data/maps/RustboroCity_House1/scripts.pory"
	special ChoosePartyMon
# 17 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 18 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 19 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_House1_EventScript_DeclineTrade
# 20 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 21 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 22 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 23 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, RustboroCity_House1_EventScript_NotRequestedMon
# 24 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 25 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 26 "data/maps/RustboroCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 27 "data/maps/RustboroCity_House1/scripts.pory"
	special DoInGameTradeScene
# 28 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 29 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 30 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 31 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 32 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 33 "data/maps/RustboroCity_House1/scripts.pory"

# 34 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_DeclineTrade::
# 35 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 36 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 37 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 38 "data/maps/RustboroCity_House1/scripts.pory"

# 39 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_NotRequestedMon::
# 40 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 41 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 43 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 44 "data/maps/RustboroCity_House1/scripts.pory"

# 45 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_TradeCompleted::
# 46 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 48 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 49 "data/maps/RustboroCity_House1/scripts.pory"

# 50 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Hiker::
# 51 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
# 52 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 53 "data/maps/RustboroCity_House1/scripts.pory"

# 54 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_IllTradeIfYouWant:
# 55 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? My POKéMON is cute?\n"
# 56 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Sure, I knew that.\p"
# 57 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But if you really want, I'm willing\n"
# 58 "data/maps/RustboroCity_House1/scripts.pory"
	.string "to trade it to you.\p"
# 59 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I'll trade you my {STR_VAR_2} for\n"
# 60 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} if you want.$"
# 61 "data/maps/RustboroCity_House1/scripts.pory"

# 62 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
# 63 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Eheheh…\n"
# 64 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Please be good to my POKéMON.$"
# 65 "data/maps/RustboroCity_House1/scripts.pory"

# 66 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_DoesntLookLikeMonToMe:
# 67 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 68 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} to me.$"
# 69 "data/maps/RustboroCity_House1/scripts.pory"

# 70 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_YouDontWantToThatsOkay:
# 71 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
# 72 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But my POKéMON is cute, you know…$"
# 73 "data/maps/RustboroCity_House1/scripts.pory"

# 74 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AnyPokemonCanBeCute:
# 75 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Any POKéMON can be cute if you raise\n"
# 76 "data/maps/RustboroCity_House1/scripts.pory"
	.string "it with care and kindness.$"
# 77 "data/maps/RustboroCity_House1/scripts.pory"

# 78 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AllSortsOfPlaces:
# 79 "data/maps/RustboroCity_House1/scripts.pory"
	.string "In all sorts of places, there are all\n"
# 80 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of POKéMON and people.\p"
# 81 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I find that fascinating, so I go to all\n"
# 82 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of places.$"
