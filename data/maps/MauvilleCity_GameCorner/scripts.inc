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
	checkitem ITEM_LATIASITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_201
MauvilleCity_GameCorner_EventScript_BuyMegaStones_199:
	checkitem ITEM_LATIOSITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_206
MauvilleCity_GameCorner_EventScript_BuyMegaStones_204:
	checkitem ITEM_LOPUNNITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_211
MauvilleCity_GameCorner_EventScript_BuyMegaStones_209:
	checkitem ITEM_GARCHOMPITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_216
MauvilleCity_GameCorner_EventScript_BuyMegaStones_214:
	checkitem ITEM_LUCARIONITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_221
MauvilleCity_GameCorner_EventScript_BuyMegaStones_219:
	checkitem ITEM_ABOMASITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_226
MauvilleCity_GameCorner_EventScript_BuyMegaStones_224:
	checkitem ITEM_GALLADITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_231
MauvilleCity_GameCorner_EventScript_BuyMegaStones_229:
	checkitem ITEM_AUDINITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_236
MauvilleCity_GameCorner_EventScript_BuyMegaStones_234:
	checkitem ITEM_DIANCITE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMegaStones_241
MauvilleCity_GameCorner_EventScript_BuyMegaStones_239:
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_48, MSGBOX_DEFAULT
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VENUSAURITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_246
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_VENUSAURITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_247
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHARIZARDITE_X, MauvilleCity_GameCorner_EventScript_BuyMegaStones_248
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHARIZARDITE_Y, MauvilleCity_GameCorner_EventScript_BuyMegaStones_249
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLASTOISINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_250
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLASTOISINITE_Z, MauvilleCity_GameCorner_EventScript_BuyMegaStones_251
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BEEDRILLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_252
# 1055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PIDGEOTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_253
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ALAKAZITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_254
# 1069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SLOWBRONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_255
# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SLOWKINGITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_256
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GENGARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_257
# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_KANGASKHANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_258
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PINSIRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_259
# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GYARADOSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_260
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AERODACTYLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_261
# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AMPHAROSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_262
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STEELIXITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_263
# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCIZORITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_264
# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HERACRONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_265
# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HOUNDOOMINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_266
# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TYRANITARITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_267
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCEPTILITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_268
# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLAZIKENITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_269
# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SWAMPERTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_270
# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GARDEVOIRITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_271
# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SABLENITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_272
# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MAWILITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_273
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AGGRONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_274
# 1209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MEDICHAMITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_275
# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MANECTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_276
# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHARPEDONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_277
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CAMERUPTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_278
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ALTARIANITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_279
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BANETTITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_280
# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABSOLITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_281
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GLALITITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_282
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SALAMENCITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_283
# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_METAGROSSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_284
# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LATIASITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_285
# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LATIOSITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_286
# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LOPUNNITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_287
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GARCHOMPITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_288
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LUCARIONITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_289
# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABOMASITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_290
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GALLADITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_291
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AUDINITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_292
# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_DIANCITE, MauvilleCity_GameCorner_EventScript_BuyMegaStones_293
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyMegaStones_244:
# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_20
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
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_110
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
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_39, ITEM_LATIASITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_199

MauvilleCity_GameCorner_EventScript_BuyMegaStones_201:
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_200
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_199

MauvilleCity_GameCorner_EventScript_BuyMegaStones_205:
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_40, ITEM_LATIOSITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_204

MauvilleCity_GameCorner_EventScript_BuyMegaStones_206:
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_205
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_204

MauvilleCity_GameCorner_EventScript_BuyMegaStones_210:
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_41, ITEM_LOPUNNITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_209

MauvilleCity_GameCorner_EventScript_BuyMegaStones_211:
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_210
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_209

MauvilleCity_GameCorner_EventScript_BuyMegaStones_215:
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_42, ITEM_GARCHOMPITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_214

MauvilleCity_GameCorner_EventScript_BuyMegaStones_216:
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_215
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_214

MauvilleCity_GameCorner_EventScript_BuyMegaStones_220:
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_43, ITEM_LUCARIONITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_219

MauvilleCity_GameCorner_EventScript_BuyMegaStones_221:
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_220
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_219

MauvilleCity_GameCorner_EventScript_BuyMegaStones_225:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_44, ITEM_ABOMASITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_224

MauvilleCity_GameCorner_EventScript_BuyMegaStones_226:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_225
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_224

MauvilleCity_GameCorner_EventScript_BuyMegaStones_230:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_45, ITEM_GALLADITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_229

MauvilleCity_GameCorner_EventScript_BuyMegaStones_231:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_230
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_229

MauvilleCity_GameCorner_EventScript_BuyMegaStones_235:
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_46, ITEM_AUDINITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_234

MauvilleCity_GameCorner_EventScript_BuyMegaStones_236:
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_235
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_234

MauvilleCity_GameCorner_EventScript_BuyMegaStones_240:
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_47, ITEM_DIANCITE
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_239

MauvilleCity_GameCorner_EventScript_BuyMegaStones_241:
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyMegaStones_240
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_239

MauvilleCity_GameCorner_EventScript_BuyMegaStones_246:
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_247:
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_248:
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_249:
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_250:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_251:
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_252:
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_253:
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_254:
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_255:
# 1070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_256:
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_257:
# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_258:
# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_259:
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_260:
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_261:
# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_262:
# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_263:
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_264:
# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_265:
# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_266:
# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_267:
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_268:
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_269:
# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_270:
# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_271:
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_272:
# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_273:
# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_274:
# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_275:
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_276:
# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_277:
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_278:
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_279:
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_280:
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_281:
# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_282:
# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_283:
# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_284:
# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_285:
# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_286:
# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_287:
# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_288:
# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_289:
# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_290:
# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_291:
# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_292:
# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244

MauvilleCity_GameCorner_EventScript_BuyMegaStones_293:
# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyMegaStones_244


MauvilleCity_GameCorner_EventScript_BuyRareBattleItems::
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_4
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1:
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 1250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_0, MSGBOX_DEFAULT
# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 1250
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_15
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_14:
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_18
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_17:
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_21
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_20:
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_24
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_23:
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_27
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_26:
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_30
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_29:
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_7, MSGBOX_DEFAULT
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_34
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_35
# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_36
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_37
# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_38
# 1409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_39
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32:
# 1419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_2:
# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_OutOfRareItems
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_3:
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_8
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_4:
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_3
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_7:
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_11
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_8:
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_7
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_11:
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_2
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_15:
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_1, ITEM_CHOICE_BAND
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_14

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_18:
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_2, ITEM_CHOICE_SCARF
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_17

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_21:
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_3, ITEM_CHOICE_SPECS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_20

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_24:
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_4, ITEM_LEFTOVERS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_23

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_27:
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_5, ITEM_LIFE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_26

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_30:
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_6, ITEM_ASSAULT_VEST
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_29

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_34:
# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_BAND
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_35:
# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_SCARF
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_36:
# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_SPECS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_37:
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_LEFTOVERS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_38:
# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_LIFE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_39:
# 1410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_ASSAULT_VEST
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32


MauvilleCity_GameCorner_EventScript_BuyGems::
# 1429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_2
MauvilleCity_GameCorner_EventScript_BuyGems_1:
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_5
MauvilleCity_GameCorner_EventScript_BuyGems_4:
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_8
MauvilleCity_GameCorner_EventScript_BuyGems_7:
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_11
MauvilleCity_GameCorner_EventScript_BuyGems_10:
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_14
MauvilleCity_GameCorner_EventScript_BuyGems_13:
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_17
MauvilleCity_GameCorner_EventScript_BuyGems_16:
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_20
MauvilleCity_GameCorner_EventScript_BuyGems_19:
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_23
MauvilleCity_GameCorner_EventScript_BuyGems_22:
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_26
MauvilleCity_GameCorner_EventScript_BuyGems_25:
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_29
MauvilleCity_GameCorner_EventScript_BuyGems_28:
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_32
MauvilleCity_GameCorner_EventScript_BuyGems_31:
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_35
MauvilleCity_GameCorner_EventScript_BuyGems_34:
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_38
MauvilleCity_GameCorner_EventScript_BuyGems_37:
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_41
MauvilleCity_GameCorner_EventScript_BuyGems_40:
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_44
MauvilleCity_GameCorner_EventScript_BuyGems_43:
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_47
MauvilleCity_GameCorner_EventScript_BuyGems_46:
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_50
MauvilleCity_GameCorner_EventScript_BuyGems_49:
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyGems_53
MauvilleCity_GameCorner_EventScript_BuyGems_52:
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyGems_Text_18, MSGBOX_DEFAULT
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyGems_2:
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_0, ITEM_NORMAL_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_1

MauvilleCity_GameCorner_EventScript_BuyGems_5:
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_1, ITEM_FIGHTING_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_4

MauvilleCity_GameCorner_EventScript_BuyGems_8:
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_2, ITEM_FLYING_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_7

MauvilleCity_GameCorner_EventScript_BuyGems_11:
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_3, ITEM_POISON_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_10

MauvilleCity_GameCorner_EventScript_BuyGems_14:
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_4, ITEM_GROUND_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_13

MauvilleCity_GameCorner_EventScript_BuyGems_17:
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_5, ITEM_ROCK_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_16

MauvilleCity_GameCorner_EventScript_BuyGems_20:
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_6, ITEM_BUG_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_19

MauvilleCity_GameCorner_EventScript_BuyGems_23:
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_7, ITEM_GHOST_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_22

MauvilleCity_GameCorner_EventScript_BuyGems_26:
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_8, ITEM_STEEL_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_25

MauvilleCity_GameCorner_EventScript_BuyGems_29:
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_9, ITEM_FIRE_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_28

MauvilleCity_GameCorner_EventScript_BuyGems_32:
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_10, ITEM_WATER_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_31

MauvilleCity_GameCorner_EventScript_BuyGems_35:
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_11, ITEM_GRASS_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_34

MauvilleCity_GameCorner_EventScript_BuyGems_38:
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_12, ITEM_ELECTRIC_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_37

MauvilleCity_GameCorner_EventScript_BuyGems_41:
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_13, ITEM_PSYCHIC_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_40

MauvilleCity_GameCorner_EventScript_BuyGems_44:
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_14, ITEM_ICE_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_43

MauvilleCity_GameCorner_EventScript_BuyGems_47:
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_15, ITEM_DRAGON_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_46

MauvilleCity_GameCorner_EventScript_BuyGems_50:
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_16, ITEM_DARK_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_49

MauvilleCity_GameCorner_EventScript_BuyGems_53:
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyGems_Text_17, ITEM_FAIRY_GEM
	goto MauvilleCity_GameCorner_EventScript_BuyGems_52


MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems::
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_2
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_1:
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_5
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_4:
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_8
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_7:
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_11
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_10:
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_14
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_13:
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_17
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_16:
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_20
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_19:
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_23
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_22:
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_26
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_25:
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_29
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_28:
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_32
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_31:
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_35
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_34:
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_38
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_37:
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_41
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_40:
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_44
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_43:
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_47
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_46:
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_50
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_49:
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_53
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_52:
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_56
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_55:
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_59
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_58:
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_62
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_61:
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_65
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_64:
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_68
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_67:
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_71
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70:
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_24, MSGBOX_DEFAULT
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABILITY_SHIELD, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_75
# 1515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EXPERT_BELT, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_76
# 1522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BRIGHT_POWDER, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_77
# 1529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CLEAR_AMULET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_78
# 1536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_COVERT_CLOAK, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_79
# 1543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FLAME_ORB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_80
# 1550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HEAVY_DUTY_BOOTS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_81
# 1557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_KINGS_ROCK, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82
# 1564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LAGGING_TAIL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_83
# 1571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LIGHT_CLAY, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_84
# 1578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_METRONOME, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_85
# 1585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PROTECTIVE_PADS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_86
# 1592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PUNCHING_GLOVE, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_87
# 1599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_QUICK_CLAW, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_88
# 1606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SAFETY_GOGGLES, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_89
# 1613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCOPE_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_90
# 1620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHED_SHELL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_91
# 1627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHELL_BELL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_92
# 1634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STICKY_BARB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_93
# 1641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TOXIC_ORB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_94
# 1648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_UTILITY_UMBRELLA, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_95
# 1655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WIDE_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_96
# 1662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZOOM_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_97
# 1669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EVIOLITE, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_98
# 1677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73:
# 1680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50
# 1683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_2:
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_0, ITEM_ABILITY_SHIELD
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_1

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_5:
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_1, ITEM_BRIGHT_POWDER
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_4

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_8:
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_2, ITEM_CLEAR_AMULET
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_7

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_11:
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_3, ITEM_COVERT_CLOAK
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_10

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_14:
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_4, ITEM_EVIOLITE
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_13

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_17:
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_5, ITEM_EXPERT_BELT
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_16

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_20:
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_6, ITEM_FLAME_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_19

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_23:
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_7, ITEM_HEAVY_DUTY_BOOTS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_22

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_26:
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_8, ITEM_KINGS_ROCK
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_25

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_29:
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_9, ITEM_LAGGING_TAIL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_28

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_32:
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_10, ITEM_LIGHT_CLAY
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_31

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_35:
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_11, ITEM_METRONOME
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_34

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_38:
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_12, ITEM_PROTECTIVE_PADS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_37

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_41:
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_13, ITEM_PUNCHING_GLOVE
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_40

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_44:
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_14, ITEM_QUICK_CLAW
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_43

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_47:
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_15, ITEM_SAFETY_GOGGLES
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_46

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_50:
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_16, ITEM_SCOPE_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_49

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_53:
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_17, ITEM_SHED_SHELL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_52

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_56:
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_18, ITEM_SHELL_BELL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_55

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_59:
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_19, ITEM_STICKY_BARB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_58

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_62:
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_20, ITEM_TOXIC_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_61

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_65:
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_21, ITEM_UTILITY_UMBRELLA
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_68:
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_22, ITEM_WIDE_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_67

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_71:
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_23, ITEM_ZOOM_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_75:
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_76:
# 1516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 450, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 450
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 450
# 1521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_77:
# 1523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_78:
# 1530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_79:
# 1537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_80:
# 1544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_81:
# 1551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82:
# 1558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_83:
# 1565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_84:
# 1572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 1574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 1577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_85:
# 1579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_86:
# 1586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_87:
# 1593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_88:
# 1600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_89:
# 1607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 1609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 1612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_90:
# 1614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_91:
# 1621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_92:
# 1628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 1630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 1633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_93:
# 1635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 1637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 1640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_94:
# 1642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_95:
# 1649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 1651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 1654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_96:
# 1656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 1658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 1661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_97:
# 1663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 1665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 1668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_98:
# 1670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73


MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems::
# 1690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_2
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_1:
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_5
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_4:
# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_8
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_7:
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_11
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_10:
# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_14
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_13:
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_17
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_16:
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_20
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_19:
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_23
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_22:
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_26
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_25:
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_29
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_28:
# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_32
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_31:
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_35
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_34:
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_38
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_37:
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_41
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_40:
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_44
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_43:
# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_47
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_46:
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_50
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_49:
# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_53
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_52:
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_56
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_55:
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_59
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_58:
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_62
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_61:
# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_21, MSGBOX_DEFAULT
# 1713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AIR_BALLOON, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_66
# 1728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FOCUS_SASH, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_67
# 1735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MENTAL_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_68
# 1742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_POWER_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_69
# 1749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WHITE_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_70
# 1756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MIRROR_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_71
# 1763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ADRENALINE_ORB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_72
# 1770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLUNDER_POLICY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_73
# 1777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WEAKNESS_POLICY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_74
# 1784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_THROAT_SPRAY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_75
# 1791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EJECT_BUTTON, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_76
# 1798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EJECT_PACK, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_77
# 1805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RED_CARD, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_78
# 1812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABSORB_BULB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_79
# 1819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CELL_BATTERY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_80
# 1826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LUMINOUS_MOSS, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_81
# 1833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SNOWBALL, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_82
# 1840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GRASSY_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_83
# 1847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ELECTRIC_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_84
# 1854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MISTY_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_85
# 1861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PSYCHIC_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_86
# 1869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64:
# 1872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50
# 1875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_2:
# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_0, ITEM_AIR_BALLOON
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_1

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_5:
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_1, ITEM_FOCUS_SASH
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_4

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_8:
# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_2, ITEM_MENTAL_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_7

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_11:
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_3, ITEM_POWER_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_10

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_14:
# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_4, ITEM_WHITE_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_13

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_17:
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_5, ITEM_MIRROR_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_16

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_20:
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_6, ITEM_ADRENALINE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_19

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_23:
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_7, ITEM_BLUNDER_POLICY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_22

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_26:
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_8, ITEM_WEAKNESS_POLICY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_25

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_29:
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_9, ITEM_THROAT_SPRAY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_28

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_32:
# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_10, ITEM_EJECT_BUTTON
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_31

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_35:
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_11, ITEM_EJECT_PACK
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_34

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_38:
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_12, ITEM_RED_CARD
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_37

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_41:
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_13, ITEM_ABSORB_BULB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_40

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_44:
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_14, ITEM_CELL_BATTERY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_43

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_47:
# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_15, ITEM_LUMINOUS_MOSS
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_46

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_50:
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_16, ITEM_SNOWBALL
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_49

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_53:
# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_17, ITEM_GRASSY_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_52

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_56:
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_18, ITEM_ELECTRIC_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_55

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_59:
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_19, ITEM_MISTY_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_58

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_62:
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_20, ITEM_PSYCHIC_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_61

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_66:
# 1722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_67:
# 1729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_68:
# 1736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_69:
# 1743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 1745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 1748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_70:
# 1750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_71:
# 1757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_72:
# 1764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_73:
# 1771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_74:
# 1778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 1780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 1783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_75:
# 1785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_76:
# 1792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_77:
# 1799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_78:
# 1806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 1808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 1811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_79:
# 1813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_80:
# 1820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_81:
# 1827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_82:
# 1834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_83:
# 1841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_84:
# 1848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_85:
# 1855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_86:
# 1862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64


MauvilleCity_GameCorner_EventScript_BuyTMs::
# 1882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
# 1892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyTMs_Text_9, MSGBOX_DEFAULT
# 1893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 1898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 1900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_FIRE_PUNCH, MauvilleCity_GameCorner_EventScript_BuyTMs_30
# 1909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_ICE_PUNCH, MauvilleCity_GameCorner_EventScript_BuyTMs_31
# 1917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_THUNDER_PUNCH, MauvilleCity_GameCorner_EventScript_BuyTMs_32
# 1925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_THUNDERBOLT, MauvilleCity_GameCorner_EventScript_BuyTMs_33
# 1933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_FLAMETHROWER, MauvilleCity_GameCorner_EventScript_BuyTMs_34
# 1941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_ICE_BEAM, MauvilleCity_GameCorner_EventScript_BuyTMs_35
# 1949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_PSYCHIC, MauvilleCity_GameCorner_EventScript_BuyTMs_36
# 1957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_BULK_UP, MauvilleCity_GameCorner_EventScript_BuyTMs_37
# 1965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TM_CALM_MIND, MauvilleCity_GameCorner_EventScript_BuyTMs_38
# 1974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyTMs_28:
# 1977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50
# 1980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyTMs_2:
# 1883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_0, ITEM_TM_FIRE_PUNCH
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_1

MauvilleCity_GameCorner_EventScript_BuyTMs_5:
# 1884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_1, ITEM_TM_ICE_PUNCH
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_4

MauvilleCity_GameCorner_EventScript_BuyTMs_8:
# 1885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_2, ITEM_TM_THUNDER_PUNCH
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_7

MauvilleCity_GameCorner_EventScript_BuyTMs_11:
# 1886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_3, ITEM_TM_THUNDERBOLT
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_10

MauvilleCity_GameCorner_EventScript_BuyTMs_14:
# 1887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_4, ITEM_TM_FLAMETHROWER
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_13

MauvilleCity_GameCorner_EventScript_BuyTMs_17:
# 1888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_5, ITEM_TM_ICE_BEAM
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_16

MauvilleCity_GameCorner_EventScript_BuyTMs_20:
# 1889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_6, ITEM_TM_PSYCHIC
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_19

MauvilleCity_GameCorner_EventScript_BuyTMs_23:
# 1890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_7, ITEM_TM_BULK_UP
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_22

MauvilleCity_GameCorner_EventScript_BuyTMs_26:
# 1891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyTMs_Text_8, ITEM_TM_CALM_MIND
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_25

MauvilleCity_GameCorner_EventScript_BuyTMs_30:
# 1902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_FIRE_PUNCH
# 1903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 1905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 1908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_31:
# 1910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_ICE_PUNCH
# 1911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 1913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 1916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_32:
# 1918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_THUNDER_PUNCH
# 1919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 1921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 1924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_33:
# 1926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_THUNDERBOLT
# 1927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_34:
# 1934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_FLAMETHROWER
# 1935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1937 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_35:
# 1942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_ICE_BEAM
# 1943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_36:
# 1950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_PSYCHIC
# 1951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_37:
# 1958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_BULK_UP
# 1959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 1961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 1964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28

MauvilleCity_GameCorner_EventScript_BuyTMs_38:
# 1966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffermovename STR_VAR_1, MOVE_CALM_MIND
# 1967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 1969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 1970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 1972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyTMs_28


MauvilleCity_GameCorner_EventScript_ComeBackLater::
# 1987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ComeBackLater_Text_0
# 1990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 1991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BuyVitamins::
# 1996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_0, ITEM_HP_UP
# 1998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_1, ITEM_PROTEIN
# 1999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_2, ITEM_IRON
# 2000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_3, ITEM_CALCIUM
# 2001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_4, ITEM_ZINC
# 2002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_5, ITEM_CARBOS
# 2003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_6, ITEM_PP_MAX
# 2004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_7, MSGBOX_DEFAULT
# 2005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 2007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 2009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_3
# 2010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_BagFull
# 2012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HP_UP, MauvilleCity_GameCorner_EventScript_BuyVitamins_3
# 2020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PROTEIN, MauvilleCity_GameCorner_EventScript_BuyVitamins_4
# 2027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_IRON, MauvilleCity_GameCorner_EventScript_BuyVitamins_5
# 2034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CALCIUM, MauvilleCity_GameCorner_EventScript_BuyVitamins_6
# 2041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZINC, MauvilleCity_GameCorner_EventScript_BuyVitamins_7
# 2048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CARBOS, MauvilleCity_GameCorner_EventScript_BuyVitamins_8
# 2055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PP_MAX, MauvilleCity_GameCorner_EventScript_BuyVitamins_9
# 2063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyVitamins_1:
# 2066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50
# 2069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyVitamins_3:
# 2014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 2017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_4:
# 2021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 2024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_5:
# 2028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 2031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_6:
# 2035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 2038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_7:
# 2042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 2044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 2045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 2047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_8:
# 2049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 2052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_9:
# 2056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 2058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49, MSGBOX_YESNO
# 2059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 2061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize::
# 2076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize_Text_0
# 2078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize::
# 2085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize_Text_0
# 2087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BagFull::
# 2093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BagFull_Text_0
# 2095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NewTMPrizes::
# 2102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BuyPokemon::
# 2107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 2109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_0, MSGBOX_DEFAULT
# 2110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 25, 2, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_1, MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_2
# 2111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 2112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_BuyPokemon_3
# 2114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyPokemon_4
# 2117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPokemon_1:
# 2119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_BuyPokemon_3:
# 2113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyStarterPokemon
	goto MauvilleCity_GameCorner_EventScript_BuyPokemon_1

MauvilleCity_GameCorner_EventScript_BuyPokemon_4:
# 2115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon
	goto MauvilleCity_GameCorner_EventScript_BuyPokemon_1


MauvilleCity_GameCorner_EventScript_BuyStarterPokemon::
# 2125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_0, SPECIES_BULBASAUR
# 2127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_1, SPECIES_CHARMANDER
# 2128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_2, SPECIES_SQUIRTLE
# 2129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_3, SPECIES_CHIKORITA
# 2130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_4, SPECIES_CYNDAQUIL
# 2131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_5, SPECIES_TOTODILE
# 2132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_6, SPECIES_TREECKO
# 2133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_7, SPECIES_TORCHIC
# 2134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_8, SPECIES_MUDKIP
# 2135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_9, SPECIES_TURTWIG
# 2136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_10, SPECIES_CHIMCHAR
# 2137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_11, SPECIES_PIPLUP
# 2138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_12, SPECIES_SNIVY
# 2139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_13, SPECIES_TEPIG
# 2140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_14, SPECIES_OSHAWOTT
# 2141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_15, SPECIES_CHESPIN
# 2142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_16, SPECIES_FENNEKIN
# 2143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_17, SPECIES_FROAKIE
# 2144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_18, SPECIES_ROWLET
# 2145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_19, SPECIES_LITTEN
# 2146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_20, SPECIES_POPPLIO
# 2147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_21, SPECIES_GROOKEY
# 2148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_22, SPECIES_SCORBUNNY
# 2149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_23, SPECIES_SOBBLE
# 2150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_24, SPECIES_SPRIGATITO
# 2151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_25, SPECIES_FUECOCO
# 2152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_26, SPECIES_QUAXLY
# 2153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_27, MSGBOX_DEFAULT
# 2154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 127, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 128, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 2161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_3, 5
# 2166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_PokemonReceived
# 2167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_PokemonSentToPC
# 2168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForPokemon
	return


MauvilleCity_GameCorner_EventScript_BuyPrizePokemon::
# 2172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_0, SPECIES_ABRA
# 2174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_1, SPECIES_CLEFAIRY
# 2175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_2, SPECIES_JIGGLYPUFF
# 2176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_3, SPECIES_PORYGON
# 2177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_4, SPECIES_MR_MIME
# 2178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_5, SPECIES_EEVEE
# 2179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_6, SPECIES_WOBBUFFET
# 2180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_7, SPECIES_SNORLAX
# 2181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_8, SPECIES_MIMIKYU
# 2182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_9, SPECIES_ROTOM
# 2183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_10, MSGBOX_DEFAULT
# 2184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 2185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 2186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 2187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 2189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 2190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_ABRA, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_3
# 2197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_CLEFAIRY, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_4
# 2204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_JIGGLYPUFF, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_5
# 2211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_PORYGON, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_6
# 2218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_MR_MIME, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_7
# 2225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_EEVEE, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_8
# 2232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_WOBBUFFET, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_9
# 2239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_SNORLAX, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_10
# 2246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_MIMIKYU, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_11
# 2253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_ROTOM, MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_12
# 2261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1:
# 2264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_PokemonReceived
# 2265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_PokemonSentToPC
# 2266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForPokemon
	return

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_3:
# 2191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 600, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 600
# 2193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 600
# 2196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_ABRA, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_4:
# 2198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_CLEFAIRY, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_5:
# 2205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 2207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 2210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_JIGGLYPUFF, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_6:
# 2212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_PORYGON, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_7:
# 2219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 2221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 2224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_MR_MIME, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_8:
# 2226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_EEVEE, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_9:
# 2233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_WOBBUFFET, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_10:
# 2240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_SNORLAX, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_11:
# 2247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 750, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 750
# 2249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 750
# 2252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_MIMIKYU, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_12:
# 2254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 1500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 2255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 1500
# 2256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28, MSGBOX_YESNO
# 2257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 2258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1500
# 2259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_ROTOM, 5
	goto MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_1


MauvilleCity_GameCorner_EventScript_PokemonReceived::
# 2270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_PokemonReceived_Text_0
# 2272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_PokemonSentToPC::
# 2279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 2280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_PokemonSentToPC_Text_0
# 2281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 2283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NoRoomForPokemon::
# 2288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 2289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NoRoomForPokemon_Text_0
# 2290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 2291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 2292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
	.string "Pidgeot         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_8:
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Alakazam       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_9:
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Slowbro         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_10:
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Slowking       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_11:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gengar         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_12:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Kangaskhan   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_13:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Pinsir          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_14:
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gyarados       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_15:
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Aerodactyl   500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_16:
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ampharos     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_17:
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Steelix          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_18:
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scizor           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_19:
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Heracross     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_20:
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Houndoom      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_21:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tyranitar     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_22:
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sceptile      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_23:
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blaziken      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_24:
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Swampert      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_25:
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gardevoir     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_26:
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sableye      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_27:
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mawile          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_28:
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Aggron         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_29:
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Medicham     500 coins$"

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
	.string "Banette      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_35:
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absol           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_36:
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Glalie          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_37:
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Salamence    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_38:
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Metagross    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_39:
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Latias          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_40:
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Latios          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_41:
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lopunny      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_42:
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Garchomp     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_43:
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lucario         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_44:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Abomasnow    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_45:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gallade        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_46:
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Audino         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_47:
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Diancie      500 coins$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_48:
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Mega Stone would you like?$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_49:
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to buy {STR_VAR_1} for\n"
	.string "{STR_VAR_2} coins. Is that correct?$"

MauvilleCity_GameCorner_EventScript_BuyMegaStones_Text_50:
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_0:
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We only have one of each of these\n"
	.string "items, and they cost a whopping 1,250\l"
	.string "coins each.$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_1:
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Band$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_2:
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Scarf$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_3:
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Specs$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_4:
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Leftovers$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_5:
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Life Orb$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_6:
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Assault Vest$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_7:
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which item would you like for 1,250\n"
	.string "coins?$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_0:
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Normal Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_1:
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fighting Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_2:
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flying Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_3:
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Poison Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_4:
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ground Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_5:
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rock Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_6:
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bug Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_7:
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ghost Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_8:
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Steel Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_9:
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fire Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_10:
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Water Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_11:
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grass Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_12:
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Electric Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_13:
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_14:
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ice Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_15:
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dragon Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_16:
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dark Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_17:
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fairy Gem$"

MauvilleCity_GameCorner_EventScript_BuyGems_Text_18:
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Gem you like to buy for 250 coins?$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_0:
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ability Shield   300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_1:
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bright Powder   200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_2:
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Clear Amulet     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_3:
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Covert Cloak    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_4:
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eviolite            300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_5:
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Expert Belt      450 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_6:
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flame Orb          200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_7:
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Heavy Boots     200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_8:
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "King's Rock       200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_9:
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lagging Tail      200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_10:
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Light Clay         400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_11:
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Metronome         300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_12:
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Protect Pads    300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_13:
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Punching Glove 300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_14:
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Quick Claw         200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_15:
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Safety Goggles 350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_16:
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scope Lens        250 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_17:
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Shed Shell          250 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_18:
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Shell Bell           350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_19:
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sticky Barb       350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_20:
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Toxic Orb           200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_21:
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Util. Umbrella    400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_22:
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wide Lens          400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_23:
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Zoom Lens          400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_24:
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which held item would you like?$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_0:
# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Air Balloon       100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_1:
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Focus Sash       250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_2:
# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mental Herb      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_3:
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Power Herb        150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_4:
# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "White Herb        250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_5:
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mirror Herb       250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_6:
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Adrenaline Orb 250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_7:
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blunder Policy 100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_8:
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Weakness Plcy  150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_9:
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Throat Spray    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_10:
# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eject Button    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_11:
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eject Pack        200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_12:
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Red Card            150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_13:
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absorb Bulb      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_14:
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cell Battery     100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_15:
# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Luminous Moss  100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_16:
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snowball           100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_17:
# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grassy Seed      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_18:
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Electric Seed   100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_19:
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Misty Seed        100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_20:
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic Seed    100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_21:
# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which one-time use item would you like?$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_0:
# 1883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fire Punch        350 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_1:
# 1884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ice Punch         350 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_2:
# 1885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thunder Punch  350 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_3:
# 1886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thunderbolt       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_4:
# 1887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flamethrower    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_5:
# 1888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ice Beam           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_6:
# 1889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_7:
# 1890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bulk Up              400 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_8:
# 1891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Calm Mind           400 coins$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_9:
# 1892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which TM would you like?$"

MauvilleCity_GameCorner_EventScript_ComeBackLater_Text_0:
# 1989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Please come back to exchange your\n"
	.string "coins for more prizes!$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_0:
# 1997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "HP Up        200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_1:
# 1998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Protein    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_2:
# 1999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Iron         100 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_3:
# 2000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Calcium    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_4:
# 2001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Zinc         100 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_5:
# 2002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Carbos     200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_6:
# 2003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "PP Max      200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_7:
# 2004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which vitamin would you like?$"

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize_Text_0:
# 2077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "coins for that prize.\p"
	.string "Please choose something else, or come\n"
	.string "back after you've earned more coins.$"

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize_Text_0:
# 2086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "coins for one of our rare battle items.\l"
	.string "These cost 1,250 coins each.\p"
	.string "Please choose something else, or come\n"
	.string "back after you've earned more coins.$"

MauvilleCity_GameCorner_EventScript_BagFull_Text_0:
# 2094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but your bag is full.\p"
	.string "Please make some room and come back.$"

MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_0:
# 2109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which kind of Pokémon are you\n"
	.string "interested in?$"

MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_1:
# 2110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Starter Pokémon$"

MauvilleCity_GameCorner_EventScript_BuyPokemon_Text_2:
# 2110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Prize Pokémon$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_0:
# 2126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bulbasaur        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_1:
# 2127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Charmander     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_2:
# 2128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Squirtle           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_3:
# 2129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chikorita         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_4:
# 2130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cyndaquil        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_5:
# 2131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Totodile          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_6:
# 2132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Treecko           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_7:
# 2133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Torchic            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_8:
# 2134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mudkip            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_9:
# 2135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Turtwig            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_10:
# 2136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chimchar         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_11:
# 2137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Piplup              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_12:
# 2138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snivy               500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_13:
# 2139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Tepig               500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_14:
# 2140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oshawott         500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_15:
# 2141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Chespin            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_16:
# 2142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fennekin          500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_17:
# 2143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Froakie             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_18:
# 2144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rowlet              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_19:
# 2145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Litten               500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_20:
# 2146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Popplio             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_21:
# 2147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grookey           500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_22:
# 2148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scorbunny       500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_23:
# 2149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sobble              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_24:
# 2150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sprigatito        500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_25:
# 2151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fuecoco            500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_26:
# 2152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Quaxly              500 coins$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_27:
# 2153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Starter Pokémon would you like\n"
	.string "for 500 coins?$"

MauvilleCity_GameCorner_EventScript_BuyStarterPokemon_Text_28:
# 2162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to buy a {STR_VAR_1} for\n"
	.string "{STR_VAR_2} coins. Is that correct?$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_0:
# 2173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Abra                   600 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_1:
# 2174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Clefairy            400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_2:
# 2175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Jigglypuff        400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_3:
# 2176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Porygon             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_4:
# 2177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mr. Mime             500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_5:
# 2178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eevee                750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_6:
# 2179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wobbuffet        750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_7:
# 2180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snorlax             750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_8:
# 2181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mimikyu             750 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_9:
# 2182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rotom              1500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPrizePokemon_Text_10:
# 2183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which Prize Pokémon would you like?$"

MauvilleCity_GameCorner_EventScript_PokemonReceived_Text_0:
# 2271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go! Take good care of your new\n"
	.string "Pokémon!$"

MauvilleCity_GameCorner_EventScript_PokemonSentToPC_Text_0:
# 2280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go! Your party was full, so it\n"
	.string "was sent to your PC.$"

MauvilleCity_GameCorner_EventScript_NoRoomForPokemon_Text_0:
# 2289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
