# 1 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 3 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_MapScripts::
# 4 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_SpaceCenter_1F_OnLoad
# 5 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_1F_OnTransition
# 6 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 8 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnTransition:
# 9 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma
# 10 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 11 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 12 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma::
# 13 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_SAILOR, 1, 9
# 14 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_WOMAN, 0, 7
# 16 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 17 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_OLD_MAN, 1, 6
# 18 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 19 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_SCIENTIST_1, 2, 4
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SCIENTIST_1, MOVEMENT_TYPE_FACE_RIGHT
# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SCIENTIST_2, MOVEMENT_TYPE_FACE_LEFT
# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	//goto_if_eq VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1, MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardLeft
# 23 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	//goto_if_eq VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardDown
# 24 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	//goto_if_eq VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3, MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardRight
# 25 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 26 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 27 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardLeft::
# 28 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 12, 2
# 29 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 30 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 31 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardDown::
# 32 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 13, 3
# 33 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 34 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 35 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused. See comment on MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 36 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardRight::
# 37 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 14, 2
# 38 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 39 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 40 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnLoad:
# 41 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_le VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote
# 42 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 43 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 44 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote::
# 45 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setmetatile 2, 5, METATILE_Facility_DataPad, TRUE
# 46 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 47 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 48 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter::
# 49 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 50 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 51 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma
# 52 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 53 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 54 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 55 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet
# 56 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber
# 57 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 58 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 59 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 61 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 62 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 63 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet::
# 64 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent, MSGBOX_DEFAULT
# 65 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 66 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 67 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber::
# 68 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber, MSGBOX_DEFAULT
# 69 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 70 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 71 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma::
# 72 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 73 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 74 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 75 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma
# 76 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma
# 77 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 78 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 79 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 80 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 81 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 82 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 83 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma::
# 84 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent, MSGBOX_DEFAULT
# 85 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 86 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 87 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma::
# 88 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber, MSGBOX_DEFAULT
# 89 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 90 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 91 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Scientist::
# 92 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 93 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 94 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma
# 95 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection, MSGBOX_DEFAULT
# 96 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 97 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 98 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 99 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma::
# 100 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter, MSGBOX_DEFAULT
# 101 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	//applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 102 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	//waitmovement 0
# 103 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 104 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 105 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan::
# 107 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 108 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 109 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma
# 110 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone
# 111 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt, MSGBOX_DEFAULT
# 112 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 113 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 114 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 115 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 116 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 117 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 118 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 119 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone::
# 120 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 121 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 122 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 123 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 124 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma::
# 125 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma
# 126 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis, MSGBOX_DEFAULT
# 127 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 128 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 129 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 130 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 131 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 132 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 133 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 134 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 135 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 136 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma::
# 137 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 138 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 139 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 140 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 141 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 142 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 143 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman::
# 144 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 145 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 146 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 147 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 148 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 149 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 150 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 151 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 152 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal::
# 153 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
# 154 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 155 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 156 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 157 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma::
# 158 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma, MSGBOX_DEFAULT
# 159 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 160 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 161 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 162 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan::
# 163 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 164 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 165 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 166 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 167 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 168 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 169 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 170 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 171 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal::
# 172 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
# 173 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 174 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 175 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 176 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 177 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 178 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 179 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma::
# 180 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream, MSGBOX_DEFAULT
# 181 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 182 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 183 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 185 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 186 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 187 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Steven::
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 189 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 190 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel, MSGBOX_DEFAULT
# 191 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 192 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 193 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 194 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 195 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 196 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MagmaNote::
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lockall
# 198 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice, MSGBOX_DEFAULT
# 199 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	releaseall
# 200 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 201 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 202 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3::
# 203 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat
# 204 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 206 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 207 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1::
# 208 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat
# 209 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 211 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 212 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt4::
# 213 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat
# 214 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 216 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 217 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2::
# 218 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
# 219 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 221 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 222 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated::
# 223 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 224 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 225 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 226 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 227 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest::
# 228 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest
# 229 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 230 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	//setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
# 231 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 232 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 233 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 234 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused by mistake. The movement is handled anyway after the switch (see above)
# 235 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This also means VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE can never be 3
# 236 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast::
# 237 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast
# 238 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 239 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	//setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
# 240 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 241 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 242 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 243 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest:
# 244 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 245 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_left
# 246 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 247 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 248 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 249 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused. See above
# 250 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast:
# 251 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 252 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 253 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 254 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 255 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 256 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This was meant to only handle the player facing North, but by mistake(?) it also handles the player facing East
# 257 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs:
# 258 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	face_left
# 259 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 260 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 261 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 262 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 263 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 264 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent:
# 265 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 266 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 267 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber:
# 268 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 269 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 270 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 271 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent:
# 272 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
# 273 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "haywire right now, but…\p"
# 274 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 275 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 276 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber:
# 277 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
# 278 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "haywire right now, but…\p"
# 279 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 280 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 281 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 282 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection:
# 283 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A rocket launch demands perfection.\n"
# 284 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Not even a 1% margin of error is allowed.\p"
# 285 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even if it's 99% okay, the whole thing\n"
# 286 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "is useless if 1% happens to be no good.\p"
# 287 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Despite that, we never stop trying.\n"
# 288 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Why? It's a dream that never ends.$"
# 289 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 290 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter:
# 291 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Those MAGMA thugs have their sights\n"
# 292 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "set on our SPACE CENTER.\p"
# 293 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But we can't allow anything that minor\n"
# 294 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "to interfere with our rocket launch!$"
# 295 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 296 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt:
# 297 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I was taking a stroll down the beach\n"
# 298 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "when I found this.\p"
# 299 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It's not anything I need, so you can\n"
# 300 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "have it.$"
# 301 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 302 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers:
# 303 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The HOENN region has been famous for \n"
# 304 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "its meteor showers for a long time.$"
# 305 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 306 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis:
# 307 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA can't be allowed to steal\n"
# 308 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel.\p"
# 309 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Oh, by the way, you can have this stone\n"
# 310 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I found on the beach.$"
# 311 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 312 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma:
# 313 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "With TEAM MAGMA around, I guess\n"
# 314 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "strolls on the beach aren't safe.$"
# 315 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 316 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace:
# 317 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Some people claim that Pokémon came\n"
# 318 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "from space. Could it be true?$"
# 319 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 320 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma:
# 321 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM AQUA should take care of\n"
# 322 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA!\p"
# 323 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But if they did that, TEAM AQUA will\n"
# 324 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "become bold and brazen, won't they?$"
# 325 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 326 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind:
# 327 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 328 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 329 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It boggles my mind!$"
# 330 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 331 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream:
# 332 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 333 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 334 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "But TEAM MAGMA wants to spoil\n"
# 335 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "that dream of mine!\p"
# 336 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I'm not having any of that!$"
# 337 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 338 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
/*
# 339 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel:
# 340 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, have you read that\n"
# 341 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "proclamation already?\p"
# 342 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA is coming after the rocket\n"
# 343 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "fuel on this island.\p"
# 344 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I don't know what they'd need it for,\n"
# 345 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "but they can't be allowed to take it.\p"
# 346 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I'll keep an eye on things for\n"
# 347 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "a while longer.\p"
# 348 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "In the meantime, why don't you go\n"
# 349 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "check out the town?$"
# 350 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	*/
# 351 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 352 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro:
# 353 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We gave you fair warning!\n"
# 354 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "There's nothing sneaky about us!$"
# 355 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 356 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat:
# 357 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Grrr…\n"
# 358 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We should've used sneaky treachery…$"
# 359 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 360 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle:
# 361 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Okay, I get it already! The next time,\n"
# 362 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "we'll come unannounced.$"
# 363 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 364 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 365 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
/*
# 366 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice:
# 367 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "This is…\n"
# 368 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "An intent-to-steal notice?\p"
# 369 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“To the staff of the SPACE CENTER:\n"
# 370 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "How are you? We are doing fine.\p"
# 371 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“We will soon visit you to take your\n"
# 372 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "rocket fuel.\p"
# 373 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Please don't try to stop us.\n"
# 374 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We will take the fuel no matter what.\p"
# 375 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Let there be more land!\n"
# 376 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "                                          TEAM MAGMA”$"
# 377 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	*/

MossdeepCity_EventScript_LeftSign::
# 389 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_EventScript_LeftSign_Text_0, MSGBOX_SIGN
	end


MossdeepCity_EventScript_RightSign::
# 394 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_EventScript_RightSign_Text_0, MSGBOX_SIGN
	end


MossdeepCity_EventScript_LeftSign_Text_0:
# 389 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Mossdeep City Science Center\n"
	.string "Space Department$"

MossdeepCity_EventScript_RightSign_Text_0:
# 394 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Mossdeep City Science Center\n"
	.string "Time Department$"

MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice::
# 380 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "To the staff of the Space Center, and\n"
	.string "the people of Hoenn:\p"
	.string "We have not yielded or relinquished.\n"
	.string "Land expansion is inevitable.\p"
	.string "Our goal will be completed, even without\n"
	.string "your cooperation.\p"
	.string "TEAM MAGMA$"

MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel::
# 384 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Steven: I'm still trying to determine\n"
	.string "where Groudon and Kyogre might be.\p"
	.string "The situation is urgent, but until we\n"
	.string "pinpoint their locations, there isn't\l"
	.string "much that can be done.\p"
	.string "In the meantime, why don't you go check\n"
	.string "out the town?$"

MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro::
# 398 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Sorry, the Science Center is closed!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat::
# 402 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Who do you think you are, bursting in\n"
	.string "like this?$"

MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle::
# 406 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "You're the one who barged into our\n"
	.string "hideout, too!\p"
	.string "Didn't anyone teach you manners?$"

MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro::
# 410 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Courtney says there is some kind of\n"
	.string "special rock upstairs.\p"
	.string "I don't know why, but it's very\n"
	.string "important!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat::
# 414 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "All this over a rock?$"

MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle::
# 418 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Courtney has really stepped up.\p"
	.string "She's inspiring, but also scary…$"

MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro::
# 422 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Our Admin said not to let a single\n"
	.string "person through!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat::
# 426 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I can't hold them back!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle::
# 430 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, tell our Admins that I never\n"
	.string "abandoned my post.\p"
	.string "That I stayed to the bitter end…$"
