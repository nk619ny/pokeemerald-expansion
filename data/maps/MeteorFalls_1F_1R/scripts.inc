# 1 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 5
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MeteorFalls_1F_1R_OnFrame
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnFrame:
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, MeteorFalls_1F_1R_FlashCheck
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.2byte 0
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
/*MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_Delay48
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_ARCHIE
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_1
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_2
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_ARCHIE
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_1
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_2
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you before?\n"
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your name is {PLAYER}.\p"
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were one\n"
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're one odd kid.\p"
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, you should keep\n"
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "an eye out for TEAM MAGMA, too.\p"
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$" */

MeteorFalls_1F_1R_FlashCheck::
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_SYS_USE_FLASH, MeteorFalls_1F_1R_FlashCheck_2
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, MeteorFalls_1F_1R_FlashCheck_4
# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 347 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox Common_Text_CaveIsDarkNeedFlash
# 348 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmessage
# 349 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 350 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 1
# 351 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	warp MAP_ROUTE114, 8, 63
# 352 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 353 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 354 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	return

MeteorFalls_1F_1R_FlashCheck_2:
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	return

MeteorFalls_1F_1R_FlashCheck_4:
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox Common_Text_CaveIsDarkUseFlash
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmessage
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_M_REFLECT
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 20
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_SYS_USE_FLASH
# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	animateflash 0
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflashlevel 0
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	return

