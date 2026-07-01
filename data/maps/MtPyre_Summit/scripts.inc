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
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtPyre_Summit_OnFrame
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 17 "data/maps/MtPyre_Summit/scripts.pory"

# 18 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 19 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 20 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 21 "data/maps/MtPyre_Summit/scripts.pory"

# 22 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnFrame:
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	map_script_2 VAR_TEMP_6, 0, MtPyre_Summit_Script_CheckRemoveShellyCourtneyPokemon
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	.2byte 0
# 25 "data/maps/MtPyre_Summit/scripts.pory"

# 26 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 27 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_MAXIE, 23, 6
# 28 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_ARCHIE, 22, 6
# 29 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 30 "data/maps/MtPyre_Summit/scripts.pory"

# 31 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 32 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 34 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 36 "data/maps/MtPyre_Summit/scripts.pory"

# 37 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 42 "data/maps/MtPyre_Summit/scripts.pory"

# 43 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 48 "data/maps/MtPyre_Summit/scripts.pory"

# 49 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_1
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_2
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_3
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_4
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE_MAXIE
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNTS_BLOCKING_ENTRANCE
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 83 "data/maps/MtPyre_Summit/scripts.pory"

# 84 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 87 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 88 "data/maps/MtPyre_Summit/scripts.pory"

# 89 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 90 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 92 "data/maps/MtPyre_Summit/scripts.pory"

# 93 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 97 "data/maps/MtPyre_Summit/scripts.pory"

# 98 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 99 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 104 "data/maps/MtPyre_Summit/scripts.pory"

# 105 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 109 "data/maps/MtPyre_Summit/scripts.pory"

# 110 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 116 "data/maps/MtPyre_Summit/scripts.pory"

# 117 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 122 "data/maps/MtPyre_Summit/scripts.pory"

# 123 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 126 "data/maps/MtPyre_Summit/scripts.pory"

# 127 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 132 "data/maps/MtPyre_Summit/scripts.pory"

# 133 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 135 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 137 "data/maps/MtPyre_Summit/scripts.pory"

# 138 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 142 "data/maps/MtPyre_Summit/scripts.pory"

# 143 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 152 "data/maps/MtPyre_Summit/scripts.pory"

# 153 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 159 "data/maps/MtPyre_Summit/scripts.pory"

# 160 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 163 "data/maps/MtPyre_Summit/scripts.pory"

# 164 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 167 "data/maps/MtPyre_Summit/scripts.pory"

# 168 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 171 "data/maps/MtPyre_Summit/scripts.pory"

# 172 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 181 "data/maps/MtPyre_Summit/scripts.pory"

# 182 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 187 "data/maps/MtPyre_Summit/scripts.pory"

# 188 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 192 "data/maps/MtPyre_Summit/scripts.pory"

# 193 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 197 "data/maps/MtPyre_Summit/scripts.pory"

# 198 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 203 "data/maps/MtPyre_Summit/scripts.pory"

# 204 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 209 "data/maps/MtPyre_Summit/scripts.pory"

# 210 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 215 "data/maps/MtPyre_Summit/scripts.pory"

# 216 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_ExclamationMark
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_Delay48
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE
# 243 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 246 "data/maps/MtPyre_Summit/scripts.pory"

# 247 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 253 "data/maps/MtPyre_Summit/scripts.pory"

# 254 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 260 "data/maps/MtPyre_Summit/scripts.pory"

# 261 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 267 "data/maps/MtPyre_Summit/scripts.pory"

# 268 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 274 "data/maps/MtPyre_Summit/scripts.pory"

# 275 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 281 "data/maps/MtPyre_Summit/scripts.pory"

# 282 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 287 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 288 "data/maps/MtPyre_Summit/scripts.pory"

# 289 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 294 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 296 "data/maps/MtPyre_Summit/scripts.pory"

# 297 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 304 "data/maps/MtPyre_Summit/scripts.pory"

# 305 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 312 "data/maps/MtPyre_Summit/scripts.pory"

# 313 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 318 "data/maps/MtPyre_Summit/scripts.pory"

# 319 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 324 "data/maps/MtPyre_Summit/scripts.pory"

# 325 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 333 "data/maps/MtPyre_Summit/scripts.pory"

# 334 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 342 "data/maps/MtPyre_Summit/scripts.pory"

# 343 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 351 "data/maps/MtPyre_Summit/scripts.pory"

# 352 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 360 "data/maps/MtPyre_Summit/scripts.pory"

# 361 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 368 "data/maps/MtPyre_Summit/scripts.pory"

# 369 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 372 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 373 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 375 "data/maps/MtPyre_Summit/scripts.pory"

# 376 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 382 "data/maps/MtPyre_Summit/scripts.pory"

# 383 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 389 "data/maps/MtPyre_Summit/scripts.pory"

# 390 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 394 "data/maps/MtPyre_Summit/scripts.pory"

# 395 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 399 "data/maps/MtPyre_Summit/scripts.pory"

# 400 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 407 "data/maps/MtPyre_Summit/scripts.pory"

# 408 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 414 "data/maps/MtPyre_Summit/scripts.pory"

# 415 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 421 "data/maps/MtPyre_Summit/scripts.pory"

# 422 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 426 "data/maps/MtPyre_Summit/scripts.pory"

# 427 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 431 "data/maps/MtPyre_Summit/scripts.pory"

# 432 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 433 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 434 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 436 "data/maps/MtPyre_Summit/scripts.pory"

# 437 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 441 "data/maps/MtPyre_Summit/scripts.pory"

# 442 "data/maps/MtPyre_Summit/scripts.pory"
/*
# 443 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those TEAM MAGMA goons got\n"
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 447 "data/maps/MtPyre_Summit/scripts.pory"

# 448 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the MAGMAS\n"
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 451 "data/maps/MtPyre_Summit/scripts.pory"

# 452 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 455 "data/maps/MtPyre_Summit/scripts.pory"
*/
# 456 "data/maps/MtPyre_Summit/scripts.pory"

# 457 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy TEAM MAGMA.\p"
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 464 "data/maps/MtPyre_Summit/scripts.pory"

# 465 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	.string "TEAM MAGMA first…$"
# 468 "data/maps/MtPyre_Summit/scripts.pory"

# 469 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 472 "data/maps/MtPyre_Summit/scripts.pory"

# 473 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at MT. CHIMNEY.\p"
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either TEAM,\n"
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 478 "data/maps/MtPyre_Summit/scripts.pory"

# 479 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be TEAM MAGMA…$"
# 482 "data/maps/MtPyre_Summit/scripts.pory"

# 483 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BOSS should have snatched what\n"
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 488 "data/maps/MtPyre_Summit/scripts.pory"

# 489 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join Team Aqua,\l"
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our Team Magma!$"
# 495 "data/maps/MtPyre_Summit/scripts.pory"

# 496 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join Team Magma that\n"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 499 "data/maps/MtPyre_Summit/scripts.pory"

# 500 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 503 "data/maps/MtPyre_Summit/scripts.pory"

# 504 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "ARCHIE: TEAM MAGMA's MAXIE got ahead\n"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of us, but we also got what we wanted.\p"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The RED ORB preserved at MT. PYRE…\n"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, ARCHIE, now have it in my possession!\p"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\p"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, TEAM!\n"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 513 "data/maps/MtPyre_Summit/scripts.pory"

# 514 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 533 "data/maps/MtPyre_Summit/scripts.pory"

# 534 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 539 "data/maps/MtPyre_Summit/scripts.pory"

# 540 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 548 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 549 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 553 "data/maps/MtPyre_Summit/scripts.pory"

# 554 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 559 "data/maps/MtPyre_Summit/scripts.pory"

# 560 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 570 "data/maps/MtPyre_Summit/scripts.pory"

# 571 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 581 "data/maps/MtPyre_Summit/scripts.pory"

# 582 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 591 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 597 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 598 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 601 "data/maps/MtPyre_Summit/scripts.pory"

# 602 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 605 "data/maps/MtPyre_Summit/scripts.pory"

# 606 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 610 "data/maps/MtPyre_Summit/scripts.pory"

# 611 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 616 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 617 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 618 "data/maps/MtPyre_Summit/scripts.pory"

# 619 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 627 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 628 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 629 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 636 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"

MtPyre_Summit_EventScript_LeftTrigger::
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_4, 1
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_LeftTrigger_1
	return

MtPyre_Summit_EventScript_LeftTrigger_1:
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceLeft
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_StevenMultiIntro
	return


MtPyre_Summit_EventScript_RightTrigger::
# 657 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_4, 2
# 658 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_RightTrigger_1
	return

MtPyre_Summit_EventScript_RightTrigger_1:
# 659 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceRight
# 660 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 661 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 663 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_StevenMultiIntro
	return


MtPyre_Summit_EventScript_StevenTrigger::
# 671 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 672 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_Steven
# 673 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 674 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_4, 0
# 675 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end


MtPyre_Summit_EventScript_MultiBattlePositioning1::
# 680 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUpOneStep
# 681 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_WalkUpOneStep
# 682 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	return


MtPyre_Summit_EventScript_MultiBattlePositioning2::
# 688 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE_MON
# 689 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_TEMP_4
# 690 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_MultiBattlePositioning2_3
# 692 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_MultiBattlePositioning2_4
# 694 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_MultiBattlePositioning2_5
	return

MtPyre_Summit_EventScript_MultiBattlePositioning2_1:
# 699 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 700 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_FaceDown
# 701 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	return

MtPyre_Summit_EventScript_MultiBattlePositioning2_3:
# 691 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieMovesTwoLeft
	goto MtPyre_Summit_EventScript_MultiBattlePositioning2_1

MtPyre_Summit_EventScript_MultiBattlePositioning2_4:
# 693 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieMovesThreeLeft
	goto MtPyre_Summit_EventScript_MultiBattlePositioning2_1

MtPyre_Summit_EventScript_MultiBattlePositioning2_5:
# 695 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieMovesTwoLeft
	goto MtPyre_Summit_EventScript_MultiBattlePositioning2_1


MtPyre_Summit_EventScript_MultiBattlePositioning3::
# 706 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE_MON
# 707 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_TEMP_4
# 708 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_MultiBattlePositioning3_3
# 710 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_MultiBattlePositioning3_4
# 712 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_MultiBattlePositioning3_5
	return

MtPyre_Summit_EventScript_MultiBattlePositioning3_1:
# 717 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	return

MtPyre_Summit_EventScript_MultiBattlePositioning3_3:
# 709 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieMovesThreeRight
	goto MtPyre_Summit_EventScript_MultiBattlePositioning3_1

MtPyre_Summit_EventScript_MultiBattlePositioning3_4:
# 711 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieMovesTwoRight
	goto MtPyre_Summit_EventScript_MultiBattlePositioning3_1

MtPyre_Summit_EventScript_MultiBattlePositioning3_5:
# 713 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieMovesThreeRight
	goto MtPyre_Summit_EventScript_MultiBattlePositioning3_1


MtPyre_Summit_EventScript_MultiBattlePositioning4::
# 727 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq MtPyre_Summit_EventScript_MultiBattlePositioning4_2
MtPyre_Summit_EventScript_MultiBattlePositioning4_1:
# 732 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_FaceDown
# 733 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	return

MtPyre_Summit_EventScript_MultiBattlePositioning4_2:
# 728 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, MtPyre_Summit_Movement_StevenMovesToMaxie
# 729 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUpOneStep
# 730 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
	goto MtPyre_Summit_EventScript_MultiBattlePositioning4_1


# 738 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieMovesTwoRight:
# 739 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 739 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
	step_end

# 743 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieMovesTwoLeft:
# 744 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 744 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
	step_end

# 748 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieMovesThreeRight:
# 749 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 749 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 749 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
	step_end

# 753 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieMovesThreeLeft:
# 754 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 754 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 754 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
	step_end

# 758 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_StevenMovesToMaxie:
# 759 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 760 "data/maps/MtPyre_Summit/scripts.pory"
	face_up
	step_end

MtPyre_Summit_EventScript_StevenMultiIntro::
# 765 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 766 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_ExclamationMark
# 767 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 768 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenNeedHelp, MSGBOX_YESNO
# 769 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MtPyre_Summit_EventScript_StevenMultiIntro_1
# 786 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenHurryBack, MSGBOX_DEFAULT
# 787 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 788 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 789 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceOriginalDirection
# 790 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 791 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 792 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	return

MtPyre_Summit_EventScript_StevenMultiIntro_1:
# 770 "data/maps/MtPyre_Summit/scripts.pory"
	specialvar VAR_TEMP_1, CalculatePlayerPartyCount
# 771 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_le MtPyre_Summit_EventScript_StevenMultiIntro_4
# 775 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_StevenMultiIntro_Text_0, MSGBOX_DEFAULT
# 776 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 777 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 778 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceOriginalDirection
# 779 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDownOneStep
# 780 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 781 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	return

MtPyre_Summit_EventScript_StevenMultiIntro_4:
# 772 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MtPyreMultiBattle
	return


MtPyre_Summit_EventScript_Steven::
# 798 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 799 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 800 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_Steven_2
# 804 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenGoToHideouts, MSGBOX_NPC
# 805 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
MtPyre_Summit_EventScript_Steven_1:
# 807 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_Steven_2:
# 801 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_StevenMultiIntro
	goto MtPyre_Summit_EventScript_Steven_1


MtPyre_Summit_EventScript_MtPyreMultiBattle::
# 812 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MultiBattlePositioning1
# 813 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenStopThis, MSGBOX_DEFAULT
# 814 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 815 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MultiBattlePositioning2
# 816 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieBeforeBattle, MSGBOX_DEFAULT
# 817 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 818 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MultiBattlePositioning3
# 819 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieBeforeBattle, MSGBOX_DEFAULT
# 820 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 821 "data/maps/MtPyre_Summit/scripts.pory"
	call MtPyre_Summit_EventScript_MultiBattlePositioning4
# 822 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 823 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 824 "data/maps/MtPyre_Summit/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MT_PYRE, MtPyre_Summit_Text_MaxieDefeated, TRAINER_ARCHIE_MT_PYRE, MtPyre_Summit_Text_ArchieDefeated, PARTNER_STEVEN
# 825 "data/maps/MtPyre_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 826 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MtPyre_Summit_EventScript_MtPyreMultiBattle_1
	return

MtPyre_Summit_EventScript_MtPyreMultiBattle_1:
# 827 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_MtPyreVictory
# 828 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end


MtPyre_Summit_EventScript_MtPyreVictory::
# 834 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 835 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieAfterBattle, MSGBOX_DEFAULT
# 836 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 837 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_FaceRight
# 838 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 839 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieAfterBattle, MSGBOX_DEFAULT
# 840 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 841 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_FaceLeft
# 842 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 843 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieResponse, MSGBOX_DEFAULT
# 844 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 845 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 846 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 847 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 848 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE
# 849 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE_MON
# 850 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE_MON
# 852 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 853 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE_MAXIE
# 854 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 4
# 855 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 5
# 856 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 6
# 857 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject 7
# 858 "data/maps/MtPyre_Summit/scripts.pory"
	delay 40
# 859 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 860 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 861 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_LEVEL_CAP, 65
# 862 "data/maps/MtPyre_Summit/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 863 "data/maps/MtPyre_Summit/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 864 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 865 "data/maps/MtPyre_Summit/scripts.pory"
	delay 40
# 867 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_TEMP_4
# 868 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_MtPyreVictory_3
# 869 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_MtPyreVictory_3
# 872 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_MtPyreVictory_4
	return

MtPyre_Summit_EventScript_MtPyreVictory_1:
# 878 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 879 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_StevenPostBattle, MSGBOX_DEFAULT
# 880 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 881 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 882 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 883 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 884 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNTS_BLOCKING_ENTRANCE
# 885 "data/maps/MtPyre_Summit/scripts.pory"
	addvar VAR_WEATHER_INSTITUTE_STATE, 1
# 886 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_MtPyreVictory_Text_0
# 887 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 888 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_MtPyreVictory_3:
# 870 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceLeft
# 871 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MtPyre_Summit_EventScript_MtPyreVictory_1

MtPyre_Summit_EventScript_MtPyreVictory_4:
# 873 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_STEVEN, Common_Movement_FaceRight
# 874 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MtPyre_Summit_EventScript_MtPyreVictory_1


Test_EventScript_TestCall::
# 893 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 894 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_7, 1
# 895 "data/maps/MtPyre_Summit/scripts.pory"
	pokenavcall MagmaHideout_Text_StevenCall
# 896 "data/maps/MtPyre_Summit/scripts.pory"
	waitmessage
# 897 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	return


MtPyre_Summit_Script_Shelly::
# 975 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 976 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 977 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_defeated TRAINER_SHELLY_MT_PYRE, MtPyre_Summit_Script_ShellyPostBattle
# 978 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SHELLY, Common_Movement_ExclamationMark
# 979 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 980 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ShellyIntro, MSGBOX_NPC
# 981 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 982 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SHELLY, Common_Movement_ExclamationMark
# 983 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SHELLY_MON
# 984 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_COURTNEY_MON
# 985 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 986 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_COURTNEY, MtPyre_Summit_Movement_CourtneyApproach
# 987 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 988 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_COURTNEY, Common_Movement_FaceDown
# 989 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 990 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_CourtneyIntro, MSGBOX_NPC
# 991 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 992 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_Script_Shelly_Courtney_Double
	return


MtPyre_Summit_Script_ShellyCourtneyTriggerCheck::
# 996 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 997 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_3, 1
# 998 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_not_defeated TRAINER_SHELLY_MT_PYRE, MtPyre_Summit_Script_ShellyCourtneyInitiateBattle
# 999 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	return


MtPyre_Summit_Script_ShellyCourtneyInitiateBattle::
# 1005 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 1006 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SHELLY_MON
# 1007 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_COURTNEY_MON
# 1008 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SHELLY, Common_Movement_ExclamationMark
# 1009 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1010 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SHELLY, Common_Movement_WalkRightOneStep
# 1011 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1012 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1013 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1014 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ShellyIntro, MSGBOX_NPC
# 1015 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 1016 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_COURTNEY, Common_Movement_ExclamationMark
# 1017 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1018 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_COURTNEY, Common_Movement_WalkLeftOneStep
# 1019 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1020 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1021 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1022 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_CourtneyIntro, MSGBOX_NPC
# 1023 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 1024 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_Script_Shelly_Courtney_Double
	return


MtPyre_Summit_Script_Courtney::
# 1028 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 1029 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 1030 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_defeated TRAINER_SHELLY_MT_PYRE, MtPyre_Summit_Script_CourtneyPostBattle
# 1031 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_COURTNEY, Common_Movement_ExclamationMark
# 1032 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1033 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_CourtneyIntro, MSGBOX_NPC
# 1034 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 1035 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SHELLY, Common_Movement_ExclamationMark
# 1036 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SHELLY_MON
# 1037 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_COURTNEY_MON
# 1038 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1039 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SHELLY, MtPyre_Summit_Movement_ShellyApproach
# 1040 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1041 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SHELLY, Common_Movement_FaceDown
# 1042 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 1043 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ShellyIntro, MSGBOX_NPC
# 1044 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 1045 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_Script_Shelly_Courtney_Double
	return


# 1048 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ShellyApproach:
# 1049 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 1049 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 1049 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
	step_end

# 1052 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_CourtneyApproach:
# 1053 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 1053 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 1053 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
	step_end

MtPyre_Summit_Script_Shelly_Courtney_Double::
# 1057 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 1058 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_two_trainers TRAINER_COURTNEY_MT_PYRE, MtPyre_Summit_Text_CourtneyDefeated, TRAINER_SHELLY_MT_PYRE, MtPyre_Summit_Text_ShellyDefeated
# 1059 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_DEFEATED_MT_PYRE_ADMINS
# 1060 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SHELLY_MON
# 1061 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_COURTNEY_MON
# 1062 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_6, 0
# 1063 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end


MtPyre_Summit_Script_ShellyPostBattle::
# 1076 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 1077 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Script_ShellyPostBattle_Text_0, MSGBOX_NPC
# 1078 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 1079 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end


MtPyre_Summit_Script_CourtneyPostBattle::
# 1084 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 1085 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Script_CourtneyPostBattle_Text_0, MSGBOX_NPC
# 1086 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 1087 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end


MtPyre_Summit_Script_CheckRemoveShellyCourtneyPokemon::
# 1092 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_6, 1
# 1093 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_defeated TRAINER_SHELLY_MT_PYRE, MtPyre_Summit_Script_RemoveShellyCourtneyPokemon
	return


MtPyre_Summit_Script_RemoveShellyCourtneyPokemon::
# 1098 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 1099 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_DEFEATED_MT_PYRE_ADMINS
# 1100 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SHELLY_MON
# 1101 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_COURTNEY_MON
# 1102 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	return


MtPyre_Summit_EventScript_StevenMultiIntro_Text_0:
# 775 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: We can't afford to bring more\n"
	.string "than 4 Pokémon each into this fight.\p"
	.string "Choose your strongest few, deposit the\n"
	.string "rest, and hurry back.$"

MtPyre_Summit_EventScript_MtPyreVictory_Text_0:
# 886 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: We need to hurry. Good luck.$"

MtPyre_Summit_Script_ShellyPostBattle_Text_0:
# 1077 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Shelly: Come, on Archie… We're so close…$"

MtPyre_Summit_Script_CourtneyPostBattle_Text_0:
# 1085 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Courtney: A recurring error…$"

MtPyre_Summit_Text_StevenNeedHelp::
# 903 "data/maps/MtPyre_Summit/scripts.pory"
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
# 907 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: Things are too precarious to\n"
	.string "rush in unprepared.\p"
	.string "Gather your strength and hurry back as\n"
	.string "soon as you're ready.$"

MtPyre_Summit_Text_StevenStopThis::
# 911 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: Maxie, Archie! Enough of this\n"
	.string "madness!\p"
	.string "This is a sacred place you are defiling.\p"
	.string "These Orbs belong here, to preserve\n"
	.string "harmony, not to be taken as\l"
	.string "instruments for your foolish ambitions.\p"
	.string "We will not let you do this.$"

MtPyre_Summit_Text_MaxieBeforeBattle::
# 915 "data/maps/MtPyre_Summit/scripts.pory"
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
# 919 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: We won't allow that. Team Aqua\n"
	.string "is taking possession of the Orbs, and\l"
	.string "we will use them to definitively stop\l"
	.string "your destructive plans!$"

MtPyre_Summit_Text_MaxieDefeated::
# 923 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie: I allowed Archie to distract me…\n"
	.string "A perennial thorn in my side.$"

MtPyre_Summit_Text_ArchieDefeated::
# 927 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Why won't you two pick a side\n"
	.string "already?$"

MtPyre_Summit_Text_MaxieAfterBattle::
# 931 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie: During our battle, I managed to\n"
	.string "get ahold of the Red Orb. One will have\l"
	.string "to be sufficient.$"

MtPyre_Summit_Text_ArchieAfterBattle::
# 935 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Then I'll be keeping this Blue\n"
	.string "Orb as our insurance against you.$"

MtPyre_Summit_Text_MaxieResponse::
# 939 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie: ...\p"
	.string "You are too far behind us, anyway. It is\n"
	.string "no matter.$"

MtPyre_Summit_Text_StevenPostBattle::
# 943 "data/maps/MtPyre_Summit/scripts.pory"
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
# 946 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: You should try to infiltrate\n"
	.string "the Team Magma and Team Aqua hideouts.\p"
	.string "Team Magma's Hideout is in the Jagged\n"
	.string "Pass, South of Mt. Chimney. Team Aqua's\l"
	.string "Hideout is East of Lilycove, accessible\l"
	.string "by Surfing.$"

MagmaHideout_Text_StevenCall::
# 950 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Steven: We've been trying to reach you\n"
	.string "about your car's extended warranty.\l"
	.string "Steven: We've been trying to reach you\l"
	.string "about your car's extended warranty.$"

MtPyre_Summit_Text_Grunt1Intro::
# 954 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We got here first, but then Team Aqua\n"
	.string "showed up and started getting in our\l"
	.string "way!$"

MtPyre_Summit_Text_Grunt1Defeat::
# 958 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Who's side are you on, anyway?$"

MtPyre_Summit_Text_Grunt1PostBattle::
# 962 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We did all this work, and then Team Aqua\n"
	.string "is stealing our ideas, as usual.$"

MtPyre_Summit_Text_ShellyIntro::
# 966 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Shelly: I can't let you go any further.\p"
	.string "I trust Archie to handle Maxie, but I\n"
	.string "don't want you tipping the scales\l"
	.string "against us.$"

MtPyre_Summit_Text_CourtneyIntro::
# 970 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Courtney: Assessing…\n"
	.string "Greater threat identified. Shifting\l"
	.string "focus.$"

MtPyre_Summit_Text_ShellyDefeated::
# 1067 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Shelly: Hopefully Archie can handle you,\n"
	.string "too…$"

MtPyre_Summit_Text_CourtneyDefeated::
# 1071 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Courtney: Assessment of greater\n"
	.string "threat… confirmed.$"
