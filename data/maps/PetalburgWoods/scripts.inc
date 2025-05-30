# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_PEEKO, 13
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgWoods_OnFrame
# 7 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgWoods/scripts.pory"

# 9 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_OnFrame:
# 10 "data/maps/PetalburgWoods/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PetalburgWoods_EventScript_HideMysteryGrotto
# 11 "data/maps/PetalburgWoods/scripts.pory"
	.2byte 0
# 12 "data/maps/PetalburgWoods/scripts.pory"

# 13 "data/maps/PetalburgWoods/scripts.pory"
//PetalburgWoods_EventScript_DevonResearcherLeft::
# 14 "data/maps/PetalburgWoods/scripts.pory"
//	lockall
# 15 "data/maps/PetalburgWoods/scripts.pory"
//	call PetalburgWoods_EventScript_DevonResearcherIntro
# 16 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 17 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 18 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 19 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 20 "data/maps/PetalburgWoods/scripts.pory"
//	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 21 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 22 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 23 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 24 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 25 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 26 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 27 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 29 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 31 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 32 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 35 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 36 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 38 "data/maps/PetalburgWoods/scripts.pory"
//	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 39 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 40 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 41 "data/maps/PetalburgWoods/scripts.pory"
//	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 42 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 43 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
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
//	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
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
//	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 59 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 60 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 62 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 63 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 64 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 65 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 66 "data/maps/PetalburgWoods/scripts.pory"
//	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgWoods/scripts.pory"
//	closemessage
# 68 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
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
//	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 76 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 77 "data/maps/PetalburgWoods/scripts.pory"
//	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 78 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 79 "data/maps/PetalburgWoods/scripts.pory"
//	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 80 "data/maps/PetalburgWoods/scripts.pory"
//	waitmovement 0
# 81 "data/maps/PetalburgWoods/scripts.pory"
//	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 82 "data/maps/PetalburgWoods/scripts.pory"
//	end
# 83 "data/maps/PetalburgWoods/scripts.pory"

# 84 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 85 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 86 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 87 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 89 "data/maps/PetalburgWoods/scripts.pory"
	return
# 90 "data/maps/PetalburgWoods/scripts.pory"

# 91 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 92 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 93 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 94 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 95 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 96 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 97 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 98 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 99 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 101 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 102 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 103 "data/maps/PetalburgWoods/scripts.pory"
	end
# 104 "data/maps/PetalburgWoods/scripts.pory"

# 105 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 106 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 107 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 108 "data/maps/PetalburgWoods/scripts.pory"
	end
# 109 "data/maps/PetalburgWoods/scripts.pory"

# 110 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 111 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 113 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 114 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 115 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 116 "data/maps/PetalburgWoods/scripts.pory"
	return
# 117 "data/maps/PetalburgWoods/scripts.pory"

# 118 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 119 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 120 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 121 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 122 "data/maps/PetalburgWoods/scripts.pory"
	end
# 123 "data/maps/PetalburgWoods/scripts.pory"

# 124 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 125 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 126 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 128 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 131 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 133 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 134 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 135 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 136 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 137 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 138 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 139 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 140 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 141 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 142 "data/maps/PetalburgWoods/scripts.pory"

# 143 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 144 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 145 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 146 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 147 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 148 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 149 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 150 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 151 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 152 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 153 "data/maps/PetalburgWoods/scripts.pory"

# 154 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 155 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 156 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 160 "data/maps/PetalburgWoods/scripts.pory"

# 161 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 162 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 163 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 168 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 169 "data/maps/PetalburgWoods/scripts.pory"

# 170 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 173 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 174 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 176 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 177 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 178 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 179 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 180 "data/maps/PetalburgWoods/scripts.pory"

# 181 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 182 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 183 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 185 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 186 "data/maps/PetalburgWoods/scripts.pory"

# 187 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 190 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 192 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 193 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 194 "data/maps/PetalburgWoods/scripts.pory"

# 195 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 196 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 197 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 198 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 199 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 200 "data/maps/PetalburgWoods/scripts.pory"

# 201 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 202 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 203 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 204 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 205 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 206 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 207 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 208 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 209 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 210 "data/maps/PetalburgWoods/scripts.pory"

# 211 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 213 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 214 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 215 "data/maps/PetalburgWoods/scripts.pory"

# 216 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 217 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 220 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 221 "data/maps/PetalburgWoods/scripts.pory"

# 222 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 223 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 228 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 229 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 230 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 231 "data/maps/PetalburgWoods/scripts.pory"

# 232 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 234 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 235 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 236 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 237 "data/maps/PetalburgWoods/scripts.pory"

# 238 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 239 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 240 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 241 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 242 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 243 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 244 "data/maps/PetalburgWoods/scripts.pory"

# 245 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 246 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 247 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 248 "data/maps/PetalburgWoods/scripts.pory"

# 249 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 250 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 251 "data/maps/PetalburgWoods/scripts.pory"
	end
# 252 "data/maps/PetalburgWoods/scripts.pory"

# 253 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 254 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 255 "data/maps/PetalburgWoods/scripts.pory"
	end
# 256 "data/maps/PetalburgWoods/scripts.pory"

# 257 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 258 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 259 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 260 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 261 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 262 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 263 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 264 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 265 "data/maps/PetalburgWoods/scripts.pory"
	release
# 266 "data/maps/PetalburgWoods/scripts.pory"
	end
# 267 "data/maps/PetalburgWoods/scripts.pory"

# 268 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 269 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 270 "data/maps/PetalburgWoods/scripts.pory"
	release
# 271 "data/maps/PetalburgWoods/scripts.pory"
	end
# 272 "data/maps/PetalburgWoods/scripts.pory"

# 273 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 274 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 275 "data/maps/PetalburgWoods/scripts.pory"
	end
# 276 "data/maps/PetalburgWoods/scripts.pory"

# 277 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 278 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 279 "data/maps/PetalburgWoods/scripts.pory"
	end
# 280 "data/maps/PetalburgWoods/scripts.pory"

# 281 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 282 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 283 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 284 "data/maps/PetalburgWoods/scripts.pory"
	end
# 285 "data/maps/PetalburgWoods/scripts.pory"

# 286 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 287 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 288 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 289 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 290 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 291 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 292 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 293 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 294 "data/maps/PetalburgWoods/scripts.pory"
	release
# 295 "data/maps/PetalburgWoods/scripts.pory"
	end
# 296 "data/maps/PetalburgWoods/scripts.pory"

# 297 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 298 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 299 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 300 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 301 "data/maps/PetalburgWoods/scripts.pory"
	release
# 302 "data/maps/PetalburgWoods/scripts.pory"
	end
# 303 "data/maps/PetalburgWoods/scripts.pory"

# 304 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 305 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 306 "data/maps/PetalburgWoods/scripts.pory"
	//register_matchcall TRAINER_JAMES_1
# 307 "data/maps/PetalburgWoods/scripts.pory"
	release
# 308 "data/maps/PetalburgWoods/scripts.pory"
	end
# 309 "data/maps/PetalburgWoods/scripts.pory"

# 310 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 311 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 312 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 313 "data/maps/PetalburgWoods/scripts.pory"
	release
# 314 "data/maps/PetalburgWoods/scripts.pory"
	end
# 315 "data/maps/PetalburgWoods/scripts.pory"

# 316 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 317 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 318 "data/maps/PetalburgWoods/scripts.pory"
	//register_matchcall TRAINER_JAMES_1
# 319 "data/maps/PetalburgWoods/scripts.pory"
	release
# 320 "data/maps/PetalburgWoods/scripts.pory"
	end
# 321 "data/maps/PetalburgWoods/scripts.pory"

# 322 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 323 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 324 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 325 "data/maps/PetalburgWoods/scripts.pory"
	end
# 326 "data/maps/PetalburgWoods/scripts.pory"

# 327 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 330 "data/maps/PetalburgWoods/scripts.pory"

# 331 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 332 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 335 "data/maps/PetalburgWoods/scripts.pory"

# 336 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 339 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 341 "data/maps/PetalburgWoods/scripts.pory"

# 342 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 344 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 345 "data/maps/PetalburgWoods/scripts.pory"

# 346 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 350 "data/maps/PetalburgWoods/scripts.pory"

# 351 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 357 "data/maps/PetalburgWoods/scripts.pory"

# 358 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 360 "data/maps/PetalburgWoods/scripts.pory"

# 361 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 370 "data/maps/PetalburgWoods/scripts.pory"

# 371 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 378 "data/maps/PetalburgWoods/scripts.pory"

# 379 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 381 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 383 "data/maps/PetalburgWoods/scripts.pory"

# 384 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 385 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 387 "data/maps/PetalburgWoods/scripts.pory"

# 388 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 391 "data/maps/PetalburgWoods/scripts.pory"

# 392 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 394 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 396 "data/maps/PetalburgWoods/scripts.pory"

# 397 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 399 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 400 "data/maps/PetalburgWoods/scripts.pory"

# 401 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 404 "data/maps/PetalburgWoods/scripts.pory"

# 405 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 406 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 408 "data/maps/PetalburgWoods/scripts.pory"

# 409 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 411 "data/maps/PetalburgWoods/scripts.pory"

# 412 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 415 "data/maps/PetalburgWoods/scripts.pory"

# 416 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 420 "data/maps/PetalburgWoods/scripts.pory"

# 421 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 425 "data/maps/PetalburgWoods/scripts.pory"

# 426 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 432 "data/maps/PetalburgWoods/scripts.pory"

# 433 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 437 "data/maps/PetalburgWoods/scripts.pory"

# 438 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 444 "data/maps/PetalburgWoods/scripts.pory"

# 445 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 450 "data/maps/PetalburgWoods/scripts.pory"

# 451 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 456 "data/maps/PetalburgWoods/scripts.pory"

# 457 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 464 "data/maps/PetalburgWoods/scripts.pory"

# 465 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 474 "data/maps/PetalburgWoods/scripts.pory"

# 475 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"

PetalburgWoods_EventScript_HideMysteryGrotto::
# 486 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_unset FLAG_DEFEATED_NORMAN_INTRO, PetalburgWoods_EventScript_HideMysteryGrotto_2
PetalburgWoods_EventScript_HideMysteryGrotto_1:
# 494 "data/maps/PetalburgWoods/scripts.pory"
	special DrawWholeMapView
# 495 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

PetalburgWoods_EventScript_HideMysteryGrotto_2:
# 487 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 26, 4, 0x0C7, TRUE
# 488 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 27, 4, 0x0C7, TRUE
# 489 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 26, 5, 0x016, TRUE
# 490 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 27, 5, 0x016, TRUE
# 491 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 26, 6, 0x001, FALSE
# 492 "data/maps/PetalburgWoods/scripts.pory"
	setmetatile 27, 6, 0x001, FALSE
	goto PetalburgWoods_EventScript_HideMysteryGrotto_1


PetalburgWoods_EventScript_PeekoTalk::
# 500 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_PeekoTalk_Text_0, MSGBOX_NPC
	end


PetalburgWoods_EventScript_AquaGruntBattle::
# 505 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 506 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_FacePlayer
# 507 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_ExclamationMark
# 508 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 509 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 510 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_AquaGruntBattle_Text_0, MSGBOX_NPC
# 511 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
# 512 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_EventScript_AquaGruntBattle_Text_1, PetalburgWoods_Text_AquaGruntDefeated, PetalburgWoods_EventScript_AquaGruntPostBattle
# 513 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


PetalburgWoods_EventScript_AquaGruntPostBattle::
# 518 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_AquaGruntPostBattle_Text_0, MSGBOX_NPC
# 519 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
# 520 "data/maps/PetalburgWoods/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 521 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PEEKO, PetalburgWoods_Movement_PeekoEscape
# 522 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 523 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PEEKO
# 524 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_AquaGruntPostBattle_Text_1, MSGBOX_NPC
# 525 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
# 526 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaGruntFlee
# 527 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 528 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 529 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
# 530 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 531 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 532 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_LEVEL_CAP, 17
# 533 "data/maps/PetalburgWoods/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 534 "data/maps/PetalburgWoods/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 540 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


# 552 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_PeekoEscape:
# 553 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 553 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 553 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 553 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 553 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 554 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
	step_end

# 557 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaGruntFlee:
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 558 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 559 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
	step_end

PetalburgWoods_EventScript_PeekoTalk_Text_0:
# 500 "data/maps/PetalburgWoods/scripts.pory"
	.string "Peeko: Pii!$"

PetalburgWoods_EventScript_AquaGruntBattle_Text_0:
# 510 "data/maps/PetalburgWoods/scripts.pory"
	.string "Who are you? Why are you disturbing my\n"
	.string "training?$"

PetalburgWoods_EventScript_AquaGruntBattle_Text_1:
# 512 "data/maps/PetalburgWoods/scripts.pory"
	.string "You want me to return this bird to the\n"
	.string "old man? Absolutely not!$"

PetalburgWoods_EventScript_AquaGruntPostBattle_Text_0:
# 518 "data/maps/PetalburgWoods/scripts.pory"
	.string "Fine, I'll release this Wingull. Clearly it\n"
	.string "is too weak to help us with our mission\l"
	.string "anyway.$"

PetalburgWoods_EventScript_AquaGruntPostBattle_Text_1:
# 524 "data/maps/PetalburgWoods/scripts.pory"
	.string "This won't stop Team Aqua from doing\n"
	.string "whatever it takes to prevent any more\l"
	.string "damage being done to the natural\l"
	.string "environment of Hoenn.$"

PetalburgWoods_Text_AquaGruntDefeated::
# 544 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're stronger than you look.$"

PetalburgWoods_Text_AquaGruntLost::
# 548 "data/maps/PetalburgWoods/scripts.pory"
	.string "We're going to make sure no more damage\n"
	.string "is done to Hoenn's environment!$"
