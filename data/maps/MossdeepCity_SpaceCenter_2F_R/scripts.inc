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
# 57 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lock
# 58 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	faceplayer
# 59 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_EventScript_RevivalScientist_Text_0, MSGBOX_NPC
# 60 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript
# 61 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro::
# 66 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 67 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	faceplayer
# 68 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmovement 0
# 69 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_TURO_STATE
# 70 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 0, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_3
# 75 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_4
# 78 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_5
# 81 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_6
# 84 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 4, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_7
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1:
# 90 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 91 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_3:
# 71 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroFirstMeeting, MSGBOX_NPC
# 72 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 1
# 73 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_4:
# 76 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_5:
# 79 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_6:
# 82 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_7:
# 85 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1::
# 96 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroAreYouInterested, MSGBOX_YESNO
# 97 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_2
# 107 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_1:
# 110 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 111 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_2:
# 98 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroProveYourself, MSGBOX_YESNO
# 99 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_5
# 103 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWhenReady
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_5:
# 100 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroBattle
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroBattle::
# 116 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	trainerbattle_single TRAINER_TURO_1, MossdeepCity_SpaceCenter_2F_R_Text_TuroIntro, MossdeepCity_SpaceCenter_2F_R_Text_TuroDefeated, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2
	return


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2::
# 120 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 2
# 121 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroDoYouHaveFuturePokemon, MSGBOX_YESNO
# 122 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_2
# 126 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_1:
# 129 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 130 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_2:
# 123 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3::
# 135 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3_2
# 140 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroEnjoyParadox, MSGBOX_NPC
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3_1:
# 142 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 143 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3_2:
# 136 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 4
# 137 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence3_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4::
# 148 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 149 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroChampionNow, MSGBOX_YESNO
# 150 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 151 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4_2
# 155 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWhenReady
# 156 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4_1:
# 158 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4_2:
# 152 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	trainerbattle_single TRAINER_TURO_2, MossdeepCity_SpaceCenter_2F_R_Text_TuroNotLikeLastTime, MossdeepCity_SpaceCenter_2F_R_Text_TuroDefeated, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence4_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5::
# 163 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 5
# 164 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroDoYouHaveFuturePokemon, MSGBOX_YESNO
# 165 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5_2
# 169 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5_1:
# 172 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 173 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5_2:
# 166 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence5_1


MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade::
# 222 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 223 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special ChoosePartyMon
# 224 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 225 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_2
# 233 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 234 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	specialvar VAR_TEMP_5, GetTradeSpecies
# 235 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_0x8003, 37
# 236 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_TEMP_5
# 237 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DONPHAN, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_6
# 239 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VOLCARONA, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_7
# 241 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DELIBIRD, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_8
# 243 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HARIYAMA, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_9
# 245 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HYDREIGON, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_10
# 247 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TYRANITAR, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_11
# 249 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GARDEVOIR, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_12
# 251 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GALLADE, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_13
# 253 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VIRIZION, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_14
# 255 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TERRAKION, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_15
# 257 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_COBALION, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_16
# 259 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_AMOONGUSS, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 260 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_SALAMENCE, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 261 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_JIGGLYPUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 262 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_WIGGLYTUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 263 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MISDREAVUS, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 264 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MISMAGIUS, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 265 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MAGNETON, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 266 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MAGNEZONE, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 267 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_SUICUNE, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 268 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_ENTEI, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 269 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_RAIKOU, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 272 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroNotAParadox
MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4:
# 274 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_TEMP_8
# 275 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special BufferMonNickname
# 276 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 277 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_Text_0, MSGBOX_YESNO
# 278 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_20
# 285 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_TURO_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_23
# 302 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8008, VAR_TEMP_8
# 303 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special CreateInGameTradeFutureParadoxPokemon
# 304 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special DoInGameTradeScene
MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_19:
# 307 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 308 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_2:
# 226 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 227 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
# 228 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 230 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_6:
# 238 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_TREADS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_7:
# 240 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_MOTH
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_8:
# 242 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_BUNDLE
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_9:
# 244 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_HANDS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_10:
# 246 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_JUGULIS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_11:
# 248 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_THORNS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_12:
# 250 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_VALIANT
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_13:
# 252 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_VALIANT
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_14:
# 254 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_LEAVES
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_15:
# 256 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_BOULDER
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_16:
# 258 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_CROWN
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17:
# 270 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroTrySada
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_20:
# 279 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackChangedMind
# 280 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 281 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_23:
# 286 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 287 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_Text_1, MSGBOX_YESNO
# 288 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_26
# 295 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8008, VAR_TEMP_8
# 296 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 3
# 297 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special CreateInGameTradeFutureParadoxPokemon
# 298 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special DoInGameTradeScene
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_19

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_26:
# 289 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackChangedMind
# 290 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 291 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroNotAParadox::
# 313 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 314 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroNotAParadox, MSGBOX_NPC
# 315 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 317 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroTrySada::
# 322 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 323 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroTrySada, MSGBOX_NPC
# 324 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 326 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada::
# 343 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 344 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	faceplayer
# 345 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmovement 0
# 346 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_SADA_STATE
# 347 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 0, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_3
# 352 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_4
# 355 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_5
# 358 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_6
# 361 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 4, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_7
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1:
# 366 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 367 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_3:
# 348 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaFirstMeeting, MSGBOX_NPC
# 349 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 1
# 350 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_4:
# 353 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_5:
# 356 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_6:
# 359 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_7:
# 362 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1::
# 372 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 373 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaAreYouInterested, MSGBOX_YESNO
# 374 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_2
# 382 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_1:
# 384 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 385 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_2:
# 375 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaProveYourself, MSGBOX_YESNO
# 376 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_5
# 379 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWhenReady
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_5:
# 377 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaBattle
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence1_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaBattle::
# 390 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	trainerbattle_single TRAINER_SADA_1, MossdeepCity_SpaceCenter_2F_R_Text_SadaIntro, MossdeepCity_SpaceCenter_2F_R_Text_SadaDefeated, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2
	return


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2::
# 394 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 2
# 395 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaDoYouHavePastPokemon, MSGBOX_YESNO
# 396 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2_2
# 399 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2_1:
# 401 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 402 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2_2:
# 397 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence2_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3::
# 407 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3_2
# 411 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaEnjoyParadox, MSGBOX_NPC
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3_1:
# 413 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 414 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3_2:
# 408 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 4
# 409 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence3_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4::
# 419 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 420 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaChampionNow, MSGBOX_YESNO
# 421 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 422 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4_2
# 425 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWhenReady
# 426 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4_1:
# 428 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4_2:
# 423 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	trainerbattle_single TRAINER_SADA_2, MossdeepCity_SpaceCenter_2F_R_Text_SadaNotLikeLastTime, MossdeepCity_SpaceCenter_2F_R_Text_SadaDefeated, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence4_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5::
# 433 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 5
# 434 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaDoYouHavePastPokemon, MSGBOX_YESNO
# 435 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5_2
# 438 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5_1:
# 440 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 441 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5_2:
# 436 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaSequence5_1


MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade::
# 490 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 491 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special ChoosePartyMon
# 492 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 493 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_2
# 500 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 501 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	specialvar VAR_TEMP_5, GetTradeSpecies
# 502 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_0x8003, 36
# 503 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_TEMP_5
# 504 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DONPHAN, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_6
# 506 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VOLCARONA, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_7
# 508 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_AMOONGUSS, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_8
# 510 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_SALAMENCE, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_9
# 512 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_JIGGLYPUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_10
# 513 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_WIGGLYTUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_10
# 515 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MISDREAVUS, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_11
# 516 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MISMAGIUS, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_11
# 518 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MAGNETON, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_12
# 519 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_MAGNEZONE, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_12
# 521 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_SUICUNE, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_13
# 523 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_ENTEI, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_14
# 525 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_RAIKOU, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_15
# 527 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HYDREIGON, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 528 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DELIBIRD, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 529 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HARIYAMA, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 530 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TYRANITAR, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 531 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VIRIZION, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 532 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TERRAKION, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 533 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_COBALION, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 534 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GARDEVOIR, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 535 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GALLADE, MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16
# 538 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaNotAParadox
MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4:
# 540 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_TEMP_8
# 541 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special BufferMonNickname
# 542 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 543 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_Text_0, MSGBOX_YESNO
# 544 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_19
# 550 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_SADA_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_22
# 567 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8008, VAR_TEMP_8
# 568 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special CreateInGameTradePastParadoxPokemon
# 569 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special DoInGameTradeScene
MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_18:
# 572 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 573 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_2:
# 494 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 495 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWithPokemon
# 496 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 497 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_6:
# 505 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_GREAT_TUSK
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_7:
# 507 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_SLITHER_WING
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_8:
# 509 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_BRUTE_BONNET
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_9:
# 511 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_ROARING_MOON
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_10:
# 514 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_SCREAM_TAIL
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_11:
# 517 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_FLUTTER_MANE
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_12:
# 520 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_SANDY_SHOCKS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_13:
# 522 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_WALKING_WAKE
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_14:
# 524 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_GOUGING_FIRE
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_15:
# 526 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_RAGING_BOLT
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_16:
# 536 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaTryTuro
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_19:
# 545 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackChangedMind
# 546 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 547 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_22:
# 551 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 552 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_Text_1, MSGBOX_YESNO
# 553 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_25
# 560 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8008, VAR_TEMP_8
# 561 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_SADA_STATE, 3
# 562 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special CreateInGameTradePastParadoxPokemon
# 563 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special DoInGameTradeScene
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_18

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_25:
# 554 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackChangedMind
# 555 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 556 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaTryTuro::
# 578 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 579 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaTryTuro, MSGBOX_NPC
# 580 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 581 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSadaNotAParadox::
# 590 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lockall
# 591 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_SadaNotAParadox, MSGBOX_NPC
# 592 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 593 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_NewFossilScript::
	checkitem ITEM_OLD_AMBER
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_2
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_1:
	checkitem ITEM_HELIX_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_5
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_4:
	checkitem ITEM_DOME_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_8
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_7:
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_11
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_10:
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_14
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_13:
	checkitem ITEM_ARMOR_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_17
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_16:
	checkitem ITEM_SKULL_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_20
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_19:
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_23
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_22:
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_26
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_25:
	checkitem ITEM_PLUME_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_29
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_28:
	checkitem ITEM_COVER_FOSSIL
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_32
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_31:
	checkitem ITEM_FOSSILIZED_BIRD
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_35
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_34:
	checkitem ITEM_FOSSILIZED_DINO
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_38
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_37:
	checkitem ITEM_FOSSILIZED_FISH
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_41
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_40:
	checkitem ITEM_FOSSILIZED_DRAKE
# 0 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_44
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_43:
# 623 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_15, 15
# 624 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_16
# 625 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 1, 0, DYN_MULTICHOICE_CB_NONE
# 626 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 627 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_TEMP_4
# 628 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 0, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_48
# 630 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_49
# 632 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_50
# 634 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_51
# 636 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 4, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_52
# 638 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 5, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_53
# 640 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 6, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_54
# 642 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 7, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_55
# 644 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 8, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_56
# 646 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 9, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_57
# 648 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 10, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_58
# 650 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 11, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_59
# 651 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 12, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_59
# 652 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 13, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_59
# 653 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 14, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_59
# 657 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 15, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_60
# 658 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 127, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_60
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46:
# 661 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_18, MSGBOX_YESNO
# 662 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_NewFossilScript_61
# 666 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_TEMP_4
# 667 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 0, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_66
# 671 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_67
# 675 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_68
# 679 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_69
# 683 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 4, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_70
# 687 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 5, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_71
# 691 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 6, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_72
# 695 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 7, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_73
# 699 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 8, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_74
# 703 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 9, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_75
# 707 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case 10, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_76
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64:
# 712 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_19, MSGBOX_NPC
# 713 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 714 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	delay 60
# 715 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 716 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_6
# 717 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	givemon VAR_TEMP_6, 5, 0, 0, 0
# 718 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_RESULT
# 719 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case MON_GIVEN_TO_PARTY, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_79
# 725 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case MON_GIVEN_TO_PC, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_80
# 731 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case MON_CANT_GIVE, MossdeepCity_SpaceCenter_2F_R_NewFossilScript_81
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_81:
# 733 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_22
# 734 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	giveitem VAR_TEMP_2
MossdeepCity_SpaceCenter_2F_R_NewFossilScript_77:
# 736 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 737 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_2:
# 608 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_0, 0
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_1

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_5:
# 609 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_1, 1
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_4

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_8:
# 610 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_2, 2
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_7

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_11:
# 611 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_3, 3
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_10

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_14:
# 612 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_4, 4
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_13

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_17:
# 613 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_5, 5
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_16

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_20:
# 614 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_6, 6
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_19

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_23:
# 615 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_7, 7
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_22

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_26:
# 616 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_8, 8
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_25

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_29:
# 617 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_9, 9
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_28

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_32:
# 618 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_10, 10
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_31

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_35:
# 619 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_11, 11
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_34

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_38:
# 620 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_12, 12
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_37

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_41:
# 621 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_13, 13
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_40

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_44:
# 622 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	dynmultipush MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_14, 14
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_43

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_48:
# 629 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_OLD_AMBER
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_49:
# 631 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELIX_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_50:
# 633 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DOME_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_51:
# 635 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_52:
# 637 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_53:
# 639 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ARMOR_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_54:
# 641 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SKULL_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_55:
# 643 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JAW_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_56:
# 645 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SAIL_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_57:
# 647 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PLUME_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_58:
# 649 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_COVER_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_59:
# 654 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_17
# 655 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	closemessage
# 656 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_DeclinedFossilScript
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_60:
# 659 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_DeclinedFossilScript
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_46

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_61:
# 663 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_DeclinedFossilScript
	return

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_66:
# 668 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 669 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_AERODACTYL
# 670 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_OLD_AMBER
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_67:
# 672 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 673 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_OMANYTE
# 674 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_HELIX_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_68:
# 676 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
# 677 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_KABUTO
# 678 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_DOME_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_69:
# 680 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 681 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_LILEEP
# 682 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_ROOT_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_70:
# 684 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 685 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_ANORITH
# 686 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_CLAW_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_71:
# 688 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_ARMOR_FOSSIL
# 689 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_SHIELDON
# 690 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_ARMOR_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_72:
# 692 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_SKULL_FOSSIL
# 693 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_CRANIDOS
# 694 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_SKULL_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_73:
# 696 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_JAW_FOSSIL
# 697 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_TYRUNT
# 698 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_JAW_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_74:
# 700 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_SAIL_FOSSIL
# 701 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_AMAURA
# 702 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_SAIL_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_75:
# 704 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_PLUME_FOSSIL
# 705 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_ARCHEN
# 706 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_PLUME_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_76:
# 708 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	removeitem ITEM_COVER_FOSSIL
# 709 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_TIRTOUGA
# 710 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_2, ITEM_COVER_FOSSIL
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_64

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_79:
# 720 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 721 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_20
# 722 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitfanfare
# 723 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	call NicknamePartyMon
# 724 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_21, MSGBOX_NPC
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_77

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_80:
# 726 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 727 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_20
# 728 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitfanfare
# 729 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	call NicknameBoxMon
# 730 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_21, MSGBOX_NPC
	goto MossdeepCity_SpaceCenter_2F_R_NewFossilScript_77


MossdeepCity_SpaceCenter_2F_R_DeclinedFossilScript::
# 743 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_DeclinedFossilScript_Text_0
# 744 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 745 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_RevivalScientist_Text_0:
# 59 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "The Time Department has partnered with\n"
	.string "the Devon Corporation to revive\l"
	.string "Pokémon from fossils found in various\l"
	.string "locations across the Hoenn region.$"

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_Text_0:
# 277 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: You want to send your\n"
	.string "{STR_VAR_1} to the future, in\l"
	.string "exchange for an {STR_VAR_3}?$"

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_Text_1:
# 287 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: At the moment, we only have\n"
	.string "enough power for one pull from the\l"
	.string "future. Are you sure?$"

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_Text_0:
# 543 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: You want to send your\n"
	.string "{STR_VAR_1} to the past, in\l"
	.string "exchange for a {STR_VAR_3}?$"

MossdeepCity_SpaceCenter_2F_R_EventScript_PastTrade_Text_1:
# 552 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: At the moment, we only have\n"
	.string "enough power for one pull from the\l"
	.string "past. Are you sure?$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_0:
# 608 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Old Amber$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_1:
# 609 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Helix Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_2:
# 610 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Dome Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_3:
# 611 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Root Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_4:
# 612 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Claw Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_5:
# 613 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Armor Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_6:
# 614 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Skull Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_7:
# 615 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Jaw Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_8:
# 616 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sail Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_9:
# 617 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Plume Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_10:
# 618 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Cover Fossil$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_11:
# 619 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Fossilized Bird$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_12:
# 620 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Fossilized Dino$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_13:
# 621 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Fossilized Fish$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_14:
# 622 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Fossilized Drake$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_15:
# 623 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Not Right Now$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_16:
# 624 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Do you have a fossil you would like us\n"
	.string "to revive?$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_17:
# 654 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Unfortunately, I can't revive that one,\n"
	.string "because the fossil is incomplete.$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_18:
# 661 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "You want me to revive your\n"
	.string "{STR_VAR_1}, is that correct?$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_19:
# 712 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Okay! This will just take a moment.$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_20:
# 721 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Received {STR_VAR_2}!$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_21:
# 724 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "It worked! We succesfully revived an\n"
	.string "ancient Pokémon fossil!\p"
	.string "I hope you enjoy this prehistoric\n"
	.string "creature.$"

MossdeepCity_SpaceCenter_2F_R_NewFossilScript_Text_22:
# 733 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Something wen't wrong... Please take your fossil back.\pMaybe you should try again later?$"

MossdeepCity_SpaceCenter_2F_R_DeclinedFossilScript_Text_0:
# 743 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "If you do come across any Pokémon\n"
	.string "fossils, please bring them to us!\p"
	.string "I would love a chance to put our new\n"
	.string "technology to work.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroIntro::
# 177 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Welcome to the future!$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroDefeated::
# 181 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Brilliant... you're ready for the future.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroFirstMeeting::
# 185 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
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
# 189 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: You clearly are very\n"
	.string "knowledgeable.\p"
	.string "If you bring me a Pokémon with a future\n"
	.string "counterpart, I can scan the timeline\l"
	.string "and bring a Paradox Pokémon from the\l"
	.string "future back to our time.\p"
	.string "Do you think you have such a\n"
	.string "candidate?$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroAreYouInterested::
# 193 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Our time machine is capable of\n"
	.string "taking a modern Pokémon and scanning\l"
	.string "the timeline to find a descendant of it\l"
	.string "from the future.\p"
	.string "Are you interested in using the time\n"
	.string "machine?$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroProveYourself::
# 197 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
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
# 201 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: I see. If you do capture a\n"
	.string "Pokémon with a counterpart in the\l"
	.string "future, I may be able to use it to find a\l"
	.string "new Paradox Pokémon.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWhenReady::
# 205 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: I see. If you do believe you are\n"
	.string "capable of defeating me and bringing\l"
	.string "back a Paradox Pokémon, you can find me\l"
	.string "here.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackChangedMind::
# 209 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: I see. When you are ready to use\n"
	.string "the time machine, you can find me here.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroChampionNow::
# 213 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
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
# 217 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: This time, I'll be showing you the\n"
	.string "full might of futuristic technology.\p"
	.string "I hope you are ready for a challenge!$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroNotAParadox::
# 330 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Unfortunately, I have not\n"
	.string "discovered a futuristic equivalent for\l"
	.string "that Pokémon.\p"
	.string "Come back if you want me to check\n"
	.string "another Pokémon of yours.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroTrySada::
# 334 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Unfortunately, I have not\n"
	.string "discovered a futuristic equivalent for\l"
	.string "that Pokémon.\p"
	.string "However, you should speak with\n"
	.string "Professor Sada. I believe she may have\l"
	.string "some interest in that specimen.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroEnjoyParadox::
# 338 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: You now have an extremely rare\n"
	.string "Pokémon from the future.\p"
	.string "I hope it brings you a more refined\n"
	.string "understanding of how dynamic the\l"
	.string "relationship between Pokémon and our\l"
	.string "society is.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaIntro::
# 445 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Watch out for our primal\n"
	.string "strength!$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaDefeated::
# 449 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "You've learned something from our\n"
	.string "ancestors.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaFirstMeeting::
# 453 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
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
# 457 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Our time machine is capable of\n"
	.string "taking a modern Pokémon and scanning\l"
	.string "the timeline to find one of its\l"
	.string "ancestors from the past.\p"
	.string "Do you want to use the time machine?$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaProveYourself::
# 461 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
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
# 465 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Okay. If you can hunt down a\n"
	.string "Pokémon with a counterpart in the past,\l"
	.string "I can use it to find a new Paradox\l"
	.string "Pokémon.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackWhenReady::
# 469 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Fine. If you're bold enough to\n"
	.string "take me on to get a Paradox Pokémon,\l"
	.string "I'll be here.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaChampionNow::
# 473 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
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
# 477 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: This time, I'll be showing you the\n"
	.string "full might of the ancient past.\p"
	.string "You better bring everything you have!$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaEnjoyParadox::
# 481 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: You've tamed an ancient Pokémon.\p"
	.string "Use its strength well, and take\n"
	.string "inspiration from what has come before.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaDoYouHavePastPokemon::
# 485 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Alright, you know how to handle\n"
	.string "yourself.\p"
	.string "If you bring me a Pokémon with an\n"
	.string "ancient predecessor, I can scan the\l"
	.string "timeline and bring a Paradox Pokémon\l"
	.string "from the past back to our time.\p"
	.string "Do you think you have the right\n"
	.string "Pokémon?$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaTryTuro::
# 585 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Sorry, I haven't found any\n"
	.string "ancestors of that Pokémon.\p"
	.string "Maybe you should speak with Professor\n"
	.string "Turo. He might have something helpful\l"
	.string "there.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaNotAParadox::
# 597 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Unfortunately, I have not\n"
	.string "discovered an ancient equivalent for\l"
	.string "that Pokémon.\p"
	.string "Come back if you want me to check\n"
	.string "another Pokémon of yours.$"

MossdeepCity_SpaceCenter_2F_R_Text_SadaComeBackChangedMind::
# 601 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Sada: Alright, when you are ready to use\n"
	.string "the time machine, you can find me here.$"
