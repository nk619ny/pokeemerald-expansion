# 1 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
MossdeepCity_SpaceCenter_2F_R_MapScripts::
# 3 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"

# 5 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
/*
# 6 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
TURO & SADA STATE VARIABLES:
# 7 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
- 0: First Meeting
# 8 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
- 1: Met, not yet battled 
# 9 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
- 2: Met, battled, not yet given Paradox Pokémon
# 10 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
- 3: Met, battled, given Paradox Pokémon
# 11 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
- 4: Ready for second battle
# 12 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
- 5: Beaten twice, unlimited paradox access
# 13 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
*/
# 14 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"

# 15 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"

# 16 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
/*
# 17 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    if(var(TempVar_TradeCandidate) == SPECIES_MACHAMP) {
# 18 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        msgbox("This is Machamp")
# 19 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        waitmessage
# 20 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    }
# 21 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    else {
# 22 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        msgbox("This is not Machamp")
# 23 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        waitmessage
# 24 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    }
# 25 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    if(var(VAR_TEMP_6) == SPECIES_MEWTWO) {
# 26 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        msgbox("This is Mewtwo")
# 27 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        waitmessage
# 28 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    }
# 29 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    else {
# 30 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        msgbox("This is not Mewtwo")
# 31 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        waitmessage
# 32 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    }
# 33 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    if(var(VAR_TEMP_6) == SPECIES_IRON_BUNDLE) {
# 34 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        msgbox("This is Iron Bundle")
# 35 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        waitmessage
# 36 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    }
# 37 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    else {
# 38 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        msgbox("This is not Iron Bundle")
# 39 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
        waitmessage
# 40 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
    }
# 41 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
*/

MossdeepCity_SpaceCenter_2F_R_EventScript_RevivalScientist::
# 53 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lock
# 54 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	faceplayer
# 55 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro::
# 60 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 61 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	faceplayer
# 62 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmovement 0
# 63 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_TURO_STATE
# 64 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 0, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_3
# 69 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_4
# 72 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_5
# 75 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_6
# 78 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 4, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_7
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1:
# 84 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 85 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_3:
# 65 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroFirstMeeting
# 66 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 1
# 67 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_4:
# 70 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_5:
# 73 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_6:
# 76 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_7:
# 79 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1::
# 90 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroAreYouInterested, MSGBOX_YESNO
# 91 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_2
# 101 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_1:
# 104 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 105 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_2:
# 92 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroProveYourself, MSGBOX_YESNO
# 93 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_5
# 97 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWhenReady
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_5:
# 94 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroBattle
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroBattle::
# 110 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	trainerbattle_single TRAINER_TURO_1, MossdeepCity_SpaceCenter_2F_R_Text_TuroIntro, MossdeepCity_SpaceCenter_2F_R_Text_TuroDefeated, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2
	return


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2::
# 114 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 2
# 115 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroDoYouHaveFuturePokemon, MSGBOX_YESNO
# 116 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_2
# 120 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_1:
# 123 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 124 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_2:
# 117 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3::
# 129 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3_2
# 134 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroEnjoyParadox, MSGBOX_NPC
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3_1:
# 136 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 137 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3_2:
# 130 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 4
# 131 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4::
# 142 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 143 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroChampionNow, MSGBOX_YESNO
# 144 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 145 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4_2
# 149 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWhenReady
# 150 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4_1:
# 152 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4_2:
# 146 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	trainerbattle_single TRAINER_TURO_2, MossdeepCity_SpaceCenter_2F_R_Text_TuroNotLikeLastTime, MossdeepCity_SpaceCenter_2F_R_Text_TuroDefeated, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5::
# 157 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 5
# 158 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroDoYouHaveFuturePokemon, MSGBOX_YESNO
# 159 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5_2
# 163 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5_1:
# 166 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 167 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5_2:
# 160 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5_1


MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade::
# 216 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 217 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special ChoosePartyMon
# 218 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 219 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_2
# 227 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 228 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	specialvar VAR_TEMP_5, GetTradeSpecies
# 229 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_0x8003, 37
# 230 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_TEMP_5
# 231 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DONPHAN, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_6
# 233 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VOLCARONA, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_7
# 235 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DELIBIRD, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_8
# 237 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HARIYAMA, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_9
# 239 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HYDREIGON, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_10
# 241 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TYRANITAR, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_11
# 243 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GARDEVOIR, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_12
# 245 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GALLADE, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_13
# 247 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VIRIZION, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_14
# 249 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TERRAKION, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_15
# 251 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_COBALION, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_16
# 253 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_AMOONGUSS, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 254 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_SALAMENCE, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 255 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_JIGGLYPUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 256 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_WIGGLYTUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 257 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MISDREAVUS, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 258 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MISMAGIUS, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 259 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MAGNETON, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 260 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MAGNEZONE, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 261 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_SUICUNE, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 262 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_ENTEI, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 263 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_RAIKOU, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 266 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroNotAParadox
MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4:
# 268 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_TEMP_8
# 269 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special BufferMonNickname
# 270 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 271 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_Text_0, MSGBOX_YESNO
# 272 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_20
# 279 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_TURO_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_23
# 296 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8008, VAR_TEMP_8
# 297 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special CreateInGameTradeParadoxPokemon
# 298 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special DoInGameTradeScene
MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_19:
# 301 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 302 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_2:
# 220 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 221 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
# 222 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 224 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_6:
# 232 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_TREADS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_7:
# 234 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_MOTH
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_8:
# 236 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_BUNDLE
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_9:
# 238 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_HANDS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_10:
# 240 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_JUGULIS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_11:
# 242 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_THORNS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_12:
# 244 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_VALIANT
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_13:
# 246 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_VALIANT
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_14:
# 248 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_LEAVES
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_15:
# 250 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_BOULDER
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_16:
# 252 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_CROWN
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17:
# 264 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroTrySada
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_20:
# 273 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackChangedMind
# 274 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 275 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_23:
# 280 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 281 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_Text_1, MSGBOX_YESNO
# 282 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_26
# 289 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8008, VAR_TEMP_8
# 290 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 3
# 291 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special CreateInGameTradeParadoxPokemon
# 292 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special DoInGameTradeScene
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_19

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_26:
# 283 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackChangedMind
# 284 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 285 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroNotAParadox::
# 307 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 308 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroNotAParadox, MSGBOX_NPC
# 309 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 311 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroTrySada::
# 316 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 317 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroTrySada, MSGBOX_NPC
# 318 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 320 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada::
# 337 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 338 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	faceplayer
# 339 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmovement 0
# 340 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_SADA_STATE
# 341 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 0, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_3
# 346 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_4
# 349 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_5
# 352 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_6
# 355 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 4, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_7
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1:
# 360 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 361 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_3:
# 342 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaFirstMeeting, MSGBOX_NPC
# 343 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 1
# 344 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_4:
# 347 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_5:
# 350 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_6:
# 353 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_7:
# 356 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1::
# 366 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 367 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaAreYouInterested, MSGBOX_YESNO
# 368 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_2
# 376 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_1:
# 378 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 379 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_2:
# 369 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaProveYourself, MSGBOX_YESNO
# 370 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_5
# 373 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWhenReady
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_5:
# 371 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaBattle
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaBattle::
# 384 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	trainerbattle_single TRAINER_SADA_1, MossdeepCity_SpaceCenter_2F_R_Text_SadaIntro, MossdeepCity_SpaceCenter_2F_R_Text_SadaDefeated, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2
	return


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2::
# 388 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 2
# 389 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaDoYouHavePastPokemon, MSGBOX_YESNO
# 390 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2_2
# 393 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2_1:
# 395 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 396 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2_2:
# 391 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3::
# 401 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3_2
# 405 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaEnjoyParadox, MSGBOX_NPC
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3_1:
# 407 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 408 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3_2:
# 402 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 4
# 403 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4::
# 413 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 414 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaChampionNow, MSGBOX_YESNO
# 415 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 416 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4_2
# 419 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWhenReady
# 420 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4_1:
# 422 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4_2:
# 417 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	trainerbattle_single TRAINER_SADA_2, MossdeepCity_SpaceCenter_2F_R_Text_SadaNotLikeLastTime, MossdeepCity_SpaceCenter_2F_R_Text_SadaDefeated, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5::
# 427 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 5
# 428 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaDoYouHavePastPokemon, MSGBOX_YESNO
# 429 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5_2
# 432 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5_1:
# 434 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 435 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5_2:
# 430 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5_1


MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade::
# 484 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 485 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special ChoosePartyMon
# 486 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 487 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_2
# 494 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 495 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	specialvar VAR_TEMP_5, GetTradeSpecies
# 496 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_0x8003, 36
# 497 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_TEMP_5
# 498 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DONPHAN, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_6
# 500 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VOLCARONA, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_7
# 502 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_AMOONGUSS, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_8
# 504 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_SALAMENCE, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_9
# 506 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_JIGGLYPUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_10
# 507 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_WIGGLYTUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_10
# 509 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MISDREAVUS, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_11
# 510 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MISMAGIUS, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_11
# 512 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MAGNETON, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_12
# 513 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MAGNEZONE, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_12
# 515 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_SUICUNE, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_13
# 517 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_ENTEI, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_14
# 519 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_RAIKOU, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_15
# 521 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HYDREIGON, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 522 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DELIBIRD, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 523 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HARIYAMA, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 524 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TYRANITAR, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 525 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VIRIZION, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 526 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TERRAKION, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 527 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_COBALION, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 528 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GARDEVOIR, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 529 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GALLADE, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 532 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaNotAParadox
MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4:
# 534 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_TEMP_8
# 535 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special BufferMonNickname
# 536 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 537 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_Text_0, MSGBOX_YESNO
# 538 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_19
# 544 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_SADA_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_22
# 561 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8008, VAR_TEMP_8
# 562 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special CreateInGameTradeParadoxPokemon
# 563 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special DoInGameTradeScene
MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_18:
# 566 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 567 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_2:
# 488 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 489 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWithPokemon
# 490 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 491 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_6:
# 499 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_GREAT_TUSK
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_7:
# 501 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_SLITHER_WING
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_8:
# 503 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_BRUTE_BONNET
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_9:
# 505 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_ROARING_MOON
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_10:
# 508 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_SCREAM_TAIL
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_11:
# 511 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_FLUTTER_MANE
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_12:
# 514 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_SANDY_SHOCKS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_13:
# 516 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_WALKING_WAKE
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_14:
# 518 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_GOUGING_FIRE
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_15:
# 520 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_RAGING_BOLT
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16:
# 530 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaTryTuro
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_19:
# 539 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackChangedMind
# 540 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 541 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_22:
# 545 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 546 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_Text_1, MSGBOX_YESNO
# 547 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_25
# 554 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8008, VAR_TEMP_8
# 555 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 3
# 556 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special CreateInGameTradeParadoxPokemon
# 557 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special DoInGameTradeScene
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_18

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_25:
# 548 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackChangedMind
# 549 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 550 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaTryTuro::
# 572 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 573 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaTryTuro, MSGBOX_NPC
# 574 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 575 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaNotAParadox::
# 584 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 585 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaNotAParadox, MSGBOX_NPC
# 586 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 587 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_Text_0:
# 271 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: You want to send your\n"
	.string "{STR_VAR_1} to the future, in\l"
	.string "exchange for an {STR_VAR_3}?$"

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_Text_1:
# 281 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: At the moment, we only have\n"
	.string "enough power for one pull from the\l"
	.string "future. Are you sure?$"

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_Text_0:
# 537 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: You want to send your\n"
	.string "{STR_VAR_1} to the past, in\l"
	.string "exchange for a {STR_VAR_3}?$"

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_Text_1:
# 546 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: At the moment, we only have\n"
	.string "enough power for one pull from the\l"
	.string "past. Are you sure?$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroIntro::
# 171 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Welcome to the future!$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroDefeated::
# 175 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Brilliant... you're ready for the future.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroFirstMeeting::
# 179 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "It is nice to meet you.\n"
	.string "My name is Professor Turo.\p"
	.string "I carry out research on Pokémon\n"
	.string "evolution - but not the kind of\l"
	.string "evolution you are thinking of. I am\l"
	.string "studying how Pokémon change over\l"
	.string "centuries.\p"
	.string "Alongside my colleague, Professor Sada,\n"
	.string "I developed a time machine capable of\l"
	.string "retrieving Pokémon from the future.\p"
	.string "These Pokémon may resemble our own,\n"
	.string "but they have adapted to advanced\l"
	.string "technology and draw strength from\l"
	.string "electricity. It's fascinating.\p"
	.string "In order to bring them to our time, I\n"
	.string "need to have a modern Pokémon whose\l"
	.string "lineage can be traced forward in order\l"
	.string "to scan the timeline.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroDoYouHaveFuturePokemon::
# 183 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: You clearly are very\n"
	.string "knowledgeable.\p"
	.string "If you bring me a Pokémon with a future\n"
	.string "counterpart, I can scan the timeline\l"
	.string "and bring a Paradox Pokémon from the\l"
	.string "future back to our time.\p"
	.string "Do you think you have such a\n"
	.string "candidate?$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroAreYouInterested::
# 187 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Our time machine is capable of\n"
	.string "taking a modern Pokémon and scanning\l"
	.string "the timeline to find a descendant of it\l"
	.string "from the future.\p"
	.string "Are you interested in using the time\n"
	.string "machine?$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroProveYourself::
# 191 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Even if you've found a Pokémon\n"
	.string "with a future counterpart, it may not\l"
	.string "be prudent to bring a Paradox Pokémon\l"
	.string "back to our time.\p"
	.string "It takes a clever and resourceful\n"
	.string "trainer to control a Pokémon from\l"
	.string "another time.\p"
	.string "Before running the time machine, I will\n"
	.string "need to be sure you can handle it.\p"
	.string "If you can defeat my team of advanced\n"
	.string "Pokémon, I will allow you one use of my\l"
	.string "time machine. Is that satisfactory?$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon::
# 195 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: I see. If you do capture a\n"
	.string "Pokémon with a counterpart in the\l"
	.string "future, I may be able to use it to find a\l"
	.string "new Paradox Pokémon.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWhenReady::
# 199 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: I see. If you do believe you are\n"
	.string "capable of defeating me and bringing\l"
	.string "back a Paradox Pokémon, you can find me\l"
	.string "here.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackChangedMind::
# 203 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: I see. When you are ready to use\n"
	.string "the time machine, you can find me here.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroChampionNow::
# 207 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Ah, {PLAYER}. I have good news.\p"
	.string "Professor Sada and I have been able to\n"
	.string "upgrade the time machine to allow for\l"
	.string "unlimited access to Paradox Pokémon.\p"
	.string "It appears that you have grown\n"
	.string "considerably as well.\p"
	.string "You may be ready to wield the\n"
	.string "responsibility of the time machine.\p"
	.string "However, I would like to test your\n"
	.string "abilities one last time before I allow\l"
	.string "that.\p"
	.string "How about it - are you ready for a\n"
	.string "battle?$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroNotLikeLastTime::
# 211 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: This time, I'll be showing you the\n"
	.string "full might of futuristic technology.\p"
	.string "I hope you are ready for a challenge!$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroNotAParadox::
# 324 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Unfortunately, I have not\n"
	.string "discovered a futuristic equivalent for\l"
	.string "that Pokémon.\p"
	.string "Come back if you want me to check\n"
	.string "another Pokémon of yours.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroTrySada::
# 328 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Unfortunately, I have not\n"
	.string "discovered a futuristic equivalent for\l"
	.string "that Pokémon.\p"
	.string "However, you should speak with\n"
	.string "Professor Sada. I believe she may have\l"
	.string "some interest in that specimen.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroEnjoyParadox::
# 332 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: You now have an extremely rare\n"
	.string "Pokémon from the future.\p"
	.string "I hope it brings you a more refined\n"
	.string "understanding of how dynamic the\l"
	.string "relationship between Pokémon and our\l"
	.string "society is.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaIntro::
# 439 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Watch out for our primal\n"
	.string "strength!$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaDefeated::
# 443 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "You've learned something from our\n"
	.string "ancestors.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaFirstMeeting::
# 447 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Good to meet you. I'm Professor Sada.\p"
	.string "I study Pokémon's past, to learn more\n"
	.string "about their nature.\p"
	.string "My friend Professor Turo and I\n"
	.string "developed a time machine capable of\l"
	.string "retrieving Pokémon from the past.\p"
	.string "These Pokémon may resemble our own,\n"
	.string "but they were adapted to ancient\l"
	.string "environments and drew strength from\l"
	.string "the sun. It's awe-inspiring.\p"
	.string "In order to bring them to our time, I\n"
	.string "need to have a modern Pokémon whose\l"
	.string "lineage can be traced backward in order\l"
	.string "to scan the timeline.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaAreYouInterested::
# 451 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Our time machine is capable of\n"
	.string "taking a modern Pokémon and scanning\l"
	.string "the timeline to find one of its\l"
	.string "ancestors from the past.\p"
	.string "Do you want to use the time machine?$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaProveYourself::
# 455 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Even if you have a Pokémon whose\n"
	.string "ancestry we can track, you might not be\l"
	.string "ready to handle a Paradox Pokémon.\p"
	.string "It takes a strong will to control a\n"
	.string "Pokémon from another time.\p"
	.string "Before using the time machine, I want\n"
	.string "to see that you can handle it.\p"
	.string "If you can defeat my team of ancient\n"
	.string "Pokémon, you can use the time machine\l"
	.string "once. Do we have a deal?$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWithPokemon::
# 459 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Okay. If you can hunt down a\n"
	.string "Pokémon with a counterpart in the past,\l"
	.string "I can use it to find a new Paradox\l"
	.string "Pokémon.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWhenReady::
# 463 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Fine. If you're bold enough to\n"
	.string "take me on to get a Paradox Pokémon,\l"
	.string "I'll be here.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaChampionNow::
# 467 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Hey, {PLAYER}. Good news.\p"
	.string "Professor Turo and I upgraded the time\n"
	.string "machine so that we can access multiple\l"
	.string "Paradox Pokémon.\p"
	.string "You seem more fierce, too.\p"
	.string "Maybe you can handle the time machine.\p"
	.string "But there's no way I'd let you use it\n"
	.string "without seeing for myself, first.\p"
	.string "How about it - are you ready for a\n"
	.string "battle?$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaNotLikeLastTime::
# 471 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: This time, I'll be showing you the\n"
	.string "full might of the ancient past.\p"
	.string "You better bring everything you have!$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaEnjoyParadox::
# 475 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: You've tamed an ancient Pokémon.\p"
	.string "Use its strength well, and take\n"
	.string "inspiration from what has come before.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaDoYouHavePastPokemon::
# 479 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Alright, you know how to handle\n"
	.string "yourself.\p"
	.string "If you bring me a Pokémon with an\n"
	.string "ancient predecessor, I can scan the\l"
	.string "timeline and bring a Paradox Pokémon\l"
	.string "from the past back to our time.\p"
	.string "Do you think you have the right\n"
	.string "Pokémon?$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaTryTuro::
# 579 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Sorry, I haven't found any\n"
	.string "ancestors of that Pokémon.\p"
	.string "Maybe you should speak with Professor\n"
	.string "Turo. He might have something helpful\l"
	.string "there.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaNotAParadox::
# 591 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Unfortunately, I have not\n"
	.string "discovered an ancient equivalent for\l"
	.string "that Pokémon.\p"
	.string "Come back if you want me to check\n"
	.string "another Pokémon of yours.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackChangedMind::
# 595 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Alright, when you are ready to use\n"
	.string "the time machine, you can find me here.$"
