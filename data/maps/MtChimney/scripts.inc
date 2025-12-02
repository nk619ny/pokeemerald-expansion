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
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
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
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 514 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 515 "data/maps/MtChimney/scripts.pory"
	end
# 516 "data/maps/MtChimney/scripts.pory"

# 517 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 518 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 519 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 520 "data/maps/MtChimney/scripts.pory"
	end
# 521 "data/maps/MtChimney/scripts.pory"

# 522 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 523 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 524 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 525 "data/maps/MtChimney/scripts.pory"
	end
# 526 "data/maps/MtChimney/scripts.pory"

# 527 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 528 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 529 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 530 "data/maps/MtChimney/scripts.pory"
	end
# 531 "data/maps/MtChimney/scripts.pory"

# 532 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 533 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 534 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 535 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 536 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 537 "data/maps/MtChimney/scripts.pory"
	release
# 538 "data/maps/MtChimney/scripts.pory"
	end
# 539 "data/maps/MtChimney/scripts.pory"

# 540 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 541 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 542 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 543 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 544 "data/maps/MtChimney/scripts.pory"
	//register_matchcall TRAINER_SAWYER_1
# 545 "data/maps/MtChimney/scripts.pory"
	release
# 546 "data/maps/MtChimney/scripts.pory"
	end
# 547 "data/maps/MtChimney/scripts.pory"

# 548 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 549 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 550 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 551 "data/maps/MtChimney/scripts.pory"
	end
# 552 "data/maps/MtChimney/scripts.pory"

# 553 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 554 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 561 "data/maps/MtChimney/scripts.pory"

# 562 "data/maps/MtChimney/scripts.pory"
/* MtChimney_Text_MaxieIntro:
# 563 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 583 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 584 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 588 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 589 "data/maps/MtChimney/scripts.pory"

# 590 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 591 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 593 "data/maps/MtChimney/scripts.pory"

# 594 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 595 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 600 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$" */
# 602 "data/maps/MtChimney/scripts.pory"

# 603 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 604 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 605 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 608 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 609 "data/maps/MtChimney/scripts.pory"

# 610 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 611 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 612 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 613 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 614 "data/maps/MtChimney/scripts.pory"

# 615 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 616 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 617 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 618 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 619 "data/maps/MtChimney/scripts.pory"

# 620 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 621 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 624 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 625 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 626 "data/maps/MtChimney/scripts.pory"

# 627 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 628 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 629 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 630 "data/maps/MtChimney/scripts.pory"

# 631 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 632 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 634 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 635 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 636 "data/maps/MtChimney/scripts.pory"

# 637 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 638 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 639 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 640 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 641 "data/maps/MtChimney/scripts.pory"

# 642 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 643 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 646 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 647 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 648 "data/maps/MtChimney/scripts.pory"

# 649 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 650 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 651 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 652 "data/maps/MtChimney/scripts.pory"

# 653 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 654 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 655 "data/maps/MtChimney/scripts.pory"

# 656 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 657 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 659 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 660 "data/maps/MtChimney/scripts.pory"

# 661 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 662 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 666 "data/maps/MtChimney/scripts.pory"

# 667 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 668 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 670 "data/maps/MtChimney/scripts.pory"

# 671 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 672 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 673 "data/maps/MtChimney/scripts.pory"

# 674 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 675 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 676 "data/maps/MtChimney/scripts.pory"

# 677 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 678 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "They're using a machine to agitate\n"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "the volcano!\p"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 686 "data/maps/MtChimney/scripts.pory"

# 687 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 688 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 693 "data/maps/MtChimney/scripts.pory"

# 694 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 695 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.$"
# 704 "data/maps/MtChimney/scripts.pory"

# 705 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 706 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 707 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 708 "data/maps/MtChimney/scripts.pory"

# 709 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 710 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 711 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 712 "data/maps/MtChimney/scripts.pory"

# 713 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 714 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 716 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 718 "data/maps/MtChimney/scripts.pory"

# 719 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 720 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 721 "data/maps/MtChimney/scripts.pory"

# 722 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 723 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 724 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 725 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 726 "data/maps/MtChimney/scripts.pory"

# 727 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 728 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 729 "data/maps/MtChimney/scripts.pory"

# 730 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 735 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 736 "data/maps/MtChimney/scripts.pory"

# 737 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 738 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 739 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 740 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 741 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 742 "data/maps/MtChimney/scripts.pory"

# 743 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 744 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 746 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 747 "data/maps/MtChimney/scripts.pory"

# 748 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 749 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 750 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 753 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 754 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 755 "data/maps/MtChimney/scripts.pory"

# 756 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 757 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 758 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 759 "data/maps/MtChimney/scripts.pory"

# 760 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 761 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 762 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 763 "data/maps/MtChimney/scripts.pory"

# 764 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 765 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 766 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 767 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 768 "data/maps/MtChimney/scripts.pory"

# 769 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 771 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 772 "data/maps/MtChimney/scripts.pory"

# 773 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 774 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 775 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 776 "data/maps/MtChimney/scripts.pory"

# 777 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 778 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 782 "data/maps/MtChimney/scripts.pory"

# 783 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 784 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 785 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 787 "data/maps/MtChimney/scripts.pory"

# 788 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 789 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 790 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 791 "data/maps/MtChimney/scripts.pory"

# 792 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 793 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 795 "data/maps/MtChimney/scripts.pory"

# 796 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 797 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 799 "data/maps/MtChimney/scripts.pory"

# 800 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 801 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 802 "data/maps/MtChimney/scripts.pory"

# 803 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 804 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 806 "data/maps/MtChimney/scripts.pory"

# 807 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 808 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 810 "data/maps/MtChimney/scripts.pory"

# 811 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 812 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 814 "data/maps/MtChimney/scripts.pory"

# 815 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 816 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 821 "data/maps/MtChimney/scripts.pory"

# 822 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 823 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 826 "data/maps/MtChimney/scripts.pory"

# 827 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 828 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 829 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 830 "data/maps/MtChimney/scripts.pory"

# 831 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 832 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 835 "data/maps/MtChimney/scripts.pory"

# 836 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 837 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 842 "data/maps/MtChimney/scripts.pory"

# 843 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 844 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 845 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 846 "data/maps/MtChimney/scripts.pory"

# 847 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 848 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 850 "data/maps/MtChimney/scripts.pory"

# 851 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 852 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 853 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 854 "data/maps/MtChimney/scripts.pory"

# 855 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 856 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 857 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 858 "data/maps/MtChimney/scripts.pory"

# 859 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 860 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 861 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"

MtChimney_EventScript_SetupMagma::
# 866 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 867 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 868 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
	return


MtChimney_EventScript_MagmaPoochyena::
# 873 "data/maps/MtChimney/scripts.pory"
	lock
# 874 "data/maps/MtChimney/scripts.pory"
	msgbox SlateportFarm_PokemonBattlingText
# 875 "data/maps/MtChimney/scripts.pory"
	waitmessage
# 876 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_EventScript_AquaPoochyena::
# 881 "data/maps/MtChimney/scripts.pory"
	lock
# 882 "data/maps/MtChimney/scripts.pory"
	msgbox SlateportFarm_PokemonBattlingText
# 883 "data/maps/MtChimney/scripts.pory"
	waitmessage
# 884 "data/maps/MtChimney/scripts.pory"
	releaseall
	end


MtChimney_EventScript_CourtneyOutro::
# 889 "data/maps/MtChimney/scripts.pory"
	lock
# 890 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyOutro, MSGBOX_DEFAULT
# 891 "data/maps/MtChimney/scripts.pory"
	release
	end


MtChimney_EventScript_HeatCrashHiker::
# 948 "data/maps/MtChimney/scripts.pory"
	lock
# 949 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 950 "data/maps/MtChimney/scripts.pory"
	checkitem ITEM_TM_HEAT_CRASH
# 951 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtChimney_EventScript_HeatCrashHiker_2
# 958 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_HeatCrashHiker_Text_1, MSGBOX_DEFAULT
MtChimney_EventScript_HeatCrashHiker_1:
# 960 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_HeatCrashHiker_2:
# 952 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_HeatCrashHiker_Text_0, MSGBOX_DEFAULT
# 953 "data/maps/MtChimney/scripts.pory"
	closemessage
# 954 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_TM_HEAT_CRASH
# 955 "data/maps/MtChimney/scripts.pory"
	waitfanfare
	goto MtChimney_EventScript_HeatCrashHiker_1


MtChimney_EventScript_HeatCrashHiker_Text_0:
# 952 "data/maps/MtChimney/scripts.pory"
	.string "Did you know your Pokémon can smash\n"
	.string "down in a blaze of heat, like molten rock\l"
	.string "from a volcano?$"

MtChimney_EventScript_HeatCrashHiker_Text_1:
# 958 "data/maps/MtChimney/scripts.pory"
	.string "Volcanoes are both mesmerizing and\n"
	.string "terrifying.\p"
	.string "Imagine watching fire rain down from\n"
	.string "the sky...$"

MtChimney_Text_CourtneyIntro::
# 895 "data/maps/MtChimney/scripts.pory"
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
# 899 "data/maps/MtChimney/scripts.pory"
	.string "...Analyzing...$"

MtChimney_Text_CourtneyOutro::
# 903 "data/maps/MtChimney/scripts.pory"
	.string "Unanticipated.\n"
	.string "You. Target lock.\p"
	.string "This will be remembered...$"

MtChimney_Text_CourtneyPostBattle::
# 908 "data/maps/MtChimney/scripts.pory"
	.string "New growth is needed…\n"
	.string "…for the future…$"

MtChimney_Text_MachineWillActivateVolcano::
# 912 "data/maps/MtChimney/scripts.pory"
	.string "If our calculations are correct, there\n"
	.string "is a 63% chance that this machine will\l"
	.string "be able to awaken the power deep within\l"
	.string "the volcano...$"

MtChimney_Text_MaxieIntro::
# 917 "data/maps/MtChimney/scripts.pory"
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
# 929 "data/maps/MtChimney/scripts.pory"
	.string "You are… quite capable…\n"
	.string "I fell behind, but only by an inch…$"

MtChimney_Text_MaxieYouHaventSeenLastOfMagma::
# 933 "data/maps/MtChimney/scripts.pory"
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
# 938 "data/maps/MtChimney/scripts.pory"
	.string "Take this, as a thank you for your help\n"
	.string "today.\p"
	.string "It will help if you need to chase Team\n"
	.string "Magma underground.$"

MtChimney_Text_ArchieMeetAgain::
# 942 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
