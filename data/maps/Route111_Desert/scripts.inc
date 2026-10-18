Route111_Desert_MapScripts::
	.byte 0


# 6 "data/maps/Route111_Desert/scripts.pory"

# 7 "data/maps/Route111_Desert/scripts.pory"
/*
# 8 "data/maps/Route111_Desert/scripts.pory"
script Route111_Desert_EventScript_CheckBoulder {
# 9 "data/maps/Route111_Desert/scripts.pory"
    lock
# 10 "data/maps/Route111_Desert/scripts.pory"
    if (flag(FLAG_HIDE_REGIROCK_RUINS_ROCK)) {
# 11 "data/maps/Route111_Desert/scripts.pory"
        setvar(TempVarCheckBoulder, 1)
# 12 "data/maps/Route111_Desert/scripts.pory"
    }
# 13 "data/maps/Route111_Desert/scripts.pory"
    else {
# 14 "data/maps/Route111_Desert/scripts.pory"
        goto(Route111_Desert_EventScript_SinkBoulder)
# 15 "data/maps/Route111_Desert/scripts.pory"
    }
# 16 "data/maps/Route111_Desert/scripts.pory"
    releaseall
# 17 "data/maps/Route111_Desert/scripts.pory"
    end
# 18 "data/maps/Route111_Desert/scripts.pory"
}
# 19 "data/maps/Route111_Desert/scripts.pory"

# 20 "data/maps/Route111_Desert/scripts.pory"
script  Route111_Desert_EventScript_SinkBoulder {
# 21 "data/maps/Route111_Desert/scripts.pory"
    lock
# 22 "data/maps/Route111_Desert/scripts.pory"
    setvar(VAR_0x8004, 1)  // vertical pan
# 23 "data/maps/Route111_Desert/scripts.pory"
    setvar(VAR_0x8005, 1)  // horizontal pan
# 24 "data/maps/Route111_Desert/scripts.pory"
    setvar(VAR_0x8006, 4)  // num shakes
# 25 "data/maps/Route111_Desert/scripts.pory"
    setvar(VAR_0x8007, 5)  // shake delay
# 26 "data/maps/Route111_Desert/scripts.pory"
	special(ShakeCamera)
# 27 "data/maps/Route111_Desert/scripts.pory"
    applymovement(LOCALID_DESERT_BOULDER, Common_Movement_WalkDown)
# 28 "data/maps/Route111_Desert/scripts.pory"
    delay(10) 
# 29 "data/maps/Route111_Desert/scripts.pory"
    removeobject(LOCALID_DESERT_BOULDER)
# 30 "data/maps/Route111_Desert/scripts.pory"
    setflag(FLAG_HIDE_REGIROCK_RUINS_ROCK)
# 31 "data/maps/Route111_Desert/scripts.pory"
    setvar(TempVarCheckBoulder, 1)
# 32 "data/maps/Route111_Desert/scripts.pory"
    waitmovement(0)
# 33 "data/maps/Route111_Desert/scripts.pory"
    releaseall
# 34 "data/maps/Route111_Desert/scripts.pory"
    end
# 35 "data/maps/Route111_Desert/scripts.pory"
}
# 36 "data/maps/Route111_Desert/scripts.pory"
*/

Route111_Desert_EventScript_AceTrainerTrade::
# 40 "data/maps/Route111_Desert/scripts.pory"
	lock
# 41 "data/maps/Route111_Desert/scripts.pory"
	faceplayer
# 42 "data/maps/Route111_Desert/scripts.pory"
	goto_if_set FLAG_ROUTE111_DESERT_NPC_TRADE_COMPLETED, Route111_Desert_EventScript_AceTrainerTrade_2
# 47 "data/maps/Route111_Desert/scripts.pory"
	msgbox Route111_Desert_Text_AceTrainerTradeIntro, MSGBOX_YESNO
# 48 "data/maps/Route111_Desert/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route111_Desert_EventScript_AceTrainerTrade_5
# 54 "data/maps/Route111_Desert/scripts.pory"
	setvar VAR_0x8005, INGAME_TRADE_HIPPOWDON
# 55 "data/maps/Route111_Desert/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 56 "data/maps/Route111_Desert/scripts.pory"
	msgbox Route111_Desert_Text_AceTrainerWantToTrade, MSGBOX_YESNO
# 57 "data/maps/Route111_Desert/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route111_Desert_EventScript_AceTrainerTrade_8
# 62 "data/maps/Route111_Desert/scripts.pory"
	chooseboxmon SELECT_PC_MON_TRADE
# 63 "data/maps/Route111_Desert/scripts.pory"
	waitstate
# 64 "data/maps/Route111_Desert/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Route111_Desert_EventScript_AceTrainerTrade_11
# 69 "data/maps/Route111_Desert/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 70 "data/maps/Route111_Desert/scripts.pory"
	compare VAR_RESULT, SPECIES_EEVEE
	goto_if_ne Route111_Desert_EventScript_AceTrainerTrade_14
# 76 "data/maps/Route111_Desert/scripts.pory"
	specialvar VAR_RESULT, GetTradeMonAbilityNum
# 77 "data/maps/Route111_Desert/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne Route111_Desert_EventScript_AceTrainerTrade_17
# 82 "data/maps/Route111_Desert/scripts.pory"
	special CreateInGameTradePokemon
# 83 "data/maps/Route111_Desert/scripts.pory"
	special DoInGameTradeScene
# 84 "data/maps/Route111_Desert/scripts.pory"
	setflag FLAG_ROUTE111_DESERT_NPC_TRADE_COMPLETED
# 85 "data/maps/Route111_Desert/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 86 "data/maps/Route111_Desert/scripts.pory"
	msgbox Route111_Desert_Text_AceTrainerTradeDone, MSGBOX_DEFAULT
# 87 "data/maps/Route111_Desert/scripts.pory"
	releaseall
	end

Route111_Desert_EventScript_AceTrainerTrade_2:
# 43 "data/maps/Route111_Desert/scripts.pory"
	msgbox Route111_Desert_Text_AceTrainerTradeCompleted, MSGBOX_DEFAULT
# 44 "data/maps/Route111_Desert/scripts.pory"
	releaseall
	end

Route111_Desert_EventScript_AceTrainerTrade_5:
# 49 "data/maps/Route111_Desert/scripts.pory"
	msgbox Route111_Desert_Text_AceTrainerYouDontHaveEevee, MSGBOX_DEFAULT
# 50 "data/maps/Route111_Desert/scripts.pory"
	closemessage
# 51 "data/maps/Route111_Desert/scripts.pory"
	releaseall
	end

Route111_Desert_EventScript_AceTrainerTrade_8:
# 58 "data/maps/Route111_Desert/scripts.pory"
	msgbox Route111_Desert_Text_AceTrainerDeclined, MSGBOX_DEFAULT
# 59 "data/maps/Route111_Desert/scripts.pory"
	releaseall
	end

Route111_Desert_EventScript_AceTrainerTrade_11:
# 65 "data/maps/Route111_Desert/scripts.pory"
	msgbox Route111_Desert_Text_AceTrainerDeclined, MSGBOX_DEFAULT
# 66 "data/maps/Route111_Desert/scripts.pory"
	releaseall
	end

Route111_Desert_EventScript_AceTrainerTrade_14:
# 71 "data/maps/Route111_Desert/scripts.pory"
	msgbox Route111_Desert_Text_AceTrainerNotEevee, MSGBOX_DEFAULT
# 72 "data/maps/Route111_Desert/scripts.pory"
	releaseall
	end

Route111_Desert_EventScript_AceTrainerTrade_17:
# 78 "data/maps/Route111_Desert/scripts.pory"
	msgbox Route111_Desert_Text_AceTrainerWrongAbility, MSGBOX_DEFAULT
# 79 "data/maps/Route111_Desert/scripts.pory"
	releaseall
	end


Route111_Desert_Text_AceTrainerTradeIntro::
# 91 "data/maps/Route111_Desert/scripts.pory"
	.string "I built a sand team catching Pokémon in\n"
	.string "this desert. But I've gotten bored, and\l"
	.string "want to try different strategies.\p"
	.string "I don't know what weather condition I\n"
	.string "want to build around yet, though.\p"
	.string "I heard that rare Eevee can set\n"
	.string "whatever weather you want, based on\l"
	.string "the evolution stone you use.\p"
	.string "You look pretty well traveled. Would you\n"
	.string "happen to have an Eevee like that?$"

Route111_Desert_Text_AceTrainerWantToTrade::
# 95 "data/maps/Route111_Desert/scripts.pory"
	.string "Wow, really?\n"
	.string "My Hippowdon creates a Sandstorm,\l"
	.string "which none of Eevee's evolutions can\l"
	.string "do.\p"
	.string "Would you be interested in trading that\n"
	.string "Eevee for my Hippowdon?$"

Route111_Desert_Text_AceTrainerDeclined::
# 99 "data/maps/Route111_Desert/scripts.pory"
	.string "Suit yourself. If you ever want to\n"
	.string "create Sandstorms, come see me.$"

Route111_Desert_Text_AceTrainerYouDontHaveEevee::
# 103 "data/maps/Route111_Desert/scripts.pory"
	.string "Yeah, I think they're pretty rare. If\n"
	.string "you ever find a special Eevee like that,\l"
	.string "come see me.$"

Route111_Desert_Text_AceTrainerNotEevee::
# 107 "data/maps/Route111_Desert/scripts.pory"
	.string "That isn't an Eevee.\n"
	.string "I think I would only trade my\l"
	.string "sand-setter for an Eevee that can set\l"
	.string "whichever weather condition I choose.$"

Route111_Desert_Text_AceTrainerWrongAbility::
# 111 "data/maps/Route111_Desert/scripts.pory"
	.string "Hmm, this Eevee doesn't have the hidden\n"
	.string "ability I'm looking for.\p"
	.string "I need one with Adaptability.$"

Route111_Desert_Text_AceTrainerTradeDone::
# 115 "data/maps/Route111_Desert/scripts.pory"
	.string "Perfect! This Eevee will give me lots of\n"
	.string "options.\p"
	.string "Take good care of my Hippowdon!$"

Route111_Desert_Text_AceTrainerTradeCompleted::
# 119 "data/maps/Route111_Desert/scripts.pory"
	.string "I think I'm going to evolve this Eevee\n"
	.string "into a Glaceon.\p"
	.string "I better head up to Route 135 to build\n"
	.string "out my team.$"
