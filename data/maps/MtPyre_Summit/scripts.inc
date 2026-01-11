# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
//.set LOCALID_MT_PYRE_SUMMIT_ARCHIE, 2
# 3 "data/maps/MtPyre_Summit/scripts.pory"
//.set LOCALID_MT_PYRE_SUMMIT_OLD_LADY, 3
# 4 "data/maps/MtPyre_Summit/scripts.pory"
//.set LOCALID_MT_PYRE_SUMMIT_GRUNT_1, 4
# 5 "data/maps/MtPyre_Summit/scripts.pory"
//.set LOCALID_MT_PYRE_SUMMIT_GRUNT_2, 5
# 6 "data/maps/MtPyre_Summit/scripts.pory"
//.set LOCALID_MT_PYRE_SUMMIT_GRUNT_3, 6
# 7 "data/maps/MtPyre_Summit/scripts.pory"
//.set LOCALID_MT_PYRE_SUMMIT_GRUNT_4, 7
# 8 "data/maps/MtPyre_Summit/scripts.pory"
//.set LOCALID_MT_PYRE_SUMMIT_MAXIE, 8
# 9 "data/maps/MtPyre_Summit/scripts.pory"
//.set LOCALID_MT_PYRE_SUMMIT_STEVEN, 9
# 10 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MT_PYRE_SUMMIT_ARCHIE_MON, 10
# 11 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MT_PYRE_SUMMIT_MAXIE_MON, 11
# 12 "data/maps/MtPyre_Summit/scripts.pory"

# 13 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 14 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 15 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 16 "data/maps/MtPyre_Summit/scripts.pory"

# 17 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 18 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 19 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 20 "data/maps/MtPyre_Summit/scripts.pory"

# 21 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 22 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_MAXIE, 23, 6
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_ARCHIE, 22, 6
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 25 "data/maps/MtPyre_Summit/scripts.pory"

# 26 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 27 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 28 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 29 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 30 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 31 "data/maps/MtPyre_Summit/scripts.pory"

# 32 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 34 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 37 "data/maps/MtPyre_Summit/scripts.pory"

# 38 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 42 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 43 "data/maps/MtPyre_Summit/scripts.pory"

# 44 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_1
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_2
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_3
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_4
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE_MAXIE
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNTS_BLOCKING_ENTRANCE
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 78 "data/maps/MtPyre_Summit/scripts.pory"

# 79 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 83 "data/maps/MtPyre_Summit/scripts.pory"

# 84 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 85 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 87 "data/maps/MtPyre_Summit/scripts.pory"

# 88 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 90 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 92 "data/maps/MtPyre_Summit/scripts.pory"

# 93 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 99 "data/maps/MtPyre_Summit/scripts.pory"

# 100 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 104 "data/maps/MtPyre_Summit/scripts.pory"

# 105 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 111 "data/maps/MtPyre_Summit/scripts.pory"

# 112 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 117 "data/maps/MtPyre_Summit/scripts.pory"

# 118 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 121 "data/maps/MtPyre_Summit/scripts.pory"

# 122 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 127 "data/maps/MtPyre_Summit/scripts.pory"

# 128 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 132 "data/maps/MtPyre_Summit/scripts.pory"

# 133 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 135 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 137 "data/maps/MtPyre_Summit/scripts.pory"

# 138 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 147 "data/maps/MtPyre_Summit/scripts.pory"

# 148 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 154 "data/maps/MtPyre_Summit/scripts.pory"

# 155 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 158 "data/maps/MtPyre_Summit/scripts.pory"

# 159 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 162 "data/maps/MtPyre_Summit/scripts.pory"

# 163 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 166 "data/maps/MtPyre_Summit/scripts.pory"

# 167 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 176 "data/maps/MtPyre_Summit/scripts.pory"

# 177 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 182 "data/maps/MtPyre_Summit/scripts.pory"

# 183 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 187 "data/maps/MtPyre_Summit/scripts.pory"

# 188 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 192 "data/maps/MtPyre_Summit/scripts.pory"

# 193 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 198 "data/maps/MtPyre_Summit/scripts.pory"

# 199 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 204 "data/maps/MtPyre_Summit/scripts.pory"

# 205 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 210 "data/maps/MtPyre_Summit/scripts.pory"

# 211 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_ExclamationMark
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_Delay48
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 241 "data/maps/MtPyre_Summit/scripts.pory"

# 242 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 243 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 248 "data/maps/MtPyre_Summit/scripts.pory"

# 249 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 255 "data/maps/MtPyre_Summit/scripts.pory"

# 256 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 262 "data/maps/MtPyre_Summit/scripts.pory"

# 263 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 269 "data/maps/MtPyre_Summit/scripts.pory"

# 270 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 276 "data/maps/MtPyre_Summit/scripts.pory"

# 277 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 283 "data/maps/MtPyre_Summit/scripts.pory"

# 284 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 287 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 291 "data/maps/MtPyre_Summit/scripts.pory"

# 292 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 294 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 299 "data/maps/MtPyre_Summit/scripts.pory"

# 300 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 307 "data/maps/MtPyre_Summit/scripts.pory"

# 308 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 313 "data/maps/MtPyre_Summit/scripts.pory"

# 314 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 319 "data/maps/MtPyre_Summit/scripts.pory"

# 320 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 325 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 328 "data/maps/MtPyre_Summit/scripts.pory"

# 329 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 337 "data/maps/MtPyre_Summit/scripts.pory"

# 338 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 346 "data/maps/MtPyre_Summit/scripts.pory"

# 347 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 355 "data/maps/MtPyre_Summit/scripts.pory"

# 356 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 363 "data/maps/MtPyre_Summit/scripts.pory"

# 364 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 370 "data/maps/MtPyre_Summit/scripts.pory"

# 371 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 372 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 373 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 375 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 377 "data/maps/MtPyre_Summit/scripts.pory"

# 378 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 382 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 384 "data/maps/MtPyre_Summit/scripts.pory"

# 385 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 389 "data/maps/MtPyre_Summit/scripts.pory"

# 390 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 394 "data/maps/MtPyre_Summit/scripts.pory"

# 395 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 402 "data/maps/MtPyre_Summit/scripts.pory"

# 403 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 409 "data/maps/MtPyre_Summit/scripts.pory"

# 410 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 416 "data/maps/MtPyre_Summit/scripts.pory"

# 417 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 421 "data/maps/MtPyre_Summit/scripts.pory"

# 422 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 426 "data/maps/MtPyre_Summit/scripts.pory"

# 427 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 431 "data/maps/MtPyre_Summit/scripts.pory"

# 432 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 433 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 434 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 436 "data/maps/MtPyre_Summit/scripts.pory"

# 437 "data/maps/MtPyre_Summit/scripts.pory"
/*
# 438 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those TEAM MAGMA goons got\n"
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 442 "data/maps/MtPyre_Summit/scripts.pory"

# 443 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the MAGMAS\n"
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 446 "data/maps/MtPyre_Summit/scripts.pory"

# 447 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 448 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 450 "data/maps/MtPyre_Summit/scripts.pory"
*/
# 451 "data/maps/MtPyre_Summit/scripts.pory"

# 452 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 456 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy TEAM MAGMA.\p"
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 459 "data/maps/MtPyre_Summit/scripts.pory"

# 460 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	.string "TEAM MAGMA first…$"
# 463 "data/maps/MtPyre_Summit/scripts.pory"

# 464 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 467 "data/maps/MtPyre_Summit/scripts.pory"

# 468 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at MT. CHIMNEY.\p"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either TEAM,\n"
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 473 "data/maps/MtPyre_Summit/scripts.pory"

# 474 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be TEAM MAGMA…$"
# 477 "data/maps/MtPyre_Summit/scripts.pory"

# 478 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BOSS should have snatched what\n"
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 483 "data/maps/MtPyre_Summit/scripts.pory"

# 484 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join Team Aqua,\l"
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our Team Magma!$"
# 490 "data/maps/MtPyre_Summit/scripts.pory"

# 491 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join Team Magma that\n"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 494 "data/maps/MtPyre_Summit/scripts.pory"

# 495 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 498 "data/maps/MtPyre_Summit/scripts.pory"

# 499 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "ARCHIE: TEAM MAGMA's MAXIE got ahead\n"
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of us, but we also got what we wanted.\p"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The RED ORB preserved at MT. PYRE…\n"
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, ARCHIE, now have it in my possession!\p"
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\p"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, TEAM!\n"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 508 "data/maps/MtPyre_Summit/scripts.pory"

# 509 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 528 "data/maps/MtPyre_Summit/scripts.pory"

# 529 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 534 "data/maps/MtPyre_Summit/scripts.pory"

# 535 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 548 "data/maps/MtPyre_Summit/scripts.pory"

# 549 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 553 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 554 "data/maps/MtPyre_Summit/scripts.pory"

# 555 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 559 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 565 "data/maps/MtPyre_Summit/scripts.pory"

# 566 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 570 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 576 "data/maps/MtPyre_Summit/scripts.pory"

# 577 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 591 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 596 "data/maps/MtPyre_Summit/scripts.pory"

# 597 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 598 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 600 "data/maps/MtPyre_Summit/scripts.pory"

# 601 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 605 "data/maps/MtPyre_Summit/scripts.pory"

# 606 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 610 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 611 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 613 "data/maps/MtPyre_Summit/scripts.pory"

# 614 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 616 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 617 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 627 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 628 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 629 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"

MtPyre_Summit_EventScript_LeftTrigger::
# 638 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_4, 1
# 639 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_LeftTrigger_1
	return

MtPyre_Summit_EventScript_LeftTrigger_1:
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceLeft
# 641 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_StevenMultiIntro
	return


MtPyre_Summit_EventScript_RightTrigger::
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_4, 2
# 653 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_RightTrigger_1
	return

MtPyre_Summit_EventScript_RightTrigger_1:
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceRight
# 655 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 656 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 658 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_StevenMultiIntro
	return


MtPyre_Summit_EventScript_StevenTrigger::
# 666 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 667 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_Steven
# 668 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 669 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_4, 0
# 670 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end


MtPyre_Summit_EventScript_MultiBattlePositioning1::
# 675 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUpOneStep
# 676 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_WalkUpOneStep
# 677 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	return


MtPyre_Summit_EventScript_MultiBattlePositioning2::
# 683 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE_MON
# 684 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_TEMP_4
# 685 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_MultiBattlePositioning2_3
# 687 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_MultiBattlePositioning2_4
# 689 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_MultiBattlePositioning2_5
	return

MtPyre_Summit_EventScript_MultiBattlePositioning2_1:
# 694 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 695 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_FaceDown
# 696 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	return

MtPyre_Summit_EventScript_MultiBattlePositioning2_3:
# 686 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieMovesTwoLeft
	goto MtPyre_Summit_EventScript_MultiBattlePositioning2_1

MtPyre_Summit_EventScript_MultiBattlePositioning2_4:
# 688 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieMovesThreeLeft
	goto MtPyre_Summit_EventScript_MultiBattlePositioning2_1

MtPyre_Summit_EventScript_MultiBattlePositioning2_5:
# 690 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieMovesTwoLeft
	goto MtPyre_Summit_EventScript_MultiBattlePositioning2_1


MtPyre_Summit_EventScript_MultiBattlePositioning3::
# 701 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE_MON
# 702 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_TEMP_4
# 703 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_MultiBattlePositioning3_3
# 705 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_MultiBattlePositioning3_4
# 707 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_MultiBattlePositioning3_5
	return

MtPyre_Summit_EventScript_MultiBattlePositioning3_1:
# 712 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	return

MtPyre_Summit_EventScript_MultiBattlePositioning3_3:
# 704 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieMovesThreeRight
	goto MtPyre_Summit_EventScript_MultiBattlePositioning3_1

MtPyre_Summit_EventScript_MultiBattlePositioning3_4:
# 706 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieMovesTwoRight
	goto MtPyre_Summit_EventScript_MultiBattlePositioning3_1

MtPyre_Summit_EventScript_MultiBattlePositioning3_5:
# 708 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieMovesThreeRight
	goto MtPyre_Summit_EventScript_MultiBattlePositioning3_1


MtPyre_Summit_EventScript_MultiBattlePositioning4::
# 722 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq MtPyre_Summit_EventScript_MultiBattlePositioning4_2
MtPyre_Summit_EventScript_MultiBattlePositioning4_1:
# 727 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_FaceDown
# 728 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	return

MtPyre_Summit_EventScript_MultiBattlePositioning4_2:
# 723 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, MtPyre_Summit_Movement_StevenMovesToMaxie
# 724 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUpOneStep
# 725 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	goto MtPyre_Summit_EventScript_MultiBattlePositioning4_1


# 733 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieMovesTwoRight:
# 734 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 734 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
	step_end

# 738 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieMovesTwoLeft:
# 739 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 739 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
	step_end

# 743 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieMovesThreeRight:
# 744 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 744 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 744 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
	step_end

# 748 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieMovesThreeLeft:
# 749 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 749 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 749 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
	step_end

# 753 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_StevenMovesToMaxie:
# 754 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 755 "data/maps/MtPyre_Summit/scripts.pory"
	face_up
	step_end

MtPyre_Summit_EventScript_StevenMultiIntro::
# 760 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 761 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_ExclamationMark
# 762 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 763 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenNeedHelp, MSGBOX_YESNO
# 764 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MtPyre_Summit_EventScript_StevenMultiIntro_1
# 768 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenHurryBack, MSGBOX_DEFAULT
# 769 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 770 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 771 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceOriginalDirection
# 772 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 773 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 774 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	return

MtPyre_Summit_EventScript_StevenMultiIntro_1:
# 765 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MtPyreMultiBattle
	return


MtPyre_Summit_EventScript_Steven::
# 780 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 781 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 782 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_Steven_2
# 786 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenGoToHideouts, MSGBOX_NPC
# 787 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
MtPyre_Summit_EventScript_Steven_1:
# 789 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_Steven_2:
# 783 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_StevenMultiIntro
	goto MtPyre_Summit_EventScript_Steven_1


MtPyre_Summit_EventScript_MtPyreMultiBattle::
# 794 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MultiBattlePositioning1
# 795 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenStopThis, MSGBOX_DEFAULT
# 796 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 797 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MultiBattlePositioning2
# 798 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieBeforeBattle, MSGBOX_DEFAULT
# 799 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 800 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MultiBattlePositioning3
# 801 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieBeforeBattle, MSGBOX_DEFAULT
# 802 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 803 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MultiBattlePositioning4
# 804 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 805 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 806 "data/maps/MtPyre_Summit/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_MAXIE_MT_PYRE, MtPyre_Summit_Text_MaxieDefeated, TRAINER_ARCHIE_MT_PYRE, MtPyre_Summit_Text_ArchieDefeated, PARTNER_STEVEN
# 807 "data/maps/MtPyre_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 808 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Summit_EventScript_MtPyreMultiBattle_1
	return

MtPyre_Summit_EventScript_MtPyreMultiBattle_1:
# 809 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MtPyreVictory
# 810 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end


MtPyre_Summit_EventScript_MtPyreVictory::
# 816 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 817 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieAfterBattle, MSGBOX_DEFAULT
# 818 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 819 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_FaceRight
# 820 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 821 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieAfterBattle, MSGBOX_DEFAULT
# 822 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 823 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_FaceLeft
# 824 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 825 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieResponse, MSGBOX_DEFAULT
# 826 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 827 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 828 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 829 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 830 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE
# 831 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE_MON
# 832 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE_MON
# 834 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 835 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE_MAXIE
# 836 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 4
# 837 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 5
# 838 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 6
# 839 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 7
# 840 "data/maps/MtPyre_Summit/scripts.pory"
	delay 40
# 841 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 842 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 843 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_LEVEL_CAP, 65
# 844 "data/maps/MtPyre_Summit/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 845 "data/maps/MtPyre_Summit/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 846 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 847 "data/maps/MtPyre_Summit/scripts.pory"
	delay 40
# 849 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_TEMP_4
# 850 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_MtPyreVictory_3
# 851 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_MtPyreVictory_3
# 854 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_MtPyreVictory_4
	return

MtPyre_Summit_EventScript_MtPyreVictory_1:
# 860 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 861 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenPostBattle, MSGBOX_DEFAULT
# 862 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 863 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 864 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 865 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 866 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNTS_BLOCKING_ENTRANCE
# 867 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_MtPyreVictory_Text_0
# 868 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 869 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_MtPyreVictory_3:
# 852 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceLeft
# 853 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MtPyre_Summit_EventScript_MtPyreVictory_1

MtPyre_Summit_EventScript_MtPyreVictory_4:
# 855 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceRight
# 856 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MtPyre_Summit_EventScript_MtPyreVictory_1


Test_EventScript_TestCall::
# 874 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 875 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_7, 1
# 876 "data/maps/MtPyre_Summit/scripts.pory"
	pokenavcall MagmaHideout_Text_StevenCall
# 877 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 878 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	return


MtPyre_Summit_EventScript_MtPyreVictory_Text_0:
# 867 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: We need to hurry. Good luck.$"

MtPyre_Summit_Text_StevenNeedHelp::
# 884 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: {PLAYER}, I'm so glad you're\n"
	.string "here!\p"
	.string "Archie and Maxie are attempting to\n"
	.string "steal two powerful sacred artifacts\l"
	.string "from Mt. Pyre.\p"
	.string "We need to stop them before they can\n"
	.string "cause any harm to this hallowed place\l"
	.string "or the rest of Hoenn.\p"
	.string "The good news is, they're just as\n"
	.string "focused on defeating each other as\l"
	.string "they will be on us.\p"
	.string "However, this situation is already\n"
	.string "unstable, so we'll need to be careful\l"
	.string "how many Pokémon we use in battle.\p"
	.string "Are you ready to help me stop them?$"

MtPyre_Summit_Text_StevenHurryBack::
# 888 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: Things are too precarious to\n"
	.string "rush in unprepared.\p"
	.string "Gather your strength and hurry back as\n"
	.string "soon as you're ready.$"

MtPyre_Summit_Text_StevenStopThis::
# 892 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: Maxie, Archie! Enough of this\n"
	.string "madness!\p"
	.string "This is a sacred place you are defiling.\p"
	.string "These Orbs belong here, to preserve\n"
	.string "harmony, not to be taken as\l"
	.string "instruments for your foolish ambitions.\p"
	.string "We will not let you do this.$"

MtPyre_Summit_Text_MaxieBeforeBattle::
# 896 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie: For all the good work your father\n"
	.string "has done with the Devon Corp, do you\l"
	.string "still not see, Steven?\p"
	.string "Hoenn needs more resources, more land\n"
	.string "to cultivate and expand.\p"
	.string "The power of the Red and Blue Orbs will\n"
	.string "allow us to awaken and control the\l"
	.string "continent Pokémon, and we can provide\l"
	.string "everything Hoenn needs.\p"
	.string "This is infinitely more important than\n"
	.string "some sentimental burial site.$"

MtPyre_Summit_Text_ArchieBeforeBattle::
# 900 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: We won't allow that. Team Aqua\n"
	.string "is taking possession of the Orbs, and\l"
	.string "we will use them to definitively stop\l"
	.string "your destructive plans!$"

MtPyre_Summit_Text_MaxieDefeated::
# 904 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie: I allowed Archie to distract me…\n"
	.string "A perennial thorn in my side.$"

MtPyre_Summit_Text_ArchieDefeated::
# 908 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Why won't you two pick a side\n"
	.string "already?$"

MtPyre_Summit_Text_MaxieAfterBattle::
# 912 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie: During our battle, I managed to\n"
	.string "get ahold of the Red Orb. One will have\l"
	.string "to be sufficient.$"

MtPyre_Summit_Text_ArchieAfterBattle::
# 916 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Then I'll be keeping this Blue\n"
	.string "Orb as our insurance against you.$"

MtPyre_Summit_Text_MaxieResponse::
# 920 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie: ...\p"
	.string "You are too far behind us, anyway. It is\n"
	.string "no matter.$"

MtPyre_Summit_Text_StevenPostBattle::
# 924 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: Well… we kept either of them\n"
	.string "from taking both Orbs, but they each\l"
	.string "managed to escape with one.\p"
	.string "{PLAYER}, this is very worrying. If\n"
	.string "they go ahead with their plans to\l"
	.string "awaken these ancient Pokémon, they will\l"
	.string "unleash forces they cannot possibly\l"
	.string "control.\p"
	.string "The results would be cataclysmic.\p"
	.string "You should try to infiltrate the Team\n"
	.string "Magma and Team Aqua hideouts, and see\l"
	.string "if you can stop them before that\l"
	.string "happens.\p"
	.string "I'm going to investigate reports of\n"
	.string "Team Aqua activity in Slateport to see\l"
	.string "if we can figure out their next moves. I\l"
	.string "also want to go to the Weather\l"
	.string "Institute to better understand what\l"
	.string "we can do if they do manage to awaken\l"
	.string "the ancient Pokémon.\p"
	.string "Team Aqua's Hideout is in Lilycove,\n"
	.string "accessible by Surfing. Team Magma's\l"
	.string "Hideout is in the Jagged Pass of Mt.\l"
	.string "Chimney - you'll need this to get in.$"

MtPyre_Summit_Text_StevenGoToHideouts::
# 927 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: You should try to infiltrate\n"
	.string "the Team Magma and Team Aqua hideouts.\p"
	.string "Team Magma's Hideout is in the Jagged\n"
	.string "Pass, South of Mt. Chimney. Team Aqua's\l"
	.string "Hideout is East of Lilycove, accessible\l"
	.string "by Surfing.$"

MagmaHideout_Text_StevenCall::
# 931 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: We've been trying to reach you\n"
	.string "about your car's extended warranty.\l"
	.string "Steven: We've been trying to reach you\l"
	.string "about your car's extended warranty.$"

MtPyre_Summit_Text_Grunt1Intro::
# 935 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We got here first, but then Team Aqua\n"
	.string "showed up and started getting in our\l"
	.string "way!$"

MtPyre_Summit_Text_Grunt1Defeat::
# 939 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Who's side are you on, anyway?$"

MtPyre_Summit_Text_Grunt1PostBattle::
# 943 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We did all this work, and then Team Aqua\n"
	.string "is stealing our ideas, as usual.$"
