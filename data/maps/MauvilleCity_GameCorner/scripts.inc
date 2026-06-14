# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_GameCorner_OnTransition
# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_GameCorner_OnFrame
# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_OnTransition:
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_OnFrame:
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, MauvilleCity_GameCorner_GimmighoulCheck
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.2byte 0
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	@ Game Corner prices
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_DOUBLE_TEAM_COINS, 1500
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_PSYCHIC_COINS, 3500
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_FLAMETHROWER_COINS, 4000
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_THUNDERBOLT_COINS, 4000
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_ICE_BEAM_COINS, 4000
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS, 1000
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,  1000
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500, 10000
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
/*MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50 */
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TreeckoDoll::
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TorchicDoll::
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MudkipDoll::
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NewTMPrizes
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//case 0, MauvilleCity_GameCorner_EventScript_TMDoubleTeam
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TMPsychic
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TMFlamethrower
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TMThunderbolt
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TMIceBeam
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMDoubleTeam::
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMPsychic::
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_PSYCHIC
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_PSYCHIC
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMFlamethrower::
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMThunderbolt::
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMIceBeam::
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTMPsychic
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam::
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_DOUBLE_TEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//checkitemspace ITEM_TM_DOUBLE_TEAM
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//additem ITEM_TM_DOUBLE_TEAM
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic::
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_PSYCHIC_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_PSYCHIC
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_PSYCHIC_COINS
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_PSYCHIC
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower::
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_FLAMETHROWER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_FLAMETHROWER
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_FLAMETHROWER_COINS
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_FLAMETHROWER
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt::
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_THUNDERBOLT_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_THUNDERBOLT
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_THUNDERBOLT_COINS
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_THUNDERBOLT
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam::
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_ICE_BEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_ICE_BEAM
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_ICE_BEAM_COINS
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_ICE_BEAM
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
/* MauvilleCity_GameCorner_EventScript_PokefanM::
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
 MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end */
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
/* MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	*/
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some COINS for\n"
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a COIN CASE for\n"
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the COINS.$"
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for COINS?\p"
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 COINS.\n"
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your COINS!$"
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "enough money…$"
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your COIN CASE is full.$"
# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your COINS for\n"
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some COINS before\l"
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same DOLLS.\p"
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a COIN CASE.\p"
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some COINS!$"
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the GAME CORNER.$"
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your COINS if you're going to\n"
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
/* MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "COINS are needed to play here\n"
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the GAME CORNER.$" */
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the SLOTS.$"
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the REEL TIME\n"
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra COINS.$"
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the SLOTS.\p"
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more REEL TIME chances you get.\p"
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "REEL TIME chances…\p"
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 COINS, but it's\n"
# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"

MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_0
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_gt MauvilleCity_GameCorner_EventScript_CoinsClerk_2
MauvilleCity_GameCorner_EventScript_CoinsClerk_1:
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_CoinsClerk_2:
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_1
	goto MauvilleCity_GameCorner_EventScript_CoinsClerk_1


MauvilleCity_GameCorner_EventScript_Scott::
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ScottIntro, MSGBOX_NPC
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Scott_Text_0, MSGBOX_YESNO
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_GameCorner_EventScript_Scott_2
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ScottDecline, MSGBOX_NPC
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_COIN_CASE
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Scott_Text_2, MSGBOX_NPC
MauvilleCity_GameCorner_EventScript_Scott_1:
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_FACING
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case DIR_NORTH, MauvilleCity_GameCorner_EventScript_Scott_7
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case DIR_EAST, MauvilleCity_GameCorner_EventScript_Scott_8
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case DIR_WEST, MauvilleCity_GameCorner_EventScript_Scott_9
MauvilleCity_GameCorner_EventScript_Scott_5:
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removeobject LOCALID_GAMECORNER_SCOTT
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_Scott_2:
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ScottAgree, MSGBOX_NPC
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_COIN_CASE
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Scott_Text_1, MSGBOX_NPC
	goto MauvilleCity_GameCorner_EventScript_Scott_1

MauvilleCity_GameCorner_EventScript_Scott_7:
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAMECORNER_SCOTT, MauvilleCity_GameCorner_Movement_ScottLeaveLeft
	goto MauvilleCity_GameCorner_EventScript_Scott_5

MauvilleCity_GameCorner_EventScript_Scott_8:
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAMECORNER_SCOTT, MauvilleCity_GameCorner_Movement_ScottLeave
	goto MauvilleCity_GameCorner_EventScript_Scott_5

MauvilleCity_GameCorner_EventScript_Scott_9:
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAMECORNER_SCOTT, MauvilleCity_GameCorner_Movement_ScottLeave
	goto MauvilleCity_GameCorner_EventScript_Scott_5


# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Movement_ScottLeave:
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
	step_end

# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Movement_ScottLeaveLeft:
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_left
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_right
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
	step_end

MauvilleCity_GameCorner_EventScript_SlotMachine::
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_SlotMachine_Text_0
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


Roulette_EventScript_Table::
# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Roulette_EventScript_Table_Text_0
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes::
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_2
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_1, MSGBOX_DEFAULT
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 25, 2, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_2, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_3, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_4, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_5, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_6, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_7, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_8
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_6
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_7
# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_8
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_9
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_10
# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_11
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_12
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4:
# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_2:
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_0, MSGBOX_DEFAULT
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_6:
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_7:
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_8:
# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMs
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_9:
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_10:
# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_11:
# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_12:
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyGems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4


MauvilleCity_GameCorner_EventScript_OutOfRareItems::
# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_OutOfRareItems_Text_0
# 940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


MauvilleCity_GameCorner_EventScript_NeedMegaRing::
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NeedMegaRing_Text_0
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


MauvilleCity_GameCorner_EventScript_BuyMegaStones::
	checkitem ITEM_MEGA_RING
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_2
MauvilleCity_GameCorner_EventScript_BuyMegaStones_1:
	checkitem ITEM_VENUSAURITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_6
MauvilleCity_GameCorner_EventScript_BuyMegaStones_4:
	checkitem ITEM_VENUSAURITE_X
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_11
MauvilleCity_GameCorner_EventScript_BuyMegaStones_9:
	checkitem ITEM_CHARIZARDITE_X
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_16
MauvilleCity_GameCorner_EventScript_BuyMegaStones_14:
	checkitem ITEM_CHARIZARDITE_Y
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_21
MauvilleCity_GameCorner_EventScript_BuyMegaStones_19:
	checkitem ITEM_BLASTOISINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_26
MauvilleCity_GameCorner_EventScript_BuyMegaStones_24:
	checkitem ITEM_BLASTOISINITE_X
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_31
MauvilleCity_GameCorner_EventScript_BuyMegaStones_29:
	checkitem ITEM_BEEDRILLITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_36
MauvilleCity_GameCorner_EventScript_BuyMegaStones_34:
	checkitem ITEM_PIDGEOTITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_41
MauvilleCity_GameCorner_EventScript_BuyMegaStones_39:
	checkitem ITEM_ALAKAZITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_46
MauvilleCity_GameCorner_EventScript_BuyMegaStones_44:
	checkitem ITEM_SLOWBRONITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_51
MauvilleCity_GameCorner_EventScript_BuyMegaStones_49:
	checkitem ITEM_SLOWKINGITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_56
MauvilleCity_GameCorner_EventScript_BuyMegaStones_54:
	checkitem ITEM_GENGARITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_61
MauvilleCity_GameCorner_EventScript_BuyMegaStones_59:
	checkitem ITEM_KANGASKHANITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_66
MauvilleCity_GameCorner_EventScript_BuyMegaStones_64:
	checkitem ITEM_PINSIRITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_71
MauvilleCity_GameCorner_EventScript_BuyMegaStones_69:
	checkitem ITEM_GYARADOSITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_76
MauvilleCity_GameCorner_EventScript_BuyMegaStones_74:
	checkitem ITEM_AERODACTYLITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_81
MauvilleCity_GameCorner_EventScript_BuyMegaStones_79:
	checkitem ITEM_AMPHAROSITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_86
MauvilleCity_GameCorner_EventScript_BuyMegaStones_84:
	checkitem ITEM_STEELIXITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_91
MauvilleCity_GameCorner_EventScript_BuyMegaStones_89:
	checkitem ITEM_SCIZORITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_96
MauvilleCity_GameCorner_EventScript_BuyMegaStones_94:
	checkitem ITEM_HERACRONITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_101
MauvilleCity_GameCorner_EventScript_BuyMegaStones_99:
	checkitem ITEM_HOUNDOOMINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_106
MauvilleCity_GameCorner_EventScript_BuyMegaStones_104:
	checkitem ITEM_TYRANITARITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_111
MauvilleCity_GameCorner_EventScript_BuyMegaStones_109:
	checkitem ITEM_SCEPTILITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_116
MauvilleCity_GameCorner_EventScript_BuyMegaStones_114:
	checkitem ITEM_BLAZIKENITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_121
MauvilleCity_GameCorner_EventScript_BuyMegaStones_119:
	checkitem ITEM_SWAMPERTITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_126
MauvilleCity_GameCorner_EventScript_BuyMegaStones_124:
	checkitem ITEM_GARDEVOIRITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_131
MauvilleCity_GameCorner_EventScript_BuyMegaStones_129:
	checkitem ITEM_SABLENITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_136
MauvilleCity_GameCorner_EventScript_BuyMegaStones_134:
	checkitem ITEM_MAWILITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_141
MauvilleCity_GameCorner_EventScript_BuyMegaStones_139:
	checkitem ITEM_AGGRONITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_146
MauvilleCity_GameCorner_EventScript_BuyMegaStones_144:
	checkitem ITEM_MEDICHAMITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_151
MauvilleCity_GameCorner_EventScript_BuyMegaStones_149:
	checkitem ITEM_MANECTITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_156
MauvilleCity_GameCorner_EventScript_BuyMegaStones_154:
	checkitem ITEM_SHARPEDONITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_161
MauvilleCity_GameCorner_EventScript_BuyMegaStones_159:
	checkitem ITEM_CAMERUPTITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_166
MauvilleCity_GameCorner_EventScript_BuyMegaStones_164:
	checkitem ITEM_ALTARIANITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_171
MauvilleCity_GameCorner_EventScript_BuyMegaStones_169:
	checkitem ITEM_BANETTITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_176
MauvilleCity_GameCorner_EventScript_BuyMegaStones_174:
	checkitem ITEM_ABSOLITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_181
MauvilleCity_GameCorner_EventScript_BuyMegaStones_179:
	checkitem ITEM_GLALITITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_186
MauvilleCity_GameCorner_EventScript_BuyMegaStones_184:
	checkitem ITEM_SALAMENCITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_191
MauvilleCity_GameCorner_EventScript_BuyMegaStones_189:
	checkitem ITEM_METAGROSSITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_196
MauvilleCity_GameCorner_EventScript_BuyMegaStones_194:
	checkitem ITEM_LOPUNNITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_201
MauvilleCity_GameCorner_EventScript_BuyMegaStones_199:
	checkitem ITEM_GARCHOMPITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_206
MauvilleCity_GameCorner_EventScript_BuyMegaStones_204:
	checkitem ITEM_LUCARIONITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_211
MauvilleCity_GameCorner_EventScript_BuyMegaStones_209:
	checkitem ITEM_ABOMASITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_216
MauvilleCity_GameCorner_EventScript_BuyMegaStones_214:
	checkitem ITEM_GALLADITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_221
MauvilleCity_GameCorner_EventScript_BuyMegaStones_219:
	checkitem ITEM_AUDINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_226
MauvilleCity_GameCorner_EventScript_BuyMegaStones_224:
	checkitem ITEM_CLEFABLITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_231
MauvilleCity_GameCorner_EventScript_BuyMegaStones_229:
	checkitem ITEM_VICTREEBELITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_236
MauvilleCity_GameCorner_EventScript_BuyMegaStones_234:
	checkitem ITEM_STARMINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_241
MauvilleCity_GameCorner_EventScript_BuyMegaStones_239:
	checkitem ITEM_DRAGONINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_246
MauvilleCity_GameCorner_EventScript_BuyMegaStones_244:
	checkitem ITEM_MEGANIUMITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_251
MauvilleCity_GameCorner_EventScript_BuyMegaStones_249:
	checkitem ITEM_FERALIGITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_256
MauvilleCity_GameCorner_EventScript_BuyMegaStones_254:
	checkitem ITEM_SKARMORITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_261
MauvilleCity_GameCorner_EventScript_BuyMegaStones_259:
	checkitem ITEM_FROSLASSITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_266
MauvilleCity_GameCorner_EventScript_BuyMegaStones_264:
	checkitem ITEM_EMBOARITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_271
MauvilleCity_GameCorner_EventScript_BuyMegaStones_269:
	checkitem ITEM_EXCADRITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_276
MauvilleCity_GameCorner_EventScript_BuyMegaStones_274:
	checkitem ITEM_SCOLIPITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_281
MauvilleCity_GameCorner_EventScript_BuyMegaStones_279:
	checkitem ITEM_SCRAFTINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_286
MauvilleCity_GameCorner_EventScript_BuyMegaStones_284:
	checkitem ITEM_EELEKTROSSITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_291
MauvilleCity_GameCorner_EventScript_BuyMegaStones_289:
	checkitem ITEM_CHANDELURITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_296
MauvilleCity_GameCorner_EventScript_BuyMegaStones_294:
	checkitem ITEM_CHESNAUGHTITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_301
MauvilleCity_GameCorner_EventScript_BuyMegaStones_299:
	checkitem ITEM_DELPHOXITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_306
MauvilleCity_GameCorner_EventScript_BuyMegaStones_304:
	checkitem ITEM_GRENINJITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_311
MauvilleCity_GameCorner_EventScript_BuyMegaStones_309:
	checkitem ITEM_PYROARITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_316
MauvilleCity_GameCorner_EventScript_BuyMegaStones_314:
	checkitem ITEM_MALAMARITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_321
MauvilleCity_GameCorner_EventScript_BuyMegaStones_319:
	checkitem ITEM_BARBARACITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_326
MauvilleCity_GameCorner_EventScript_BuyMegaStones_324:
	checkitem ITEM_DRAGALGITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_331
MauvilleCity_GameCorner_EventScript_BuyMegaStones_329:
	checkitem ITEM_HAWLUCHANITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_336
MauvilleCity_GameCorner_EventScript_BuyMegaStones_334:
	checkitem ITEM_DRAMPANITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_341
MauvilleCity_GameCorner_EventScript_BuyMegaStones_339:
	checkitem ITEM_FALINKSITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_346
MauvilleCity_GameCorner_EventScript_BuyMegaStones_344:
	checkitem ITEM_RAICHUNITE_X
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_351
MauvilleCity_GameCorner_EventScript_BuyMegaStones_349:
	checkitem ITEM_RAICHUNITE_Y
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_356
MauvilleCity_GameCorner_EventScript_BuyMegaStones_354:
	checkitem ITEM_CHIMECHITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_361
MauvilleCity_GameCorner_EventScript_BuyMegaStones_359:
	checkitem ITEM_ABSOLITE_Z
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_366
MauvilleCity_GameCorner_EventScript_BuyMegaStones_364:
	checkitem ITEM_STARAPTITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_371
MauvilleCity_GameCorner_EventScript_BuyMegaStones_369:
	checkitem ITEM_GARCHOMPITE_Z
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_376
MauvilleCity_GameCorner_EventScript_BuyMegaStones_374:
	checkitem ITEM_LUCARIONITE_Z
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_381
MauvilleCity_GameCorner_EventScript_BuyMegaStones_379:
	checkitem ITEM_GOLURKITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_386
MauvilleCity_GameCorner_EventScript_BuyMegaStones_384:
	checkitem ITEM_MEOWSTICITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_391
MauvilleCity_GameCorner_EventScript_BuyMegaStones_389:
	checkitem ITEM_CRABOMINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_396
MauvilleCity_GameCorner_EventScript_BuyMegaStones_394:
	checkitem ITEM_GOLISOPITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_401
MauvilleCity_GameCorner_EventScript_BuyMegaStones_399:
	checkitem ITEM_SCOVILLAINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_406
MauvilleCity_GameCorner_EventScript_BuyMegaStones_404:
	checkitem ITEM_BAXCALIBRITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_411
MauvilleCity_GameCorner_EventScript_BuyMegaStones_409:
	checkitem ITEM_TATSUGIRINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_416
MauvilleCity_GameCorner_EventScript_BuyMegaStones_414:
	checkitem ITEM_GLIMMORANITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_421
MauvilleCity_GameCorner_EventScript_BuyMegaStones_419:
	checkitem ITEM_BUTTERFRITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_426
MauvilleCity_GameCorner_EventScript_BuyMegaStones_424:
	checkitem ITEM_MACHAMPITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_431
MauvilleCity_GameCorner_EventScript_BuyMegaStones_429:
	checkitem ITEM_KINGLERITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_436
MauvilleCity_GameCorner_EventScript_BuyMegaStones_434:
	checkitem ITEM_LAPRASITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_441
MauvilleCity_GameCorner_EventScript_BuyMegaStones_439:
	checkitem ITEM_CENTISKORITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_446
MauvilleCity_GameCorner_EventScript_BuyMegaStones_444:
	checkitem ITEM_RILLABOOMITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_451
MauvilleCity_GameCorner_EventScript_BuyMegaStones_449:
	checkitem ITEM_CINDERACITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_456
MauvilleCity_GameCorner_EventScript_BuyMegaStones_454:
	checkitem ITEM_INTELEONITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_461
MauvilleCity_GameCorner_EventScript_BuyMegaStones_459:
	checkitem ITEM_MILOTICITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_466
MauvilleCity_GameCorner_EventScript_BuyMegaStones_464:
	checkitem ITEM_SUNFLORITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_471
MauvilleCity_GameCorner_EventScript_BuyMegaStones_469:
	checkitem ITEM_FLYGONITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_476
MauvilleCity_GameCorner_EventScript_BuyMegaStones_474:
	checkitem ITEM_VIKAVOLITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_481
MauvilleCity_GameCorner_EventScript_BuyMegaStones_479:
	checkitem ITEM_SNORLAXITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_486
MauvilleCity_GameCorner_EventScript_BuyMegaStones_484:
	checkitem ITEM_GARBODITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_491
MauvilleCity_GameCorner_EventScript_BuyMegaStones_489:
	checkitem ITEM_SANDACONDITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_496
MauvilleCity_GameCorner_EventScript_BuyMegaStones_494:
	checkitem ITEM_ORBEETLITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_501
MauvilleCity_GameCorner_EventScript_BuyMegaStones_499:
	checkitem ITEM_COPPERAJITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_506
MauvilleCity_GameCorner_EventScript_BuyMegaStones_504:
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_101, ITEM_NONE
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_102, MSGBOX_DEFAULT
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_NONE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_511
# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VENUSAURITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_512
# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VENUSAURITE_X, MauvilleCity_GameCorner_EventScript_BuyMegaStones_513
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHARIZARDITE_X, MauvilleCity_GameCorner_EventScript_BuyMegaStones_514
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHARIZARDITE_Y, MauvilleCity_GameCorner_EventScript_BuyMegaStones_515
# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLASTOISINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_516
# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLASTOISINITE_X, MauvilleCity_GameCorner_EventScript_BuyMegaStones_517
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BEEDRILLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_518
# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PIDGEOTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_519
# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ALAKAZITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_520
# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SLOWBRONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_521
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SLOWKINGITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_522
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GENGARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_523
# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_KANGASKHANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_524
# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PINSIRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_525
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GYARADOSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_526
# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AERODACTYLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_527
# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AMPHAROSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_528
# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STEELIXITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_529
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCIZORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_530
# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HERACRONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_531
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HOUNDOOMINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_532
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TYRANITARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_533
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCEPTILITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_534
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLAZIKENITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_535
# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SWAMPERTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_536
# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GARDEVOIRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_537
# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SABLENITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_538
# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MAWILITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_539
# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AGGRONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_540
# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MEDICHAMITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_541
# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MANECTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_542
# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHARPEDONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_543
# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CAMERUPTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_544
# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ALTARIANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_545
# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BANETTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_546
# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABSOLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_547
# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GLALITITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_548
# 1343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SALAMENCITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_549
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_METAGROSSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_550
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LATIASITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_551
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LATIOSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_552
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LOPUNNITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_553
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GARCHOMPITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_554
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LUCARIONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_555
# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABOMASITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_556
# 1399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GALLADITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_557
# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AUDINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_558
# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DIANCITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_559
# 1420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CLEFABLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_560
# 1427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VICTREEBELITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_561
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STARMINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_562
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DRAGONINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_563
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MEGANIUMITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_564
# 1455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FERALIGITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_565
# 1462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SKARMORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_566
# 1469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FROSLASSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_567
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EMBOARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_568
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EXCADRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_569
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCOLIPITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_570
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCRAFTINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_571
# 1504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EELEKTROSSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_572
# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHANDELURITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_573
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHESNAUGHTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_574
# 1525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DELPHOXITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_575
# 1532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GRENINJITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_576
# 1539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PYROARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_577
# 1546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FLOETTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_578
# 1553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MALAMARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_579
# 1560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BARBARACITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_580
# 1567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DRAGALGITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_581
# 1574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HAWLUCHANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_582
# 1581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZYGARDITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_583
# 1588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DRAMPANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_584
# 1595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FALINKSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_585
# 1602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HEATRANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_586
# 1609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DARKRANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_587
# 1616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZERAORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_588
# 1623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RAICHUNITE_X, MauvilleCity_GameCorner_EventScript_BuyMegaStones_589
# 1630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RAICHUNITE_Y, MauvilleCity_GameCorner_EventScript_BuyMegaStones_590
# 1637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHIMECHITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_591
# 1644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABSOLITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_592
# 1651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STARAPTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_593
# 1658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GARCHOMPITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_594
# 1665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LUCARIONITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_595
# 1672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GOLURKITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_596
# 1679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MEOWSTICITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_597
# 1686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CRABOMINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_598
# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GOLISOPITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_599
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MAGEARNITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_600
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCOVILLAINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_601
# 1714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BAXCALIBRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_602
# 1721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TATSUGIRINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_603
# 1728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GLIMMORANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_604
# 1735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BUTTERFRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_605
# 1742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MACHAMPITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_606
# 1749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_KINGLERITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_607
# 1756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LAPRASITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_608
# 1763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CENTISKORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_609
# 1770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TYPHLOSIONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_610
# 1777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RILLABOOMITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_611
# 1784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CINDERACITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_612
# 1791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_INTELEONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_613
# 1798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MILOTICITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_614
# 1805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SUNFLORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_615
# 1812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FLYGONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_616
# 1819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VIKAVOLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_617
# 1828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyMegaStones_509:
# 1831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_104
# 1834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyMegaStones_2:
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NeedMegaRing
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_1

MauvilleCity_GameCorner_EventScript_BuyMegaStones_5:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_0, ITEM_VENUSAURITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_4

MauvilleCity_GameCorner_EventScript_BuyMegaStones_6:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_5
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_4

MauvilleCity_GameCorner_EventScript_BuyMegaStones_10:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_1, ITEM_VENUSAURITE_X
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_9

MauvilleCity_GameCorner_EventScript_BuyMegaStones_11:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_10
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_9

MauvilleCity_GameCorner_EventScript_BuyMegaStones_15:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_2, ITEM_CHARIZARDITE_X
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_14

MauvilleCity_GameCorner_EventScript_BuyMegaStones_16:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_15
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_14

MauvilleCity_GameCorner_EventScript_BuyMegaStones_20:
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_3, ITEM_CHARIZARDITE_Y
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_19

MauvilleCity_GameCorner_EventScript_BuyMegaStones_21:
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_GameCorner_EventScript_BuyMegaStones_20
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_19

MauvilleCity_GameCorner_EventScript_BuyMegaStones_25:
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_4, ITEM_BLASTOISINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_24

MauvilleCity_GameCorner_EventScript_BuyMegaStones_26:
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_25
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_24

MauvilleCity_GameCorner_EventScript_BuyMegaStones_30:
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_5, ITEM_BLASTOISINITE_X
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_29

MauvilleCity_GameCorner_EventScript_BuyMegaStones_31:
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_30
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_29

MauvilleCity_GameCorner_EventScript_BuyMegaStones_35:
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_6, ITEM_BEEDRILLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_34

MauvilleCity_GameCorner_EventScript_BuyMegaStones_36:
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_35
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_34

MauvilleCity_GameCorner_EventScript_BuyMegaStones_40:
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_7, ITEM_PIDGEOTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_39

MauvilleCity_GameCorner_EventScript_BuyMegaStones_41:
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_40
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_39

MauvilleCity_GameCorner_EventScript_BuyMegaStones_45:
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_8, ITEM_ALAKAZITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_44

MauvilleCity_GameCorner_EventScript_BuyMegaStones_46:
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_45
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_44

MauvilleCity_GameCorner_EventScript_BuyMegaStones_50:
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_9, ITEM_SLOWBRONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_49

MauvilleCity_GameCorner_EventScript_BuyMegaStones_51:
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_50
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_49

MauvilleCity_GameCorner_EventScript_BuyMegaStones_55:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_10, ITEM_SLOWKINGITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_54

MauvilleCity_GameCorner_EventScript_BuyMegaStones_56:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_55
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_54

MauvilleCity_GameCorner_EventScript_BuyMegaStones_60:
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_11, ITEM_GENGARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_59

MauvilleCity_GameCorner_EventScript_BuyMegaStones_61:
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_60
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_59

MauvilleCity_GameCorner_EventScript_BuyMegaStones_65:
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_12, ITEM_KANGASKHANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_64

MauvilleCity_GameCorner_EventScript_BuyMegaStones_66:
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_65
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_64

MauvilleCity_GameCorner_EventScript_BuyMegaStones_70:
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_13, ITEM_PINSIRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_69

MauvilleCity_GameCorner_EventScript_BuyMegaStones_71:
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_70
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_69

MauvilleCity_GameCorner_EventScript_BuyMegaStones_75:
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_14, ITEM_GYARADOSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_74

MauvilleCity_GameCorner_EventScript_BuyMegaStones_76:
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_75
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_74

MauvilleCity_GameCorner_EventScript_BuyMegaStones_80:
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_15, ITEM_AERODACTYLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_79

MauvilleCity_GameCorner_EventScript_BuyMegaStones_81:
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_80
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_79

MauvilleCity_GameCorner_EventScript_BuyMegaStones_85:
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_16, ITEM_AMPHAROSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_84

MauvilleCity_GameCorner_EventScript_BuyMegaStones_86:
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_85
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_84

MauvilleCity_GameCorner_EventScript_BuyMegaStones_90:
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_17, ITEM_STEELIXITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_89

MauvilleCity_GameCorner_EventScript_BuyMegaStones_91:
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_90
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_89

MauvilleCity_GameCorner_EventScript_BuyMegaStones_95:
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_18, ITEM_SCIZORITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_94

MauvilleCity_GameCorner_EventScript_BuyMegaStones_96:
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_95
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_94

MauvilleCity_GameCorner_EventScript_BuyMegaStones_100:
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_19, ITEM_HERACRONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_99

MauvilleCity_GameCorner_EventScript_BuyMegaStones_101:
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_100
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_99

MauvilleCity_GameCorner_EventScript_BuyMegaStones_105:
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_20, ITEM_HOUNDOOMINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_104

MauvilleCity_GameCorner_EventScript_BuyMegaStones_106:
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_105
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_104

MauvilleCity_GameCorner_EventScript_BuyMegaStones_110:
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_21, ITEM_TYRANITARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_109

MauvilleCity_GameCorner_EventScript_BuyMegaStones_111:
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_GameCorner_EventScript_BuyMegaStones_110
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_109

MauvilleCity_GameCorner_EventScript_BuyMegaStones_115:
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_22, ITEM_SCEPTILITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_114

MauvilleCity_GameCorner_EventScript_BuyMegaStones_116:
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_115
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_114

MauvilleCity_GameCorner_EventScript_BuyMegaStones_120:
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_23, ITEM_BLAZIKENITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_119

MauvilleCity_GameCorner_EventScript_BuyMegaStones_121:
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_120
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_119

MauvilleCity_GameCorner_EventScript_BuyMegaStones_125:
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_24, ITEM_SWAMPERTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_124

MauvilleCity_GameCorner_EventScript_BuyMegaStones_126:
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_125
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_124

MauvilleCity_GameCorner_EventScript_BuyMegaStones_130:
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_25, ITEM_GARDEVOIRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_129

MauvilleCity_GameCorner_EventScript_BuyMegaStones_131:
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_130
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_129

MauvilleCity_GameCorner_EventScript_BuyMegaStones_135:
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_26, ITEM_SABLENITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_134

MauvilleCity_GameCorner_EventScript_BuyMegaStones_136:
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_135
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_134

MauvilleCity_GameCorner_EventScript_BuyMegaStones_140:
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_27, ITEM_MAWILITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_139

MauvilleCity_GameCorner_EventScript_BuyMegaStones_141:
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_140
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_139

MauvilleCity_GameCorner_EventScript_BuyMegaStones_145:
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_28, ITEM_AGGRONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_144

MauvilleCity_GameCorner_EventScript_BuyMegaStones_146:
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_145
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_144

MauvilleCity_GameCorner_EventScript_BuyMegaStones_150:
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_29, ITEM_MEDICHAMITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_149

MauvilleCity_GameCorner_EventScript_BuyMegaStones_151:
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_150
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_149

MauvilleCity_GameCorner_EventScript_BuyMegaStones_155:
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_30, ITEM_MANECTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_154

MauvilleCity_GameCorner_EventScript_BuyMegaStones_156:
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_155
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_154

MauvilleCity_GameCorner_EventScript_BuyMegaStones_160:
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_31, ITEM_SHARPEDONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_159

MauvilleCity_GameCorner_EventScript_BuyMegaStones_161:
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_160
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_159

MauvilleCity_GameCorner_EventScript_BuyMegaStones_165:
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_32, ITEM_CAMERUPTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_164

MauvilleCity_GameCorner_EventScript_BuyMegaStones_166:
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_165
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_164

MauvilleCity_GameCorner_EventScript_BuyMegaStones_170:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_33, ITEM_ALTARIANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_169

MauvilleCity_GameCorner_EventScript_BuyMegaStones_171:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_170
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_169

MauvilleCity_GameCorner_EventScript_BuyMegaStones_175:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_34, ITEM_BANETTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_174

MauvilleCity_GameCorner_EventScript_BuyMegaStones_176:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_175
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_174

MauvilleCity_GameCorner_EventScript_BuyMegaStones_180:
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_35, ITEM_ABSOLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_179

MauvilleCity_GameCorner_EventScript_BuyMegaStones_181:
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_180
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_179

MauvilleCity_GameCorner_EventScript_BuyMegaStones_185:
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_36, ITEM_GLALITITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_184

MauvilleCity_GameCorner_EventScript_BuyMegaStones_186:
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_185
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_184

MauvilleCity_GameCorner_EventScript_BuyMegaStones_190:
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_37, ITEM_SALAMENCITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_189

MauvilleCity_GameCorner_EventScript_BuyMegaStones_191:
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_190
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_189

MauvilleCity_GameCorner_EventScript_BuyMegaStones_195:
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_38, ITEM_METAGROSSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_194

MauvilleCity_GameCorner_EventScript_BuyMegaStones_196:
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_195
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_194

MauvilleCity_GameCorner_EventScript_BuyMegaStones_200:
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_39, ITEM_LOPUNNITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_199

MauvilleCity_GameCorner_EventScript_BuyMegaStones_201:
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_200
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_199

MauvilleCity_GameCorner_EventScript_BuyMegaStones_205:
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_40, ITEM_GARCHOMPITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_204

MauvilleCity_GameCorner_EventScript_BuyMegaStones_206:
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_205
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_204

MauvilleCity_GameCorner_EventScript_BuyMegaStones_210:
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_41, ITEM_LUCARIONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_209

MauvilleCity_GameCorner_EventScript_BuyMegaStones_211:
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_210
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_209

MauvilleCity_GameCorner_EventScript_BuyMegaStones_215:
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_42, ITEM_ABOMASITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_214

MauvilleCity_GameCorner_EventScript_BuyMegaStones_216:
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_GameCorner_EventScript_BuyMegaStones_215
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_214

MauvilleCity_GameCorner_EventScript_BuyMegaStones_220:
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_43, ITEM_GALLADITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_219

MauvilleCity_GameCorner_EventScript_BuyMegaStones_221:
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_220
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_219

MauvilleCity_GameCorner_EventScript_BuyMegaStones_225:
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_44, ITEM_AUDINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_224

MauvilleCity_GameCorner_EventScript_BuyMegaStones_226:
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_225
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_224

MauvilleCity_GameCorner_EventScript_BuyMegaStones_230:
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_45, ITEM_CLEFABLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_229

MauvilleCity_GameCorner_EventScript_BuyMegaStones_231:
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_230
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_229

MauvilleCity_GameCorner_EventScript_BuyMegaStones_235:
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_46, ITEM_VICTREEBELITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_234

MauvilleCity_GameCorner_EventScript_BuyMegaStones_236:
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_235
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_234

MauvilleCity_GameCorner_EventScript_BuyMegaStones_240:
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_47, ITEM_STARMINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_239

MauvilleCity_GameCorner_EventScript_BuyMegaStones_241:
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_240
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_239

MauvilleCity_GameCorner_EventScript_BuyMegaStones_245:
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_48, ITEM_DRAGONINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_246:
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_245
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_250:
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, ITEM_MEGANIUMITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_249

MauvilleCity_GameCorner_EventScript_BuyMegaStones_251:
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_250
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_249

MauvilleCity_GameCorner_EventScript_BuyMegaStones_255:
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50, ITEM_FERALIGITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_254

MauvilleCity_GameCorner_EventScript_BuyMegaStones_256:
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_255
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_254

MauvilleCity_GameCorner_EventScript_BuyMegaStones_260:
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_51, ITEM_SKARMORITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_259

MauvilleCity_GameCorner_EventScript_BuyMegaStones_261:
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_260
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_259

MauvilleCity_GameCorner_EventScript_BuyMegaStones_265:
# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_52, ITEM_FROSLASSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_264

MauvilleCity_GameCorner_EventScript_BuyMegaStones_266:
# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_GameCorner_EventScript_BuyMegaStones_265
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_264

MauvilleCity_GameCorner_EventScript_BuyMegaStones_270:
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_53, ITEM_EMBOARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_269

MauvilleCity_GameCorner_EventScript_BuyMegaStones_271:
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_270
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_269

MauvilleCity_GameCorner_EventScript_BuyMegaStones_275:
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_54, ITEM_EXCADRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_274

MauvilleCity_GameCorner_EventScript_BuyMegaStones_276:
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_275
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_274

MauvilleCity_GameCorner_EventScript_BuyMegaStones_280:
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_55, ITEM_SCOLIPITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_279

MauvilleCity_GameCorner_EventScript_BuyMegaStones_281:
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_280
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_279

MauvilleCity_GameCorner_EventScript_BuyMegaStones_285:
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_56, ITEM_SCRAFTINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_284

MauvilleCity_GameCorner_EventScript_BuyMegaStones_286:
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_285
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_284

MauvilleCity_GameCorner_EventScript_BuyMegaStones_290:
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_57, ITEM_EELEKTROSSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_289

MauvilleCity_GameCorner_EventScript_BuyMegaStones_291:
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_290
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_289

MauvilleCity_GameCorner_EventScript_BuyMegaStones_295:
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_58, ITEM_CHANDELURITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_294

MauvilleCity_GameCorner_EventScript_BuyMegaStones_296:
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_295
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_294

MauvilleCity_GameCorner_EventScript_BuyMegaStones_300:
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_59, ITEM_CHESNAUGHTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_299

MauvilleCity_GameCorner_EventScript_BuyMegaStones_301:
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_300
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_299

MauvilleCity_GameCorner_EventScript_BuyMegaStones_305:
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_60, ITEM_DELPHOXITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_304

MauvilleCity_GameCorner_EventScript_BuyMegaStones_306:
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_305
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_304

MauvilleCity_GameCorner_EventScript_BuyMegaStones_310:
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_61, ITEM_GRENINJITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_309

MauvilleCity_GameCorner_EventScript_BuyMegaStones_311:
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_310
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_309

MauvilleCity_GameCorner_EventScript_BuyMegaStones_315:
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_62, ITEM_PYROARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_314

MauvilleCity_GameCorner_EventScript_BuyMegaStones_316:
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_315
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_314

MauvilleCity_GameCorner_EventScript_BuyMegaStones_320:
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_63, ITEM_MALAMARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_319

MauvilleCity_GameCorner_EventScript_BuyMegaStones_321:
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_320
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_319

MauvilleCity_GameCorner_EventScript_BuyMegaStones_325:
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_64, ITEM_BARBARACITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_324

MauvilleCity_GameCorner_EventScript_BuyMegaStones_326:
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_325
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_324

MauvilleCity_GameCorner_EventScript_BuyMegaStones_330:
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_65, ITEM_DRAGALGITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_329

MauvilleCity_GameCorner_EventScript_BuyMegaStones_331:
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_330
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_329

MauvilleCity_GameCorner_EventScript_BuyMegaStones_335:
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_66, ITEM_HAWLUCHANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_334

MauvilleCity_GameCorner_EventScript_BuyMegaStones_336:
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_335
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_334

MauvilleCity_GameCorner_EventScript_BuyMegaStones_340:
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_67, ITEM_DRAMPANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_339

MauvilleCity_GameCorner_EventScript_BuyMegaStones_341:
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_340
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_339

MauvilleCity_GameCorner_EventScript_BuyMegaStones_345:
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_68, ITEM_FALINKSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_344

MauvilleCity_GameCorner_EventScript_BuyMegaStones_346:
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_345
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_344

MauvilleCity_GameCorner_EventScript_BuyMegaStones_350:
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_69, ITEM_RAICHUNITE_X
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_349

MauvilleCity_GameCorner_EventScript_BuyMegaStones_351:
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_GameCorner_EventScript_BuyMegaStones_350
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_349

MauvilleCity_GameCorner_EventScript_BuyMegaStones_355:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_70, ITEM_RAICHUNITE_Y
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_354

MauvilleCity_GameCorner_EventScript_BuyMegaStones_356:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_355
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_354

MauvilleCity_GameCorner_EventScript_BuyMegaStones_360:
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_71, ITEM_CHIMECHITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_359

MauvilleCity_GameCorner_EventScript_BuyMegaStones_361:
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_360
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_359

MauvilleCity_GameCorner_EventScript_BuyMegaStones_365:
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_72, ITEM_ABSOLITE_Z
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_364

MauvilleCity_GameCorner_EventScript_BuyMegaStones_366:
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_365
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_364

MauvilleCity_GameCorner_EventScript_BuyMegaStones_370:
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_73, ITEM_STARAPTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_369

MauvilleCity_GameCorner_EventScript_BuyMegaStones_371:
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_370
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_369

MauvilleCity_GameCorner_EventScript_BuyMegaStones_375:
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_74, ITEM_GARCHOMPITE_Z
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_374

MauvilleCity_GameCorner_EventScript_BuyMegaStones_376:
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_375
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_374

MauvilleCity_GameCorner_EventScript_BuyMegaStones_380:
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_75, ITEM_LUCARIONITE_Z
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_379

MauvilleCity_GameCorner_EventScript_BuyMegaStones_381:
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_380
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_379

MauvilleCity_GameCorner_EventScript_BuyMegaStones_385:
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_76, ITEM_GOLURKITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_384

MauvilleCity_GameCorner_EventScript_BuyMegaStones_386:
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_385
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_384

MauvilleCity_GameCorner_EventScript_BuyMegaStones_390:
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_77, ITEM_MEOWSTICITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_389

MauvilleCity_GameCorner_EventScript_BuyMegaStones_391:
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_390
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_389

MauvilleCity_GameCorner_EventScript_BuyMegaStones_395:
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_78, ITEM_CRABOMINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_394

MauvilleCity_GameCorner_EventScript_BuyMegaStones_396:
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_395
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_394

MauvilleCity_GameCorner_EventScript_BuyMegaStones_400:
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_79, ITEM_GOLISOPITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_399

MauvilleCity_GameCorner_EventScript_BuyMegaStones_401:
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_400
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_399

MauvilleCity_GameCorner_EventScript_BuyMegaStones_405:
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_80, ITEM_SCOVILLAINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_404

MauvilleCity_GameCorner_EventScript_BuyMegaStones_406:
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_405
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_404

MauvilleCity_GameCorner_EventScript_BuyMegaStones_410:
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_81, ITEM_BAXCALIBRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_409

MauvilleCity_GameCorner_EventScript_BuyMegaStones_411:
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_410
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_409

MauvilleCity_GameCorner_EventScript_BuyMegaStones_415:
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_82, ITEM_TATSUGIRINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_414

MauvilleCity_GameCorner_EventScript_BuyMegaStones_416:
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_415
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_414

MauvilleCity_GameCorner_EventScript_BuyMegaStones_420:
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_83, ITEM_GLIMMORANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_419

MauvilleCity_GameCorner_EventScript_BuyMegaStones_421:
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_420
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_419

MauvilleCity_GameCorner_EventScript_BuyMegaStones_425:
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_84, ITEM_BUTTERFRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_424

MauvilleCity_GameCorner_EventScript_BuyMegaStones_426:
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_425
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_424

MauvilleCity_GameCorner_EventScript_BuyMegaStones_430:
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_85, ITEM_MACHAMPITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_429

MauvilleCity_GameCorner_EventScript_BuyMegaStones_431:
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_430
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_429

MauvilleCity_GameCorner_EventScript_BuyMegaStones_435:
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_86, ITEM_KINGLERITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_434

MauvilleCity_GameCorner_EventScript_BuyMegaStones_436:
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_435
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_434

MauvilleCity_GameCorner_EventScript_BuyMegaStones_440:
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_87, ITEM_LAPRASITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_439

MauvilleCity_GameCorner_EventScript_BuyMegaStones_441:
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_440
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_439

MauvilleCity_GameCorner_EventScript_BuyMegaStones_445:
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_88, ITEM_CENTISKORITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_444

MauvilleCity_GameCorner_EventScript_BuyMegaStones_446:
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_445
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_444

MauvilleCity_GameCorner_EventScript_BuyMegaStones_450:
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_89, ITEM_RILLABOOMITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_449

MauvilleCity_GameCorner_EventScript_BuyMegaStones_451:
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_450
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_449

MauvilleCity_GameCorner_EventScript_BuyMegaStones_455:
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_90, ITEM_CINDERACITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_454

MauvilleCity_GameCorner_EventScript_BuyMegaStones_456:
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_455
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_454

MauvilleCity_GameCorner_EventScript_BuyMegaStones_460:
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_91, ITEM_INTELEONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_459

MauvilleCity_GameCorner_EventScript_BuyMegaStones_461:
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_460
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_459

MauvilleCity_GameCorner_EventScript_BuyMegaStones_465:
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_92, ITEM_MILOTICITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_464

MauvilleCity_GameCorner_EventScript_BuyMegaStones_466:
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_465
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_464

MauvilleCity_GameCorner_EventScript_BuyMegaStones_470:
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_93, ITEM_SUNFLORITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_469

MauvilleCity_GameCorner_EventScript_BuyMegaStones_471:
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_470
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_469

MauvilleCity_GameCorner_EventScript_BuyMegaStones_475:
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_94, ITEM_FLYGONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_474

MauvilleCity_GameCorner_EventScript_BuyMegaStones_476:
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_475
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_474

MauvilleCity_GameCorner_EventScript_BuyMegaStones_480:
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_95, ITEM_VIKAVOLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_479

MauvilleCity_GameCorner_EventScript_BuyMegaStones_481:
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_480
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_479

MauvilleCity_GameCorner_EventScript_BuyMegaStones_485:
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_96, ITEM_SNORLAXITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_486:
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_485
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_490:
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_97, ITEM_GARBODITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_489

MauvilleCity_GameCorner_EventScript_BuyMegaStones_491:
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_490
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_489

MauvilleCity_GameCorner_EventScript_BuyMegaStones_495:
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, ITEM_SANDACONDITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_494

MauvilleCity_GameCorner_EventScript_BuyMegaStones_496:
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_495
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_494

MauvilleCity_GameCorner_EventScript_BuyMegaStones_500:
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99, ITEM_ORBEETLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_499

MauvilleCity_GameCorner_EventScript_BuyMegaStones_501:
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_500
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_499

MauvilleCity_GameCorner_EventScript_BuyMegaStones_505:
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_100, ITEM_COPPERAJITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_504

MauvilleCity_GameCorner_EventScript_BuyMegaStones_506:
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_505
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_504

MauvilleCity_GameCorner_EventScript_BuyMegaStones_511:
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_512:
# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_513:
# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_514:
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_515:
# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_516:
# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_517:
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_518:
# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_519:
# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_520:
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_521:
# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_522:
# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_523:
# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_524:
# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_525:
# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_526:
# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_527:
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_528:
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_529:
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_530:
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_531:
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_532:
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_533:
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_534:
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_535:
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_536:
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_537:
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_538:
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_539:
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_540:
# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_541:
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_542:
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_543:
# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_544:
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_545:
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_546:
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_547:
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_548:
# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_549:
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_550:
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_551:
# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_552:
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_553:
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_554:
# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_555:
# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_556:
# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_557:
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_558:
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_559:
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_560:
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_561:
# 1428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_562:
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_563:
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_564:
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_565:
# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_566:
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_567:
# 1470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_568:
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_569:
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_570:
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_571:
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_572:
# 1505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_573:
# 1512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_574:
# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_575:
# 1526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_576:
# 1533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_577:
# 1540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_578:
# 1547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_579:
# 1554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_580:
# 1561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_581:
# 1568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_582:
# 1575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_583:
# 1582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_584:
# 1589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_585:
# 1596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_586:
# 1603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_587:
# 1610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_588:
# 1617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_589:
# 1624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_590:
# 1631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_591:
# 1638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_592:
# 1645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_593:
# 1652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_594:
# 1659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_595:
# 1666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_596:
# 1673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_597:
# 1680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_598:
# 1687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_599:
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_600:
# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_601:
# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_602:
# 1715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_603:
# 1722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_604:
# 1729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_605:
# 1736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_606:
# 1743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_607:
# 1750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_608:
# 1757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_609:
# 1764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_610:
# 1771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_611:
# 1778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_612:
# 1785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_613:
# 1792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_614:
# 1799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_615:
# 1806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_616:
# 1813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509

MauvilleCity_GameCorner_EventScript_BuyMegaStones_617:
# 1820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_509


MauvilleCity_GameCorner_EventScript_BuyRareBattleItems::
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_4
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1:
# 1844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 1250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize
# 1846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_0, MSGBOX_DEFAULT
# 1847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 1250
# 1849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_15
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_14:
# 1850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_18
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_17:
# 1851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_21
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_20:
# 1852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_24
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_23:
# 1853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_27
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_26:
# 1854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_30
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_29:
# 1855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_7, MSGBOX_DEFAULT
# 1856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_34
# 1869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_35
# 1875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_36
# 1881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_37
# 1887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_38
# 1893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_39
# 1900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32:
# 1903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_104
# 1906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_2:
# 1842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_OutOfRareItems
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_3:
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_8
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_4:
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_3
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_7:
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_11
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_8:
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_7
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_11:
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_2
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_15:
# 1849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_1, ITEM_CHOICE_BAND
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_14

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_18:
# 1850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_2, ITEM_CHOICE_SCARF
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_17

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_21:
# 1851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_3, ITEM_CHOICE_SPECS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_20

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_24:
# 1852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_4, ITEM_LEFTOVERS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_23

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_27:
# 1853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_5, ITEM_LIFE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_26

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_30:
# 1854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_6, ITEM_ASSAULT_VEST
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_29

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_34:
# 1864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_BAND
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_35:
# 1870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_SCARF
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_36:
# 1876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1878 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_SPECS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_37:
# 1882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_LEFTOVERS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_38:
# 1888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_LIFE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_39:
# 1894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_ASSAULT_VEST
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32


MauvilleCity_GameCorner_EventScript_BuyGems::
# 1913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_2
MauvilleCity_GameCorner_EventScript_BuyGems_1:
# 1915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_5
MauvilleCity_GameCorner_EventScript_BuyGems_4:
# 1916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_8
MauvilleCity_GameCorner_EventScript_BuyGems_7:
# 1917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_11
MauvilleCity_GameCorner_EventScript_BuyGems_10:
# 1918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_14
MauvilleCity_GameCorner_EventScript_BuyGems_13:
# 1919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_17
MauvilleCity_GameCorner_EventScript_BuyGems_16:
# 1920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_20
MauvilleCity_GameCorner_EventScript_BuyGems_19:
# 1921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_23
MauvilleCity_GameCorner_EventScript_BuyGems_22:
# 1922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_26
MauvilleCity_GameCorner_EventScript_BuyGems_25:
# 1923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_29
MauvilleCity_GameCorner_EventScript_BuyGems_28:
# 1924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_32
MauvilleCity_GameCorner_EventScript_BuyGems_31:
# 1925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_35
MauvilleCity_GameCorner_EventScript_BuyGems_34:
# 1926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_38
MauvilleCity_GameCorner_EventScript_BuyGems_37:
# 1927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_41
MauvilleCity_GameCorner_EventScript_BuyGems_40:
# 1928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_44
MauvilleCity_GameCorner_EventScript_BuyGems_43:
# 1929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_47
MauvilleCity_GameCorner_EventScript_BuyGems_46:
# 1930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_50
MauvilleCity_GameCorner_EventScript_BuyGems_49:
# 1931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_53
MauvilleCity_GameCorner_EventScript_BuyGems_52:
# 1932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyGems_Text_18, MSGBOX_DEFAULT
# 1933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1937 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_104
# 1950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyGems_2:
# 1914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_0, ITEM_NORMAL_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_1

MauvilleCity_GameCorner_EventScript_BuyGems_5:
# 1915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_1, ITEM_FIGHTING_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_4

MauvilleCity_GameCorner_EventScript_BuyGems_8:
# 1916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_2, ITEM_FLYING_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_7

MauvilleCity_GameCorner_EventScript_BuyGems_11:
# 1917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_3, ITEM_POISON_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_10

MauvilleCity_GameCorner_EventScript_BuyGems_14:
# 1918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_4, ITEM_GROUND_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_13

MauvilleCity_GameCorner_EventScript_BuyGems_17:
# 1919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_5, ITEM_ROCK_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_16

MauvilleCity_GameCorner_EventScript_BuyGems_20:
# 1920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_6, ITEM_BUG_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_19

MauvilleCity_GameCorner_EventScript_BuyGems_23:
# 1921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_7, ITEM_GHOST_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_22

MauvilleCity_GameCorner_EventScript_BuyGems_26:
# 1922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_8, ITEM_STEEL_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_25

MauvilleCity_GameCorner_EventScript_BuyGems_29:
# 1923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_9, ITEM_FIRE_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_28

MauvilleCity_GameCorner_EventScript_BuyGems_32:
# 1924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_10, ITEM_WATER_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_31

MauvilleCity_GameCorner_EventScript_BuyGems_35:
# 1925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_11, ITEM_GRASS_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_34

MauvilleCity_GameCorner_EventScript_BuyGems_38:
# 1926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_12, ITEM_ELECTRIC_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_37

MauvilleCity_GameCorner_EventScript_BuyGems_41:
# 1927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_13, ITEM_PSYCHIC_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_40

MauvilleCity_GameCorner_EventScript_BuyGems_44:
# 1928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_14, ITEM_ICE_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_43

MauvilleCity_GameCorner_EventScript_BuyGems_47:
# 1929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_15, ITEM_DRAGON_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_46

MauvilleCity_GameCorner_EventScript_BuyGems_50:
# 1930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_16, ITEM_DARK_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_49

MauvilleCity_GameCorner_EventScript_BuyGems_53:
# 1931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_17, ITEM_FAIRY_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_52


MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems::
# 1957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_2
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_1:
# 1959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_5
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_4:
# 1960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_8
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_7:
# 1961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_11
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_10:
# 1962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_14
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_13:
# 1963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_17
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_16:
# 1964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_20
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_19:
# 1965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_23
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_22:
# 1966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_26
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_25:
# 1967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_29
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_28:
# 1968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_32
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_31:
# 1969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_35
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_34:
# 1970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_38
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_37:
# 1971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_41
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_40:
# 1972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_44
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_43:
# 1973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_47
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_46:
# 1974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_50
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_49:
# 1975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_53
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_52:
# 1976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_56
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_55:
# 1977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_59
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_58:
# 1978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_62
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_61:
# 1979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_65
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_64:
# 1980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_68
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_67:
# 1981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_71
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70:
# 1982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_74
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73:
# 1983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_77
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_76:
# 1984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_80
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_79:
# 1985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_27, MSGBOX_DEFAULT
# 1986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABILITY_SHIELD, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_84
# 2002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EXPERT_BELT, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_85
# 2009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BRIGHT_POWDER, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_86
# 2016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CLEAR_AMULET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_87
# 2023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_COVERT_CLOAK, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_88
# 2030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FLAME_ORB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_89
# 2037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HEAVY_DUTY_BOOTS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_90
# 2044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_KINGS_ROCK, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_91
# 2051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LAGGING_TAIL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_92
# 2058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LIGHT_BALL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_93
# 2065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LIGHT_CLAY, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_94
# 2072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LOADED_DICE, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_95
# 2079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_METRONOME, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_96
# 2086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PROTECTIVE_PADS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_97
# 2093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PUNCHING_GLOVE, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_98
# 2100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_QUICK_CLAW, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_99
# 2107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SAFETY_GOGGLES, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_100
# 2114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCOPE_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_101
# 2121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHED_SHELL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_102
# 2128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHELL_BELL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_103
# 2135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STICKY_BARB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_104
# 2142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_THICK_CLUB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_105
# 2149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TOXIC_ORB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_106
# 2156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_UTILITY_UMBRELLA, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_107
# 2163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WIDE_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_108
# 2170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZOOM_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_109
# 2177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EVIOLITE, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_110
# 2185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82:
# 2188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_104
# 2191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_2:
# 1958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_0, ITEM_ABILITY_SHIELD
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_1

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_5:
# 1959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_1, ITEM_BRIGHT_POWDER
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_4

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_8:
# 1960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_2, ITEM_CLEAR_AMULET
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_7

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_11:
# 1961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_3, ITEM_COVERT_CLOAK
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_10

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_14:
# 1962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_4, ITEM_EVIOLITE
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_13

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_17:
# 1963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_5, ITEM_EXPERT_BELT
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_16

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_20:
# 1964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_6, ITEM_FLAME_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_19

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_23:
# 1965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_7, ITEM_HEAVY_DUTY_BOOTS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_22

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_26:
# 1966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_8, ITEM_KINGS_ROCK
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_25

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_29:
# 1967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_9, ITEM_LAGGING_TAIL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_28

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_32:
# 1968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_10, ITEM_LIGHT_BALL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_31

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_35:
# 1969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_11, ITEM_LIGHT_CLAY
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_34

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_38:
# 1970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_12, ITEM_LOADED_DICE
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_37

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_41:
# 1971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_13, ITEM_METRONOME
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_40

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_44:
# 1972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_14, ITEM_PROTECTIVE_PADS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_43

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_47:
# 1973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_15, ITEM_PUNCHING_GLOVE
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_46

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_50:
# 1974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_16, ITEM_QUICK_CLAW
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_49

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_53:
# 1975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_17, ITEM_SAFETY_GOGGLES
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_52

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_56:
# 1976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_18, ITEM_SCOPE_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_55

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_59:
# 1977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_19, ITEM_SHED_SHELL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_58

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_62:
# 1978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_20, ITEM_SHELL_BELL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_61

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_65:
# 1979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_21, ITEM_STICKY_BARB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_68:
# 1980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_22, ITEM_THICK_CLUB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_67

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_71:
# 1981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_23, ITEM_TOXIC_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_74:
# 1982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_24, ITEM_UTILITY_UMBRELLA
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_77:
# 1983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_25, ITEM_WIDE_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_76

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_80:
# 1984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_26, ITEM_ZOOM_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_79

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_84:
# 1996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 1999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_85:
# 2003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 450, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 450
# 2005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 450
# 2008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_86:
# 2010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_87:
# 2017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_88:
# 2024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_89:
# 2031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_90:
# 2038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_91:
# 2045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_92:
# 2052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_93:
# 2059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_94:
# 2066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_95:
# 2073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_96:
# 2080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_97:
# 2087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_98:
# 2094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_99:
# 2101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_100:
# 2108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_101:
# 2115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_102:
# 2122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_103:
# 2129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_104:
# 2136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_105:
# 2143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_106:
# 2150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_107:
# 2157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_108:
# 2164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_109:
# 2171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_110:
# 2178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82


MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems::
# 2198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_2
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_1:
# 2200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_5
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_4:
# 2201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_8
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_7:
# 2202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_11
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_10:
# 2203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_14
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_13:
# 2204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_17
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_16:
# 2205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_20
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_19:
# 2206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_23
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_22:
# 2207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_26
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_25:
# 2208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_29
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_28:
# 2209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_32
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_31:
# 2210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_35
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_34:
# 2211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_38
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_37:
# 2212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_41
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_40:
# 2213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_44
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_43:
# 2214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_47
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_46:
# 2215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_50
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_49:
# 2216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_53
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_52:
# 2217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_56
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_55:
# 2218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_59
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_58:
# 2219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_62
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_61:
# 2220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_21, MSGBOX_DEFAULT
# 2221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 2225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 2226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 2228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AIR_BALLOON, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_66
# 2236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FOCUS_SASH, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_67
# 2243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MENTAL_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_68
# 2250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_POWER_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_69
# 2257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WHITE_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_70
# 2264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MIRROR_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_71
# 2271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ADRENALINE_ORB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_72
# 2278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLUNDER_POLICY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_73
# 2285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WEAKNESS_POLICY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_74
# 2292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_THROAT_SPRAY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_75
# 2299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EJECT_BUTTON, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_76
# 2306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EJECT_PACK, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_77
# 2313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RED_CARD, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_78
# 2320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABSORB_BULB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_79
# 2327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CELL_BATTERY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_80
# 2334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LUMINOUS_MOSS, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_81
# 2341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SNOWBALL, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_82
# 2348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GRASSY_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_83
# 2355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ELECTRIC_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_84
# 2362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MISTY_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_85
# 2369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PSYCHIC_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_86
# 2377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64:
# 2380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_104
# 2383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_2:
# 2199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_0, ITEM_AIR_BALLOON
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_1

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_5:
# 2200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_1, ITEM_FOCUS_SASH
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_4

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_8:
# 2201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_2, ITEM_MENTAL_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_7

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_11:
# 2202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_3, ITEM_POWER_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_10

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_14:
# 2203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_4, ITEM_WHITE_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_13

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_17:
# 2204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_5, ITEM_MIRROR_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_16

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_20:
# 2205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_6, ITEM_ADRENALINE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_19

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_23:
# 2206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_7, ITEM_BLUNDER_POLICY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_22

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_26:
# 2207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_8, ITEM_WEAKNESS_POLICY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_25

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_29:
# 2208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_9, ITEM_THROAT_SPRAY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_28

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_32:
# 2209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_10, ITEM_EJECT_BUTTON
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_31

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_35:
# 2210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_11, ITEM_EJECT_PACK
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_34

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_38:
# 2211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_12, ITEM_RED_CARD
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_37

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_41:
# 2212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_13, ITEM_ABSORB_BULB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_40

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_44:
# 2213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_14, ITEM_CELL_BATTERY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_43

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_47:
# 2214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_15, ITEM_LUMINOUS_MOSS
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_46

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_50:
# 2215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_16, ITEM_SNOWBALL
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_49

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_53:
# 2216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_17, ITEM_GRASSY_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_52

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_56:
# 2217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_18, ITEM_ELECTRIC_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_55

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_59:
# 2218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_19, ITEM_MISTY_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_58

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_62:
# 2219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_20, ITEM_PSYCHIC_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_61

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_66:
# 2230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_67:
# 2237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_68:
# 2244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_69:
# 2251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 2253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 2256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_70:
# 2258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_71:
# 2265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_72:
# 2272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_73:
# 2279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_74:
# 2286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 2288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 2291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_75:
# 2293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_76:
# 2300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_77:
# 2307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_78:
# 2314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 2316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 2319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_79:
# 2321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_80:
# 2328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_81:
# 2335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_82:
# 2342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_83:
# 2349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_84:
# 2356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_85:
# 2363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_86:
# 2370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64


MauvilleCity_GameCorner_EventScript_BuyTMs::
# 2390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
	checkitem ITEM_TM_FIRE_PUNCH
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMs_2
MauvilleCity_GameCorner_EventScript_BuyTMs_1:
	checkitem ITEM_TM_ICE_PUNCH
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMs_5
MauvilleCity_GameCorner_EventScript_BuyTMs_4:
	checkitem ITEM_TM_THUNDER_PUNCH
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMs_8
MauvilleCity_GameCorner_EventScript_BuyTMs_7:
	checkitem ITEM_TM_THUNDERBOLT
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMs_11
MauvilleCity_GameCorner_EventScript_BuyTMs_10:
	checkitem ITEM_TM_FLAMETHROWER
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMs_14
MauvilleCity_GameCorner_EventScript_BuyTMs_13:
	checkitem ITEM_TM_ICE_BEAM
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMs_17
MauvilleCity_GameCorner_EventScript_BuyTMs_16:
	checkitem ITEM_TM_PSYCHIC
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMs_20
MauvilleCity_GameCorner_EventScript_BuyTMs_19:
	checkitem ITEM_TM_BULK_UP
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMs_23
MauvilleCity_GameCorner_EventScript_BuyTMs_22:
	checkitem ITEM_TM_CALM_MIND
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMs_26
MauvilleCity_GameCorner_EventScript_BuyTMs_25:
# 2400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyTMs_Text_9, MSGBOX_DEFAULT
# 2401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 2405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 2406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 2408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_FIRE_PUNCH, MauvilleCity_GameCorner_EventScript_BuyTMs_30
# 2417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_ICE_PUNCH, MauvilleCity_GameCorner_EventScript_BuyTMs_31
# 2425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_THUNDER_PUNCH, MauvilleCity_GameCorner_EventScript_BuyTMs_32
# 2433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_THUNDERBOLT, MauvilleCity_GameCorner_EventScript_BuyTMs_33
# 2441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_FLAMETHROWER, MauvilleCity_GameCorner_EventScript_BuyTMs_34
# 2449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_ICE_BEAM, MauvilleCity_GameCorner_EventScript_BuyTMs_35
# 2457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_PSYCHIC, MauvilleCity_GameCorner_EventScript_BuyTMs_36
# 2465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_BULK_UP, MauvilleCity_GameCorner_EventScript_BuyTMs_37
# 2473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_CALM_MIND, MauvilleCity_GameCorner_EventScript_BuyTMs_38
# 2482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyTMs_28:
# 2485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_104
# 2488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyTMs_2:
# 2391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_0, ITEM_TM_FIRE_PUNCH
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_1

MauvilleCity_GameCorner_EventScript_BuyTMs_5:
# 2392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_1, ITEM_TM_ICE_PUNCH
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_4

MauvilleCity_GameCorner_EventScript_BuyTMs_8:
# 2393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_2, ITEM_TM_THUNDER_PUNCH
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_7

MauvilleCity_GameCorner_EventScript_BuyTMs_11:
# 2394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_3, ITEM_TM_THUNDERBOLT
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_10

MauvilleCity_GameCorner_EventScript_BuyTMs_14:
# 2395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_4, ITEM_TM_FLAMETHROWER
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_13

MauvilleCity_GameCorner_EventScript_BuyTMs_17:
# 2396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_5, ITEM_TM_ICE_BEAM
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_16

MauvilleCity_GameCorner_EventScript_BuyTMs_20:
# 2397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_6, ITEM_TM_PSYCHIC
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_19

MauvilleCity_GameCorner_EventScript_BuyTMs_23:
# 2398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_7, ITEM_TM_BULK_UP
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_22

MauvilleCity_GameCorner_EventScript_BuyTMs_26:
# 2399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_8, ITEM_TM_CALM_MIND
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_25

MauvilleCity_GameCorner_EventScript_BuyTMs_30:
# 2410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_FIRE_PUNCH
# 2411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_31:
# 2418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_ICE_PUNCH
# 2419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_32:
# 2426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_THUNDER_PUNCH
# 2427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_33:
# 2434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_THUNDERBOLT
# 2435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_34:
# 2442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_FLAMETHROWER
# 2443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_35:
# 2450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_ICE_BEAM
# 2451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_36:
# 2458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_PSYCHIC
# 2459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_37:
# 2466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_BULK_UP
# 2467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_38:
# 2474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_CALM_MIND
# 2475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28


MauvilleCity_GameCorner_EventScript_ComeBackLater::
# 2495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ComeBackLater_Text_0
# 2499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BuyVitamins::
# 2505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_0, ITEM_HP_UP
# 2507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_1, ITEM_PROTEIN
# 2508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_2, ITEM_IRON
# 2509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_3, ITEM_CALCIUM
# 2510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_4, ITEM_ZINC
# 2511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_5, ITEM_CARBOS
# 2512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_6, ITEM_PP_MAX
# 2513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_7, ITEM_ABILITY_CAPSULE
# 2514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_8, MSGBOX_DEFAULT
# 2515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 2517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 2519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 2520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 2522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HP_UP, MauvilleCity_GameCorner_EventScript_BuyVitamins_3
# 2530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PROTEIN, MauvilleCity_GameCorner_EventScript_BuyVitamins_4
# 2537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_IRON, MauvilleCity_GameCorner_EventScript_BuyVitamins_5
# 2544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CALCIUM, MauvilleCity_GameCorner_EventScript_BuyVitamins_6
# 2551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZINC, MauvilleCity_GameCorner_EventScript_BuyVitamins_7
# 2558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CARBOS, MauvilleCity_GameCorner_EventScript_BuyVitamins_8
# 2565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PP_MAX, MauvilleCity_GameCorner_EventScript_BuyVitamins_9
# 2572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABILITY_CAPSULE, MauvilleCity_GameCorner_EventScript_BuyVitamins_10
# 2580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyVitamins_1:
# 2583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_104
# 2586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyVitamins_3:
# 2524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_4:
# 2531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_5:
# 2538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_6:
# 2545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_7:
# 2552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_8:
# 2559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_9:
# 2566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_10:
# 2573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103, MSGBOX_YESNO
# 2576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize::
# 2593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize_Text_0
# 2595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize::
# 2602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize_Text_0
# 2604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BagFull::
# 2610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BagFull_Text_0
# 2612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NewTMPrizes::
# 2619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BuyPokemon::
# 2624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 2626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_0, MSGBOX_DEFAULT
# 2627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 25, 2, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_1, MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_2
# 2628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 2629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_BuyPokemon_3
# 2631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyPokemon_4
# 2634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPokemon_1:
# 2636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_BuyPokemon_3:
# 2630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyStarterPokemon
	goto MauvilleCity_GameCorner_EventScript_BuyPokemon_1

MauvilleCity_GameCorner_EventScript_BuyPokemon_4:
# 2632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon
	goto MauvilleCity_GameCorner_EventScript_BuyPokemon_1


MauvilleCity_GameCorner_EventScript_BuyStarterPokemon::
# 2642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_0, SPECIES_BULBASAUR
# 2644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_1, SPECIES_CHARMANDER
# 2645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_2, SPECIES_SQUIRTLE
# 2646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_3, SPECIES_CHIKORITA
# 2647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_4, SPECIES_CYNDAQUIL
# 2648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_5, SPECIES_TOTODILE
# 2649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_6, SPECIES_TREECKO
# 2650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_7, SPECIES_TORCHIC
# 2651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_8, SPECIES_MUDKIP
# 2652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_9, SPECIES_TURTWIG
# 2653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_10, SPECIES_CHIMCHAR
# 2654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_11, SPECIES_PIPLUP
# 2655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_12, SPECIES_SNIVY
# 2656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_13, SPECIES_TEPIG
# 2657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_14, SPECIES_OSHAWOTT
# 2658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_15, SPECIES_CHESPIN
# 2659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_16, SPECIES_FENNEKIN
# 2660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_17, SPECIES_FROAKIE
# 2661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_18, SPECIES_ROWLET
# 2662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_19, SPECIES_LITTEN
# 2663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_20, SPECIES_POPPLIO
# 2664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_21, SPECIES_GROOKEY
# 2665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_22, SPECIES_SCORBUNNY
# 2666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_23, SPECIES_SOBBLE
# 2667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_24, SPECIES_SPRIGATITO
# 2668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_25, SPECIES_FUECOCO
# 2669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_26, SPECIES_QUAXLY
# 2670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_27, MSGBOX_DEFAULT
# 2671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 127, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 128, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 2678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_3, 5
# 2683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_PokemonReceived
# 2684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_PokemonSentToPC
# 2685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForPokemon
	return


MauvilleCity_GameCorner_EventScript_BuyPrizePokemon::
# 2689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_0, SPECIES_ABRA
# 2691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_1, SPECIES_CLEFAIRY
# 2692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_2, SPECIES_JIGGLYPUFF
# 2693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_3, SPECIES_PORYGON
# 2694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_4, SPECIES_MR_MIME
# 2695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_5, SPECIES_EEVEE
# 2696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_6, SPECIES_WOBBUFFET
# 2697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_7, SPECIES_SNORLAX
# 2698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_8, SPECIES_MIMIKYU
# 2699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_9, SPECIES_ROTOM
# 2700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_10, MSGBOX_DEFAULT
# 2701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 2706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_ABRA, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_3
# 2714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_CLEFAIRY, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_4
# 2721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_JIGGLYPUFF, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_5
# 2728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_PORYGON, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_6
# 2735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_MR_MIME, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_7
# 2742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_EEVEE, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_8
# 2749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_WOBBUFFET, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_9
# 2756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_SNORLAX, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_10
# 2763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_MIMIKYU, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_11
# 2770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_ROTOM, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_12
# 2778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1:
# 2781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_PokemonReceived
# 2782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_PokemonSentToPC
# 2783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForPokemon
	return

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_3:
# 2708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 600, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 600
# 2710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 600
# 2713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_ABRA, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_4:
# 2715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_CLEFAIRY, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_5:
# 2722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_JIGGLYPUFF, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_6:
# 2729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_PORYGON, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_7:
# 2736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_MR_MIME, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_8:
# 2743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_EEVEE, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_9:
# 2750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_WOBBUFFET, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_10:
# 2757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_SNORLAX, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_11:
# 2764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_MIMIKYU, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_12:
# 2771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 1500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 1500
# 2773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1500
# 2776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_ROTOM, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1


MauvilleCity_GameCorner_EventScript_PokemonReceived::
# 2787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_PokemonReceived_Text_0
# 2789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_PokemonSentToPC::
# 2796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_PokemonSentToPC_Text_0
# 2798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NoRoomForPokemon::
# 2805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NoRoomForPokemon_Text_0
# 2807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_GimmighoulCheck::
# 2814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 2815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, 9999
	goto_if_eq MauvilleCity_GameCorner_GimmighoulCheck_2
MauvilleCity_GameCorner_GimmighoulCheck_1:
# 2818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 10
# 2819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_5, 1
# 2820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_GimmighoulCheck_2:
# 2816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addobject LOCALID_GIMMIGHOUL
	goto MauvilleCity_GameCorner_GimmighoulCheck_1


MauvilleCity_GameCorner_Gimmighoul::
# 2825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Gimmighoul_Text_0, MSGBOX_YESNO
# 2827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_GameCorner_Gimmighoul_2
# 2835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Gimmighoul_Text_2
MauvilleCity_GameCorner_Gimmighoul_1:
# 2837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_Gimmighoul_2:
# 2828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 9999
# 2829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Gimmighoul_Text_1
# 2830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setwildbattle SPECIES_GIMMIGHOUL, 10, ITEM_BIG_NUGGET
# 2831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removeobject LOCALID_GIMMIGHOUL
# 2832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dowildbattle
	goto MauvilleCity_GameCorner_Gimmighoul_1


MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_0:
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for coins?\p"
	.string "I'm sorry, but I can't sell any to you.\n"
	.string "Children are not allowed to gamble.$"

MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_1:
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh - you have coins already somehow?\p"
	.string "Well... I guess there is no rule against a\n"
	.string "child exchanging coins they already\l"
	.string "have for prizes.$"

MauvilleCity_GameCorner_EventScript_Scott_Text_0:
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Are you interested?$"

MauvilleCity_GameCorner_EventScript_Scott_Text_1:
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: I look forward to seeing what\n"
	.string "you can do!$"

MauvilleCity_GameCorner_EventScript_Scott_Text_2:
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: I hope to see you around!$"

MauvilleCity_GameCorner_EventScript_SlotMachine_Text_0:
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a slot machine. Unfortunately,\n"
	.string "they won't let children play.$"

Roulette_EventScript_Table_Text_0:
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a roulette table. Unfortunately,\n"
	.string "they won't let children play.$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_0:
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you need a Coin Case to\n"
	.string "purchase prizes.$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_1:
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which kind of prize would you like to\n"
	.string "purchase?$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_2:
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "One-Time Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_3:
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Held Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_4:
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Technical Machines$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_5:
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rare Battle Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_6:
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mega Stones$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_7:
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Training Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_8:
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Type Gems$"

MauvilleCity_GameCorner_EventScript_OutOfRareItems_Text_0:
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but it looks we're all out of\n"
	.string "rare battle items for now.\p"
	.string "Please come back later!$"

MauvilleCity_GameCorner_EventScript_NeedMegaRing_Text_0:
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but only Trainers in\n"
	.string "possession of a Mega Ring can purchase\l"
	.string "Mega Stones.\p"
	.string "Please come back later!$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_0:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Venusaur      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_1:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Venusaur X   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_2:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Charizard X  500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_3:
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Charizard Y  500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_4:
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blastoise     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_5:
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blastoise X  500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_6:
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Beedrill        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_7:
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Pidgeot        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_8:
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Alakazam      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_9:
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Slowbro         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_10:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Slowking       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_11:
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gengar          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_12:
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Kangaskhan  500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_13:
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Pinsir            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_14:
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gyarados       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_15:
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Aerodactyl    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_16:
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ampharos       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_17:
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Steelix          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_18:
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scizor            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_19:
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Heracross     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_20:
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Houndoom      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_21:
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tyranitar      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_22:
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sceptile        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_23:
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blaziken        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_24:
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Swampert      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_25:
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gardevoir     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_26:
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sableye        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_27:
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mawile          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_28:
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Aggron         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_29:
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Medicham      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_30:
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Manectric    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_31:
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sharpedo     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_32:
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Camerupt     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_33:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Altaria        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_34:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Banette       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_35:
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absol           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_36:
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Glalie           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_37:
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Salamence    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_38:
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Metagross    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_39:
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lopunny        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_40:
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Garchomp      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_41:
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lucario         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_42:
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Abomasnow    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_43:
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gallade         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_44:
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Audino          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_45:
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Clefable        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_46:
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Victreebel     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_47:
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Starmie          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_48:
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dragonite      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49:
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Meganium      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50:
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Feraligatr     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_51:
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Skarmory       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_52:
# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Froslass        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_53:
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Emboar           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_54:
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Excadrill       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_55:
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scolipede      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_56:
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scrafty          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_57:
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eelektross    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_58:
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chandelure    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_59:
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chesnaught   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_60:
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Delphox         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_61:
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Greninja        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_62:
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Pyroar           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_63:
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Malamar         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_64:
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Barbaracle    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_65:
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dragalge        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_66:
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hawlucha       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_67:
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Drampana       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_68:
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Falinks          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_69:
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Raichu X        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_70:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Raichu Y        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_71:
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chimecho       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_72:
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absol Z          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_73:
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Staraptor      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_74:
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Garchomp Z   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_75:
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lucario Z       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_76:
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Golurk           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_77:
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Meowstic       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_78:
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Crabominable 500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_79:
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Golisopod      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_80:
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scovillain     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_81:
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Baxcalibur    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_82:
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tatsugiri      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_83:
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Glimmora         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_84:
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Butterfree    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_85:
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Machamp        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_86:
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Kingler          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_87:
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lapras           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_88:
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Centiskorch   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_89:
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rillaboom       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_90:
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cinderace      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_91:
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Inteleon        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_92:
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Milotic           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_93:
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sunflora        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_94:
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flygon            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_95:
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Vikavolt        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_96:
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snorlax        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_97:
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Garbodor        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98:
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sandaconda      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99:
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Orbeetlite      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_100:
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Copperajite     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_101:
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nevermind$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_102:
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Mega Stone would you like?$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_103:
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to buy {STR_VAR_1} for\n"
	.string "{STR_VAR_2} coins. Is that correct?$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_104:
# 1833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_0:
# 1846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We only have one of each of these\n"
	.string "items, and they cost a whopping 1,250\l"
	.string "coins each.$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_1:
# 1849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Band$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_2:
# 1850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Scarf$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_3:
# 1851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Specs$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_4:
# 1852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Leftovers$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_5:
# 1853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Life Orb$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_6:
# 1854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Assault Vest$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_7:
# 1855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which item would you like for 1,250\n"
	.string "coins?$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_0:
# 1914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Normal Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_1:
# 1915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fighting Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_2:
# 1916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flying Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_3:
# 1917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Poison Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_4:
# 1918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ground Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_5:
# 1919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rock Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_6:
# 1920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bug Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_7:
# 1921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ghost Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_8:
# 1922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Steel Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_9:
# 1923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fire Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_10:
# 1924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Water Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_11:
# 1925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grass Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_12:
# 1926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Electric Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_13:
# 1927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_14:
# 1928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ice Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_15:
# 1929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dragon Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_16:
# 1930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dark Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_17:
# 1931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fairy Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_18:
# 1932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Gem you like to buy for 250 coins?$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_0:
# 1958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ability Shield   300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_1:
# 1959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bright Powder   200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_2:
# 1960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Clear Amulet     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_3:
# 1961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Covert Cloak    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_4:
# 1962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eviolite            300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_5:
# 1963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Expert Belt      450 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_6:
# 1964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flame Orb          200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_7:
# 1965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Heavy Boots     200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_8:
# 1966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "King's Rock       200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_9:
# 1967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lagging Tail      200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_10:
# 1968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Light Ball         300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_11:
# 1969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Light Clay         400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_12:
# 1970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Loaded Dice      300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_13:
# 1971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Metronome         300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_14:
# 1972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Protect Pads    300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_15:
# 1973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Punching Glove 300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_16:
# 1974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Quick Claw         200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_17:
# 1975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Safety Goggles 350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_18:
# 1976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scope Lens        250 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_19:
# 1977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Shed Shell          250 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_20:
# 1978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Shell Bell           350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_21:
# 1979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sticky Barb       350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_22:
# 1980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thick Club         300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_23:
# 1981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Toxic Orb           200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_24:
# 1982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Util. Umbrella    400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_25:
# 1983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wide Lens          400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_26:
# 1984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Zoom Lens          400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_27:
# 1985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which held item would you like?$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_0:
# 2199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Air Balloon       100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_1:
# 2200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Focus Sash       250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_2:
# 2201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mental Herb      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_3:
# 2202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Power Herb        150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_4:
# 2203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "White Herb        250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_5:
# 2204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mirror Herb       250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_6:
# 2205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Adrenaline Orb 250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_7:
# 2206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blunder Policy 100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_8:
# 2207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Weakness Plcy  150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_9:
# 2208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Throat Spray    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_10:
# 2209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eject Button    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_11:
# 2210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eject Pack        200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_12:
# 2211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Red Card            150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_13:
# 2212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absorb Bulb      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_14:
# 2213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cell Battery     100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_15:
# 2214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Luminous Moss  100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_16:
# 2215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snowball           100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_17:
# 2216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grassy Seed      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_18:
# 2217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Electric Seed   100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_19:
# 2218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Misty Seed        100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_20:
# 2219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic Seed    100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_21:
# 2220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which one-time use item would you like?$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_0:
# 2391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fire Punch        350 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_1:
# 2392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ice Punch         350 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_2:
# 2393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thunder Punch  350 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_3:
# 2394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thunderbolt       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_4:
# 2395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flamethrower    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_5:
# 2396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ice Beam           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_6:
# 2397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_7:
# 2398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bulk Up              400 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_8:
# 2399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Calm Mind           400 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_9:
# 2400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which TM would you like?$"

MauvilleCity_GameCorner_EventScript_ComeBackLater_Text_0:
# 2498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Please come back to exchange your\n"
	.string "coins for more prizes!$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_0:
# 2506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "HP Up        200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_1:
# 2507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Protein    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_2:
# 2508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Iron         100 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_3:
# 2509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Calcium    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_4:
# 2510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Zinc         100 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_5:
# 2511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Carbos     200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_6:
# 2512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "PP Max      200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_7:
# 2513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ability Capsule 500$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_8:
# 2514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which training item would you like?$"

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize_Text_0:
# 2594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "coins for that prize.\p"
	.string "Please choose something else, or come\n"
	.string "back after you've earned more coins.$"

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize_Text_0:
# 2603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "coins for one of our rare battle items.\l"
	.string "These cost 1,250 coins each.\p"
	.string "Please choose something else, or come\n"
	.string "back after you've earned more coins.$"

MauvilleCity_GameCorner_EventScript_BagFull_Text_0:
# 2611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but your bag is full.\p"
	.string "Please make some room and come back.$"

MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_0:
# 2626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which kind of Pokémon are you\n"
	.string "interested in?$"

MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_1:
# 2627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Starter Pokémon$"

MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_2:
# 2627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Prize Pokémon$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_0:
# 2643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bulbasaur        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_1:
# 2644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Charmander     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_2:
# 2645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Squirtle           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_3:
# 2646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chikorita         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_4:
# 2647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cyndaquil        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_5:
# 2648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Totodile          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_6:
# 2649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Treecko           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_7:
# 2650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Torchic            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_8:
# 2651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mudkip            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_9:
# 2652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Turtwig            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_10:
# 2653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chimchar         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_11:
# 2654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Piplup              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_12:
# 2655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snivy               500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_13:
# 2656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tepig               500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_14:
# 2657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oshawott         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_15:
# 2658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chespin            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_16:
# 2659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fennekin          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_17:
# 2660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Froakie             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_18:
# 2661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rowlet              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_19:
# 2662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Litten               500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_20:
# 2663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Popplio             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_21:
# 2664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grookey           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_22:
# 2665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scorbunny       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_23:
# 2666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sobble              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_24:
# 2667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sprigatito        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_25:
# 2668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fuecoco            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_26:
# 2669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Quaxly              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_27:
# 2670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Starter Pokémon would you like\n"
	.string "for 500 coins?$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28:
# 2679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to buy a {STR_VAR_1} for\n"
	.string "{STR_VAR_2} coins. Is that correct?$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_0:
# 2690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Abra                   600 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_1:
# 2691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Clefairy            400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_2:
# 2692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Jigglypuff        400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_3:
# 2693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Porygon             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_4:
# 2694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mr. Mime             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_5:
# 2695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eevee                750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_6:
# 2696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wobbuffet        750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_7:
# 2697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snorlax             750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_8:
# 2698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mimikyu             750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_9:
# 2699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rotom              1500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_10:
# 2700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Prize Pokémon would you like?$"

MauvilleCity_GameCorner_EventScript_PokemonReceived_Text_0:
# 2788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go! Take good care of your new\n"
	.string "Pokémon!$"

MauvilleCity_GameCorner_EventScript_PokemonSentToPC_Text_0:
# 2797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go! Your party was full, so it\n"
	.string "was sent to your PC.$"

MauvilleCity_GameCorner_EventScript_NoRoomForPokemon_Text_0:
# 2806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have any room\n"
	.string "for another Pokémon right now.\p"
	.string "Your party and PC boxes are all full!$"

MauvilleCity_GameCorner_Gimmighoul_Text_0:
# 2826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gimmighoul seems interested in your\n"
	.string "coins.\p"
	.string "Give all your coins away to Gimmighoul?$"

MauvilleCity_GameCorner_Gimmighoul_Text_1:
# 2829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You gave all your coins to Gimmighoul.\p"
	.string "Gimmighoul is excited!$"

MauvilleCity_GameCorner_Gimmighoul_Text_2:
# 2835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It seems like Gimmighoul will continue\n"
	.string "to follow after your coins.$"

MauvilleCity_GameCorner_Text_ScottIntro::
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: Ah, {PLAYER}, right?\p"
	.string "Unexpected place to run into you.\p"
	.string "Oh, you heard you can purchase new\n"
	.string "Pokémon and items here?\p"
	.string "That's right, but unfortunately, they\n"
	.string "won't let you play. Even though you're\l"
	.string "old enough to travel with your Pokémon,\l"
	.string "it would still be wildly irresponsible to\l"
	.string "let someone your age gamble.\p"
	.string "You seem a little disappointed.\n"
	.string "Hmmm... maybe I can help you out a little.\p"
	.string "I'm launching a new project, exhibition\n"
	.string "battles between trainers.\p"
	.string "If you were interested in\n"
	.string "participating, I could pay you in Game\l"
	.string "Corner Coins for every battle you win.$"

MauvilleCity_GameCorner_Text_ScottAgree::
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: Great! I've got another\n"
	.string "participant already lined up, so just\l"
	.string "come out to the Tower in Route 111\l"
	.string "whenever you're ready.\p"
	.string "You can take this Coin Case now.\n"
	.string "The more battles you win, the more Coins\l"
	.string "I'll give you.$"

MauvilleCity_GameCorner_Text_ScottDecline::
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: I understand, you seem busy.\n"
	.string "Well, take this Coin Case anyway.\p"
	.string "If you ever change your mind, come out\n"
	.string "to the Tower in Route 111 and you can\l"
	.string "earn some Coins.$"

MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay::
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The games at the Game Corner are only\n"
	.string "open to adults above a certain age.\p"
	.string "We don't want children to develop\n"
	.string "dangerous habits.$"
