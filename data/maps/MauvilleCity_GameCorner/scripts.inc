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
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
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
	case 0, MauvilleCity_GameCorner_EventScript_TMDoubleTeam
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
	bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
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
	checkitemspace ITEM_TM_DOUBLE_TEAM
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_DOUBLE_TEAM
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


MauvilleCity_GameCorner_EventScript_GimmighoulEncounter::
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_HIDE_GIMMIGHOUL
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playmoncry SPECIES_GIMMIGHOUL, CRY_MODE_ENCOUNTER
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmoncry
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setwildbattle SPECIES_GIMMIGHOUL, 50, ITEM_BIG_NUGGET
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dowildbattle
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removeobject 13
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


MauvilleCity_GameCorner_EventScript_Scott::
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ScottIntro, MSGBOX_NPC
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Scott_Text_0, MSGBOX_YESNO
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_GameCorner_EventScript_Scott_2
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ScottDecline, MSGBOX_NPC
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_COIN_CASE
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Scott_Text_2, MSGBOX_NPC
MauvilleCity_GameCorner_EventScript_Scott_1:
# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_FACING
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case DIR_NORTH, MauvilleCity_GameCorner_EventScript_Scott_7
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case DIR_EAST, MauvilleCity_GameCorner_EventScript_Scott_8
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case DIR_WEST, MauvilleCity_GameCorner_EventScript_Scott_9
MauvilleCity_GameCorner_EventScript_Scott_5:
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removeobject 14
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_Scott_2:
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ScottAgree, MSGBOX_NPC
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_COIN_CASE
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_Scott_Text_1, MSGBOX_NPC
	goto MauvilleCity_GameCorner_EventScript_Scott_1

MauvilleCity_GameCorner_EventScript_Scott_7:
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement 14, MauvilleCity_GameCorner_Movement_ScottLeaveLeft
	goto MauvilleCity_GameCorner_EventScript_Scott_5

MauvilleCity_GameCorner_EventScript_Scott_8:
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement 14, MauvilleCity_GameCorner_Movement_ScottLeave
	goto MauvilleCity_GameCorner_EventScript_Scott_5

MauvilleCity_GameCorner_EventScript_Scott_9:
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement 14, MauvilleCity_GameCorner_Movement_ScottLeave
	goto MauvilleCity_GameCorner_EventScript_Scott_5


# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Movement_ScottLeave:
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
	step_end

# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Movement_ScottLeaveLeft:
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_left
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_right
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_down
	step_end

MauvilleCity_GameCorner_EventScript_SlotMachine::
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_SlotMachine_Text_0
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


Roulette_EventScript_Table::
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Roulette_EventScript_Table_Text_0
# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes::
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_2
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_1, MSGBOX_DEFAULT
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultichoice 25, 2, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_2, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_3, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_4, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_5, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_6, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_7
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_6
# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_7
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_8
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_9
# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_10
# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_11
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4:
# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_2:
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_0, MSGBOX_DEFAULT
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_6:
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_7:
# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_8:
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMs
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_9:
# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_10:
# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins
	goto MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_4

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_11:
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
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


MauvilleCity_GameCorner_EventScript_BuyRareBattleItems::
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_4
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1:
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 1250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_0, MSGBOX_DEFAULT
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 1250
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_15
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_14:
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_18
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_17:
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_21
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_20:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_24
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_23:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_27
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_26:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_30
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_29:
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_7, MSGBOX_DEFAULT
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_BAND, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_34
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_35
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_36
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_37
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_38
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_39
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32:
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_9
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_2:
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_OutOfRareItems
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_3:
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_SPECS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_8
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_4:
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHOICE_SCARF, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_3
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_7:
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_LIFE_ORB, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_11
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_8:
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_LEFTOVERS, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_7
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_11:
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_ASSAULT_VEST, MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_2
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_1

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_15:
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_1, ITEM_CHOICE_BAND
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_14

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_18:
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_2, ITEM_CHOICE_SCARF
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_17

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_21:
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_3, ITEM_CHOICE_SPECS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_20

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_24:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_4, ITEM_LEFTOVERS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_23

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_27:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_5, ITEM_LIFE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_26

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_30:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_6, ITEM_ASSAULT_VEST
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_29

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_34:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_BAND
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_35:
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_SCARF
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_36:
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_SPECS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_37:
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_LEFTOVERS
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_38:
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_LIFE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_39:
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1250
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_ASSAULT_VEST
	goto MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_32


MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems::
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_2
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_1:
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_5
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_4:
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_8
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_7:
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_11
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_10:
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_14
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_13:
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_17
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_16:
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_20
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_19:
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_23
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_22:
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_26
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_25:
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_29
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_28:
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_32
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_31:
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_35
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_34:
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_38
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_37:
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_41
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_40:
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_44
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_43:
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_47
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_46:
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_50
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_49:
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_53
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_52:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_56
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_55:
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_59
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_58:
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_62
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_61:
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_65
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_64:
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_68
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_67:
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_23, MSGBOX_DEFAULT
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 25, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABILITY_SHIELD, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_72
# 1055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EXPERT_BELT, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BRIGHT_POWDER, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_74
# 1069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CLEAR_AMULET, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_75
# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_COVERT_CLOAK, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_76
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FLAME_ORB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_77
# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HEAVY_DUTY_BOOTS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_78
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_KINGS_ROCK, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_79
# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LAGGING_TAIL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_80
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LIGHT_CLAY, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_81
# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_METRONOME, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PROTECTIVE_PADS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_83
# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PUNCHING_GLOVE, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_84
# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_QUICK_CLAW, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_85
# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SAFETY_GOGGLES, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_86
# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SCOPE_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_87
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHED_SHELL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_88
# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SHELL_BELL, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_89
# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_STICKY_BARB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_90
# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_TOXIC_ORB, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_91
# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_UTILITY_UMBRELLA, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_92
# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WIDE_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_93
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZOOM_LENS, MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_94
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70:
# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_9
# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_2:
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_0, ITEM_ABILITY_SHIELD
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_1

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_5:
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_1, ITEM_BRIGHT_POWDER
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_4

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_8:
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_2, ITEM_CLEAR_AMULET
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_7

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_11:
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_3, ITEM_COVERT_CLOAK
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_10

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_14:
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_4, ITEM_EXPERT_BELT
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_13

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_17:
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_5, ITEM_FLAME_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_16

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_20:
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_6, ITEM_HEAVY_DUTY_BOOTS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_19

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_23:
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_7, ITEM_KINGS_ROCK
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_22

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_26:
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_8, ITEM_LAGGING_TAIL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_25

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_29:
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_9, ITEM_LIGHT_CLAY
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_28

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_32:
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_10, ITEM_METRONOME
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_31

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_35:
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_11, ITEM_PROTECTIVE_PADS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_34

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_38:
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_12, ITEM_PUNCHING_GLOVE
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_37

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_41:
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_13, ITEM_QUICK_CLAW
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_40

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_44:
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_14, ITEM_SAFETY_GOGGLES
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_43

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_47:
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_15, ITEM_SCOPE_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_46

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_50:
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_16, ITEM_SHED_SHELL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_49

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_53:
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_17, ITEM_SHELL_BELL
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_52

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_56:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_18, ITEM_STICKY_BARB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_55

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_59:
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_19, ITEM_TOXIC_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_58

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_62:
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_20, ITEM_UTILITY_UMBRELLA
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_61

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_65:
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_21, ITEM_WIDE_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_68:
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_22, ITEM_ZOOM_LENS
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_67

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_72:
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_73:
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 450, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 450
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 450
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_74:
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_75:
# 1070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_76:
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 500, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 500
# 1079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 500
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_77:
# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_78:
# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_79:
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_80:
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_81:
# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_82:
# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_83:
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_84:
# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 300, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 300
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 300
# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_85:
# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_86:
# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_87:
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_88:
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_89:
# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_90:
# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 350, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 350
# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 350
# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_91:
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_92:
# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_93:
# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_94:
# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 400, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 400
# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 400
# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_70


MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems::
# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_2
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_1:
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_5
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_4:
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_8
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_7:
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_11
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_10:
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_14
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_13:
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_17
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_16:
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_20
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_19:
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_23
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_22:
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_26
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_25:
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_29
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_28:
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_32
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_31:
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_35
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_34:
# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_38
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_37:
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_41
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_40:
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_44
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_43:
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_47
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_46:
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_50
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_49:
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_53
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_52:
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_56
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_55:
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_59
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_58:
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_62
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_61:
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_21, MSGBOX_DEFAULT
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_AIR_BALLOON, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_66
# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_FOCUS_SASH, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_67
# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MENTAL_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_68
# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_POWER_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_69
# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WHITE_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_70
# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MIRROR_HERB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_71
# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ADRENALINE_ORB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_72
# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_BLUNDER_POLICY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_73
# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_WEAKNESS_POLICY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_74
# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_THROAT_SPRAY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_75
# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EJECT_BUTTON, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_76
# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_EJECT_PACK, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_77
# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_RED_CARD, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_78
# 1343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ABSORB_BULB, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_79
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CELL_BATTERY, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_80
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_LUMINOUS_MOSS, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_81
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_SNOWBALL, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_82
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_GRASSY_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_83
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ELECTRIC_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_84
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_MISTY_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_85
# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PSYCHIC_SEED, MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_86
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64:
# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_9
# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_2:
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_0, ITEM_AIR_BALLOON
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_1

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_5:
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_1, ITEM_FOCUS_SASH
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_4

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_8:
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_2, ITEM_MENTAL_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_7

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_11:
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_3, ITEM_POWER_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_10

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_14:
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_4, ITEM_WHITE_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_13

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_17:
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_5, ITEM_MIRROR_HERB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_16

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_20:
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_6, ITEM_ADRENALINE_ORB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_19

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_23:
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_7, ITEM_BLUNDER_POLICY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_22

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_26:
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_8, ITEM_WEAKNESS_POLICY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_25

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_29:
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_9, ITEM_THROAT_SPRAY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_28

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_32:
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_10, ITEM_EJECT_BUTTON
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_31

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_35:
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_11, ITEM_EJECT_PACK
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_34

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_38:
# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_12, ITEM_RED_CARD
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_37

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_41:
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_13, ITEM_ABSORB_BULB
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_40

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_44:
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_14, ITEM_CELL_BATTERY
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_43

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_47:
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_15, ITEM_LUMINOUS_MOSS
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_46

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_50:
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_16, ITEM_SNOWBALL
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_49

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_53:
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_17, ITEM_GRASSY_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_52

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_56:
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_18, ITEM_ELECTRIC_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_55

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_59:
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_19, ITEM_MISTY_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_58

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_62:
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_20, ITEM_PSYCHIC_SEED
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_61

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_66:
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_67:
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_68:
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_69:
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_70:
# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_71:
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_72:
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 250, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 250
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_73:
# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_74:
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_75:
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_76:
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_77:
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_78:
# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 150, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 150
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 150
# 1342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_79:
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_80:
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_81:
# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_82:
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_83:
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_84:
# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_85:
# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_86:
# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_64


MauvilleCity_GameCorner_EventScript_BuyTMs::
# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyTMs_Text_0
# 1415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_ComeBackLater::
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_ComeBackLater_Text_0
# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 1425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_BuyVitamins::
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_0, ITEM_HP_UP
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_1, ITEM_PROTEIN
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_2, ITEM_IRON
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_3, ITEM_CALCIUM
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_4, ITEM_ZINC
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_5, ITEM_CARBOS
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultipush MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_6, ITEM_PP_MAX
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_7, MSGBOX_DEFAULT
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, TRUE, 0, DYN_MULTICHOICE_CB_NONE
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_3
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_3
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_HP_UP, MauvilleCity_GameCorner_EventScript_BuyVitamins_3
# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PROTEIN, MauvilleCity_GameCorner_EventScript_BuyVitamins_4
# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_IRON, MauvilleCity_GameCorner_EventScript_BuyVitamins_5
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CALCIUM, MauvilleCity_GameCorner_EventScript_BuyVitamins_6
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_ZINC, MauvilleCity_GameCorner_EventScript_BuyVitamins_7
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_CARBOS, MauvilleCity_GameCorner_EventScript_BuyVitamins_8
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case ITEM_PP_MAX, MauvilleCity_GameCorner_EventScript_BuyVitamins_9
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MoveTutor_EventScript_ComeBackLater
MauvilleCity_GameCorner_EventScript_BuyVitamins_1:
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_9
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return

MauvilleCity_GameCorner_EventScript_BuyVitamins_3:
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_4:
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_5:
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_6:
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_7:
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 100
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_8:
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1

MauvilleCity_GameCorner_EventScript_BuyVitamins_9:
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 200, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_2, 200
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8, MSGBOX_YESNO
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_ComeBackLater
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 200
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_TEMP_3
	goto MauvilleCity_GameCorner_EventScript_BuyVitamins_1


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize::
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize_Text_0
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	return


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize::
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize_Text_0
# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Are you interested?$"

MauvilleCity_GameCorner_EventScript_Scott_Text_1:
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: I look forward to seeing what\n"
	.string "you can do!$"

MauvilleCity_GameCorner_EventScript_Scott_Text_2:
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: I hope to see you around!$"

MauvilleCity_GameCorner_EventScript_SlotMachine_Text_0:
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a slot machine. Unfortunately,\n"
	.string "they won't let children play.$"

Roulette_EventScript_Table_Text_0:
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's a roulette table. Unfortunately,\n"
	.string "they won't let children play.$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_0:
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you need a Coin Case to\n"
	.string "purchase prizes.$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_1:
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which kind of prize would you like to\n"
	.string "purchase?$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_2:
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "One-Time Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_3:
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Held Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_4:
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Technical Machines$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_5:
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Rare Battle Items$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_6:
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "EV Vitamins$"

MauvilleCity_GameCorner_EventScript_ExchangeCoinsForPrizes_Text_7:
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Type Gems$"

MauvilleCity_GameCorner_EventScript_OutOfRareItems_Text_0:
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but it looks we're all out of\n"
	.string "rare battle items for now.\p"
	.string "Please come back later!$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_0:
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We only have one of each of these\n"
	.string "items, and they cost a whopping 1,250\l"
	.string "coins each.$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_1:
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Band$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_2:
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Scarf$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_3:
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Choice Specs$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_4:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Leftovers$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_5:
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Life Orb$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_6:
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Assault Vest$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_7:
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which item would you like for 1,250\n"
	.string "coins?$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_8:
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want to buy {STR_VAR_1} for\n"
	.string "{STR_VAR_2} coins. Is that correct?$"

MauvilleCity_GameCorner_EventScript_BuyRareBattleItems_Text_9:
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_0:
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ability Shield   300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_1:
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bright Powder   200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_2:
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Clear Amulet     500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_3:
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Covert Cloak    500 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_4:
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Expert Belt      450 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_5:
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Flame Orb          200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_6:
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Heavy Boots     200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_7:
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "King's Rock       200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_8:
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Lagging Tail      200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_9:
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Light Clay         400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_10:
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Metronome         300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_11:
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Protect Pads    300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_12:
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Punching Glove 300 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_13:
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Quick Claw         200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_14:
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Safety Goggles 350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_15:
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scope Lens        250 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_16:
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Shed Shell          250 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_17:
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Shell Bell           350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_18:
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sticky Barb       350 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_19:
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Toxic Orb           200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_20:
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Util. Umbrella    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_21:
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wide Lens          400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_22:
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Zoom Lens          400 coins$"

MauvilleCity_GameCorner_EventScript_BuyPermanentHeldItems_Text_23:
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which held item would you like?$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_0:
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Air Balloon       100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_1:
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Focus Sash       250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_2:
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mental Herb      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_3:
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Power Herb        150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_4:
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "White Herb        250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_5:
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mirror Herb       250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_6:
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Adrenaline Orb 250 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_7:
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Blunder Policy 100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_8:
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Weakness Plcy  150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_9:
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Throat Spray    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_10:
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eject Button    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_11:
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Eject Pack        200 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_12:
# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Red Card            150 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_13:
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Absorb Bulb      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_14:
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Cell Battery     100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_15:
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Luminous Moss  100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_16:
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Snowball           100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_17:
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Grassy Seed      100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_18:
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Electric Seed   100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_19:
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Misty Seed        100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_20:
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Psychic Seed    100 coins$"

MauvilleCity_GameCorner_EventScript_BuyOneTimeHeldItems_Text_21:
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which one-time use item would you like?$"

MauvilleCity_GameCorner_EventScript_BuyTMs_Text_0:
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Sorry, TMs are not available at this\n"
	.string "time.$"

MauvilleCity_GameCorner_EventScript_ComeBackLater_Text_0:
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Please come back to exchange your\n"
	.string "coins for more prizes!$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_0:
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "HP Up        200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_1:
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Protein    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_2:
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Iron         100 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_3:
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Calcium    200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_4:
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Zinc         100 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_5:
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Carbos     200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_6:
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "PP Max      200 coins$"

MauvilleCity_GameCorner_EventScript_BuyVitamins_Text_7:
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which vitamin would you like?$"

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPrize_Text_0:
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "coins for that prize.\p"
	.string "Please choose something else, or come\n"
	.string "back after you've earned more coins.$"

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForRarePrize_Text_0:
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry, but you don't have enough\n"
	.string "coins for one of our rare battle items.\l"
	.string "These cost 1,250 coins each.\p"
	.string "Please choose something else, or come\n"
	.string "back after you've earned more coins.$"

MauvilleCity_GameCorner_Text_ScottIntro::
# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: Great! I've got another\n"
	.string "participant already lined up, so just\l"
	.string "come out to the Tower in Route 111\l"
	.string "whenever you're ready.\p"
	.string "You can take this Coin Case now.\n"
	.string "The more battles you win, the more Coins\l"
	.string "I'll give you.$"

MauvilleCity_GameCorner_Text_ScottDecline::
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Scott: I understand, you seem busy.\n"
	.string "Well, take this Coin Case anyway.\p"
	.string "If you ever change your mind, come out\n"
	.string "to the Tower in Route 111 and you can\l"
	.string "earn some Coins.$"

MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay::
# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The games at the Game Corner are only\n"
	.string "open to adults above a certain age.\p"
	.string "We don't want children to develop\n"
	.string "dangerous habits.$"
