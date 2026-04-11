# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	@ Game Corner prices
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_DOUBLE_TEAM_COINS, 1500
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_PSYCHIC_COINS, 3500
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_FLAMETHROWER_COINS, 4000
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_THUNDERBOLT_COINS, 4000
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_ICE_BEAM_COINS, 4000
# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS, 1000
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,  1000
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500, 10000
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
/*MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50 */
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TreeckoDoll::
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TorchicDoll::
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MudkipDoll::
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_NewTMPrizes
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//case 0, MauvilleCity_GameCorner_EventScript_TMDoubleTeam
# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TMPsychic
# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TMFlamethrower
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TMThunderbolt
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TMIceBeam
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMDoubleTeam::
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMPsychic::
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_PSYCHIC
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_PSYCHIC
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMFlamethrower::
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMThunderbolt::
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMIceBeam::
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTMPsychic
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam::
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_DOUBLE_TEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//checkitemspace ITEM_TM_DOUBLE_TEAM
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//additem ITEM_TM_DOUBLE_TEAM
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic::
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_PSYCHIC_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_PSYCHIC
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_PSYCHIC_COINS
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_PSYCHIC
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower::
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_FLAMETHROWER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_FLAMETHROWER
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_FLAMETHROWER_COINS
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_FLAMETHROWER
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt::
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_THUNDERBOLT_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_THUNDERBOLT
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_THUNDERBOLT_COINS
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_THUNDERBOLT
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam::
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_ICE_BEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_ICE_BEAM
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_ICE_BEAM_COINS
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_ICE_BEAM
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
/* MauvilleCity_GameCorner_EventScript_PokefanM::
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
 MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end */
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
/* MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
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
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
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
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
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
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
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
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
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
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
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
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
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
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
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
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
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
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
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
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	*/
# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some COINS for\n"
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a COIN CASE for\n"
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the COINS.$"
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for COINS?\p"
# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 COINS.\n"
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your COINS!$"
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "enough money…$"
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your COIN CASE is full.$"
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your COINS for\n"
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"
# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some COINS before\l"
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same DOLLS.\p"
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a COIN CASE.\p"
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some COINS!$"
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the GAME CORNER.$"
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your COINS if you're going to\n"
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
/* MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "COINS are needed to play here\n"
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the GAME CORNER.$" */
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the SLOTS.$"
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the REEL TIME\n"
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra COINS.$"
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the SLOTS.\p"
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more REEL TIME chances you get.\p"
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "REEL TIME chances…\p"
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 COINS, but it's\n"
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"

MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_0
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_gt MauvilleCity_GameCorner_EventScript_CoinsClerk_2
MauvilleCity_GameCorner_EventScript_CoinsClerk_1:
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_CoinsClerk_2:
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_1
	goto MauvilleCity_GameCorner_EventScript_CoinsClerk_1


MauvilleCity_GameCorner_EventScript_Scott::
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ScottIntro, MSGBOX_NPC
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Scott_Text_0, MSGBOX_YESNO
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_GameCorner_EventScript_Scott_2
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ScottDecline, MSGBOX_NPC
# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_COIN_CASE
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Scott_Text_2, MSGBOX_NPC
MauvilleCity_GameCorner_EventScript_Scott_1:
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_FACING
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case DIR_NORTH, MauvilleCity_GameCorner_EventScript_Scott_7
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case DIR_EAST, MauvilleCity_GameCorner_EventScript_Scott_8
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case DIR_WEST, MauvilleCity_GameCorner_EventScript_Scott_9
MauvilleCity_GameCorner_EventScript_Scott_5:
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removeobject LOCALID_GAMECORNER_SCOTT
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_Scott_2:
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ScottAgree, MSGBOX_NPC
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_COIN_CASE
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Scott_Text_1, MSGBOX_NPC
	goto MauvilleCity_GameCorner_EventScript_Scott_1

MauvilleCity_GameCorner_EventScript_Scott_7:
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAMECORNER_SCOTT, MauvilleCity_GameCorner_Movement_ScottLeaveLeft
	goto MauvilleCity_GameCorner_EventScript_Scott_5

MauvilleCity_GameCorner_EventScript_Scott_8:
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAMECORNER_SCOTT, MauvilleCity_GameCorner_Movement_ScottLeave
	goto MauvilleCity_GameCorner_EventScript_Scott_5

MauvilleCity_GameCorner_EventScript_Scott_9:
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAMECORNER_SCOTT, MauvilleCity_GameCorner_Movement_ScottLeave
	goto MauvilleCity_GameCorner_EventScript_Scott_5


# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Movement_ScottLeave:
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
	step_end

# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Movement_ScottLeaveLeft:
# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_left
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_right
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
	step_end

MauvilleCity_GameCorner_EventScript_SlotMachine::
# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_SlotMachine_Text_0
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


Roulette_EventScript_Table::
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Roulette_EventScript_Table_Text_0
# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes::
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_2
# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_1, MSGBOX_DEFAULT
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 25, 2, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_2, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_3, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_4, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_5, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_6, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_7, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_8
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_6
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_7
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_8
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_9
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_10
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_11
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_12
# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4:
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_2:
# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_0, MSGBOX_DEFAULT
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_6:
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_7:
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_8:
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMs
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_9:
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_10:
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_11:
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_12:
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyGems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4


MauvilleCity_GameCorner_EventScript_OutOfRareItems::
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_OutOfRareItems_Text_0
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


MauvilleCity_GameCorner_EventScript_NeedMegaRing::
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NeedMegaRing_Text_0
# 937 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
	checkitem ITEM_VENUSAURITE_Z
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
	checkitem ITEM_BLASTOISINITE_Z
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
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_96, ITEM_NONE
# 1055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_97, MSGBOX_DEFAULT
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 1, DYN_MULTICHOICE_CB_NONE
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_NONE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_486
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VENUSAURITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_487
# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VENUSAURITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_488
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHARIZARDITE_X, MauvilleCity_GameCorner_EventScript_BuyMegaStones_489
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHARIZARDITE_Y, MauvilleCity_GameCorner_EventScript_BuyMegaStones_490
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLASTOISINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_491
# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLASTOISINITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_492
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BEEDRILLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_493
# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PIDGEOTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_494
# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ALAKAZITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_495
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SLOWBRONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_496
# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SLOWKINGITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_497
# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GENGARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_498
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_KANGASKHANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_499
# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PINSIRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_500
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GYARADOSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_501
# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AERODACTYLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_502
# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AMPHAROSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_503
# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STEELIXITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_504
# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCIZORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_505
# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HERACRONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_506
# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HOUNDOOMINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_507
# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TYRANITARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_508
# 1222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCEPTILITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_509
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLAZIKENITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_510
# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SWAMPERTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_511
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GARDEVOIRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_512
# 1250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SABLENITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_513
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MAWILITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_514
# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AGGRONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_515
# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MEDICHAMITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_516
# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MANECTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_517
# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHARPEDONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_518
# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CAMERUPTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_519
# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ALTARIANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_520
# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BANETTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_521
# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABSOLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_522
# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GLALITITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_523
# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SALAMENCITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_524
# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_METAGROSSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_525
# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LATIASITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_526
# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LATIOSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_527
# 1355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LOPUNNITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_528
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GARCHOMPITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_529
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LUCARIONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_530
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABOMASITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_531
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GALLADITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_532
# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AUDINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_533
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DIANCITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_534
# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CLEFABLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_535
# 1411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VICTREEBELITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_536
# 1418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STARMINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_537
# 1425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DRAGONINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_538
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MEGANIUMITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_539
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FERALIGITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_540
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SKARMORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_541
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FROSLASSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_542
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EMBOARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_543
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EXCADRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_544
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCOLIPITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_545
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCRAFTINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_546
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EELEKTROSSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_547
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHANDELURITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_548
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHESNAUGHTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_549
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DELPHOXITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_550
# 1516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GRENINJITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_551
# 1523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PYROARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_552
# 1530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FLOETTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_553
# 1537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MALAMARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_554
# 1544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BARBARACITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_555
# 1551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DRAGALGITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_556
# 1558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HAWLUCHANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_557
# 1565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZYGARDITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_558
# 1572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DRAMPANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_559
# 1579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FALINKSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_560
# 1586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HEATRANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_561
# 1593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DARKRANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_562
# 1600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZERAORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_563
# 1607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RAICHUNITE_X, MauvilleCity_GameCorner_EventScript_BuyMegaStones_564
# 1614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RAICHUNITE_Y, MauvilleCity_GameCorner_EventScript_BuyMegaStones_565
# 1621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHIMECHITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_566
# 1628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABSOLITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_567
# 1635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STARAPTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_568
# 1642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GARCHOMPITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_569
# 1649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LUCARIONITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_570
# 1656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GOLURKITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_571
# 1663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MEOWSTICITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_572
# 1670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CRABOMINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_573
# 1677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GOLISOPITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_574
# 1684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MAGEARNITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_575
# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCOVILLAINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_576
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BAXCALIBRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_577
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TATSUGIRINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_578
# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GLIMMORANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_579
# 1719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BUTTERFRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_580
# 1726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MACHAMPITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_581
# 1733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_KINGLERITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_582
# 1740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LAPRASITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_583
# 1747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CENTISKORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_584
# 1754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TYPHLOSIONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_585
# 1761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RILLABOOMITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_586
# 1768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CINDERACITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_587
# 1775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_INTELEONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_588
# 1782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MILOTICITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_589
# 1789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SUNFLORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_590
# 1796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FLYGONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_591
# 1803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VIKAVOLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_592
# 1812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyMegaStones_484:
# 1815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99
# 1818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyMegaStones_2:
# 944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NeedMegaRing
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_1

MauvilleCity_GameCorner_EventScript_BuyMegaStones_5:
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_0, ITEM_VENUSAURITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_4

MauvilleCity_GameCorner_EventScript_BuyMegaStones_6:
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_5
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_4

MauvilleCity_GameCorner_EventScript_BuyMegaStones_10:
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_1, ITEM_VENUSAURITE_Z
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_9

MauvilleCity_GameCorner_EventScript_BuyMegaStones_11:
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_10
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_9

MauvilleCity_GameCorner_EventScript_BuyMegaStones_15:
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_2, ITEM_CHARIZARDITE_X
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_14

MauvilleCity_GameCorner_EventScript_BuyMegaStones_16:
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_15
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_14

MauvilleCity_GameCorner_EventScript_BuyMegaStones_20:
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_3, ITEM_CHARIZARDITE_Y
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_19

MauvilleCity_GameCorner_EventScript_BuyMegaStones_21:
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_GameCorner_EventScript_BuyMegaStones_20
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_19

MauvilleCity_GameCorner_EventScript_BuyMegaStones_25:
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_4, ITEM_BLASTOISINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_24

MauvilleCity_GameCorner_EventScript_BuyMegaStones_26:
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_25
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_24

MauvilleCity_GameCorner_EventScript_BuyMegaStones_30:
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_5, ITEM_BLASTOISINITE_Z
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_29

MauvilleCity_GameCorner_EventScript_BuyMegaStones_31:
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_30
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_29

MauvilleCity_GameCorner_EventScript_BuyMegaStones_35:
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_6, ITEM_BEEDRILLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_34

MauvilleCity_GameCorner_EventScript_BuyMegaStones_36:
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_35
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_34

MauvilleCity_GameCorner_EventScript_BuyMegaStones_40:
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_7, ITEM_PIDGEOTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_39

MauvilleCity_GameCorner_EventScript_BuyMegaStones_41:
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_40
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_39

MauvilleCity_GameCorner_EventScript_BuyMegaStones_45:
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_8, ITEM_ALAKAZITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_44

MauvilleCity_GameCorner_EventScript_BuyMegaStones_46:
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_45
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_44

MauvilleCity_GameCorner_EventScript_BuyMegaStones_50:
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_9, ITEM_SLOWBRONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_49

MauvilleCity_GameCorner_EventScript_BuyMegaStones_51:
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_50
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_49

MauvilleCity_GameCorner_EventScript_BuyMegaStones_55:
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_10, ITEM_SLOWKINGITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_54

MauvilleCity_GameCorner_EventScript_BuyMegaStones_56:
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_55
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_54

MauvilleCity_GameCorner_EventScript_BuyMegaStones_60:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_11, ITEM_GENGARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_59

MauvilleCity_GameCorner_EventScript_BuyMegaStones_61:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_60
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_59

MauvilleCity_GameCorner_EventScript_BuyMegaStones_65:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_12, ITEM_KANGASKHANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_64

MauvilleCity_GameCorner_EventScript_BuyMegaStones_66:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_65
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_64

MauvilleCity_GameCorner_EventScript_BuyMegaStones_70:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_13, ITEM_PINSIRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_69

MauvilleCity_GameCorner_EventScript_BuyMegaStones_71:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_70
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_69

MauvilleCity_GameCorner_EventScript_BuyMegaStones_75:
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_14, ITEM_GYARADOSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_74

MauvilleCity_GameCorner_EventScript_BuyMegaStones_76:
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_75
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_74

MauvilleCity_GameCorner_EventScript_BuyMegaStones_80:
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_15, ITEM_AERODACTYLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_79

MauvilleCity_GameCorner_EventScript_BuyMegaStones_81:
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_80
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_79

MauvilleCity_GameCorner_EventScript_BuyMegaStones_85:
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_16, ITEM_AMPHAROSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_84

MauvilleCity_GameCorner_EventScript_BuyMegaStones_86:
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_85
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_84

MauvilleCity_GameCorner_EventScript_BuyMegaStones_90:
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_17, ITEM_STEELIXITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_89

MauvilleCity_GameCorner_EventScript_BuyMegaStones_91:
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_90
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_89

MauvilleCity_GameCorner_EventScript_BuyMegaStones_95:
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_18, ITEM_SCIZORITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_94

MauvilleCity_GameCorner_EventScript_BuyMegaStones_96:
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_95
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_94

MauvilleCity_GameCorner_EventScript_BuyMegaStones_100:
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_19, ITEM_HERACRONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_99

MauvilleCity_GameCorner_EventScript_BuyMegaStones_101:
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_100
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_99

MauvilleCity_GameCorner_EventScript_BuyMegaStones_105:
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_20, ITEM_HOUNDOOMINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_104

MauvilleCity_GameCorner_EventScript_BuyMegaStones_106:
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_105
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_104

MauvilleCity_GameCorner_EventScript_BuyMegaStones_110:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_21, ITEM_TYRANITARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_109

MauvilleCity_GameCorner_EventScript_BuyMegaStones_111:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_GameCorner_EventScript_BuyMegaStones_110
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_109

MauvilleCity_GameCorner_EventScript_BuyMegaStones_115:
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_22, ITEM_SCEPTILITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_114

MauvilleCity_GameCorner_EventScript_BuyMegaStones_116:
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_115
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_114

MauvilleCity_GameCorner_EventScript_BuyMegaStones_120:
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_23, ITEM_BLAZIKENITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_119

MauvilleCity_GameCorner_EventScript_BuyMegaStones_121:
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_120
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_119

MauvilleCity_GameCorner_EventScript_BuyMegaStones_125:
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_24, ITEM_SWAMPERTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_124

MauvilleCity_GameCorner_EventScript_BuyMegaStones_126:
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_125
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_124

MauvilleCity_GameCorner_EventScript_BuyMegaStones_130:
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_25, ITEM_GARDEVOIRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_129

MauvilleCity_GameCorner_EventScript_BuyMegaStones_131:
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_130
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_129

MauvilleCity_GameCorner_EventScript_BuyMegaStones_135:
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_26, ITEM_SABLENITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_134

MauvilleCity_GameCorner_EventScript_BuyMegaStones_136:
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_135
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_134

MauvilleCity_GameCorner_EventScript_BuyMegaStones_140:
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_27, ITEM_MAWILITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_139

MauvilleCity_GameCorner_EventScript_BuyMegaStones_141:
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_140
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_139

MauvilleCity_GameCorner_EventScript_BuyMegaStones_145:
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_28, ITEM_AGGRONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_144

MauvilleCity_GameCorner_EventScript_BuyMegaStones_146:
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_145
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_144

MauvilleCity_GameCorner_EventScript_BuyMegaStones_150:
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_29, ITEM_MEDICHAMITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_149

MauvilleCity_GameCorner_EventScript_BuyMegaStones_151:
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_150
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_149

MauvilleCity_GameCorner_EventScript_BuyMegaStones_155:
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_30, ITEM_MANECTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_154

MauvilleCity_GameCorner_EventScript_BuyMegaStones_156:
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_155
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_154

MauvilleCity_GameCorner_EventScript_BuyMegaStones_160:
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_31, ITEM_SHARPEDONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_159

MauvilleCity_GameCorner_EventScript_BuyMegaStones_161:
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_160
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_159

MauvilleCity_GameCorner_EventScript_BuyMegaStones_165:
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_32, ITEM_CAMERUPTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_164

MauvilleCity_GameCorner_EventScript_BuyMegaStones_166:
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_165
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_164

MauvilleCity_GameCorner_EventScript_BuyMegaStones_170:
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_33, ITEM_ALTARIANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_169

MauvilleCity_GameCorner_EventScript_BuyMegaStones_171:
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_170
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_169

MauvilleCity_GameCorner_EventScript_BuyMegaStones_175:
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_34, ITEM_BANETTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_174

MauvilleCity_GameCorner_EventScript_BuyMegaStones_176:
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_175
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_174

MauvilleCity_GameCorner_EventScript_BuyMegaStones_180:
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_35, ITEM_ABSOLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_179

MauvilleCity_GameCorner_EventScript_BuyMegaStones_181:
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_180
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_179

MauvilleCity_GameCorner_EventScript_BuyMegaStones_185:
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_36, ITEM_GLALITITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_184

MauvilleCity_GameCorner_EventScript_BuyMegaStones_186:
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_185
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_184

MauvilleCity_GameCorner_EventScript_BuyMegaStones_190:
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_37, ITEM_SALAMENCITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_189

MauvilleCity_GameCorner_EventScript_BuyMegaStones_191:
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_190
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_189

MauvilleCity_GameCorner_EventScript_BuyMegaStones_195:
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_38, ITEM_METAGROSSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_194

MauvilleCity_GameCorner_EventScript_BuyMegaStones_196:
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_195
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_194

MauvilleCity_GameCorner_EventScript_BuyMegaStones_200:
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_39, ITEM_LOPUNNITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_199

MauvilleCity_GameCorner_EventScript_BuyMegaStones_201:
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_200
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_199

MauvilleCity_GameCorner_EventScript_BuyMegaStones_205:
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_40, ITEM_GARCHOMPITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_204

MauvilleCity_GameCorner_EventScript_BuyMegaStones_206:
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_205
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_204

MauvilleCity_GameCorner_EventScript_BuyMegaStones_210:
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_41, ITEM_LUCARIONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_209

MauvilleCity_GameCorner_EventScript_BuyMegaStones_211:
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_210
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_209

MauvilleCity_GameCorner_EventScript_BuyMegaStones_215:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_42, ITEM_ABOMASITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_214

MauvilleCity_GameCorner_EventScript_BuyMegaStones_216:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_GameCorner_EventScript_BuyMegaStones_215
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_214

MauvilleCity_GameCorner_EventScript_BuyMegaStones_220:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_43, ITEM_GALLADITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_219

MauvilleCity_GameCorner_EventScript_BuyMegaStones_221:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_220
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_219

MauvilleCity_GameCorner_EventScript_BuyMegaStones_225:
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_44, ITEM_AUDINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_224

MauvilleCity_GameCorner_EventScript_BuyMegaStones_226:
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_225
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_224

MauvilleCity_GameCorner_EventScript_BuyMegaStones_230:
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_45, ITEM_CLEFABLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_229

MauvilleCity_GameCorner_EventScript_BuyMegaStones_231:
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_230
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_229

MauvilleCity_GameCorner_EventScript_BuyMegaStones_235:
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_46, ITEM_VICTREEBELITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_234

MauvilleCity_GameCorner_EventScript_BuyMegaStones_236:
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_235
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_234

MauvilleCity_GameCorner_EventScript_BuyMegaStones_240:
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_47, ITEM_STARMINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_239

MauvilleCity_GameCorner_EventScript_BuyMegaStones_241:
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_240
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_239

MauvilleCity_GameCorner_EventScript_BuyMegaStones_245:
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_48, ITEM_DRAGONINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_246:
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_245
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_250:
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, ITEM_MEGANIUMITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_249

MauvilleCity_GameCorner_EventScript_BuyMegaStones_251:
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_250
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_249

MauvilleCity_GameCorner_EventScript_BuyMegaStones_255:
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50, ITEM_FERALIGITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_254

MauvilleCity_GameCorner_EventScript_BuyMegaStones_256:
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_255
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_254

MauvilleCity_GameCorner_EventScript_BuyMegaStones_260:
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_51, ITEM_SKARMORITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_259

MauvilleCity_GameCorner_EventScript_BuyMegaStones_261:
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_260
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_259

MauvilleCity_GameCorner_EventScript_BuyMegaStones_265:
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_52, ITEM_FROSLASSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_264

MauvilleCity_GameCorner_EventScript_BuyMegaStones_266:
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MauvilleCity_GameCorner_EventScript_BuyMegaStones_265
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_264

MauvilleCity_GameCorner_EventScript_BuyMegaStones_270:
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_53, ITEM_EMBOARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_269

MauvilleCity_GameCorner_EventScript_BuyMegaStones_271:
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_270
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_269

MauvilleCity_GameCorner_EventScript_BuyMegaStones_275:
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_54, ITEM_EXCADRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_274

MauvilleCity_GameCorner_EventScript_BuyMegaStones_276:
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_275
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_274

MauvilleCity_GameCorner_EventScript_BuyMegaStones_280:
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_55, ITEM_SCOLIPITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_279

MauvilleCity_GameCorner_EventScript_BuyMegaStones_281:
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_280
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_279

MauvilleCity_GameCorner_EventScript_BuyMegaStones_285:
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_56, ITEM_SCRAFTINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_284

MauvilleCity_GameCorner_EventScript_BuyMegaStones_286:
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_285
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_284

MauvilleCity_GameCorner_EventScript_BuyMegaStones_290:
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_57, ITEM_EELEKTROSSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_289

MauvilleCity_GameCorner_EventScript_BuyMegaStones_291:
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_290
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_289

MauvilleCity_GameCorner_EventScript_BuyMegaStones_295:
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_58, ITEM_CHANDELURITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_294

MauvilleCity_GameCorner_EventScript_BuyMegaStones_296:
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_295
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_294

MauvilleCity_GameCorner_EventScript_BuyMegaStones_300:
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_59, ITEM_CHESNAUGHTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_299

MauvilleCity_GameCorner_EventScript_BuyMegaStones_301:
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_300
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_299

MauvilleCity_GameCorner_EventScript_BuyMegaStones_305:
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_60, ITEM_DELPHOXITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_304

MauvilleCity_GameCorner_EventScript_BuyMegaStones_306:
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_305
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_304

MauvilleCity_GameCorner_EventScript_BuyMegaStones_310:
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_61, ITEM_GRENINJITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_309

MauvilleCity_GameCorner_EventScript_BuyMegaStones_311:
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_310
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_309

MauvilleCity_GameCorner_EventScript_BuyMegaStones_315:
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_62, ITEM_PYROARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_314

MauvilleCity_GameCorner_EventScript_BuyMegaStones_316:
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_315
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_314

MauvilleCity_GameCorner_EventScript_BuyMegaStones_320:
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_63, ITEM_MALAMARITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_319

MauvilleCity_GameCorner_EventScript_BuyMegaStones_321:
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_320
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_319

MauvilleCity_GameCorner_EventScript_BuyMegaStones_325:
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_64, ITEM_BARBARACITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_324

MauvilleCity_GameCorner_EventScript_BuyMegaStones_326:
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_325
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_324

MauvilleCity_GameCorner_EventScript_BuyMegaStones_330:
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_65, ITEM_DRAGALGITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_329

MauvilleCity_GameCorner_EventScript_BuyMegaStones_331:
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_330
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_329

MauvilleCity_GameCorner_EventScript_BuyMegaStones_335:
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_66, ITEM_HAWLUCHANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_334

MauvilleCity_GameCorner_EventScript_BuyMegaStones_336:
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_335
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_334

MauvilleCity_GameCorner_EventScript_BuyMegaStones_340:
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_67, ITEM_DRAMPANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_339

MauvilleCity_GameCorner_EventScript_BuyMegaStones_341:
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_340
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_339

MauvilleCity_GameCorner_EventScript_BuyMegaStones_345:
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_68, ITEM_FALINKSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_344

MauvilleCity_GameCorner_EventScript_BuyMegaStones_346:
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_345
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_344

MauvilleCity_GameCorner_EventScript_BuyMegaStones_350:
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_69, ITEM_RAICHUNITE_X
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_349

MauvilleCity_GameCorner_EventScript_BuyMegaStones_351:
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_350
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_349

MauvilleCity_GameCorner_EventScript_BuyMegaStones_355:
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_70, ITEM_RAICHUNITE_Y
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_354

MauvilleCity_GameCorner_EventScript_BuyMegaStones_356:
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_355
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_354

MauvilleCity_GameCorner_EventScript_BuyMegaStones_360:
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_71, ITEM_CHIMECHITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_359

MauvilleCity_GameCorner_EventScript_BuyMegaStones_361:
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_360
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_359

MauvilleCity_GameCorner_EventScript_BuyMegaStones_365:
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_72, ITEM_ABSOLITE_Z
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_364

MauvilleCity_GameCorner_EventScript_BuyMegaStones_366:
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_365
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_364

MauvilleCity_GameCorner_EventScript_BuyMegaStones_370:
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_73, ITEM_STARAPTITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_369

MauvilleCity_GameCorner_EventScript_BuyMegaStones_371:
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_370
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_369

MauvilleCity_GameCorner_EventScript_BuyMegaStones_375:
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_74, ITEM_GARCHOMPITE_Z
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_374

MauvilleCity_GameCorner_EventScript_BuyMegaStones_376:
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_375
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_374

MauvilleCity_GameCorner_EventScript_BuyMegaStones_380:
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_75, ITEM_LUCARIONITE_Z
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_379

MauvilleCity_GameCorner_EventScript_BuyMegaStones_381:
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_380
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_379

MauvilleCity_GameCorner_EventScript_BuyMegaStones_385:
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_76, ITEM_GOLURKITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_384

MauvilleCity_GameCorner_EventScript_BuyMegaStones_386:
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_385
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_384

MauvilleCity_GameCorner_EventScript_BuyMegaStones_390:
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_77, ITEM_MEOWSTICITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_389

MauvilleCity_GameCorner_EventScript_BuyMegaStones_391:
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_390
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_389

MauvilleCity_GameCorner_EventScript_BuyMegaStones_395:
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_78, ITEM_CRABOMINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_394

MauvilleCity_GameCorner_EventScript_BuyMegaStones_396:
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_395
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_394

MauvilleCity_GameCorner_EventScript_BuyMegaStones_400:
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_79, ITEM_GOLISOPITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_399

MauvilleCity_GameCorner_EventScript_BuyMegaStones_401:
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_400
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_399

MauvilleCity_GameCorner_EventScript_BuyMegaStones_405:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_80, ITEM_SCOVILLAINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_404

MauvilleCity_GameCorner_EventScript_BuyMegaStones_406:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_405
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_404

MauvilleCity_GameCorner_EventScript_BuyMegaStones_410:
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_81, ITEM_BAXCALIBRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_409

MauvilleCity_GameCorner_EventScript_BuyMegaStones_411:
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_410
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_409

MauvilleCity_GameCorner_EventScript_BuyMegaStones_415:
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_82, ITEM_TATSUGIRINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_414

MauvilleCity_GameCorner_EventScript_BuyMegaStones_416:
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_415
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_414

MauvilleCity_GameCorner_EventScript_BuyMegaStones_420:
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_83, ITEM_GLIMMORANITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_419

MauvilleCity_GameCorner_EventScript_BuyMegaStones_421:
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_420
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_419

MauvilleCity_GameCorner_EventScript_BuyMegaStones_425:
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_84, ITEM_BUTTERFRITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_424

MauvilleCity_GameCorner_EventScript_BuyMegaStones_426:
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_425
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_424

MauvilleCity_GameCorner_EventScript_BuyMegaStones_430:
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_85, ITEM_MACHAMPITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_429

MauvilleCity_GameCorner_EventScript_BuyMegaStones_431:
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_430
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_429

MauvilleCity_GameCorner_EventScript_BuyMegaStones_435:
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_86, ITEM_KINGLERITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_434

MauvilleCity_GameCorner_EventScript_BuyMegaStones_436:
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_435
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_434

MauvilleCity_GameCorner_EventScript_BuyMegaStones_440:
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_87, ITEM_LAPRASITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_439

MauvilleCity_GameCorner_EventScript_BuyMegaStones_441:
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_440
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_439

MauvilleCity_GameCorner_EventScript_BuyMegaStones_445:
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_88, ITEM_CENTISKORITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_444

MauvilleCity_GameCorner_EventScript_BuyMegaStones_446:
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_445
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_444

MauvilleCity_GameCorner_EventScript_BuyMegaStones_450:
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_89, ITEM_RILLABOOMITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_449

MauvilleCity_GameCorner_EventScript_BuyMegaStones_451:
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_450
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_449

MauvilleCity_GameCorner_EventScript_BuyMegaStones_455:
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_90, ITEM_CINDERACITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_454

MauvilleCity_GameCorner_EventScript_BuyMegaStones_456:
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_455
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_454

MauvilleCity_GameCorner_EventScript_BuyMegaStones_460:
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_91, ITEM_INTELEONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_459

MauvilleCity_GameCorner_EventScript_BuyMegaStones_461:
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_460
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_459

MauvilleCity_GameCorner_EventScript_BuyMegaStones_465:
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_92, ITEM_MILOTICITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_464

MauvilleCity_GameCorner_EventScript_BuyMegaStones_466:
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_465
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_464

MauvilleCity_GameCorner_EventScript_BuyMegaStones_470:
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_93, ITEM_SUNFLORITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_469

MauvilleCity_GameCorner_EventScript_BuyMegaStones_471:
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_470
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_469

MauvilleCity_GameCorner_EventScript_BuyMegaStones_475:
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_94, ITEM_FLYGONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_474

MauvilleCity_GameCorner_EventScript_BuyMegaStones_476:
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_475
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_474

MauvilleCity_GameCorner_EventScript_BuyMegaStones_480:
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_95, ITEM_VIKAVOLITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_479

MauvilleCity_GameCorner_EventScript_BuyMegaStones_481:
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_480
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_479

MauvilleCity_GameCorner_EventScript_BuyMegaStones_486:
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_487:
# 1069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_488:
# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_489:
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_490:
# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_491:
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_492:
# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_493:
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_494:
# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_495:
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_496:
# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_497:
# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_498:
# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_499:
# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_500:
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_501:
# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_502:
# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_503:
# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_504:
# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_505:
# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_506:
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_507:
# 1209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_508:
# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_509:
# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_510:
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_511:
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_512:
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_513:
# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_514:
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_515:
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_516:
# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_517:
# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_518:
# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_519:
# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_520:
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_521:
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_522:
# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_523:
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_524:
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_525:
# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_526:
# 1342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_527:
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_528:
# 1356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_529:
# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_530:
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_531:
# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_532:
# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_533:
# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_534:
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_535:
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_536:
# 1412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_537:
# 1419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_538:
# 1426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_539:
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_540:
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_541:
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_542:
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_543:
# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_544:
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_545:
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_546:
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_547:
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_548:
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_549:
# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_550:
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_551:
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_552:
# 1524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_553:
# 1531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_554:
# 1538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_555:
# 1545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_556:
# 1552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_557:
# 1559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_558:
# 1566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_559:
# 1573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_560:
# 1580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_561:
# 1587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_562:
# 1594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_563:
# 1601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_564:
# 1608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_565:
# 1615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_566:
# 1622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_567:
# 1629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_568:
# 1636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_569:
# 1643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_570:
# 1650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_571:
# 1657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_572:
# 1664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_573:
# 1671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_574:
# 1678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_575:
# 1685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_576:
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_577:
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_578:
# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_579:
# 1713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_580:
# 1720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_581:
# 1727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_582:
# 1734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_583:
# 1741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_584:
# 1748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_585:
# 1755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_586:
# 1762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_587:
# 1769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_588:
# 1776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_589:
# 1783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_590:
# 1790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_591:
# 1797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484

MauvilleCity_GameCorner_EventScript_BuyMegaStones_592:
# 1804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_484


MauvilleCity_GameCorner_EventScript_BuyRareBattleItems::
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_4
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1:
# 1828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 1250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize
# 1830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_0, MSGBOX_DEFAULT
# 1831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 1250
# 1833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_15
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_14:
# 1834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_18
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_17:
# 1835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_21
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_20:
# 1836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_24
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_23:
# 1837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_27
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_26:
# 1838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_30
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_29:
# 1839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_7, MSGBOX_DEFAULT
# 1840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_34
# 1853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_35
# 1859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_36
# 1865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_37
# 1871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_38
# 1877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_39
# 1884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32:
# 1887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99
# 1890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_2:
# 1826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_OutOfRareItems
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_3:
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_8
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_4:
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_3
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_7:
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_11
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_8:
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_7
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_11:
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_2
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_15:
# 1833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_1, ITEM_CHOICE_BAND
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_14

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_18:
# 1834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_2, ITEM_CHOICE_SCARF
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_17

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_21:
# 1835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_3, ITEM_CHOICE_SPECS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_20

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_24:
# 1836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_4, ITEM_LEFTOVERS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_23

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_27:
# 1837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_5, ITEM_LIFE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_26

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_30:
# 1838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_6, ITEM_ASSAULT_VEST
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_29

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_34:
# 1848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_BAND
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_35:
# 1854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_SCARF
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_36:
# 1860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_SPECS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_37:
# 1866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_LEFTOVERS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_38:
# 1872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_LIFE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_39:
# 1878 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_ASSAULT_VEST
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32


MauvilleCity_GameCorner_EventScript_BuyGems::
# 1897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_2
MauvilleCity_GameCorner_EventScript_BuyGems_1:
# 1899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_5
MauvilleCity_GameCorner_EventScript_BuyGems_4:
# 1900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_8
MauvilleCity_GameCorner_EventScript_BuyGems_7:
# 1901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_11
MauvilleCity_GameCorner_EventScript_BuyGems_10:
# 1902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_14
MauvilleCity_GameCorner_EventScript_BuyGems_13:
# 1903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_17
MauvilleCity_GameCorner_EventScript_BuyGems_16:
# 1904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_20
MauvilleCity_GameCorner_EventScript_BuyGems_19:
# 1905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_23
MauvilleCity_GameCorner_EventScript_BuyGems_22:
# 1906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_26
MauvilleCity_GameCorner_EventScript_BuyGems_25:
# 1907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_29
MauvilleCity_GameCorner_EventScript_BuyGems_28:
# 1908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_32
MauvilleCity_GameCorner_EventScript_BuyGems_31:
# 1909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_35
MauvilleCity_GameCorner_EventScript_BuyGems_34:
# 1910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_38
MauvilleCity_GameCorner_EventScript_BuyGems_37:
# 1911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_41
MauvilleCity_GameCorner_EventScript_BuyGems_40:
# 1912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_44
MauvilleCity_GameCorner_EventScript_BuyGems_43:
# 1913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_47
MauvilleCity_GameCorner_EventScript_BuyGems_46:
# 1914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_50
MauvilleCity_GameCorner_EventScript_BuyGems_49:
# 1915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_53
MauvilleCity_GameCorner_EventScript_BuyGems_52:
# 1916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyGems_Text_18, MSGBOX_DEFAULT
# 1917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99
# 1934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyGems_2:
# 1898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_0, ITEM_NORMAL_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_1

MauvilleCity_GameCorner_EventScript_BuyGems_5:
# 1899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_1, ITEM_FIGHTING_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_4

MauvilleCity_GameCorner_EventScript_BuyGems_8:
# 1900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_2, ITEM_FLYING_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_7

MauvilleCity_GameCorner_EventScript_BuyGems_11:
# 1901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_3, ITEM_POISON_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_10

MauvilleCity_GameCorner_EventScript_BuyGems_14:
# 1902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_4, ITEM_GROUND_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_13

MauvilleCity_GameCorner_EventScript_BuyGems_17:
# 1903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_5, ITEM_ROCK_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_16

MauvilleCity_GameCorner_EventScript_BuyGems_20:
# 1904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_6, ITEM_BUG_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_19

MauvilleCity_GameCorner_EventScript_BuyGems_23:
# 1905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_7, ITEM_GHOST_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_22

MauvilleCity_GameCorner_EventScript_BuyGems_26:
# 1906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_8, ITEM_STEEL_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_25

MauvilleCity_GameCorner_EventScript_BuyGems_29:
# 1907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_9, ITEM_FIRE_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_28

MauvilleCity_GameCorner_EventScript_BuyGems_32:
# 1908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_10, ITEM_WATER_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_31

MauvilleCity_GameCorner_EventScript_BuyGems_35:
# 1909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_11, ITEM_GRASS_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_34

MauvilleCity_GameCorner_EventScript_BuyGems_38:
# 1910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_12, ITEM_ELECTRIC_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_37

MauvilleCity_GameCorner_EventScript_BuyGems_41:
# 1911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_13, ITEM_PSYCHIC_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_40

MauvilleCity_GameCorner_EventScript_BuyGems_44:
# 1912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_14, ITEM_ICE_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_43

MauvilleCity_GameCorner_EventScript_BuyGems_47:
# 1913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_15, ITEM_DRAGON_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_46

MauvilleCity_GameCorner_EventScript_BuyGems_50:
# 1914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_16, ITEM_DARK_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_49

MauvilleCity_GameCorner_EventScript_BuyGems_53:
# 1915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_17, ITEM_FAIRY_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_52


MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems::
# 1941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_2
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_1:
# 1943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_5
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_4:
# 1944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_8
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_7:
# 1945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_11
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_10:
# 1946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_14
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_13:
# 1947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_17
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_16:
# 1948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_20
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_19:
# 1949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_23
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_22:
# 1950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_26
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_25:
# 1951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_29
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_28:
# 1952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_32
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_31:
# 1953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_35
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_34:
# 1954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_38
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_37:
# 1955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_41
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_40:
# 1956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_44
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_43:
# 1957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_47
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_46:
# 1958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_50
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_49:
# 1959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_53
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_52:
# 1960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_56
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_55:
# 1961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_59
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_58:
# 1962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_62
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_61:
# 1963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_65
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_64:
# 1964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_68
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_67:
# 1965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_71
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70:
# 1966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_24, MSGBOX_DEFAULT
# 1967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABILITY_SHIELD, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_75
# 1983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EXPERT_BELT, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_76
# 1990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BRIGHT_POWDER, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_77
# 1997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CLEAR_AMULET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_78
# 2004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_COVERT_CLOAK, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_79
# 2011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FLAME_ORB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_80
# 2018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HEAVY_DUTY_BOOTS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_81
# 2025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_KINGS_ROCK, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82
# 2032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LAGGING_TAIL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_83
# 2039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LIGHT_CLAY, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_84
# 2046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_METRONOME, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_85
# 2053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PROTECTIVE_PADS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_86
# 2060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PUNCHING_GLOVE, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_87
# 2067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_QUICK_CLAW, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_88
# 2074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SAFETY_GOGGLES, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_89
# 2081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCOPE_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_90
# 2088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHED_SHELL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_91
# 2095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHELL_BELL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_92
# 2102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STICKY_BARB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_93
# 2109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TOXIC_ORB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_94
# 2116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_UTILITY_UMBRELLA, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_95
# 2123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WIDE_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_96
# 2130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZOOM_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_97
# 2137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EVIOLITE, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_98
# 2145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73:
# 2148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99
# 2151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_2:
# 1942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_0, ITEM_ABILITY_SHIELD
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_1

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_5:
# 1943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_1, ITEM_BRIGHT_POWDER
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_4

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_8:
# 1944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_2, ITEM_CLEAR_AMULET
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_7

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_11:
# 1945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_3, ITEM_COVERT_CLOAK
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_10

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_14:
# 1946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_4, ITEM_EVIOLITE
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_13

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_17:
# 1947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_5, ITEM_EXPERT_BELT
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_16

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_20:
# 1948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_6, ITEM_FLAME_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_19

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_23:
# 1949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_7, ITEM_HEAVY_DUTY_BOOTS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_22

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_26:
# 1950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_8, ITEM_KINGS_ROCK
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_25

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_29:
# 1951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_9, ITEM_LAGGING_TAIL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_28

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_32:
# 1952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_10, ITEM_LIGHT_CLAY
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_31

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_35:
# 1953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_11, ITEM_METRONOME
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_34

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_38:
# 1954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_12, ITEM_PROTECTIVE_PADS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_37

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_41:
# 1955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_13, ITEM_PUNCHING_GLOVE
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_40

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_44:
# 1956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_14, ITEM_QUICK_CLAW
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_43

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_47:
# 1957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_15, ITEM_SAFETY_GOGGLES
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_46

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_50:
# 1958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_16, ITEM_SCOPE_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_49

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_53:
# 1959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_17, ITEM_SHED_SHELL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_52

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_56:
# 1960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_18, ITEM_SHELL_BELL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_55

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_59:
# 1961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_19, ITEM_STICKY_BARB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_58

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_62:
# 1962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_20, ITEM_TOXIC_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_61

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_65:
# 1963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_21, ITEM_UTILITY_UMBRELLA
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_68:
# 1964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_22, ITEM_WIDE_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_67

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_71:
# 1965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_23, ITEM_ZOOM_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_75:
# 1977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_76:
# 1984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 450, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 450
# 1986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 450
# 1989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_77:
# 1991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 1994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_78:
# 1998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_79:
# 2005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_80:
# 2012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_81:
# 2019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82:
# 2026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_83:
# 2033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_84:
# 2040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_85:
# 2047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_86:
# 2054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_87:
# 2061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_88:
# 2068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_89:
# 2075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_90:
# 2082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_91:
# 2089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_92:
# 2096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_93:
# 2103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_94:
# 2110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_95:
# 2117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_96:
# 2124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_97:
# 2131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_98:
# 2138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 2140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 2143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73


MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems::
# 2158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_2
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_1:
# 2160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_5
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_4:
# 2161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_8
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_7:
# 2162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_11
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_10:
# 2163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_14
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_13:
# 2164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_17
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_16:
# 2165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_20
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_19:
# 2166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_23
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_22:
# 2167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_26
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_25:
# 2168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_29
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_28:
# 2169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_32
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_31:
# 2170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_35
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_34:
# 2171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_38
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_37:
# 2172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_41
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_40:
# 2173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_44
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_43:
# 2174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_47
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_46:
# 2175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_50
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_49:
# 2176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_53
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_52:
# 2177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_56
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_55:
# 2178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_59
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_58:
# 2179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_62
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_61:
# 2180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_21, MSGBOX_DEFAULT
# 2181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 2185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 2186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 2188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AIR_BALLOON, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_66
# 2196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FOCUS_SASH, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_67
# 2203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MENTAL_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_68
# 2210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_POWER_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_69
# 2217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WHITE_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_70
# 2224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MIRROR_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_71
# 2231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ADRENALINE_ORB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_72
# 2238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLUNDER_POLICY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_73
# 2245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WEAKNESS_POLICY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_74
# 2252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_THROAT_SPRAY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_75
# 2259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EJECT_BUTTON, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_76
# 2266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EJECT_PACK, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_77
# 2273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RED_CARD, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_78
# 2280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABSORB_BULB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_79
# 2287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CELL_BATTERY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_80
# 2294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LUMINOUS_MOSS, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_81
# 2301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SNOWBALL, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_82
# 2308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GRASSY_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_83
# 2315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ELECTRIC_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_84
# 2322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MISTY_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_85
# 2329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PSYCHIC_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_86
# 2337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64:
# 2340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99
# 2343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_2:
# 2159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_0, ITEM_AIR_BALLOON
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_1

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_5:
# 2160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_1, ITEM_FOCUS_SASH
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_4

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_8:
# 2161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_2, ITEM_MENTAL_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_7

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_11:
# 2162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_3, ITEM_POWER_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_10

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_14:
# 2163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_4, ITEM_WHITE_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_13

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_17:
# 2164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_5, ITEM_MIRROR_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_16

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_20:
# 2165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_6, ITEM_ADRENALINE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_19

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_23:
# 2166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_7, ITEM_BLUNDER_POLICY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_22

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_26:
# 2167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_8, ITEM_WEAKNESS_POLICY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_25

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_29:
# 2168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_9, ITEM_THROAT_SPRAY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_28

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_32:
# 2169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_10, ITEM_EJECT_BUTTON
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_31

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_35:
# 2170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_11, ITEM_EJECT_PACK
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_34

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_38:
# 2171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_12, ITEM_RED_CARD
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_37

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_41:
# 2172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_13, ITEM_ABSORB_BULB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_40

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_44:
# 2173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_14, ITEM_CELL_BATTERY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_43

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_47:
# 2174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_15, ITEM_LUMINOUS_MOSS
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_46

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_50:
# 2175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_16, ITEM_SNOWBALL
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_49

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_53:
# 2176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_17, ITEM_GRASSY_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_52

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_56:
# 2177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_18, ITEM_ELECTRIC_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_55

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_59:
# 2178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_19, ITEM_MISTY_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_58

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_62:
# 2179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_20, ITEM_PSYCHIC_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_61

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_66:
# 2190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_67:
# 2197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_68:
# 2204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_69:
# 2211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 2213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 2216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_70:
# 2218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_71:
# 2225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_72:
# 2232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 2234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 2237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_73:
# 2239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_74:
# 2246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 2248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 2251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_75:
# 2253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_76:
# 2260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_77:
# 2267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_78:
# 2274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 2276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 2279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_79:
# 2281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_80:
# 2288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_81:
# 2295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_82:
# 2302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_83:
# 2309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_84:
# 2316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_85:
# 2323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_86:
# 2330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64


MauvilleCity_GameCorner_EventScript_BuyTMs::
# 2350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
# 2360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyTMs_Text_9, MSGBOX_DEFAULT
# 2361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 2365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 2366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 2368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_FIRE_PUNCH, MauvilleCity_GameCorner_EventScript_BuyTMs_30
# 2377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_ICE_PUNCH, MauvilleCity_GameCorner_EventScript_BuyTMs_31
# 2385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_THUNDER_PUNCH, MauvilleCity_GameCorner_EventScript_BuyTMs_32
# 2393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_THUNDERBOLT, MauvilleCity_GameCorner_EventScript_BuyTMs_33
# 2401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_FLAMETHROWER, MauvilleCity_GameCorner_EventScript_BuyTMs_34
# 2409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_ICE_BEAM, MauvilleCity_GameCorner_EventScript_BuyTMs_35
# 2417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_PSYCHIC, MauvilleCity_GameCorner_EventScript_BuyTMs_36
# 2425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_BULK_UP, MauvilleCity_GameCorner_EventScript_BuyTMs_37
# 2433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_CALM_MIND, MauvilleCity_GameCorner_EventScript_BuyTMs_38
# 2442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyTMs_28:
# 2445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99
# 2448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyTMs_2:
# 2351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_0, ITEM_TM_FIRE_PUNCH
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_1

MauvilleCity_GameCorner_EventScript_BuyTMs_5:
# 2352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_1, ITEM_TM_ICE_PUNCH
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_4

MauvilleCity_GameCorner_EventScript_BuyTMs_8:
# 2353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_2, ITEM_TM_THUNDER_PUNCH
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_7

MauvilleCity_GameCorner_EventScript_BuyTMs_11:
# 2354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_3, ITEM_TM_THUNDERBOLT
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_10

MauvilleCity_GameCorner_EventScript_BuyTMs_14:
# 2355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_4, ITEM_TM_FLAMETHROWER
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_13

MauvilleCity_GameCorner_EventScript_BuyTMs_17:
# 2356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_5, ITEM_TM_ICE_BEAM
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_16

MauvilleCity_GameCorner_EventScript_BuyTMs_20:
# 2357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_6, ITEM_TM_PSYCHIC
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_19

MauvilleCity_GameCorner_EventScript_BuyTMs_23:
# 2358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_7, ITEM_TM_BULK_UP
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_22

MauvilleCity_GameCorner_EventScript_BuyTMs_26:
# 2359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_8, ITEM_TM_CALM_MIND
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_25

MauvilleCity_GameCorner_EventScript_BuyTMs_30:
# 2370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_FIRE_PUNCH
# 2371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_31:
# 2378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_ICE_PUNCH
# 2379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_32:
# 2386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_THUNDER_PUNCH
# 2387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 2389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 2392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_33:
# 2394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_THUNDERBOLT
# 2395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_34:
# 2402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_FLAMETHROWER
# 2403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_35:
# 2410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_ICE_BEAM
# 2411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_36:
# 2418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_PSYCHIC
# 2419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_37:
# 2426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_BULK_UP
# 2427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_38:
# 2434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_CALM_MIND
# 2435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28


MauvilleCity_GameCorner_EventScript_ComeBackLater::
# 2455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ComeBackLater_Text_0
# 2458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BuyVitamins::
# 2464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_0, ITEM_HP_UP
# 2466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_1, ITEM_PROTEIN
# 2467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_2, ITEM_IRON
# 2468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_3, ITEM_CALCIUM
# 2469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_4, ITEM_ZINC
# 2470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_5, ITEM_CARBOS
# 2471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_6, ITEM_PP_MAX
# 2472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_7, MSGBOX_DEFAULT
# 2473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 2475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 2477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 2478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 2480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HP_UP, MauvilleCity_GameCorner_EventScript_BuyVitamins_3
# 2488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PROTEIN, MauvilleCity_GameCorner_EventScript_BuyVitamins_4
# 2495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_IRON, MauvilleCity_GameCorner_EventScript_BuyVitamins_5
# 2502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CALCIUM, MauvilleCity_GameCorner_EventScript_BuyVitamins_6
# 2509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZINC, MauvilleCity_GameCorner_EventScript_BuyVitamins_7
# 2516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CARBOS, MauvilleCity_GameCorner_EventScript_BuyVitamins_8
# 2523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PP_MAX, MauvilleCity_GameCorner_EventScript_BuyVitamins_9
# 2531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyVitamins_1:
# 2534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99
# 2537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyVitamins_3:
# 2482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_4:
# 2489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_5:
# 2496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_6:
# 2503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_7:
# 2510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_8:
# 2517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_9:
# 2524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98, MSGBOX_YESNO
# 2527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize::
# 2544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize_Text_0
# 2546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize::
# 2553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize_Text_0
# 2555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BagFull::
# 2561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BagFull_Text_0
# 2563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NewTMPrizes::
# 2570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BuyPokemon::
# 2575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 2577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_0, MSGBOX_DEFAULT
# 2578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 25, 2, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_1, MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_2
# 2579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 2580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_BuyPokemon_3
# 2582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyPokemon_4
# 2585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPokemon_1:
# 2587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_BuyPokemon_3:
# 2581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyStarterPokemon
	goto MauvilleCity_GameCorner_EventScript_BuyPokemon_1

MauvilleCity_GameCorner_EventScript_BuyPokemon_4:
# 2583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon
	goto MauvilleCity_GameCorner_EventScript_BuyPokemon_1


MauvilleCity_GameCorner_EventScript_BuyStarterPokemon::
# 2593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_0, SPECIES_BULBASAUR
# 2595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_1, SPECIES_CHARMANDER
# 2596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_2, SPECIES_SQUIRTLE
# 2597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_3, SPECIES_CHIKORITA
# 2598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_4, SPECIES_CYNDAQUIL
# 2599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_5, SPECIES_TOTODILE
# 2600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_6, SPECIES_TREECKO
# 2601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_7, SPECIES_TORCHIC
# 2602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_8, SPECIES_MUDKIP
# 2603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_9, SPECIES_TURTWIG
# 2604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_10, SPECIES_CHIMCHAR
# 2605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_11, SPECIES_PIPLUP
# 2606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_12, SPECIES_SNIVY
# 2607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_13, SPECIES_TEPIG
# 2608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_14, SPECIES_OSHAWOTT
# 2609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_15, SPECIES_CHESPIN
# 2610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_16, SPECIES_FENNEKIN
# 2611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_17, SPECIES_FROAKIE
# 2612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_18, SPECIES_ROWLET
# 2613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_19, SPECIES_LITTEN
# 2614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_20, SPECIES_POPPLIO
# 2615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_21, SPECIES_GROOKEY
# 2616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_22, SPECIES_SCORBUNNY
# 2617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_23, SPECIES_SOBBLE
# 2618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_24, SPECIES_SPRIGATITO
# 2619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_25, SPECIES_FUECOCO
# 2620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_26, SPECIES_QUAXLY
# 2621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_27, MSGBOX_DEFAULT
# 2622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 127, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 128, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 2629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_3, 5
# 2634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_PokemonReceived
# 2635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_PokemonSentToPC
# 2636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForPokemon
	return


MauvilleCity_GameCorner_EventScript_BuyPrizePokemon::
# 2640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_0, SPECIES_ABRA
# 2642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_1, SPECIES_CLEFAIRY
# 2643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_2, SPECIES_JIGGLYPUFF
# 2644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_3, SPECIES_PORYGON
# 2645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_4, SPECIES_MR_MIME
# 2646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_5, SPECIES_EEVEE
# 2647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_6, SPECIES_WOBBUFFET
# 2648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_7, SPECIES_SNORLAX
# 2649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_8, SPECIES_MIMIKYU
# 2650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_9, SPECIES_ROTOM
# 2651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_10, MSGBOX_DEFAULT
# 2652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 2657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_ABRA, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_3
# 2665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_CLEFAIRY, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_4
# 2672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_JIGGLYPUFF, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_5
# 2679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_PORYGON, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_6
# 2686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_MR_MIME, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_7
# 2693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_EEVEE, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_8
# 2700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_WOBBUFFET, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_9
# 2707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_SNORLAX, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_10
# 2714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_MIMIKYU, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_11
# 2721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_ROTOM, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_12
# 2729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1:
# 2732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_PokemonReceived
# 2733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_PokemonSentToPC
# 2734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForPokemon
	return

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_3:
# 2659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 600, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 600
# 2661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 600
# 2664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_ABRA, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_4:
# 2666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_CLEFAIRY, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_5:
# 2673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_JIGGLYPUFF, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_6:
# 2680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_PORYGON, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_7:
# 2687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_MR_MIME, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_8:
# 2694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_EEVEE, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_9:
# 2701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_WOBBUFFET, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_10:
# 2708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_SNORLAX, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_11:
# 2715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_MIMIKYU, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_12:
# 2722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 1500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 1500
# 2724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1500
# 2727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_ROTOM, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1


MauvilleCity_GameCorner_EventScript_PokemonReceived::
# 2738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_PokemonReceived_Text_0
# 2740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_PokemonSentToPC::
# 2747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_PokemonSentToPC_Text_0
# 2749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NoRoomForPokemon::
# 2756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NoRoomForPokemon_Text_0
# 2758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_0:
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for coins?\p"
	.string "I'm sorry, but I can't sell any to you.\n"
	.string "Children are not allowed to gamble.$"

MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_1:
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh - you have coins already somehow?\p"
	.string "Well... I guess there is no rule against a\n"
	.string "child exchanging coins they already\l"
	.string "have for prizes.$"

MauvilleCity_GameCorner_EventScript_Scott_Text_0:
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Are you interested?$"

MauvilleCity_GameCorner_EventScript_Scott_Text_1:
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: I look forward to seeing what\n"
	.string "you can do!$"

MauvilleCity_GameCorner_EventScript_Scott_Text_2:
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: I hope to see you around!$"

MauvilleCity_GameCorner_EventScript_SlotMachine_Text_0:
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a slot machine. Unfortunately,\n"
	.string "they won't let children play.$"

Roulette_EventScript_Table_Text_0:
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a roulette table. Unfortunately,\n"
	.string "they won't let children play.$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_0:
# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you need a Coin Case to\n"
	.string "purchase prizes.$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_1:
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which kind of prize would you like to\n"
	.string "purchase?$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_2:
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "One-Time Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_3:
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Held Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_4:
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Technical Machines$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_5:
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rare Battle Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_6:
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mega Stones$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_7:
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "EV Vitamins$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_8:
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Type Gems$"

MauvilleCity_GameCorner_EventScript_OutOfRareItems_Text_0:
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but it looks we're all out of\n"
	.string "rare battle items for now.\p"
	.string "Please come back later!$"

MauvilleCity_GameCorner_EventScript_NeedMegaRing_Text_0:
# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but only Trainers in\n"
	.string "possession of a Mega Ring can purchase\l"
	.string "Mega Stones.\p"
	.string "Please come back later!$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_0:
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Venusaur      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_1:
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Venusaur Z   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_2:
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Charizard X  500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_3:
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Charizard Y  500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_4:
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blastoise     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_5:
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blastoise Z  500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_6:
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Beedrill        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_7:
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Pidgeot        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_8:
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Alakazam      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_9:
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Slowbro         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_10:
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Slowking       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_11:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gengar          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_12:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Kangaskhan  500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_13:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Pinsir            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_14:
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gyarados       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_15:
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Aerodactyl    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_16:
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ampharos       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_17:
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Steelix          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_18:
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scizor            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_19:
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Heracross     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_20:
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Houndoom      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_21:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tyranitar      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_22:
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sceptile        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_23:
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blaziken        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_24:
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Swampert      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_25:
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gardevoir     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_26:
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sableye        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_27:
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mawile          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_28:
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Aggron         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_29:
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Medicham      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_30:
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Manectric    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_31:
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sharpedo     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_32:
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Camerupt     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_33:
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Altaria        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_34:
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Banette       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_35:
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absol           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_36:
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Glalie           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_37:
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Salamence    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_38:
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Metagross    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_39:
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lopunny        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_40:
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Garchomp      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_41:
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lucario         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_42:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Abomasnow    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_43:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gallade         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_44:
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Audino          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_45:
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Clefable        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_46:
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Victreebel     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_47:
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Starmie          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_48:
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dragonite      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49:
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Meganium      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50:
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Feraligatr     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_51:
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Skarmory       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_52:
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Froslass        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_53:
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Emboar           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_54:
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Excadrill       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_55:
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scolipede      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_56:
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scrafty          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_57:
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eelektross    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_58:
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chandelure    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_59:
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chesnaught   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_60:
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Delphox         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_61:
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Greninja        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_62:
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Pyroar           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_63:
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Malamar         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_64:
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Barbaracle    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_65:
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dragalge        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_66:
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hawlucha       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_67:
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Drampana       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_68:
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Falinks          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_69:
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Raichu X        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_70:
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Raichu Y        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_71:
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chimecho       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_72:
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absol Z          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_73:
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Staraptor      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_74:
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Garchomp Z   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_75:
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lucario Z       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_76:
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Golurk           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_77:
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Meowstic       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_78:
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Crabominable 500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_79:
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Golisopod      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_80:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scovillain     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_81:
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Baxcalibur    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_82:
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tatsugiri      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_83:
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Glimmora         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_84:
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Butterfree    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_85:
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Machamp        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_86:
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Kingler          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_87:
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lapras           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_88:
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Centiskorch   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_89:
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rillaboom       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_90:
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cinderace      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_91:
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Inteleon        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_92:
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Milotic           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_93:
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sunflora        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_94:
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flygon            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_95:
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Vikavolt        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_96:
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nevermind$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_97:
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Mega Stone would you like?$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_98:
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to buy {STR_VAR_1} for\n"
	.string "{STR_VAR_2} coins. Is that correct?$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_99:
# 1817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_0:
# 1830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We only have one of each of these\n"
	.string "items, and they cost a whopping 1,250\l"
	.string "coins each.$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_1:
# 1833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Band$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_2:
# 1834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Scarf$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_3:
# 1835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Specs$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_4:
# 1836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Leftovers$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_5:
# 1837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Life Orb$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_6:
# 1838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Assault Vest$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_7:
# 1839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which item would you like for 1,250\n"
	.string "coins?$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_0:
# 1898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Normal Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_1:
# 1899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fighting Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_2:
# 1900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flying Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_3:
# 1901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Poison Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_4:
# 1902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ground Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_5:
# 1903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rock Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_6:
# 1904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bug Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_7:
# 1905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ghost Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_8:
# 1906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Steel Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_9:
# 1907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fire Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_10:
# 1908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Water Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_11:
# 1909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grass Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_12:
# 1910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Electric Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_13:
# 1911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_14:
# 1912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ice Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_15:
# 1913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dragon Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_16:
# 1914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dark Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_17:
# 1915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fairy Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_18:
# 1916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Gem you like to buy for 250 coins?$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_0:
# 1942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ability Shield   300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_1:
# 1943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bright Powder   200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_2:
# 1944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Clear Amulet     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_3:
# 1945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Covert Cloak    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_4:
# 1946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eviolite            300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_5:
# 1947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Expert Belt      450 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_6:
# 1948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flame Orb          200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_7:
# 1949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Heavy Boots     200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_8:
# 1950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "King's Rock       200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_9:
# 1951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lagging Tail      200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_10:
# 1952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Light Clay         400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_11:
# 1953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Metronome         300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_12:
# 1954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Protect Pads    300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_13:
# 1955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Punching Glove 300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_14:
# 1956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Quick Claw         200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_15:
# 1957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Safety Goggles 350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_16:
# 1958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scope Lens        250 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_17:
# 1959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Shed Shell          250 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_18:
# 1960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Shell Bell           350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_19:
# 1961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sticky Barb       350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_20:
# 1962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Toxic Orb           200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_21:
# 1963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Util. Umbrella    400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_22:
# 1964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wide Lens          400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_23:
# 1965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Zoom Lens          400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_24:
# 1966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which held item would you like?$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_0:
# 2159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Air Balloon       100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_1:
# 2160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Focus Sash       250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_2:
# 2161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mental Herb      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_3:
# 2162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Power Herb        150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_4:
# 2163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "White Herb        250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_5:
# 2164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mirror Herb       250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_6:
# 2165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Adrenaline Orb 250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_7:
# 2166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blunder Policy 100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_8:
# 2167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Weakness Plcy  150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_9:
# 2168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Throat Spray    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_10:
# 2169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eject Button    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_11:
# 2170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eject Pack        200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_12:
# 2171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Red Card            150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_13:
# 2172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absorb Bulb      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_14:
# 2173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cell Battery     100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_15:
# 2174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Luminous Moss  100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_16:
# 2175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snowball           100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_17:
# 2176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grassy Seed      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_18:
# 2177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Electric Seed   100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_19:
# 2178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Misty Seed        100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_20:
# 2179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic Seed    100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_21:
# 2180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which one-time use item would you like?$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_0:
# 2351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fire Punch        350 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_1:
# 2352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ice Punch         350 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_2:
# 2353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thunder Punch  350 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_3:
# 2354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thunderbolt       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_4:
# 2355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flamethrower    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_5:
# 2356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ice Beam           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_6:
# 2357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_7:
# 2358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bulk Up              400 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_8:
# 2359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Calm Mind           400 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_9:
# 2360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which TM would you like?$"

MauvilleCity_GameCorner_EventScript_ComeBackLater_Text_0:
# 2457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Please come back to exchange your\n"
	.string "coins for more prizes!$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_0:
# 2465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "HP Up        200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_1:
# 2466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Protein    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_2:
# 2467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Iron         100 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_3:
# 2468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Calcium    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_4:
# 2469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Zinc         100 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_5:
# 2470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Carbos     200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_6:
# 2471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "PP Max      200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_7:
# 2472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which vitamin would you like?$"

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize_Text_0:
# 2545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "coins for that prize.\p"
	.string "Please choose something else, or come\n"
	.string "back after you've earned more coins.$"

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize_Text_0:
# 2554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "coins for one of our rare battle items.\l"
	.string "These cost 1,250 coins each.\p"
	.string "Please choose something else, or come\n"
	.string "back after you've earned more coins.$"

MauvilleCity_GameCorner_EventScript_BagFull_Text_0:
# 2562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but your bag is full.\p"
	.string "Please make some room and come back.$"

MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_0:
# 2577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which kind of Pokémon are you\n"
	.string "interested in?$"

MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_1:
# 2578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Starter Pokémon$"

MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_2:
# 2578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Prize Pokémon$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_0:
# 2594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bulbasaur        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_1:
# 2595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Charmander     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_2:
# 2596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Squirtle           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_3:
# 2597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chikorita         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_4:
# 2598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cyndaquil        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_5:
# 2599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Totodile          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_6:
# 2600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Treecko           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_7:
# 2601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Torchic            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_8:
# 2602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mudkip            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_9:
# 2603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Turtwig            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_10:
# 2604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chimchar         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_11:
# 2605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Piplup              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_12:
# 2606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snivy               500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_13:
# 2607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tepig               500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_14:
# 2608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oshawott         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_15:
# 2609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chespin            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_16:
# 2610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fennekin          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_17:
# 2611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Froakie             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_18:
# 2612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rowlet              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_19:
# 2613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Litten               500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_20:
# 2614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Popplio             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_21:
# 2615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grookey           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_22:
# 2616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scorbunny       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_23:
# 2617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sobble              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_24:
# 2618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sprigatito        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_25:
# 2619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fuecoco            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_26:
# 2620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Quaxly              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_27:
# 2621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Starter Pokémon would you like\n"
	.string "for 500 coins?$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28:
# 2630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to buy a {STR_VAR_1} for\n"
	.string "{STR_VAR_2} coins. Is that correct?$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_0:
# 2641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Abra                   600 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_1:
# 2642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Clefairy            400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_2:
# 2643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Jigglypuff        400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_3:
# 2644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Porygon             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_4:
# 2645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mr. Mime             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_5:
# 2646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eevee                750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_6:
# 2647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wobbuffet        750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_7:
# 2648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snorlax             750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_8:
# 2649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mimikyu             750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_9:
# 2650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rotom              1500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_10:
# 2651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Prize Pokémon would you like?$"

MauvilleCity_GameCorner_EventScript_PokemonReceived_Text_0:
# 2739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go! Take good care of your new\n"
	.string "Pokémon!$"

MauvilleCity_GameCorner_EventScript_PokemonSentToPC_Text_0:
# 2748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go! Your party was full, so it\n"
	.string "was sent to your PC.$"

MauvilleCity_GameCorner_EventScript_NoRoomForPokemon_Text_0:
# 2757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have any room\n"
	.string "for another Pokémon right now.\p"
	.string "Your party and PC boxes are all full!$"

MauvilleCity_GameCorner_Text_ScottIntro::
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: Great! I've got another\n"
	.string "participant already lined up, so just\l"
	.string "come out to the Tower in Route 111\l"
	.string "whenever you're ready.\p"
	.string "You can take this Coin Case now.\n"
	.string "The more battles you win, the more Coins\l"
	.string "I'll give you.$"

MauvilleCity_GameCorner_Text_ScottDecline::
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: I understand, you seem busy.\n"
	.string "Well, take this Coin Case anyway.\p"
	.string "If you ever change your mind, come out\n"
	.string "to the Tower in Route 111 and you can\l"
	.string "earn some Coins.$"

MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay::
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The games at the Game Corner are only\n"
	.string "open to adults above a certain age.\p"
	.string "We don't want children to develop\n"
	.string "dangerous habits.$"
