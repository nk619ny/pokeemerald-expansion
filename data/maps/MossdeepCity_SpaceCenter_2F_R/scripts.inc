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
	lock
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
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuro_1:
# 78 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 79 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
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


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1::
# 84 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroAreYouInterested, MSGBOX_YESNO
# 85 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_2
# 95 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_1:
# 98 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 99 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_2:
# 86 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroProveYourself, MSGBOX_YESNO
# 87 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_5
# 91 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWhenReady
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_1

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_5:
# 88 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroBattle
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence1_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroBattle::
# 104 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	trainerbattle_single TRAINER_TURO_1, MossdeepCity_SpaceCenter_2F_R_Text_TuroIntro, MossdeepCity_SpaceCenter_2F_R_Text_TuroDefeated, MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2
	return


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2::
# 108 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TURO_STATE, 2
# 109 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroDoYouHaveFuturePokemon, MSGBOX_YESNO
# 110 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_2
# 114 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_1:
# 117 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 118 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_2:
# 111 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroSequence2_1


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorSada::
# 123 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	lock
# 124 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	faceplayer
# 125 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade::
# 162 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special ChoosePartyMon
# 163 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 164 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_2
# 172 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 173 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	specialvar VAR_TEMP_5, GetTradeSpecies
# 180 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	switch VAR_TEMP_5
# 181 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DONPHAN, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_6
# 183 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VOLCARONA, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_7
# 185 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_DELIBIRD, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_8
# 187 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HARIYAMA, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_9
# 189 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_HYDREIGON, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_10
# 191 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TYRANITAR, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_11
# 193 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GARDEVOIR, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_12
# 195 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_GALLADE, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_13
# 197 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_VIRIZION, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_14
# 199 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_TERRAKION, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_15
# 201 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_COBALION, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_16
# 203 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_JIGGLYPUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 204 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	case SPECIES_WIGGLYTUFF, MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17
# 207 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroNotAParadox
MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4:
# 209 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_TEMP_8
# 210 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	copyvar VAR_0x8008, VAR_TEMP_8
# 211 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special CreateInGameTradeParadoxPokemon
# 212 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	special DoInGameTradeScene
# 213 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitstate
# 214 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_2:
# 165 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWithPokemon
# 166 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 168 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_6:
# 182 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_TREADS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_7:
# 184 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_MOTH
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_8:
# 186 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_BUNDLE
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_9:
# 188 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_HANDS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_10:
# 190 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_JUGULIS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_11:
# 192 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_THORNS
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_12:
# 194 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_VALIANT
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_13:
# 196 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_VALIANT
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_14:
# 198 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_LEAVES
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_15:
# 200 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_BOULDER
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_16:
# 202 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	setvar VAR_TEMP_8, SPECIES_IRON_CROWN
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4

MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_17:
# 205 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroTrySada
	goto MossdeepCity_SpaceCenter_2F_R_EventScript_FutureTrade_4


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroNotAParadox::
# 219 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroNotAParadox, MSGBOX_DEFAULT
# 220 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 222 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_EventScript_ProfessorTuroTrySada::
# 227 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_R_Text_TuroTrySada, MSGBOX_DEFAULT
# 228 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	waitmessage
# 230 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_R_Text_TuroIntro::
# 129 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Welcome to the future!$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroDefeated::
# 133 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Brilliant... you're ready for the future.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroFirstMeeting::
# 137 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
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
# 141 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: You clearly are very\n"
	.string "knowledgeable.\p"
	.string "If you bring me a Pokémon with a future\n"
	.string "counterpart, I can scan the timeline\l"
	.string "and bring a Paradox Pokémon from the\l"
	.string "future back to our time.\p"
	.string "Do you think you have such a\n"
	.string "candidate?$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroAreYouInterested::
# 145 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Our time machine is capable of\n"
	.string "taking a modern Pokémon and scanning\l"
	.string "the timeline to find a descendant of it\l"
	.string "from the future.\p"
	.string "Are you interested in using the time\n"
	.string "machine?$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroProveYourself::
# 149 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
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
# 153 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: I see. If you do capture a\n"
	.string "Pokémon with a counterpart in the\l"
	.string "future, I may be able to use it to find a\l"
	.string "new Paradox Pokémon.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroComeBackWhenReady::
# 157 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: I see. If you do believe you are\n"
	.string "capable of defeating me and bringing\l"
	.string "back a Paradox Pokémon, you can find me\l"
	.string "here.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroNotAParadox::
# 234 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Unfortunately, I have not\n"
	.string "discovered a futuristic equivalent for\l"
	.string "that Pokémon.\p"
	.string "Come back if you want me to check\n"
	.string "another Pokémon of yours.$"

MossdeepCity_SpaceCenter_2F_R_Text_TuroTrySada::
# 238 "data/maps/MossdeepCity_SpaceCenter_2F_R/scripts.pory"
	.string "Turo: Unfortunately, I have not\n"
	.string "discovered a futuristic equivalent for\l"
	.string "that Pokémon.\p"
	.string "However, you should speak with\n"
	.string "Professor Sada. I believe she may have\l"
	.string "some interest in that specimen.$"
