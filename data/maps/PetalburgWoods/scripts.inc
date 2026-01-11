# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
//.set LOCALID_PETALBURG_WOODS_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
//.set LOCALID_PETALBURG_WOODS_PEEKO, 13
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgWoods_OnLoad
# 7 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgWoods/scripts.pory"

# 9 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_OnLoad:
# 10 "data/maps/PetalburgWoods/scripts.pory"
	//call_if_unset FLAG_DEFEATED_NORMAN_INTRO PetalburgWoods_EventScript_HideMysteryGrotto
# 11 "data/maps/PetalburgWoods/scripts.pory"
	end
# 12 "data/maps/PetalburgWoods/scripts.pory"

# 13 "data/maps/PetalburgWoods/scripts.pory"
//PetalburgWoods_EventScript_DevonResearcherLeft::
# 14 "data/maps/PetalburgWoods/scripts.pory"
//	lockall
# 15 "data/maps/PetalburgWoods/scripts.pory"
//	call PetalburgWoods_EventScript_DevonResearcherIntro
# 16 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 17 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 18 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 19 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 20 "data/maps/PetalburgWoods/scripts.pory"
//	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 21 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 22 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 23 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 24 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 25 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 26 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 27 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 29 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 31 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 32 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 35 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 36 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 38 "data/maps/PetalburgWoods/scripts.pory"
//	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 39 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 40 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 41 "data/maps/PetalburgWoods/scripts.pory"
//	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 42 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 43 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 44 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 45 "data/maps/PetalburgWoods/scripts.pory"
//	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 46 "data/maps/PetalburgWoods/scripts.pory"
//	end
# 47 "data/maps/PetalburgWoods/scripts.pory"

# 48 "data/maps/PetalburgWoods/scripts.pory"
//PetalburgWoods_EventScript_DevonResearcherRight::
# 49 "data/maps/PetalburgWoods/scripts.pory"
//	lockall
# 50 "data/maps/PetalburgWoods/scripts.pory"
//	call PetalburgWoods_EventScript_DevonResearcherIntro
# 51 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 52 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 53 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 54 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 55 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 56 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 57 "data/maps/PetalburgWoods/scripts.pory"
//	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 58 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 59 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 60 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 62 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 63 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 64 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 65 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 66 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 68 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 69 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 70 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 71 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 72 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 73 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 74 "data/maps/PetalburgWoods/scripts.pory"
//	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 75 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 76 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 77 "data/maps/PetalburgWoods/scripts.pory"
//	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 78 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 79 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 80 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 81 "data/maps/PetalburgWoods/scripts.pory"
//	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 82 "data/maps/PetalburgWoods/scripts.pory"
//	end
# 83 "data/maps/PetalburgWoods/scripts.pory"

# 84 "data/maps/PetalburgWoods/scripts.pory"
/*
# 85 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 86 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 87 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 88 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 89 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 90 "data/maps/PetalburgWoods/scripts.pory"
	return
# 91 "data/maps/PetalburgWoods/scripts.pory"

# 92 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 93 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 95 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 96 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 97 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 98 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 99 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 100 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 102 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 103 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 104 "data/maps/PetalburgWoods/scripts.pory"
	end
# 105 "data/maps/PetalburgWoods/scripts.pory"

# 106 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 107 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 108 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 109 "data/maps/PetalburgWoods/scripts.pory"
	end
# 110 "data/maps/PetalburgWoods/scripts.pory"

# 111 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 112 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 113 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 114 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 115 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 116 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 117 "data/maps/PetalburgWoods/scripts.pory"
	return
# 118 "data/maps/PetalburgWoods/scripts.pory"

# 119 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 120 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 121 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 122 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 123 "data/maps/PetalburgWoods/scripts.pory"
	end
# 124 "data/maps/PetalburgWoods/scripts.pory"

# 125 "data/maps/PetalburgWoods/scripts.pory"
	*/
# 126 "data/maps/PetalburgWoods/scripts.pory"

# 127 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 128 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 131 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 133 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 134 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 135 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 136 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 137 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 138 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 139 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 140 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 141 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 142 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 144 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 145 "data/maps/PetalburgWoods/scripts.pory"

# 146 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 147 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 148 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 149 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 150 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 151 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 152 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 153 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 154 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 155 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 156 "data/maps/PetalburgWoods/scripts.pory"

# 157 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 158 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 159 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 160 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 162 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 163 "data/maps/PetalburgWoods/scripts.pory"

# 164 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 165 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 166 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 171 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 172 "data/maps/PetalburgWoods/scripts.pory"

# 173 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 174 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 176 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 177 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 178 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 179 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 180 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 182 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 183 "data/maps/PetalburgWoods/scripts.pory"

# 184 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 185 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 186 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 189 "data/maps/PetalburgWoods/scripts.pory"

# 190 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 192 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 193 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 194 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 195 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 197 "data/maps/PetalburgWoods/scripts.pory"

# 198 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 199 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 200 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 201 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 203 "data/maps/PetalburgWoods/scripts.pory"

# 204 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 205 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 206 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 207 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 208 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 209 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 210 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 211 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 212 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 213 "data/maps/PetalburgWoods/scripts.pory"

# 214 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 216 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 217 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 218 "data/maps/PetalburgWoods/scripts.pory"

# 219 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 220 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 221 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 222 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 223 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 224 "data/maps/PetalburgWoods/scripts.pory"

# 225 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 228 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 229 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 231 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 232 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 233 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 234 "data/maps/PetalburgWoods/scripts.pory"

# 235 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 236 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 237 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 238 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 239 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 240 "data/maps/PetalburgWoods/scripts.pory"

# 241 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 242 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 243 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 244 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 245 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 246 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 247 "data/maps/PetalburgWoods/scripts.pory"

# 248 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 249 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 250 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 251 "data/maps/PetalburgWoods/scripts.pory"

# 252 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 253 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 254 "data/maps/PetalburgWoods/scripts.pory"
	end
# 255 "data/maps/PetalburgWoods/scripts.pory"

# 256 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 257 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 258 "data/maps/PetalburgWoods/scripts.pory"
	end
# 259 "data/maps/PetalburgWoods/scripts.pory"

# 260 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 261 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 262 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 263 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 264 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 265 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 266 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 267 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 268 "data/maps/PetalburgWoods/scripts.pory"
	release
# 269 "data/maps/PetalburgWoods/scripts.pory"
	end
# 270 "data/maps/PetalburgWoods/scripts.pory"

# 271 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 272 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 273 "data/maps/PetalburgWoods/scripts.pory"
	release
# 274 "data/maps/PetalburgWoods/scripts.pory"
	end
# 275 "data/maps/PetalburgWoods/scripts.pory"

# 276 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 277 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 278 "data/maps/PetalburgWoods/scripts.pory"
	end
# 279 "data/maps/PetalburgWoods/scripts.pory"

# 280 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 281 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 282 "data/maps/PetalburgWoods/scripts.pory"
	end
# 283 "data/maps/PetalburgWoods/scripts.pory"

# 284 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 285 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 286 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 287 "data/maps/PetalburgWoods/scripts.pory"
	end
# 288 "data/maps/PetalburgWoods/scripts.pory"

# 289 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 290 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 291 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 292 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 293 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 294 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 295 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 296 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 297 "data/maps/PetalburgWoods/scripts.pory"
	release
# 298 "data/maps/PetalburgWoods/scripts.pory"
	end
# 299 "data/maps/PetalburgWoods/scripts.pory"

# 300 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 301 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 302 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 303 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 304 "data/maps/PetalburgWoods/scripts.pory"
	release
# 305 "data/maps/PetalburgWoods/scripts.pory"
	end
# 306 "data/maps/PetalburgWoods/scripts.pory"

# 307 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 308 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 309 "data/maps/PetalburgWoods/scripts.pory"
	//register_matchcall TRAINER_JAMES_1
# 310 "data/maps/PetalburgWoods/scripts.pory"
	release
# 311 "data/maps/PetalburgWoods/scripts.pory"
	end
# 312 "data/maps/PetalburgWoods/scripts.pory"

# 313 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 314 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 315 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 316 "data/maps/PetalburgWoods/scripts.pory"
	release
# 317 "data/maps/PetalburgWoods/scripts.pory"
	end
# 318 "data/maps/PetalburgWoods/scripts.pory"

# 319 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 320 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 321 "data/maps/PetalburgWoods/scripts.pory"
	//register_matchcall TRAINER_JAMES_1
# 322 "data/maps/PetalburgWoods/scripts.pory"
	release
# 323 "data/maps/PetalburgWoods/scripts.pory"
	end
# 324 "data/maps/PetalburgWoods/scripts.pory"

# 325 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 326 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 327 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 328 "data/maps/PetalburgWoods/scripts.pory"
	end
# 329 "data/maps/PetalburgWoods/scripts.pory"

# 330 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Hattori::
# 331 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_HATTORI, PetalburgWoods_Text_HattoriIntro, PetalburgWoods_Text_HattoriDefeat
# 332 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HattoriPostBattle, MSGBOX_AUTOCLOSE
# 333 "data/maps/PetalburgWoods/scripts.pory"
	end
# 334 "data/maps/PetalburgWoods/scripts.pory"

# 335 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 336 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 338 "data/maps/PetalburgWoods/scripts.pory"

# 339 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any Pokémon\n"
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that Pokémon.$"
# 343 "data/maps/PetalburgWoods/scripts.pory"

# 344 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 349 "data/maps/PetalburgWoods/scripts.pory"

# 350 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 351 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 353 "data/maps/PetalburgWoods/scripts.pory"

# 354 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a Pokémon TRAINER, aren't you?\n"
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 358 "data/maps/PetalburgWoods/scripts.pory"

# 359 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 365 "data/maps/PetalburgWoods/scripts.pory"

# 366 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 368 "data/maps/PetalburgWoods/scripts.pory"

# 369 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon…\p"
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 378 "data/maps/PetalburgWoods/scripts.pory"

# 379 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 381 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 385 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 386 "data/maps/PetalburgWoods/scripts.pory"

# 387 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 391 "data/maps/PetalburgWoods/scripts.pory"

# 392 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 394 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 395 "data/maps/PetalburgWoods/scripts.pory"

# 396 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 399 "data/maps/PetalburgWoods/scripts.pory"

# 400 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of Pokémon!\p"
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG Pokémon team!$"
# 404 "data/maps/PetalburgWoods/scripts.pory"

# 405 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 406 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these Pokémon,\n"
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 408 "data/maps/PetalburgWoods/scripts.pory"

# 409 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of Pokémon.\n"
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 412 "data/maps/PetalburgWoods/scripts.pory"

# 413 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG Pokémon to school,\n"
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 416 "data/maps/PetalburgWoods/scripts.pory"

# 417 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 419 "data/maps/PetalburgWoods/scripts.pory"

# 420 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG Pokémon,\n"
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 423 "data/maps/PetalburgWoods/scripts.pory"

# 424 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 428 "data/maps/PetalburgWoods/scripts.pory"

# 429 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 430 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 433 "data/maps/PetalburgWoods/scripts.pory"

# 434 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG Pokémon have grown.\n"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 437 "data/maps/PetalburgWoods/scripts.pory"

# 438 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 440 "data/maps/PetalburgWoods/scripts.pory"

# 441 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong Pokémon, right?\l"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 445 "data/maps/PetalburgWoods/scripts.pory"

# 446 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your Pokémon doing okay?\p"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your Pokémon are weak and you want\n"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 452 "data/maps/PetalburgWoods/scripts.pory"

# 453 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 458 "data/maps/PetalburgWoods/scripts.pory"

# 459 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 464 "data/maps/PetalburgWoods/scripts.pory"

# 465 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon holds that item, its\l"
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for Pokémon\l"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 472 "data/maps/PetalburgWoods/scripts.pory"

# 473 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any Pokémon that appears even once\n"
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak Pokémon, put it at the\n"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 482 "data/maps/PetalburgWoods/scripts.pory"

# 483 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 484 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 485 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), Pokémon\n"
# 486 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 487 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 488 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon runs out of PP, it must be\n"
# 489 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a Pokémon CENTER.$"

PetalburgWoods_EventScript_HideMysteryGrotto::
# 494 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 26, 6, 0x0C7, TRUE
# 495 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 27, 6, 0x0C7, TRUE
# 496 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 26, 7, 0x016, TRUE
# 497 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 27, 7, 0x016, TRUE
# 498 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 26, 8, 0x001, FALSE
# 499 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 27, 8, 0x001, FALSE
	return


PetalburgWoods_EventScript_PeekoTalk::
# 504 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_PeekoTalk_Text_0, MSGBOX_NPC
	end


PetalburgWoods_EventScript_AquaGruntBattle::
# 509 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 510 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, Common_Movement_FacePlayer
# 511 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, Common_Movement_ExclamationMark
# 512 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 513 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 514 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_AquaGruntBattle_Text_0, MSGBOX_NPC
# 515 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
# 516 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_EventScript_AquaGruntBattle_Text_1, PetalburgWoods_Text_AquaGruntDefeated, PetalburgWoods_EventScript_AquaGruntPostBattle
# 517 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


PetalburgWoods_EventScript_AquaGruntPostBattle::
# 522 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_AquaGruntPostBattle_Text_0, MSGBOX_NPC
# 523 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
# 524 "data/maps/PetalburgWoods/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 525 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_PEEKO, PetalburgWoods_Movement_PeekoEscape
# 526 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 527 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_PEEKO
# 528 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_AquaGruntPostBattle_Text_1, MSGBOX_NPC
# 529 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
# 530 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaGruntFlee
# 531 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 532 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 533 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
# 534 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 535 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 536 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_LEVEL_CAP, 15
# 537 "data/maps/PetalburgWoods/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 538 "data/maps/PetalburgWoods/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 544 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


# 556 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_PeekoEscape:
# 557 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 557 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 557 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 557 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 557 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
	step_end

# 561 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaGruntFlee:
# 562 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 562 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 562 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 562 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 562 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 563 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 563 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 563 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 563 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 563 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 563 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 563 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 563 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
	step_end

PetalburgWoods_EventScript_PeekoTalk_Text_0:
# 504 "data/maps/PetalburgWoods/scripts.pory"
	.string "Peeko: Pii!$"

PetalburgWoods_EventScript_AquaGruntBattle_Text_0:
# 514 "data/maps/PetalburgWoods/scripts.pory"
	.string "Who are you? Why are you disturbing my\n"
	.string "training?$"

PetalburgWoods_EventScript_AquaGruntBattle_Text_1:
# 516 "data/maps/PetalburgWoods/scripts.pory"
	.string "You want me to return this bird to the\n"
	.string "old man? Absolutely not!$"

PetalburgWoods_EventScript_AquaGruntPostBattle_Text_0:
# 522 "data/maps/PetalburgWoods/scripts.pory"
	.string "Fine, I'll release this Wingull. Clearly it\n"
	.string "is too weak to help us with our mission\l"
	.string "anyway.$"

PetalburgWoods_EventScript_AquaGruntPostBattle_Text_1:
# 528 "data/maps/PetalburgWoods/scripts.pory"
	.string "This won't stop Team Aqua from doing\n"
	.string "whatever it takes to prevent any more\l"
	.string "damage being done to the natural\l"
	.string "environment of Hoenn.$"

PetalburgWoods_Text_AquaGruntDefeated::
# 548 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're stronger than you look.$"

PetalburgWoods_Text_AquaGruntLost::
# 552 "data/maps/PetalburgWoods/scripts.pory"
	.string "We're going to make sure no more damage\n"
	.string "is done to Hoenn's environment!$"

PetalburgWoods_Text_HattoriIntro::
# 566 "data/maps/PetalburgWoods/scripts.pory"
	.string "Bet you didn't see me hidden among the\n"
	.string "trees!$"

PetalburgWoods_Text_HattoriDefeat::
# 570 "data/maps/PetalburgWoods/scripts.pory"
	.string "Did you know I was here all along?$"

PetalburgWoods_Text_HattoriPostBattle::
# 574 "data/maps/PetalburgWoods/scripts.pory"
	.string "Maybe I'm not using the right tree\n"
	.string "disguise...$"
