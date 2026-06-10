# 1 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 2 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_MapScripts::
# 3 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.byte 0
# 4 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 5 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall::
# 6 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 7 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth
# 8 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_set FLAG_REGI_DOORS_OPENED, SealedChamber_InnerRoom_EventScript_NoEffect
# 9 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, CheckRelicanthWailord
# 10 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SealedChamber_InnerRoom_EventScript_NoEffect
# 11 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeoutbgm 0
# 12 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_MOVE
# 13 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Long
# 14 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 24 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 26 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeinbgm 0
# 27 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 28 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_SYS_REGIROCK_PUZZLE_COMPLETED
# 29 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED
# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 33 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 34 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_NoEffect::
# 35 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 36 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 37 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 38 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart1::
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 40 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
# 41 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 42 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 43 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 44 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart2::
# 45 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 46 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
# 47 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 48 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 49 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 50 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart3::
# 51 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 54 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 55 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 56 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart4::
# 57 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeFearedIt
# 59 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 61 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 62 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart5::
# 63 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 64 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 67 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 68 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart6::
# 69 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 70 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
# 71 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 72 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
