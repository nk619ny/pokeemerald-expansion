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
	waitstate
# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 24 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect_Short
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 26 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 27 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 28 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 29 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeinbgm 0
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_SYS_REGIROCK_PUZZLE_COMPLETED
# 33 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED
# 34 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
# 35 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 36 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 37 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 38 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_NoEffect::
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 40 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 41 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 42 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart1::
# 43 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 44 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
# 45 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 46 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 47 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 48 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart2::
# 49 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 50 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
# 51 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 54 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart3::
# 55 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 56 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
# 57 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 59 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart4::
# 61 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 62 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_WeFearedIt
# 63 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 64 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart5::
# 67 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 68 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
# 69 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 70 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 71 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 72 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart6::
# 73 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 74 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemsgbox SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
# 75 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 76 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
