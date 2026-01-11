# 1 "data/maps/LavaridgeTown/scripts.pory"

# 2 "data/maps/LavaridgeTown/scripts.pory"
//.set LOCALID_LAVARIDGE_RIVAL_ON_BIKE, 7
# 3 "data/maps/LavaridgeTown/scripts.pory"
//.set LOCALID_LAVARIDGE_RIVAL, 8
# 4 "data/maps/LavaridgeTown/scripts.pory"

# 5 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 6 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 7 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 8 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 9 "data/maps/LavaridgeTown/scripts.pory"

# 10 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 11 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 12 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 13 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 15 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 16 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 17 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 18 "data/maps/LavaridgeTown/scripts.pory"
	end
# 19 "data/maps/LavaridgeTown/scripts.pory"

# 20 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 21 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 22 "data/maps/LavaridgeTown/scripts.pory"
	return
# 23 "data/maps/LavaridgeTown/scripts.pory"

# 24 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 25 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 26 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 27 "data/maps/LavaridgeTown/scripts.pory"
	return
# 28 "data/maps/LavaridgeTown/scripts.pory"

# 29 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 30 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL, 11, 9
# 31 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL_ON_BIKE, 9, 8
# 32 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_LAVARIDGE_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 34 "data/maps/LavaridgeTown/scripts.pory"
	return
# 35 "data/maps/LavaridgeTown/scripts.pory"

# 36 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 37 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 38 "data/maps/LavaridgeTown/scripts.pory"
	return
# 39 "data/maps/LavaridgeTown/scripts.pory"

# 40 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 41 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 42 "data/maps/LavaridgeTown/scripts.pory"
	return
# 43 "data/maps/LavaridgeTown/scripts.pory"

# 44 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 45 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 46 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 47 "data/maps/LavaridgeTown/scripts.pory"

# 48 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 49 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 50 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 51 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 52 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 53 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 54 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 55 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 56 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 57 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 58 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 59 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 60 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 61 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 62 "data/maps/LavaridgeTown/scripts.pory"
	end
# 63 "data/maps/LavaridgeTown/scripts.pory"

# 64 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 65 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 66 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 67 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 68 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 69 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_Script_RivalNewScript
# 70 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 71 "data/maps/LavaridgeTown/scripts.pory"
	end
# 72 "data/maps/LavaridgeTown/scripts.pory"

# 73 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 74 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 75 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 76 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 77 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 78 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_Script_RivalNewScript
# 79 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 80 "data/maps/LavaridgeTown/scripts.pory"
	end
# 81 "data/maps/LavaridgeTown/scripts.pory"

# 82 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 83 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 84 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL
# 85 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 86 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 87 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 88 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 89 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 90 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 91 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 92 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 93 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 94 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 95 "data/maps/LavaridgeTown/scripts.pory"
	end
# 96 "data/maps/LavaridgeTown/scripts.pory"

# 97 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 98 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 99 "data/maps/LavaridgeTown/scripts.pory"
	return
# 100 "data/maps/LavaridgeTown/scripts.pory"

# 101 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 102 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 103 "data/maps/LavaridgeTown/scripts.pory"
	return
# 104 "data/maps/LavaridgeTown/scripts.pory"

# 105 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 106 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 107 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 108 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 109 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 110 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
# 112 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/LavaridgeTown/scripts.pory"
	return
# 114 "data/maps/LavaridgeTown/scripts.pory"

# 115 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 116 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 117 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 118 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL
# 119 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 120 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 122 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 123 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 124 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 125 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 126 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 127 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
# 129 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 131 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 132 "data/maps/LavaridgeTown/scripts.pory"
	return
# 133 "data/maps/LavaridgeTown/scripts.pory"

# 134 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 135 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 136 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/LavaridgeTown/scripts.pory"
	return
# 138 "data/maps/LavaridgeTown/scripts.pory"

# 139 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 140 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 141 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/LavaridgeTown/scripts.pory"
	return
# 143 "data/maps/LavaridgeTown/scripts.pory"

# 144 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 145 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 146 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 147 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/LavaridgeTown/scripts.pory"
	return
# 149 "data/maps/LavaridgeTown/scripts.pory"

# 150 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 151 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 152 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/LavaridgeTown/scripts.pory"
	return
# 154 "data/maps/LavaridgeTown/scripts.pory"

# 155 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 156 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 157 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 158 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 159 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 160 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 161 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 162 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 163 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 164 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 165 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 166 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 167 "data/maps/LavaridgeTown/scripts.pory"

# 168 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 169 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 170 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 171 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 172 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 173 "data/maps/LavaridgeTown/scripts.pory"

# 174 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 175 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 176 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 177 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 178 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 179 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 180 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 181 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 182 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 183 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 184 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 185 "data/maps/LavaridgeTown/scripts.pory"

# 186 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 187 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 188 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 189 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 190 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 191 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 192 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 193 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 194 "data/maps/LavaridgeTown/scripts.pory"

# 195 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 196 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 197 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 198 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 199 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 200 "data/maps/LavaridgeTown/scripts.pory"

# 201 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 202 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 203 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 204 "data/maps/LavaridgeTown/scripts.pory"

# 205 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 206 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 207 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 208 "data/maps/LavaridgeTown/scripts.pory"
	end
# 209 "data/maps/LavaridgeTown/scripts.pory"

# 210 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 211 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 212 "data/maps/LavaridgeTown/scripts.pory"
	end
# 213 "data/maps/LavaridgeTown/scripts.pory"

# 214 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 215 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 216 "data/maps/LavaridgeTown/scripts.pory"
	end
# 217 "data/maps/LavaridgeTown/scripts.pory"

# 218 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 219 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 220 "data/maps/LavaridgeTown/scripts.pory"
	end
# 221 "data/maps/LavaridgeTown/scripts.pory"

# 222 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 223 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 224 "data/maps/LavaridgeTown/scripts.pory"
	end
# 225 "data/maps/LavaridgeTown/scripts.pory"

# 226 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 227 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 228 "data/maps/LavaridgeTown/scripts.pory"
	end
# 229 "data/maps/LavaridgeTown/scripts.pory"

# 230 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 231 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 232 "data/maps/LavaridgeTown/scripts.pory"
	end
# 233 "data/maps/LavaridgeTown/scripts.pory"

# 234 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 235 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 236 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 237 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_ReceivedEgg
# 238 "data/maps/LavaridgeTown/scripts.pory"
	//goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 239 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 240 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
# 241 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 242 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 243 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 244 "data/maps/LavaridgeTown/scripts.pory"
	//setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 245 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 247 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 248 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 249 "data/maps/LavaridgeTown/scripts.pory"
	release
# 250 "data/maps/LavaridgeTown/scripts.pory"
	end
# 251 "data/maps/LavaridgeTown/scripts.pory"

# 252 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 253 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 254 "data/maps/LavaridgeTown/scripts.pory"
	release
# 255 "data/maps/LavaridgeTown/scripts.pory"
	end
# 256 "data/maps/LavaridgeTown/scripts.pory"

# 257 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 258 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 259 "data/maps/LavaridgeTown/scripts.pory"
	release
# 260 "data/maps/LavaridgeTown/scripts.pory"
	end
# 261 "data/maps/LavaridgeTown/scripts.pory"

# 262 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 263 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 264 "data/maps/LavaridgeTown/scripts.pory"
	release
# 265 "data/maps/LavaridgeTown/scripts.pory"
	end
# 266 "data/maps/LavaridgeTown/scripts.pory"

# 267 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 268 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 269 "data/maps/LavaridgeTown/scripts.pory"
	end
# 270 "data/maps/LavaridgeTown/scripts.pory"

# 271 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 272 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 273 "data/maps/LavaridgeTown/scripts.pory"
	end
# 274 "data/maps/LavaridgeTown/scripts.pory"

# 275 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 276 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 277 "data/maps/LavaridgeTown/scripts.pory"
	end
# 278 "data/maps/LavaridgeTown/scripts.pory"

# 279 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 280 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}! Long time no see!\p"
# 281 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 282 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the LAVARIDGE GYM BADGE.\p"
# 283 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 284 "data/maps/LavaridgeTown/scripts.pory"
	.string "good Pokémon…\l"
# 285 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 286 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 287 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 288 "data/maps/LavaridgeTown/scripts.pory"

# 289 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 290 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those GO-GOGGLES, you'll\n"
# 291 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 292 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near ROUTE 111.$"
# 293 "data/maps/LavaridgeTown/scripts.pory"
/*	.string "But, wow, {PLAYER}{KUN}…\n"
# 294 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging GYMS…\p"
# 295 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 296 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 297 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 298 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in PETALBURG GYM.\p"
# 299 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$" */
# 300 "data/maps/LavaridgeTown/scripts.pory"

# 301 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 302 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: {PLAYER}, hey, it's been a while.\n"
# 303 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 304 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 305 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of BADGES.\p"
# 306 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 307 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 308 "data/maps/LavaridgeTown/scripts.pory"

# 309 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 310 "data/maps/LavaridgeTown/scripts.pory"
	.string "BRENDAN: Keep those with you if you're\n"
# 311 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 312 "data/maps/LavaridgeTown/scripts.pory"
	.string "ROUTE 111.\p"
# 313 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some Pokémon that\n"
# 314 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 315 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.$"
# 316 "data/maps/LavaridgeTown/scripts.pory"
/*	.string "As for me…\n"
# 317 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging NORMAN,\l"
# 318 "data/maps/LavaridgeTown/scripts.pory"
	.string "the GYM LEADER of PETALBURG.\p"
# 319 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 320 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 321 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$" */
# 322 "data/maps/LavaridgeTown/scripts.pory"

# 323 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 324 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 325 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 326 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 327 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 328 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 329 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with Pokémon and\l"
# 330 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 331 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 332 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your Pokémon radiate vitality.\p"
# 333 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 334 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 335 "data/maps/LavaridgeTown/scripts.pory"

# 336 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 337 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 338 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 339 "data/maps/LavaridgeTown/scripts.pory"

# 340 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 341 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 342 "data/maps/LavaridgeTown/scripts.pory"

# 343 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 344 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 345 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 346 "data/maps/LavaridgeTown/scripts.pory"

# 347 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 348 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 349 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 350 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 351 "data/maps/LavaridgeTown/scripts.pory"

# 352 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 353 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
# 354 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Pokémon DAY CARE.\p"
# 355 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 356 "data/maps/LavaridgeTown/scripts.pory"

# 357 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 358 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 359 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 360 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 361 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 362 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 363 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 364 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 365 "data/maps/LavaridgeTown/scripts.pory"

# 366 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 369 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 370 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "A Pokémon nipped my backside!$"
# 372 "data/maps/LavaridgeTown/scripts.pory"

# 373 "data/maps/LavaridgeTown/scripts.pory"
/*LavaridgeTown_Text_OhYouLikeHotSprings:
# 374 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$" */
# 377 "data/maps/LavaridgeTown/scripts.pory"

# 378 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 379 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "GYM LEADER like FLANNERY.$"
# 382 "data/maps/LavaridgeTown/scripts.pory"

# 383 "data/maps/LavaridgeTown/scripts.pory"
/* LavaridgeTown_Text_IfPokemonInHotSprings:
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put Pokémon in hot springs,\n"
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 386 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 387 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$" */
# 388 "data/maps/LavaridgeTown/scripts.pory"

# 389 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 391 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 392 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 393 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 395 "data/maps/LavaridgeTown/scripts.pory"

# 396 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 397 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
# 398 "data/maps/LavaridgeTown/scripts.pory"
	.string "“POKéMON CENTER HOT SPRINGS\n"
# 399 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 400 "data/maps/LavaridgeTown/scripts.pory"

# 401 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "LEADER: FLANNERY\l"
# 404 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 405 "data/maps/LavaridgeTown/scripts.pory"

# 406 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
# 408 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"

LavaridgeTown_Script_RivalNewScript::
# 429 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES
# 430 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_RivalSafetyGoggles, MSGBOX_DEFAULT
# 431 "data/maps/LavaridgeTown/scripts.pory"
	waitmessage
# 432 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_RivalSomethingGoingOnMtChimney, MSGBOX_DEFAULT
# 433 "data/maps/LavaridgeTown/scripts.pory"
	waitmessage
	return


LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 441 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 442 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 443 "data/maps/LavaridgeTown/scripts.pory"
	checkitem ITEM_TM_SCALD
# 444 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_EventScript_HotSpringsOldWoman2_2
# 451 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 452 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
LavaridgeTown_EventScript_HotSpringsOldWoman2_1:
# 454 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
	end

LavaridgeTown_EventScript_HotSpringsOldWoman2_2:
# 445 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_HotSpringsOldWoman2_Text_0, MSGBOX_DEFAULT
# 446 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 447 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_TM_SCALD
# 448 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
	goto LavaridgeTown_EventScript_HotSpringsOldWoman2_1


LavaridgeTown_EventScript_HotSpringsOldWoman2_Text_0:
# 445 "data/maps/LavaridgeTown/scripts.pory"
	.string "The Hot Springs are the perfect\n"
	.string "temperature. Any hotter and it might be\l"
	.string "dangerous!$"

LavaridgeTown_Text_IfPokemonInHotSprings::
# 412 "data/maps/LavaridgeTown/scripts.pory"
	.string "The hot springs are a place to relax and\n"
	.string "unwind.\p"
	.string "And not just for people! Several\n"
	.string "species of Pokémon have visited the\l"
	.string "hot springs for as long as anyone can\l"
	.string "remember.\p"
	.string "So you are welcome to bring your\n"
	.string "Pokémon here, but be careful. You might\l"
	.string "unexpectedly encounter a wild Pokémon\l"
	.string "too!$"

LavaridgeTown_Text_OhYouLikeHotSprings::
# 416 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
	.string "That's surprising for one as young as\n"
	.string "you.\p"
	.string "Just be careful not to disturb the\n"
	.string "Pokémon that live here.$"

LavaridgeTown_Text_RivalSafetyGoggles::
# 420 "data/maps/LavaridgeTown/scripts.pory"
	.string "{RIVAL}: You should take these, too.\n"
	.string "The Go Goggles will help you navigate\l"
	.string "the desert, but it might be hard on some\l"
	.string "of your Pokémon.\p"
	.string "These Safety Goggles should help keep\n"
	.string "them comfortable, too.$"

LavaridgeTown_Text_RivalSomethingGoingOnMtChimney::
# 424 "data/maps/LavaridgeTown/scripts.pory"
	.string "{RIVAL}: I'm heading off to find\n"
	.string "more Pokémon.\p"
	.string "By the way, I heard some kind of\n"
	.string "commotion going on at Mt. Chimney as I\l"
	.string "was heading down.\p"
	.string "It might be worth checking out, but be\n"
	.string "careful if you do.\p"
	.string "See you later!$"
