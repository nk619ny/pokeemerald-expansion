# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"

# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 10 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 12 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 13 "data/maps/MtChimney/scripts.pory"

# 14 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 15 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 16 "data/maps/MtChimney/scripts.pory"
	end
# 17 "data/maps/MtChimney/scripts.pory"

# 18 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 19 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 20 "data/maps/MtChimney/scripts.pory"
	end
# 21 "data/maps/MtChimney/scripts.pory"

# 22 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 23 "data/maps/MtChimney/scripts.pory"
	lock
# 24 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 25 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 27 "data/maps/MtChimney/scripts.pory"
	closemessage
# 28 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 29 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 30 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 31 "data/maps/MtChimney/scripts.pory"
	release
# 32 "data/maps/MtChimney/scripts.pory"
	end
# 33 "data/maps/MtChimney/scripts.pory"

# 34 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 35 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 36 "data/maps/MtChimney/scripts.pory"
	return
# 37 "data/maps/MtChimney/scripts.pory"

# 38 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 39 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 40 "data/maps/MtChimney/scripts.pory"
	return
# 41 "data/maps/MtChimney/scripts.pory"

# 42 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 43 "data/maps/MtChimney/scripts.pory"
	lockall
# 44 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 45 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineWillActivateVolcano, MSGBOX_DEFAULT
# 46 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 47 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 49 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 50 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 51 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 52 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 53 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 54 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 55 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 56 "data/maps/MtChimney/scripts.pory"
	closemessage
# 57 "data/maps/MtChimney/scripts.pory"
	delay 30
# 58 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 59 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 63 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 64 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 65 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 66 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 67 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 68 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 69 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 70 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 71 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 72 "data/maps/MtChimney/scripts.pory"
	closemessage
# 73 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGiveFlash, MSGBOX_DEFAULT
# 74 "data/maps/MtChimney/scripts.pory"
	waitmessage
# 75 "data/maps/MtChimney/scripts.pory"
	GIVEITEM ITEM_HM05
# 76 "data/maps/MtChimney/scripts.pory"
	waitfanfare
# 77 "data/maps/MtChimney/scripts.pory"
	closemessage
# 78 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 79 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieMeetAgain
# 80 "data/maps/MtChimney/scripts.pory"
	closemessage
# 81 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 82 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 83 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 84 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 85 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 86 "data/maps/MtChimney/scripts.pory"
//	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 87 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 88 "data/maps/MtChimney/scripts.pory"
	setvar VAR_LEVEL_CAP, 48
# 89 "data/maps/MtChimney/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 90 "data/maps/MtChimney/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 91 "data/maps/MtChimney/scripts.pory"
	releaseall
# 92 "data/maps/MtChimney/scripts.pory"
	end
# 93 "data/maps/MtChimney/scripts.pory"

# 94 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 95 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 96 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 97 "data/maps/MtChimney/scripts.pory"
	return
# 98 "data/maps/MtChimney/scripts.pory"

# 99 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 100 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 101 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 102 "data/maps/MtChimney/scripts.pory"
	return
# 103 "data/maps/MtChimney/scripts.pory"

# 104 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 105 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 106 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 107 "data/maps/MtChimney/scripts.pory"
	return
# 108 "data/maps/MtChimney/scripts.pory"

# 109 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 110 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 111 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 112 "data/maps/MtChimney/scripts.pory"
	return
# 113 "data/maps/MtChimney/scripts.pory"

# 114 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 115 "data/maps/MtChimney/scripts.pory"
	lock
# 116 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 117 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 118 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 119 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 120 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 121 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 122 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 123 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 124 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 125 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 126 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 127 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 128 "data/maps/MtChimney/scripts.pory"
	release
# 129 "data/maps/MtChimney/scripts.pory"
	end
# 130 "data/maps/MtChimney/scripts.pory"

# 131 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 132 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 133 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 134 "data/maps/MtChimney/scripts.pory"
	release
# 135 "data/maps/MtChimney/scripts.pory"
	end
# 136 "data/maps/MtChimney/scripts.pory"

# 137 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 138 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 139 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 140 "data/maps/MtChimney/scripts.pory"
	return
# 141 "data/maps/MtChimney/scripts.pory"

# 142 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 143 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 144 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 145 "data/maps/MtChimney/scripts.pory"
	release
# 146 "data/maps/MtChimney/scripts.pory"
	end
# 147 "data/maps/MtChimney/scripts.pory"

# 148 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 149 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 150 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 151 "data/maps/MtChimney/scripts.pory"
	release
# 152 "data/maps/MtChimney/scripts.pory"
	end
# 153 "data/maps/MtChimney/scripts.pory"

# 154 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 155 "data/maps/MtChimney/scripts.pory"
	walk_up
# 156 "data/maps/MtChimney/scripts.pory"
	walk_up
# 157 "data/maps/MtChimney/scripts.pory"
	walk_up
# 158 "data/maps/MtChimney/scripts.pory"
	walk_up
# 159 "data/maps/MtChimney/scripts.pory"
	walk_up
# 160 "data/maps/MtChimney/scripts.pory"
	walk_up
# 161 "data/maps/MtChimney/scripts.pory"
	walk_right
# 162 "data/maps/MtChimney/scripts.pory"
	step_end
# 163 "data/maps/MtChimney/scripts.pory"

# 164 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 165 "data/maps/MtChimney/scripts.pory"
	walk_left
# 166 "data/maps/MtChimney/scripts.pory"
	walk_down
# 167 "data/maps/MtChimney/scripts.pory"
	walk_down
# 168 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 170 "data/maps/MtChimney/scripts.pory"
	walk_down
# 171 "data/maps/MtChimney/scripts.pory"
	walk_down
# 172 "data/maps/MtChimney/scripts.pory"
	walk_down
# 173 "data/maps/MtChimney/scripts.pory"
	step_end
# 174 "data/maps/MtChimney/scripts.pory"

# 175 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 176 "data/maps/MtChimney/scripts.pory"
	walk_up
# 177 "data/maps/MtChimney/scripts.pory"
	walk_up
# 178 "data/maps/MtChimney/scripts.pory"
	walk_up
# 179 "data/maps/MtChimney/scripts.pory"
	walk_up
# 180 "data/maps/MtChimney/scripts.pory"
	walk_up
# 181 "data/maps/MtChimney/scripts.pory"
	walk_right
# 182 "data/maps/MtChimney/scripts.pory"
	walk_right
# 183 "data/maps/MtChimney/scripts.pory"
	step_end
# 184 "data/maps/MtChimney/scripts.pory"

# 185 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 187 "data/maps/MtChimney/scripts.pory"
	walk_left
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	walk_down
# 195 "data/maps/MtChimney/scripts.pory"
	step_end
# 196 "data/maps/MtChimney/scripts.pory"

# 197 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 201 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
# 203 "data/maps/MtChimney/scripts.pory"
	walk_left
# 204 "data/maps/MtChimney/scripts.pory"
	walk_left
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 207 "data/maps/MtChimney/scripts.pory"
	walk_down
# 208 "data/maps/MtChimney/scripts.pory"
	walk_down
# 209 "data/maps/MtChimney/scripts.pory"
	walk_left
# 210 "data/maps/MtChimney/scripts.pory"
	walk_left
# 211 "data/maps/MtChimney/scripts.pory"
	walk_left
# 212 "data/maps/MtChimney/scripts.pory"
	walk_left
# 213 "data/maps/MtChimney/scripts.pory"
	walk_left
# 214 "data/maps/MtChimney/scripts.pory"
	walk_down
# 215 "data/maps/MtChimney/scripts.pory"
	step_end
# 216 "data/maps/MtChimney/scripts.pory"

# 217 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 218 "data/maps/MtChimney/scripts.pory"
	walk_down
# 219 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	walk_left
# 223 "data/maps/MtChimney/scripts.pory"
	walk_left
# 224 "data/maps/MtChimney/scripts.pory"
	walk_left
# 225 "data/maps/MtChimney/scripts.pory"
	walk_down
# 226 "data/maps/MtChimney/scripts.pory"
	step_end
# 227 "data/maps/MtChimney/scripts.pory"

# 228 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 229 "data/maps/MtChimney/scripts.pory"
	walk_right
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 233 "data/maps/MtChimney/scripts.pory"
	walk_down
# 234 "data/maps/MtChimney/scripts.pory"
	walk_left
# 235 "data/maps/MtChimney/scripts.pory"
	walk_left
# 236 "data/maps/MtChimney/scripts.pory"
	walk_left
# 237 "data/maps/MtChimney/scripts.pory"
	walk_left
# 238 "data/maps/MtChimney/scripts.pory"
	walk_left
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_down
# 242 "data/maps/MtChimney/scripts.pory"
	walk_down
# 243 "data/maps/MtChimney/scripts.pory"
	step_end
# 244 "data/maps/MtChimney/scripts.pory"

# 245 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 246 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 247 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_left
# 256 "data/maps/MtChimney/scripts.pory"
	walk_left
# 257 "data/maps/MtChimney/scripts.pory"
	walk_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_down
# 259 "data/maps/MtChimney/scripts.pory"
	walk_down
# 260 "data/maps/MtChimney/scripts.pory"
	walk_left
# 261 "data/maps/MtChimney/scripts.pory"
	walk_left
# 262 "data/maps/MtChimney/scripts.pory"
	walk_down
# 263 "data/maps/MtChimney/scripts.pory"
	walk_down
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_left
# 266 "data/maps/MtChimney/scripts.pory"
	walk_left
# 267 "data/maps/MtChimney/scripts.pory"
	walk_left
# 268 "data/maps/MtChimney/scripts.pory"
	walk_left
# 269 "data/maps/MtChimney/scripts.pory"
	walk_down
# 270 "data/maps/MtChimney/scripts.pory"
	step_end
# 271 "data/maps/MtChimney/scripts.pory"

# 272 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 273 "data/maps/MtChimney/scripts.pory"
	delay_16
# 274 "data/maps/MtChimney/scripts.pory"
	delay_16
# 275 "data/maps/MtChimney/scripts.pory"
	delay_16
# 276 "data/maps/MtChimney/scripts.pory"
	walk_down
# 277 "data/maps/MtChimney/scripts.pory"
	walk_down
# 278 "data/maps/MtChimney/scripts.pory"
	walk_down
# 279 "data/maps/MtChimney/scripts.pory"
	walk_left
# 280 "data/maps/MtChimney/scripts.pory"
	walk_left
# 281 "data/maps/MtChimney/scripts.pory"
	walk_left
# 282 "data/maps/MtChimney/scripts.pory"
	walk_down
# 283 "data/maps/MtChimney/scripts.pory"
	step_end
# 284 "data/maps/MtChimney/scripts.pory"

# 285 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 286 "data/maps/MtChimney/scripts.pory"
	delay_16
# 287 "data/maps/MtChimney/scripts.pory"
	walk_left
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_down
# 291 "data/maps/MtChimney/scripts.pory"
	walk_down
# 292 "data/maps/MtChimney/scripts.pory"
	walk_left
# 293 "data/maps/MtChimney/scripts.pory"
	walk_left
# 294 "data/maps/MtChimney/scripts.pory"
	walk_left
# 295 "data/maps/MtChimney/scripts.pory"
	walk_left
# 296 "data/maps/MtChimney/scripts.pory"
	walk_left
# 297 "data/maps/MtChimney/scripts.pory"
	walk_down
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_down
# 301 "data/maps/MtChimney/scripts.pory"
	step_end
# 302 "data/maps/MtChimney/scripts.pory"

# 303 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 304 "data/maps/MtChimney/scripts.pory"
	delay_16
# 305 "data/maps/MtChimney/scripts.pory"
	walk_left
# 306 "data/maps/MtChimney/scripts.pory"
	walk_left
# 307 "data/maps/MtChimney/scripts.pory"
	walk_down
# 308 "data/maps/MtChimney/scripts.pory"
	walk_down
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	walk_left
# 311 "data/maps/MtChimney/scripts.pory"
	walk_left
# 312 "data/maps/MtChimney/scripts.pory"
	walk_down
# 313 "data/maps/MtChimney/scripts.pory"
	walk_down
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_down
# 320 "data/maps/MtChimney/scripts.pory"
	step_end
# 321 "data/maps/MtChimney/scripts.pory"

# 322 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 323 "data/maps/MtChimney/scripts.pory"
	delay_16
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	walk_left
# 326 "data/maps/MtChimney/scripts.pory"
	walk_left
# 327 "data/maps/MtChimney/scripts.pory"
	walk_left
# 328 "data/maps/MtChimney/scripts.pory"
	walk_left
# 329 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 330 "data/maps/MtChimney/scripts.pory"
	step_end
# 331 "data/maps/MtChimney/scripts.pory"

# 332 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_down
# 336 "data/maps/MtChimney/scripts.pory"
	walk_down
# 337 "data/maps/MtChimney/scripts.pory"
	walk_left
# 338 "data/maps/MtChimney/scripts.pory"
	walk_left
# 339 "data/maps/MtChimney/scripts.pory"
	walk_left
# 340 "data/maps/MtChimney/scripts.pory"
	walk_left
# 341 "data/maps/MtChimney/scripts.pory"
	walk_left
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	walk_down
# 346 "data/maps/MtChimney/scripts.pory"
	step_end
# 347 "data/maps/MtChimney/scripts.pory"

# 348 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	step_end
# 351 "data/maps/MtChimney/scripts.pory"

# 352 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	step_end
# 361 "data/maps/MtChimney/scripts.pory"

# 362 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 363 "data/maps/MtChimney/scripts.pory"
	delay_16
# 364 "data/maps/MtChimney/scripts.pory"
	delay_16
# 365 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 366 "data/maps/MtChimney/scripts.pory"
	delay_16
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	walk_down
# 369 "data/maps/MtChimney/scripts.pory"
	walk_down
# 370 "data/maps/MtChimney/scripts.pory"
	walk_down
# 371 "data/maps/MtChimney/scripts.pory"
	walk_down
# 372 "data/maps/MtChimney/scripts.pory"
	step_end
# 373 "data/maps/MtChimney/scripts.pory"

# 374 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 375 "data/maps/MtChimney/scripts.pory"
	delay_16
# 376 "data/maps/MtChimney/scripts.pory"
	delay_16
# 377 "data/maps/MtChimney/scripts.pory"
	delay_16
# 378 "data/maps/MtChimney/scripts.pory"
	delay_16
# 379 "data/maps/MtChimney/scripts.pory"
	delay_16
# 380 "data/maps/MtChimney/scripts.pory"
	delay_16
# 381 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 382 "data/maps/MtChimney/scripts.pory"
	delay_16
# 383 "data/maps/MtChimney/scripts.pory"
	walk_down
# 384 "data/maps/MtChimney/scripts.pory"
	walk_down
# 385 "data/maps/MtChimney/scripts.pory"
	step_end
# 386 "data/maps/MtChimney/scripts.pory"

# 387 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 388 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 389 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 390 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 391 "data/maps/MtChimney/scripts.pory"
	face_right
# 392 "data/maps/MtChimney/scripts.pory"
	step_end
# 393 "data/maps/MtChimney/scripts.pory"

# 394 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 395 "data/maps/MtChimney/scripts.pory"
	walk_left
# 396 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 397 "data/maps/MtChimney/scripts.pory"
	delay_16
# 398 "data/maps/MtChimney/scripts.pory"
	step_end
# 399 "data/maps/MtChimney/scripts.pory"

# 400 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 401 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 402 "data/maps/MtChimney/scripts.pory"
	end
# 403 "data/maps/MtChimney/scripts.pory"

# 404 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 405 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 406 "data/maps/MtChimney/scripts.pory"
	end
# 407 "data/maps/MtChimney/scripts.pory"

# 408 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 409 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 410 "data/maps/MtChimney/scripts.pory"
	end
# 411 "data/maps/MtChimney/scripts.pory"

# 412 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 413 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 414 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 415 "data/maps/MtChimney/scripts.pory"
	end
# 416 "data/maps/MtChimney/scripts.pory"

# 417 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Courtney::
# 418 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyIntro, MtChimney_Text_CourtneyDefeat, MtChimney_EventScript_CourtneyOutro
# 419 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/MtChimney/scripts.pory"
	end
# 421 "data/maps/MtChimney/scripts.pory"

# 422 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 423 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 424 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/MtChimney/scripts.pory"
	end
# 426 "data/maps/MtChimney/scripts.pory"

# 427 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 428 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 429 "data/maps/MtChimney/scripts.pory"
	end
# 430 "data/maps/MtChimney/scripts.pory"

# 431 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 432 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 433 "data/maps/MtChimney/scripts.pory"
	end
# 434 "data/maps/MtChimney/scripts.pory"

# 435 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 436 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 437 "data/maps/MtChimney/scripts.pory"
	end
# 438 "data/maps/MtChimney/scripts.pory"

# 439 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 440 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 441 "data/maps/MtChimney/scripts.pory"
	end
# 442 "data/maps/MtChimney/scripts.pory"

# 443 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 444 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 445 "data/maps/MtChimney/scripts.pory"
	end
# 446 "data/maps/MtChimney/scripts.pory"

# 447 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 448 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 449 "data/maps/MtChimney/scripts.pory"
	end
# 450 "data/maps/MtChimney/scripts.pory"

# 451 "data/maps/MtChimney/scripts.pory"
/*MtChimney_EventScript_MagmaPoochyena::
# 452 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 453 "data/maps/MtChimney/scripts.pory"
	end 
# 454 "data/maps/MtChimney/scripts.pory"

# 455 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 456 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 457 "data/maps/MtChimney/scripts.pory"
	end */
# 458 "data/maps/MtChimney/scripts.pory"

# 459 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 460 "data/maps/MtChimney/scripts.pory"
	lockall
# 461 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 462 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOff
# 463 "data/maps/MtChimney/scripts.pory"
	// msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 464 "data/maps/MtChimney/scripts.pory"
	// goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 465 "data/maps/MtChimney/scripts.pory"
	// msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 466 "data/maps/MtChimney/scripts.pory"
	// giveitem ITEM_METEORITE
# 467 "data/maps/MtChimney/scripts.pory"
	// goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 468 "data/maps/MtChimney/scripts.pory"
	// setflag FLAG_RECEIVED_METEORITE
# 469 "data/maps/MtChimney/scripts.pory"
	releaseall
# 470 "data/maps/MtChimney/scripts.pory"
	end
# 471 "data/maps/MtChimney/scripts.pory"

# 472 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 473 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 474 "data/maps/MtChimney/scripts.pory"
	releaseall
# 475 "data/maps/MtChimney/scripts.pory"
	end
# 476 "data/maps/MtChimney/scripts.pory"

# 477 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 478 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 479 "data/maps/MtChimney/scripts.pory"
	releaseall
# 480 "data/maps/MtChimney/scripts.pory"
	end
# 481 "data/maps/MtChimney/scripts.pory"

# 482 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 483 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteFittedOnMachine, MSGBOX_DEFAULT
# 484 "data/maps/MtChimney/scripts.pory"
	releaseall
# 485 "data/maps/MtChimney/scripts.pory"
	end
# 486 "data/maps/MtChimney/scripts.pory"

# 487 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 488 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 489 "data/maps/MtChimney/scripts.pory"
	end
# 490 "data/maps/MtChimney/scripts.pory"

# 491 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 492 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 493 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 494 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 495 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 496 "data/maps/MtChimney/scripts.pory"
	release
# 497 "data/maps/MtChimney/scripts.pory"
	end
# 498 "data/maps/MtChimney/scripts.pory"

# 499 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 500 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 501 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 502 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 503 "data/maps/MtChimney/scripts.pory"
	//register_matchcall TRAINER_SHELBY_1
# 504 "data/maps/MtChimney/scripts.pory"
	release
# 505 "data/maps/MtChimney/scripts.pory"
	end
# 506 "data/maps/MtChimney/scripts.pory"

# 507 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 508 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 509 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 510 "data/maps/MtChimney/scripts.pory"
	end
# 511 "data/maps/MtChimney/scripts.pory"

# 512 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 513 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat, MtChimney_EventScript_MelissaTryGiveHeartScale
# 514 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_TEMP_B, MtChimney_EventScript_MelissaTryGiveHeartScale
# 515 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/MtChimney/scripts.pory"
	end
# 517 "data/maps/MtChimney/scripts.pory"

# 518 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 519 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 520 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 521 "data/maps/MtChimney/scripts.pory"
	end
# 522 "data/maps/MtChimney/scripts.pory"

# 523 "data/maps/MtChimney/scripts.pory"
/*
# 524 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 525 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 526 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 527 "data/maps/MtChimney/scripts.pory"
	end
# 528 "data/maps/MtChimney/scripts.pory"
*/
# 529 "data/maps/MtChimney/scripts.pory"

# 530 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 531 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 532 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 533 "data/maps/MtChimney/scripts.pory"
	end
# 534 "data/maps/MtChimney/scripts.pory"

# 535 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 536 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 537 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 538 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 539 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 540 "data/maps/MtChimney/scripts.pory"
	release
# 541 "data/maps/MtChimney/scripts.pory"
	end
# 542 "data/maps/MtChimney/scripts.pory"

# 543 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 544 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 545 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 546 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 547 "data/maps/MtChimney/scripts.pory"
	//register_matchcall TRAINER_SAWYER_1
# 548 "data/maps/MtChimney/scripts.pory"
	release
# 549 "data/maps/MtChimney/scripts.pory"
	end
# 550 "data/maps/MtChimney/scripts.pory"

# 551 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 552 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 553 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 554 "data/maps/MtChimney/scripts.pory"
	end
# 555 "data/maps/MtChimney/scripts.pory"

# 556 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 557 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 564 "data/maps/MtChimney/scripts.pory"

# 565 "data/maps/MtChimney/scripts.pory"
/* MtChimney_Text_MaxieIntro:
# 566 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 583 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 584 "data/maps/MtChimney/scripts.pory"
	.string "humankind and Pokémon!\p"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 588 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 589 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 592 "data/maps/MtChimney/scripts.pory"

# 593 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 594 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 596 "data/maps/MtChimney/scripts.pory"

# 597 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 598 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 600 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 604 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$" */
# 605 "data/maps/MtChimney/scripts.pory"

# 606 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 607 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 608 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 609 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 612 "data/maps/MtChimney/scripts.pory"

# 613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 614 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 616 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 617 "data/maps/MtChimney/scripts.pory"

# 618 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 619 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 621 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 622 "data/maps/MtChimney/scripts.pory"

# 623 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 624 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 625 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 626 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 627 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 629 "data/maps/MtChimney/scripts.pory"

# 630 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 631 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 633 "data/maps/MtChimney/scripts.pory"

# 634 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 635 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 636 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 637 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 639 "data/maps/MtChimney/scripts.pory"

# 640 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 641 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 642 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 643 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 646 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 647 "data/maps/MtChimney/scripts.pory"

# 648 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 649 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 650 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 651 "data/maps/MtChimney/scripts.pory"

# 652 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 653 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 654 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 655 "data/maps/MtChimney/scripts.pory"

# 656 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 657 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 658 "data/maps/MtChimney/scripts.pory"

# 659 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 660 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 661 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 662 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 663 "data/maps/MtChimney/scripts.pory"

# 664 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 665 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 666 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 667 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 668 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 669 "data/maps/MtChimney/scripts.pory"

# 670 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 671 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 673 "data/maps/MtChimney/scripts.pory"

# 674 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 675 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 676 "data/maps/MtChimney/scripts.pory"

# 677 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 678 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 679 "data/maps/MtChimney/scripts.pory"

# 680 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 681 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "They're using a machine to agitate\n"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "the volcano!\p"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 689 "data/maps/MtChimney/scripts.pory"

# 690 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 691 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 696 "data/maps/MtChimney/scripts.pory"

# 697 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 698 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 706 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.$"
# 707 "data/maps/MtChimney/scripts.pory"

# 708 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 709 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 713 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER Pokémon!$"
# 715 "data/maps/MtChimney/scripts.pory"

# 716 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 717 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 718 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 719 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 720 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 721 "data/maps/MtChimney/scripts.pory"

# 722 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 723 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 724 "data/maps/MtChimney/scripts.pory"

# 725 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 726 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 727 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 728 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 729 "data/maps/MtChimney/scripts.pory"

# 730 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 732 "data/maps/MtChimney/scripts.pory"

# 733 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 734 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 735 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 736 "data/maps/MtChimney/scripts.pory"

# 737 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 738 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 739 "data/maps/MtChimney/scripts.pory"

# 740 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteFittedOnMachine:
# 741 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 742 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 747 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 749 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 750 "data/maps/MtChimney/scripts.pory"

# 751 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 752 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 753 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 754 "data/maps/MtChimney/scripts.pory"

# 755 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 756 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 757 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 758 "data/maps/MtChimney/scripts.pory"

# 759 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 760 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 762 "data/maps/MtChimney/scripts.pory"

# 763 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 764 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 766 "data/maps/MtChimney/scripts.pory"

# 767 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 768 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 769 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 771 "data/maps/MtChimney/scripts.pory"

# 772 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 775 "data/maps/MtChimney/scripts.pory"

# 776 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 777 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 779 "data/maps/MtChimney/scripts.pory"

# 780 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 781 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 785 "data/maps/MtChimney/scripts.pory"

# 786 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 787 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "of your Pokémon, why, you should be\l"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 790 "data/maps/MtChimney/scripts.pory"

# 791 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 792 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 794 "data/maps/MtChimney/scripts.pory"

# 795 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 796 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your Pokémon.$"
# 798 "data/maps/MtChimney/scripts.pory"

# 799 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 800 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 802 "data/maps/MtChimney/scripts.pory"

# 803 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 804 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 805 "data/maps/MtChimney/scripts.pory"

# 806 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 807 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 808 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 809 "data/maps/MtChimney/scripts.pory"

# 810 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 811 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my Pokémon battle!$"
# 813 "data/maps/MtChimney/scripts.pory"

# 814 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 815 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 817 "data/maps/MtChimney/scripts.pory"

# 818 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 826 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 829 "data/maps/MtChimney/scripts.pory"

# 830 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 831 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 833 "data/maps/MtChimney/scripts.pory"

# 834 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 835 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 836 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 838 "data/maps/MtChimney/scripts.pory"

# 839 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 840 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 841 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 842 "data/maps/MtChimney/scripts.pory"

# 843 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 844 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 845 "data/maps/MtChimney/scripts.pory"

# 846 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 847 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 848 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 849 "data/maps/MtChimney/scripts.pory"

# 850 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 851 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 852 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 853 "data/maps/MtChimney/scripts.pory"

# 854 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 855 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 856 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 857 "data/maps/MtChimney/scripts.pory"

# 858 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 859 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 861 "data/maps/MtChimney/scripts.pory"

# 862 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 863 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 864 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"

MtChimney_EventScript_SetupMagma::
# 869 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 870 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 871 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
	return


MtChimney_EventScript_MagmaPoochyena::
# 876 "data/maps/MtChimney/scripts.pory"
	lock
# 877 "data/maps/MtChimney/scripts.pory"
	msgbox SlateportFarm_PokemonBattlingText
# 878 "data/maps/MtChimney/scripts.pory"
	waitmessage
# 879 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_EventScript_AquaPoochyena::
# 884 "data/maps/MtChimney/scripts.pory"
	lock
# 885 "data/maps/MtChimney/scripts.pory"
	msgbox SlateportFarm_PokemonBattlingText
# 886 "data/maps/MtChimney/scripts.pory"
	waitmessage
# 887 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_EventScript_CourtneyOutro::
# 892 "data/maps/MtChimney/scripts.pory"
	lock
# 893 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyOutro, MSGBOX_DEFAULT
# 894 "data/maps/MtChimney/scripts.pory"
	release
	end


MtChimney_EventScript_HeatCrashHiker::
# 951 "data/maps/MtChimney/scripts.pory"
	lock
# 952 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 953 "data/maps/MtChimney/scripts.pory"
	checkitem ITEM_TM_HEAT_CRASH
# 954 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtChimney_EventScript_HeatCrashHiker_2
# 961 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_HeatCrashHiker_Text_1, MSGBOX_DEFAULT
MtChimney_EventScript_HeatCrashHiker_1:
# 963 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_HeatCrashHiker_2:
# 955 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_HeatCrashHiker_Text_0, MSGBOX_DEFAULT
# 956 "data/maps/MtChimney/scripts.pory"
	closemessage
# 957 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_TM_HEAT_CRASH
# 958 "data/maps/MtChimney/scripts.pory"
	waitfanfare
	goto MtChimney_EventScript_HeatCrashHiker_1


MtChimney_EventScript_Shiloh::
# 970 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShilohIntro, MtChimney_Text_ShilohDefeat, MtChimney_EventScript_ShilohTryGiveVitamin
# 971 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_TEMP_A, MtChimney_EventScript_ShilohTryGiveVitamin
# 972 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShilohPostBattle, MSGBOX_NPC
# 973 "data/maps/MtChimney/scripts.pory"
	release
	end


MtChimney_EventScript_ShilohTryGiveVitamin::
# 978 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MtChimney_EventScript_ShilohTryGiveVitamin_2
# 982 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_TEMP_A, MtChimney_EventScript_ShilohTryGiveVitamin_5
# 986 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_ShilohTryGiveVitamin_Text_1, MSGBOX_NPC
MtChimney_EventScript_ShilohTryGiveVitamin_4:
# 988 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_PROTEIN
# 989 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_ShilohTryGiveVitamin_9
# 994 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_TEMP_A
# 995 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_ShilohTryGiveVitamin_Text_2, MSGBOX_NPC
MtChimney_EventScript_ShilohTryGiveVitamin_8:
# 997 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_ShilohTryGiveVitamin_2:
# 979 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_ShilohTryGiveVitamin_5:
# 983 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_ShilohTryGiveVitamin_Text_0, MSGBOX_NPC
	goto MtChimney_EventScript_ShilohTryGiveVitamin_4

MtChimney_EventScript_ShilohTryGiveVitamin_9:
# 990 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_PROTEIN
# 991 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_TEMP_A
	goto MtChimney_EventScript_ShilohTryGiveVitamin_8


MtChimney_EventScript_MelissaTryGiveHeartScale::
# 1015 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, MtChimney_EventScript_MelissaTryGiveHeartScale_2
# 1019 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_TEMP_B, MtChimney_EventScript_MelissaTryGiveHeartScale_5
# 1023 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MelissaTryGiveHeartScale_Text_1, MSGBOX_NPC
MtChimney_EventScript_MelissaTryGiveHeartScale_4:
# 1025 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_HEART_SCALE
# 1026 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_MelissaTryGiveHeartScale_9
# 1031 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_TEMP_B
# 1032 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MelissaTryGiveHeartScale_Text_2, MSGBOX_NPC
MtChimney_EventScript_MelissaTryGiveHeartScale_8:
# 1034 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_MelissaTryGiveHeartScale_2:
# 1016 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_MelissaTryGiveHeartScale_5:
# 1020 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MelissaTryGiveHeartScale_Text_0, MSGBOX_NPC
	goto MtChimney_EventScript_MelissaTryGiveHeartScale_4

MtChimney_EventScript_MelissaTryGiveHeartScale_9:
# 1027 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 1028 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_TEMP_B
	goto MtChimney_EventScript_MelissaTryGiveHeartScale_8


MtChimney_EventScript_HeatCrashHiker_Text_0:
# 955 "data/maps/MtChimney/scripts.pory"
	.string "Did you know your Pokémon can smash\n"
	.string "down in a blaze of heat, like molten rock\l"
	.string "from a volcano?$"

MtChimney_EventScript_HeatCrashHiker_Text_1:
# 961 "data/maps/MtChimney/scripts.pory"
	.string "Volcanoes are both mesmerizing and\n"
	.string "terrifying.\p"
	.string "Imagine watching fire rain down from\n"
	.string "the sky...$"

MtChimney_EventScript_ShilohTryGiveVitamin_Text_0:
# 983 "data/maps/MtChimney/scripts.pory"
	.string "I can just tell you're going places.\n"
	.string "I want to invest in you and your team.\p"
	.string "Take this, so I can tell people I helped\n"
	.string "you out before you won the Pokémon\l"
	.string "League.$"

MtChimney_EventScript_ShilohTryGiveVitamin_Text_1:
# 986 "data/maps/MtChimney/scripts.pory"
	.string "Great, you came back!$"

MtChimney_EventScript_ShilohTryGiveVitamin_Text_2:
# 995 "data/maps/MtChimney/scripts.pory"
	.string "What, are you not accepting new\n"
	.string "investors?\p"
	.string "Just make some room in your bag and\n"
	.string "come back here.\p"
	.string "But be quick! This funding offer\n"
	.string "doesn't last long.$"

MtChimney_EventScript_MelissaTryGiveHeartScale_Text_0:
# 1020 "data/maps/MtChimney/scripts.pory"
	.string "It's important to spread beauty\n"
	.string "throughout the world.\p"
	.string "I'll leave a little bit with you, to\n"
	.string "remember me.$"

MtChimney_EventScript_MelissaTryGiveHeartScale_Text_1:
# 1023 "data/maps/MtChimney/scripts.pory"
	.string "Have you learned better manners? It's\n"
	.string "rude to decline such a generous offer.$"

MtChimney_EventScript_MelissaTryGiveHeartScale_Text_2:
# 1032 "data/maps/MtChimney/scripts.pory"
	.string "Hmph, you won't take it? That's very\n"
	.string "ungrateful of you.$"

MtChimney_Text_CourtneyIntro::
# 898 "data/maps/MtChimney/scripts.pory"
	.string "...Who are you?\n"
	.string "Get away from me.\p"
	.string "We seek to revitalize this volcano. The\n"
	.string "machine will awaken the slumbering\l"
	.string "giant.\p"
	.string "It will create more land for humanity\n"
	.string "and Pokémon alike. That is what... what\l"
	.string "we of Team Magma seek.\p"
	.string "You are a hindrance...\n"
	.string "Will you get away from me...?\l"
	.string "No...?\p"
	.string "...Well then...\n"
	.string "Deleting...$"

MtChimney_Text_CourtneyDefeat::
# 902 "data/maps/MtChimney/scripts.pory"
	.string "...Analyzing...$"

MtChimney_Text_CourtneyOutro::
# 906 "data/maps/MtChimney/scripts.pory"
	.string "Unanticipated.\n"
	.string "You. Target lock.\p"
	.string "This will be remembered...$"

MtChimney_Text_CourtneyPostBattle::
# 911 "data/maps/MtChimney/scripts.pory"
	.string "New growth is needed…\n"
	.string "…for the future…$"

MtChimney_Text_MachineWillActivateVolcano::
# 915 "data/maps/MtChimney/scripts.pory"
	.string "If our calculations are correct, there\n"
	.string "is a 63% chance that this machine will\l"
	.string "be able to awaken the power deep within\l"
	.string "the volcano...$"

MtChimney_Text_MaxieIntro::
# 920 "data/maps/MtChimney/scripts.pory"
	.string "I remember you. You are the one who\n"
	.string "defied us at the glacier.\p"
	.string "And your presence here tells me that\n"
	.string "you have defeated Courtney as well.\p"
	.string "You show true promise.\n"
	.string "Fine. I will attempt to educate you.\p"
	.string "12 years ago, during my research into\n"
	.string "Hoenn's development, I discovered an\l"
	.string "existential risk.\p"
	.string "Population growth could soon outpace\n"
	.string "the land's ability to support us.\p"
	.string "Housing, crop yields, infrastructure -\n"
	.string "all would be strained to the breaking\l"
	.string "point.\p"
	.string "So, I spearheaded land reclamation\n"
	.string "efforts to expand the space available\l"
	.string "to us, and I created Team Magma to\l"
	.string "achieve these goals.\p"
	.string "But it was not enough.\p"
	.string "Even if all of our modest efforts\n"
	.string "succeeded, I fear it would merely delay\l"
	.string "the inevitable.\p"
	.string "And along the way, short-sighted fools\n"
	.string "such as those in Team Aqua continue to\l"
	.string "delay and undermine us.\p"
	.string "But recently, I discovered there was a\n"
	.string "power capable of creating new lands on\l"
	.string "a grand scale, expediently, and\l"
	.string "irreversably.\p"
	.string "It has become clear to me that this\n"
	.string "represents Hoenn's salvation. And\l"
	.string "though it now slumbers, deep\l"
	.string "underground, we believe that it can be\l"
	.string "awakened.\l"
	.string "That it must be awakened.\p"
	.string "I should not say too much…\n"
	.string "That is enough for today's lesson.\l"
	.string "I believe it is time we begin.\p"
	.string "Any fool standing in the way of\n"
	.string "progress must be met without mercy.\p"
	.string "I will bury you by my own hand!$"

MtChimney_Text_MaxieDefeat::
# 932 "data/maps/MtChimney/scripts.pory"
	.string "You are… quite capable…\n"
	.string "I fell behind, but only by an inch…$"

MtChimney_Text_MaxieYouHaventSeenLastOfMagma::
# 936 "data/maps/MtChimney/scripts.pory"
	.string "...\n"
	.string "...\p"
	.string "Well. This is not yet time for us to\n"
	.string "unleash our full strength.\p"
	.string "If our machine was capable of\n"
	.string "awakening the ancient being beneath\l"
	.string "the volcano, we would have felt it by\l"
	.string "now.\p"
	.string "So there is no purpose to continued\n"
	.string "squabbling with you.\p"
	.string "I must excuse myself. But if I\n"
	.string "encounter you again, you will face the\l"
	.string "full might of Team Magma and witness\l"
	.string "the true brilliance of Maxie!$"

MtChimney_Text_ArchieGiveFlash::
# 941 "data/maps/MtChimney/scripts.pory"
	.string "Take this, as a thank you for your help\n"
	.string "today.\p"
	.string "It will help if you need to chase Team\n"
	.string "Magma underground.$"

MtChimney_Text_ArchieMeetAgain::
# 945 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"

MtChimney_Text_ShilohIntro::
# 1001 "data/maps/MtChimney/scripts.pory"
	.string "My family has a vacation home in\n"
	.string "Lavaridge.\p"
	.string "The Hot Spring is luxurious, but I love\n"
	.string "the excitement of being up here at Mt.\l"
	.string "Chimney.$"

MtChimney_Text_ShilohDefeat::
# 1005 "data/maps/MtChimney/scripts.pory"
	.string "You've ruined my vacation!$"

MtChimney_Text_ShilohPostBattle::
# 1009 "data/maps/MtChimney/scripts.pory"
	.string "I'm just trying to enjoy the rest of my\n"
	.string "vacation.$"
