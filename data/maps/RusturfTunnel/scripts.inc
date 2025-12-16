# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
//.equ LOCALID_RUSTURF_TUNNEL_WANDAS_BF, 1
# 3 "data/maps/RusturfTunnel/scripts.pory"
//.set LOCALID_RUSTURF_TUNNEL_GRUNT, 5
# 4 "data/maps/RusturfTunnel/scripts.pory"
//.equ LOCALID_RUSTURF_TUNNEL_WANDA, 8
# 5 "data/maps/RusturfTunnel/scripts.pory"

# 6 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 7 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 8 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 9 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 10 "data/maps/RusturfTunnel/scripts.pory"

# 11 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 12 "data/maps/RusturfTunnel/scripts.pory"
//	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 13 "data/maps/RusturfTunnel/scripts.pory"
//	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 14 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 15 "data/maps/RusturfTunnel/scripts.pory"

# 16 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 17 "data/maps/RusturfTunnel/scripts.pory"
	//call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 18 "data/maps/RusturfTunnel/scripts.pory"
	end
# 19 "data/maps/RusturfTunnel/scripts.pory"

# 20 "data/maps/RusturfTunnel/scripts.pory"
/*
# 21 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 22 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 13, 4
# 23 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
# 24 "data/maps/RusturfTunnel/scripts.pory"
	return
# 25 "data/maps/RusturfTunnel/scripts.pory"

# 26 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 27 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 28 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 29 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 30 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 31 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 32 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 33 "data/maps/RusturfTunnel/scripts.pory"
	release
# 34 "data/maps/RusturfTunnel/scripts.pory"
	end
# 35 "data/maps/RusturfTunnel/scripts.pory"

# 36 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 37 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 38 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 39 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 40 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 41 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 42 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 43 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 44 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 45 "data/maps/RusturfTunnel/scripts.pory"
	release
# 46 "data/maps/RusturfTunnel/scripts.pory"
	end
# 47 "data/maps/RusturfTunnel/scripts.pory"

# 48 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 49 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 50 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 51 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 52 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 53 "data/maps/RusturfTunnel/scripts.pory"
	release
# 54 "data/maps/RusturfTunnel/scripts.pory"
	end
# 55 "data/maps/RusturfTunnel/scripts.pory"

# 56 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 57 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 58 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 59 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 60 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 61 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 62 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 63 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 64 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 65 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 66 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 67 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 68 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 69 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 70 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 72 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 73 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 74 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 75 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 76 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 77 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 78 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 79 "data/maps/RusturfTunnel/scripts.pory"
	end
# 80 "data/maps/RusturfTunnel/scripts.pory"

# 81 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 82 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 83 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 84 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 85 "data/maps/RusturfTunnel/scripts.pory"
	return
# 86 "data/maps/RusturfTunnel/scripts.pory"

# 87 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 88 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 89 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 90 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 91 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 92 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 93 "data/maps/RusturfTunnel/scripts.pory"
	return
# 94 "data/maps/RusturfTunnel/scripts.pory"

# 95 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 96 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 97 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 98 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 99 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 100 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 101 "data/maps/RusturfTunnel/scripts.pory"
	return
# 102 "data/maps/RusturfTunnel/scripts.pory"

# 103 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 104 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 105 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 106 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 107 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 108 "data/maps/RusturfTunnel/scripts.pory"
	return
# 109 "data/maps/RusturfTunnel/scripts.pory"

# 110 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 111 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 112 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 113 "data/maps/RusturfTunnel/scripts.pory"
	return
# 114 "data/maps/RusturfTunnel/scripts.pory"

# 115 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 116 "data/maps/RusturfTunnel/scripts.pory"
	return
# 117 "data/maps/RusturfTunnel/scripts.pory"

# 118 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 119 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 120 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 121 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 122 "data/maps/RusturfTunnel/scripts.pory"
	return
# 123 "data/maps/RusturfTunnel/scripts.pory"

# 124 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 125 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit1
# 126 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 127 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 128 "data/maps/RusturfTunnel/scripts.pory"
	return
# 129 "data/maps/RusturfTunnel/scripts.pory"

# 130 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 131 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 132 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit
# 133 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 134 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 135 "data/maps/RusturfTunnel/scripts.pory"
	return
# 136 "data/maps/RusturfTunnel/scripts.pory"

# 137 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 138 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 139 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 140 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 141 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 142 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 143 "data/maps/RusturfTunnel/scripts.pory"
	return
# 144 "data/maps/RusturfTunnel/scripts.pory"

# 145 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 146 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 147 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 148 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 149 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 150 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 151 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 152 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 153 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 154 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 155 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 156 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 157 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 158 "data/maps/RusturfTunnel/scripts.pory"

# 159 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 160 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 162 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 164 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 165 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 167 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 168 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 169 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 170 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 171 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 172 "data/maps/RusturfTunnel/scripts.pory"

# 173 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 174 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 175 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 176 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 177 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 179 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 180 "data/maps/RusturfTunnel/scripts.pory"

# 181 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 182 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 183 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 184 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 185 "data/maps/RusturfTunnel/scripts.pory"

# 186 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 188 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 189 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 190 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 191 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 192 "data/maps/RusturfTunnel/scripts.pory"

# 193 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 194 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 195 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 196 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 197 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 198 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 199 "data/maps/RusturfTunnel/scripts.pory"

# 200 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 201 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 202 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 203 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 204 "data/maps/RusturfTunnel/scripts.pory"

# 205 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 206 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 207 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 208 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 209 "data/maps/RusturfTunnel/scripts.pory"

# 210 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 211 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 212 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 213 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 214 "data/maps/RusturfTunnel/scripts.pory"

# 215 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 216 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 217 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 220 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 221 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 222 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 223 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 226 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 227 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 228 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 229 "data/maps/RusturfTunnel/scripts.pory"

# 230 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 233 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 235 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 236 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 237 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 238 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 239 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 240 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 241 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 242 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 243 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 244 "data/maps/RusturfTunnel/scripts.pory"

# 245 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 246 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 247 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 248 "data/maps/RusturfTunnel/scripts.pory"

# 249 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 250 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 251 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 252 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 253 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 254 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 255 "data/maps/RusturfTunnel/scripts.pory"

# 256 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 257 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 258 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 259 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 260 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 261 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 262 "data/maps/RusturfTunnel/scripts.pory"

# 263 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 264 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 265 "data/maps/RusturfTunnel/scripts.pory"
	end
# 266 "data/maps/RusturfTunnel/scripts.pory"

# 267 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 268 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 269 "data/maps/RusturfTunnel/scripts.pory"
	end
# 270 "data/maps/RusturfTunnel/scripts.pory"

# 271 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 272 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 273 "data/maps/RusturfTunnel/scripts.pory"
	end
# 274 "data/maps/RusturfTunnel/scripts.pory"

# 275 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 276 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 277 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 278 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 279 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 280 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 281 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 282 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 283 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_GRUNT
# 284 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_PEEKO
# 285 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 286 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 287 "data/maps/RusturfTunnel/scripts.pory"
	end
# 288 "data/maps/RusturfTunnel/scripts.pory"

# 289 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 290 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 291 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 292 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 293 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 294 "data/maps/RusturfTunnel/scripts.pory"

# 295 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 296 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 297 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 298 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 299 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 300 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 301 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 302 "data/maps/RusturfTunnel/scripts.pory"
	release
# 303 "data/maps/RusturfTunnel/scripts.pory"
	end
# 304 "data/maps/RusturfTunnel/scripts.pory"

# 305 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 306 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 307 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 308 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 309 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 310 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 311 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 312 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 313 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 314 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 315 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntEscape
# 316 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 317 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 318 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 319 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 320 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 321 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 322 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 323 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 324 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 325 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 326 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 327 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 328 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 329 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 330 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 331 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 332 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 333 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 334 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 335 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 336 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyExit
# 337 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_PeekoExit
# 338 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 339 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 340 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 341 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 342 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 343 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 344 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 345 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 346 "data/maps/RusturfTunnel/scripts.pory"
	release
# 347 "data/maps/RusturfTunnel/scripts.pory"
	end
# 348 "data/maps/RusturfTunnel/scripts.pory"

# 349 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 350 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 351 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 352 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 353 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 354 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 355 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 356 "data/maps/RusturfTunnel/scripts.pory"

# 357 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 358 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 359 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 360 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 361 "data/maps/RusturfTunnel/scripts.pory"

# 362 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 363 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 364 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 365 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 366 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 368 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 369 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 370 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 371 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 372 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 373 "data/maps/RusturfTunnel/scripts.pory"

# 374 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 375 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 376 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 377 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 378 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 379 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 380 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 381 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 382 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 383 "data/maps/RusturfTunnel/scripts.pory"

# 384 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 385 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 386 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 387 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 389 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 391 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 392 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 393 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 394 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 395 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 396 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 397 "data/maps/RusturfTunnel/scripts.pory"

# 398 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 399 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 400 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 401 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 402 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 403 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 404 "data/maps/RusturfTunnel/scripts.pory"

# 405 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 406 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 407 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 408 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 409 "data/maps/RusturfTunnel/scripts.pory"

# 410 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 411 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 412 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 413 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 414 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 415 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 416 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 417 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 418 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 419 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 420 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 421 "data/maps/RusturfTunnel/scripts.pory"

# 422 "data/maps/RusturfTunnel/scripts.pory"
*/
# 423 "data/maps/RusturfTunnel/scripts.pory"

# 424 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 425 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 426 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 427 "data/maps/RusturfTunnel/scripts.pory"
	end
# 428 "data/maps/RusturfTunnel/scripts.pory"

# 429 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 430 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 431 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 432 "data/maps/RusturfTunnel/scripts.pory"

# 433 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 434 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 435 "data/maps/RusturfTunnel/scripts.pory"

# 436 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 437 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 438 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage POKéMON turned out to\n"
# 439 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 440 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 441 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 442 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 443 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 444 "data/maps/RusturfTunnel/scripts.pory"

# 445 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 446 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 447 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 448 "data/maps/RusturfTunnel/scripts.pory"

# 449 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 450 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 451 "data/maps/RusturfTunnel/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 452 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 453 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 454 "data/maps/RusturfTunnel/scripts.pory"
	.string "from DEVON.\p"
# 455 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 456 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 457 "data/maps/RusturfTunnel/scripts.pory"

# 458 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 459 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
# 460 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 461 "data/maps/RusturfTunnel/scripts.pory"

# 462 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 463 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 465 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 466 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 467 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 468 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 469 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 470 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 471 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 472 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 473 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 474 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 475 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 476 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 477 "data/maps/RusturfTunnel/scripts.pory"

# 478 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 479 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 480 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 481 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 482 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 483 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 484 "data/maps/RusturfTunnel/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 485 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 486 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 487 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 488 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 489 "data/maps/RusturfTunnel/scripts.pory"

# 490 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 491 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 492 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 493 "data/maps/RusturfTunnel/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 494 "data/maps/RusturfTunnel/scripts.pory"

# 495 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 496 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 497 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 498 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 499 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 500 "data/maps/RusturfTunnel/scripts.pory"

# 501 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 502 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 503 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 504 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 505 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 506 "data/maps/RusturfTunnel/scripts.pory"

# 507 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 508 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
# 509 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 510 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 511 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 512 "data/maps/RusturfTunnel/scripts.pory"

# 513 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 514 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 515 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 516 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 517 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 518 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 519 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"  
# 520 "data/maps/RusturfTunnel/scripts.pory"

# 521 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 522 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 523 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 524 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 525 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 526 "data/maps/RusturfTunnel/scripts.pory"

# 527 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 528 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
# 529 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 530 "data/maps/RusturfTunnel/scripts.pory"

# 531 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 532 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 533 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect POKéMON, right?\l"
# 534 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"

RusturfTunnel_EventScript_WandasBoyfriend::
# 541 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 542 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


RusturfTunnel_EventScript_ClearOutAqua::
# 547 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 548 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 549 "data/maps/RusturfTunnel/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 550 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_MATT
# 551 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT1
# 552 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT2
# 553 "data/maps/RusturfTunnel/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 554 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_LEVEL_CAP, 34
# 555 "data/maps/RusturfTunnel/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 556 "data/maps/RusturfTunnel/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 557 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


RusturfTunnel_EventScript_Grunt_M::
# 562 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_Grunt1Intro, RusturfTunnel_Text_Grunt1Defeated
# 563 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Grunt1Outro
# 564 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 565 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


RusturfTunnel_EventScript_AquaAdmin::
# 570 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_AQUA_ADMIN_RUSTURF, RusturfTunnel_Text_AdminIntro, RusturfTunnel_Text_AdminDefeated, RusturfTunnel_EventScript_ClearOutAqua
# 571 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


RusturfTunnel_EventScript_Grunt_F::
# 575 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL_2, RusturfTunnel_Text_Grunt2Intro, RusturfTunnel_Text_Grunt2Defeated
# 576 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Grunt2Outro
# 577 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 578 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


RusturfTunnel_EventScript_Wanda::
# 583 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 584 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_unset FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT, RusturfTunnel_EventScript_Wanda_2
RusturfTunnel_EventScript_Wanda_1:
# 587 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_Wanda_TunnelBlocked
# 588 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end

RusturfTunnel_EventScript_Wanda_2:
# 585 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_Wanda_AquaPresent
	goto RusturfTunnel_EventScript_Wanda_1


RusturfTunnel_EventScript_Wanda_AquaPresent::
# 593 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 594 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_4
# 595 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_Wanda_AquaPresent_3
# 598 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_Wanda_AquaPresent_4
# 601 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_Wanda_AquaPresent_5
RusturfTunnel_EventScript_Wanda_AquaPresent_1:
# 605 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 606 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end

RusturfTunnel_EventScript_Wanda_AquaPresent_3:
# 596 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_4, 1
# 597 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaTalksAqua, MSGBOX_NPC
	goto RusturfTunnel_EventScript_Wanda_AquaPresent_1

RusturfTunnel_EventScript_Wanda_AquaPresent_4:
# 599 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_4, 2
# 600 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaMissesBoyfriend, MSGBOX_NPC
	goto RusturfTunnel_EventScript_Wanda_AquaPresent_1

RusturfTunnel_EventScript_Wanda_AquaPresent_5:
# 602 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_4, 0
# 603 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaAsksForHelp, MSGBOX_NPC
	goto RusturfTunnel_EventScript_Wanda_AquaPresent_1


RusturfTunnel_EventScript_Wanda_TunnelBlocked::
# 611 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 612 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_Wanda_TunnelBlocked_Text_0, MSGBOX_NPC
# 613 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 614 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


RusturfTunnel_EventScript_RockTombHiker::
# 667 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 668 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 669 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_RockTombHiker_Text_0, MSGBOX_DEFAULT
# 670 "data/maps/RusturfTunnel/scripts.pory"
	checkitem ITEM_TM_ROCK_TOMB
# 671 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RusturfTunnel_EventScript_RockTombHiker_2
RusturfTunnel_EventScript_RockTombHiker_1:
# 677 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end

RusturfTunnel_EventScript_RockTombHiker_2:
# 672 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_RockTombHiker_Text_1, MSGBOX_DEFAULT
# 673 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 674 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 675 "data/maps/RusturfTunnel/scripts.pory"
	waitfanfare
	goto RusturfTunnel_EventScript_RockTombHiker_1


RusturfTunnel_EventScript_Wanda_TunnelBlocked_Text_0:
# 612 "data/maps/RusturfTunnel/scripts.pory"
	.string "Thank you for chasing Team Aqua out!$"

RusturfTunnel_EventScript_RockTombHiker_Text_0:
# 669 "data/maps/RusturfTunnel/scripts.pory"
	.string "You always have to be careful in caves,\n"
	.string "or you might fall into a fissure or get\l"
	.string "trapped by a rock slide.$"

RusturfTunnel_EventScript_RockTombHiker_Text_1:
# 672 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pokémon can use rocks to slow down\n"
	.string "opponents, too.$"

RusturfTunnel_Text_WandaTalksAqua::
# 618 "data/maps/RusturfTunnel/scripts.pory"
	.string "They finally announced they were going\n"
	.string "to finish the tunnel, and then these\l"
	.string "Team Aqua people showed up and chased\l"
	.string "out the workers.$"

RusturfTunnel_Text_WandaMissesBoyfriend::
# 622 "data/maps/RusturfTunnel/scripts.pory"
	.string "I just want to be able to see my\n"
	.string "boyfriend in Rustboro City again...$"

RusturfTunnel_Text_WandaAsksForHelp::
# 626 "data/maps/RusturfTunnel/scripts.pory"
	.string "Can you help us do something about\n"
	.string "Team Aqua?$"

RusturfTunnel_Text_Grunt1Intro::
# 630 "data/maps/RusturfTunnel/scripts.pory"
	.string "We won't let this cave be disturbed any\n"
	.string "further!$"

RusturfTunnel_Text_Grunt1Defeated::
# 634 "data/maps/RusturfTunnel/scripts.pory"
	.string "I couldn't hold you back...$"

RusturfTunnel_Text_Grunt1Outro::
# 638 "data/maps/RusturfTunnel/scripts.pory"
	.string "You may have gotten past me, but Team\n"
	.string "Aqua will never give up!$"

RusturfTunnel_Text_Grunt2Intro::
# 642 "data/maps/RusturfTunnel/scripts.pory"
	.string "When they first started digging this\n"
	.string "tunnel, the drills and machines they use\l"
	.string "disturbed the Pokémon living here.$"

RusturfTunnel_Text_Grunt2Defeated::
# 646 "data/maps/RusturfTunnel/scripts.pory"
	.string "We're trying to be as strong as stone...\n"
	.string "but we got crushed.$"

RusturfTunnel_Text_Grunt2Outro::
# 650 "data/maps/RusturfTunnel/scripts.pory"
	.string "They say that they've learned their\n"
	.string "lesson and will be more careful\l"
	.string "finishing the tunnel, but we don't trust\l"
	.string "them.$"

RusturfTunnel_Text_AdminOutro::
# 654 "data/maps/RusturfTunnel/scripts.pory"
	.string "People just won't learn their lesson.\n"
	.string "You want to open this tunnel so badly?\l"
	.string "Fine. We'll focus our efforts elsewhere.$"

RusturfTunnel_Text_AdminDefeated::
# 658 "data/maps/RusturfTunnel/scripts.pory"
	.string "I hope you know what you're doing.$"

RusturfTunnel_Text_AdminIntro::
# 662 "data/maps/RusturfTunnel/scripts.pory"
	.string "People decide they need a new path, and\n"
	.string "break through whatever is in their way\l"
	.string "to get there.\p"
	.string "We've seen how bad things can go when\n"
	.string "the natural world isn't respected.\p"
	.string "If nature can't defend itself, we'll\n"
	.string "step up and be its protectors!$"
