SlateportFarm_MapScripts::
	.byte 0


SlateportFarm_EventScript_HelpAquaAdmin::
# 16 "data/maps/SlateportFarm/scripts.pory"
	lock
# 17 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_FacePlayer
# 18 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_0, MSGBOX_YESNO
# 19 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportFarm_EventScript_HelpAquaAdmin_2
SlateportFarm_EventScript_HelpAquaAdmin_1:
# 32 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_2
# 33 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 34 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_FaceUp
# 35 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 36 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end

SlateportFarm_EventScript_HelpAquaAdmin_2:
# 20 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_1
# 21 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 22 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 24 "data/maps/SlateportFarm/scripts.pory"
	special SavePlayerParty
# 25 "data/maps/SlateportFarm/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 26 "data/maps/SlateportFarm/scripts.pory"
	special ChooseHalfPartyForBattle
# 27 "data/maps/SlateportFarm/scripts.pory"
	waitstate
# 28 "data/maps/SlateportFarm/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportFarm_EventScript_MultiAgainstMagma
# 29 "data/maps/SlateportFarm/scripts.pory"
	special LoadPlayerParty
	goto SlateportFarm_EventScript_HelpAquaAdmin_1


# 40 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_BomberGruntMovement:
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 44 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_MultiBomberGruntMovement:
# 45 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 45 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 45 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 46 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 46 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 46 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 46 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 46 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

SlateportFarm_EventScript_HelpMagmaAdmin::
# 50 "data/maps/SlateportFarm/scripts.pory"
	lock
# 51 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FacePlayer
# 52 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpMagmaAdmin_Text_0, MSGBOX_YESNO
# 53 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportFarm_EventScript_HelpMagmaAdmin_2
SlateportFarm_EventScript_HelpMagmaAdmin_1:
# 68 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpMagmaAdmin_Text_1
# 69 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 70 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FaceDown
# 71 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 72 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end

SlateportFarm_EventScript_HelpMagmaAdmin_2:
# 54 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_1
# 55 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 57 "data/maps/SlateportFarm/scripts.pory"
	special SavePlayerParty
# 58 "data/maps/SlateportFarm/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 59 "data/maps/SlateportFarm/scripts.pory"
	special ChooseHalfPartyForBattle
# 60 "data/maps/SlateportFarm/scripts.pory"
	waitstate
# 61 "data/maps/SlateportFarm/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportFarm_EventScript_MultiAgainstAqua
# 62 "data/maps/SlateportFarm/scripts.pory"
	special LoadPlayerParty
	goto SlateportFarm_EventScript_HelpMagmaAdmin_1


SlateportFarm_EventScript_MultiAgainstMagma::
# 93 "data/maps/SlateportFarm/scripts.pory"
	lock
# 94 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_FaceUp
# 95 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 96 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 97 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 98 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceRight
# 99 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 100 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MultiAgainstMagma_Text_0
# 101 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 102 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FaceDown
# 103 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAMULTIGRUNT, GruntJoinMultibattle
# 104 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 105 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAMULTIGRUNT, Common_Movement_FaceDown
# 106 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 107 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 108 "data/maps/SlateportFarm/scripts.pory"
	multi_2_vs_2 TRAINER_MAGMA_ADMIN_FARM, SlateportFarm_BeatMagmaAdminMultiText, TRAINER_MAGMA_MULTI_GRUNT_FARM, SlateportFarm_BeatMagmaGruntMultiText, PARTNER_AQUA
# 109 "data/maps/SlateportFarm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 110 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportFarm_EventScript_MultiAgainstMagma_1
	return

SlateportFarm_EventScript_MultiAgainstMagma_1:
# 111 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_AquaVictory
# 112 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


# 117 "data/maps/SlateportFarm/scripts.pory"
GruntJoinMultibattle:
# 118 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 118 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 118 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 118 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 118 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 118 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 118 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 118 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
	step_end

# 121 "data/maps/SlateportFarm/scripts.pory"
StepToTheLeft:
# 122 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

SlateportFarm_EventScript_MultiAgainstAqua::
# 126 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FaceDown
# 127 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 128 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 129 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 130 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceRight
# 131 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 132 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MultiAgainstAqua_Text_0
# 133 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 134 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 135 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_FaceUp
# 136 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, GruntJoinMultibattle
# 137 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 138 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, Common_Movement_FaceUp
# 139 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 140 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 141 "data/maps/SlateportFarm/scripts.pory"
	multi_2_vs_2 TRAINER_AQUA_ADMIN_FARM, SlateportFarm_BeatAquaAdminMultiText, TRAINER_AQUA_MULTI_GRUNT_FARM, SlateportFarm_BeatAquaGruntMultiText, PARTNER_MAGMA
# 142 "data/maps/SlateportFarm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 143 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportFarm_EventScript_MultiAgainstAqua_2
SlateportFarm_EventScript_MultiAgainstAqua_1:
# 146 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end

SlateportFarm_EventScript_MultiAgainstAqua_2:
# 144 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_MagmaVictory
	goto SlateportFarm_EventScript_MultiAgainstAqua_1


SlateportFarm_EventScript_AquaVictory::
# 151 "data/maps/SlateportFarm/scripts.pory"
	lock
# 152 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 153 "data/maps/SlateportFarm/scripts.pory"
	setobjectxy LOCALID_FARM_AQUAGRUNTBOMBER, 27, 35
# 154 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_0
# 155 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 156 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 157 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceRight
# 158 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, Common_Movement_FaceLeft
# 159 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 160 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_1
# 161 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceRight
# 162 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAMULTIGRUNT, Common_Movement_FaceLeft
# 163 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 164 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_2
# 165 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 166 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 167 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, SlateportFarm_Movement_AquaLeavesInDefeat
# 168 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAMULTIGRUNT, SlateportFarm_Movement_AquaLeavesInDefeat
# 169 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 170 "data/maps/SlateportFarm/scripts.pory"
	removeobject LOCALID_FARM_MAGMAADMIN
# 171 "data/maps/SlateportFarm/scripts.pory"
	removeobject LOCALID_FARM_MAGMAMULTIGRUNT
# 172 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 173 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_AQUAGRUNTBOMBER
# 174 "data/maps/SlateportFarm/scripts.pory"
	setobjectxy LOCALID_FARM_AQUAGRUNTBOMBER, 27, 35
# 175 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAGRUNTBOMBER, SlateportFarm_BomberGruntMovement
# 176 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, SlateportFarm_MultiBomberGruntMovement
# 177 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 178 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAGRUNTBOMBER, Common_Movement_FaceDown
# 179 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, Common_Movement_FaceDown
# 180 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 181 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 182 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_ELECTRODEFARRIGHT
# 183 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_ELECTRODECENTERRIGHT
# 184 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 185 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAGRUNTBOMBER, SlateportFarm_Movement_AquaGrunts4StepLeft
# 186 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, SlateportFarm_Movement_AquaGrunts4StepLeft
# 187 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 188 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAGRUNTBOMBER, Common_Movement_FaceDown
# 189 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, Common_Movement_FaceDown
# 190 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 191 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 192 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_ELECTRODEFARLEFT
# 193 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_ELECTRODECENTERLEFT
# 194 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 195 "data/maps/SlateportFarm/scripts.pory"
	removeobject 10
# 196 "data/maps/SlateportFarm/scripts.pory"
	removeobject 11
# 197 "data/maps/SlateportFarm/scripts.pory"
	removeobject 12
# 198 "data/maps/SlateportFarm/scripts.pory"
	removeobject 13
# 200 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceRight
# 201 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 202 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 203 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_3
# 204 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 205 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceFasterUp
# 206 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 207 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_4
# 208 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 209 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceRight
# 210 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 211 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_5
# 212 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 213 "data/maps/SlateportFarm/scripts.pory"
	giveitem ITEM_HM01
# 214 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 215 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 217 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_BrawlyRescuePlayer
# 218 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 219 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, Common_Movement_FaceDown
# 220 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 221 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 222 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_6
# 223 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 224 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 225 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 226 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_AquaLeavesInDefeat
# 227 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportFarm_Movement_AquaLeavesInDefeat
# 228 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 229 "data/maps/SlateportFarm/scripts.pory"
	clearflag FLAG_SLATEPORT_FARM_COMPLETED
# 230 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_BAY_FLOODED
# 234 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 236 "data/maps/SlateportFarm/scripts.pory"
	warp MAP_SLATEPORT_CITY_FARM_CORRIDOR, 8, 4
# 237 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 238 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaVictory::
# 243 "data/maps/SlateportFarm/scripts.pory"
	lock
# 244 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 245 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 246 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanDown
# 247 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 248 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_0
# 249 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 250 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 251 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_BrawlyChaseAqua
# 253 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 254 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 255 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_1
# 256 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceFasterUp
# 257 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 258 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_2
# 259 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 260 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 261 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, SlateportFarm_Movement_AquaLeavesInDefeat
# 262 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, SlateportFarm_Movement_AquaLeavesInDefeat
# 263 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 264 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceRight
# 265 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 266 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 267 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceDown
# 268 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 269 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_3
# 270 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 271 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, Common_Movement_WalkInPlaceFasterUp
# 272 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 273 "data/maps/SlateportFarm/scripts.pory"
	delay 10
# 274 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_4
# 275 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 276 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceDown
# 277 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_5
# 278 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 279 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceRight
# 280 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 281 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 282 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_6
# 283 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 284 "data/maps/SlateportFarm/scripts.pory"
	giveitem ITEM_HM01
# 285 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 286 "data/maps/SlateportFarm/scripts.pory"
	removeobject LOCALID_MAGMAADMINMON
# 287 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 288 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, SlateportFarm_Movement_MagmaLeaves
# 289 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 290 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 292 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_BrawlyApproachPlayer
# 293 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 294 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, Common_Movement_WalkInPlaceRight
# 295 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 296 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 297 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_7
# 298 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 299 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_MagmaLeaves
# 300 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 301 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_FARM_COMPLETED
# 302 "data/maps/SlateportFarm/scripts.pory"
	removeobject 1
# 303 "data/maps/SlateportFarm/scripts.pory"
	removeobject 2
# 304 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 305 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 306 "data/maps/SlateportFarm/scripts.pory"
	removeobject 5
# 307 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 308 "data/maps/SlateportFarm/scripts.pory"
	removeobject 7
# 309 "data/maps/SlateportFarm/scripts.pory"
	removeobject 8
# 310 "data/maps/SlateportFarm/scripts.pory"
	removeobject 9
# 311 "data/maps/SlateportFarm/scripts.pory"
	removeobject 10
# 312 "data/maps/SlateportFarm/scripts.pory"
	removeobject 11
# 313 "data/maps/SlateportFarm/scripts.pory"
	removeobject 12
# 314 "data/maps/SlateportFarm/scripts.pory"
	removeobject 13
# 315 "data/maps/SlateportFarm/scripts.pory"
	removeobject 14
# 316 "data/maps/SlateportFarm/scripts.pory"
	removeobject 15
# 317 "data/maps/SlateportFarm/scripts.pory"
	removeobject 16
# 318 "data/maps/SlateportFarm/scripts.pory"
	removeobject 17
# 319 "data/maps/SlateportFarm/scripts.pory"
	removeobject 18
# 320 "data/maps/SlateportFarm/scripts.pory"
	removeobject 19
# 321 "data/maps/SlateportFarm/scripts.pory"
	removeobject 20
# 322 "data/maps/SlateportFarm/scripts.pory"
	removeobject 21
# 323 "data/maps/SlateportFarm/scripts.pory"
	removeobject 22
# 324 "data/maps/SlateportFarm/scripts.pory"
	removeobject 23
# 325 "data/maps/SlateportFarm/scripts.pory"
	removeobject 24
# 326 "data/maps/SlateportFarm/scripts.pory"
	removeobject 25
# 327 "data/maps/SlateportFarm/scripts.pory"
	removeobject 26
# 328 "data/maps/SlateportFarm/scripts.pory"
	removeobject 27
# 329 "data/maps/SlateportFarm/scripts.pory"
	removeobject 28
# 330 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanUp
# 331 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 332 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 333 "data/maps/SlateportFarm/scripts.pory"
	setvar VAR_LEVEL_CAP, 24
# 334 "data/maps/SlateportFarm/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 335 "data/maps/SlateportFarm/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 336 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


# 340 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyChaseAqua:
# 341 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_down
# 342 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 342 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 342 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 342 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 342 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
	step_end

# 345 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyRescuePlayer:
# 346 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 346 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 346 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 346 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 346 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 346 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 346 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
	step_end

# 349 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaGruntsArrive:
# 350 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 351 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 354 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaGrunts4StepLeft:
# 355 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 355 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 355 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 355 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 358 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanDown:
# 359 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 359 "data/maps/SlateportFarm/scripts.pory"
	walk_down
	step_end

# 362 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanUp:
# 363 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 363 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

# 366 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaLeavesInDefeat:
# 367 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 367 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 367 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 367 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 367 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 367 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 367 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 367 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 367 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 370 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_MagmaLeaves:
# 371 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 372 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 372 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 372 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 372 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 372 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 372 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 372 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 372 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 372 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 375 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyApproachPlayer:
# 376 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 377 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 377 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 377 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

SlateportFarm_EventScript_AquaGrunt::
# 381 "data/maps/SlateportFarm/scripts.pory"
	lock
# 382 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaGrunt_Text_0
# 383 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 384 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGrunt::
# 389 "data/maps/SlateportFarm/scripts.pory"
	lock
# 390 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaGrunt_Text_0
# 391 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 392 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGruntBattle::
# 397 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_1, SlateportFarm_MagmaGruntIntroText, SlateportFarm_MagmaGruntDefeatText
	end


SlateportFarm_EventScript_AquaGruntBattle::
# 402 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_2, SlateportFarm_AquaGruntIntroText, SlateportFarm_AquaGruntDefeatText
	end


SlateportFarm_EventScript_PokemonBattling::
# 432 "data/maps/SlateportFarm/scripts.pory"
	lock
# 433 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_PokemonBattlingText
# 434 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 435 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_BoyInGrass::
# 440 "data/maps/SlateportFarm/scripts.pory"
	lock
# 441 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_BoyInGrass_Text_0, MSGBOX_NPC
# 442 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_OldWomanByHouse::
# 447 "data/maps/SlateportFarm/scripts.pory"
	lock
# 448 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_OldWomanByHouse_Text_0, MSGBOX_NPC
# 449 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_ManByTrees::
# 454 "data/maps/SlateportFarm/scripts.pory"
	lock
# 455 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_ManByTrees_Text_0, MSGBOX_NPC
# 456 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_WomanByFlowers::
# 461 "data/maps/SlateportFarm/scripts.pory"
	lock
# 462 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_WomanByFlowers_Text_0, MSGBOX_NPC
# 463 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_HelpAquaAdmin_Text_0:
# 18 "data/maps/SlateportFarm/scripts.pory"
	.string "Are you here to help us defeat these\n"
	.string "fools from Team Magma and fix the\l"
	.string "damage they've done to Slateport Bay?$"

SlateportFarm_EventScript_HelpAquaAdmin_Text_1:
# 20 "data/maps/SlateportFarm/scripts.pory"
	.string "Wonderful! Grab some Pokémon and help\n"
	.string "me out here!$"

SlateportFarm_EventScript_HelpAquaAdmin_Text_2:
# 32 "data/maps/SlateportFarm/scripts.pory"
	.string "Then get out of the way! We have\n"
	.string "important work to do!$"

SlateportFarm_EventScript_HelpMagmaAdmin_Text_0:
# 52 "data/maps/SlateportFarm/scripts.pory"
	.string "Are you here to help us defeat these\n"
	.string "rebels from Team Aqua and protect the\l"
	.string "vital Slateport Farms?$"

SlateportFarm_EventScript_HelpMagmaAdmin_Text_1:
# 68 "data/maps/SlateportFarm/scripts.pory"
	.string "Then get out of the way! We need to\n"
	.string "stop them!$"

SlateportFarm_EventScript_MultiAgainstMagma_Text_0:
# 100 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: I need some help over\n"
	.string "here!$"

SlateportFarm_EventScript_MultiAgainstAqua_Text_0:
# 132 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: I need some help over here!$"

SlateportFarm_EventScript_AquaVictory_Text_0:
# 154 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: No... You've defeated our\n"
	.string "Pokémon...$"

SlateportFarm_EventScript_AquaVictory_Text_1:
# 160 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: Now is our opportunity! Bring the\n"
	.string "Pokémon!$"

SlateportFarm_EventScript_AquaVictory_Text_2:
# 164 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: We must retreat. We can't stop\n"
	.string "them, and we don't want to be here when\l"
	.string "they bring down the barrier.$"

SlateportFarm_EventScript_AquaVictory_Text_3:
# 203 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: I'm glad you came. The geniuses\n"
	.string "that call themselves Team Magma built\l"
	.string "this wall to close off Slateport Bay.\p"
	.string "They said they were going to make new\n"
	.string "land for farms.\l"
	.string "But they didn't tell us how bad it would\l"
	.string "be for sealife around Slateport.\l"
	.string "Many Pokémon lost their habitat, and\l"
	.string "lots of us lost our way of life.$"

SlateportFarm_EventScript_AquaVictory_Text_4:
# 207 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: But today we're going to fix all\n"
	.string "that.$"

SlateportFarm_EventScript_AquaVictory_Text_5:
# 211 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: As thanks for your help, take\n"
	.string "this. It will allow you to trim down\l"
	.string "trees, once your Pokémon are strong\l"
	.string "enough to use it.\p"
	.string "The small trees grow back fairly\n"
	.string "quickly, and you've proven yourself\l"
	.string "responsible.$"

SlateportFarm_EventScript_AquaVictory_Text_6:
# 222 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: These Electrode are going to\n"
	.string "explode! We need to get out of here\l"
	.string "immediately!$"

SlateportFarm_EventScript_MagmaVictory_Text_0:
# 248 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: Tch... You've defeated our\n"
	.string "Pokémon.$"

SlateportFarm_EventScript_MagmaVictory_Text_1:
# 255 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: You can't just take matters\n"
	.string "into your own hands like this!\p"
	.string "The people of Slateport chose to\n"
	.string "develop these farms, and they have\l"
	.string "already been established.\p"
	.string "I'm sorry, but that's the situation. Now\n"
	.string "go!$"

SlateportFarm_EventScript_MagmaVictory_Text_2:
# 258 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: We are not going to forget the\n"
	.string "harm they've done, and we will not give\l"
	.string "up.\p"
	.string "We will not allow a few fools to destroy\n"
	.string "the delicate natural balance we all rely\l"
	.string "on.\p"
	.string "We will be back.$"

SlateportFarm_EventScript_MagmaVictory_Text_3:
# 269 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: Thank you both for your help.\p"
	.string "I hate to think what Team Aqua would\n"
	.string "have done to them in their attempt to\l"
	.string "'fix' Slateport Bay.$"

SlateportFarm_EventScript_MagmaVictory_Text_4:
# 274 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: I agree, but they have a point\n"
	.string "about some of the consequences of the\l"
	.string "land reclamation project...$"

SlateportFarm_EventScript_MagmaVictory_Text_5:
# 277 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: Like it or not, Hoenn is\n"
	.string "growing at a rapid rate.\p"
	.string "It might be painful at times, but the\n"
	.string "scientists at Team Magma will not sit on\l"
	.string "the sidelines for a looming resource\l"
	.string "crisis.$"

SlateportFarm_EventScript_MagmaVictory_Text_6:
# 282 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: Take this as a token of our\n"
	.string "appreciation.\p"
	.string "This field move will allow you to cut\n"
	.string "down small trees blocking your path,\l"
	.string "once your Pokémon are strong enough to\l"
	.string "use it.\p"
	.string "It's sometimes necessary to bend the\n"
	.string "environment around us to move forward.$"

SlateportFarm_EventScript_MagmaVictory_Text_7:
# 297 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: You don't look like a member of\n"
	.string "Team Magma.\p"
	.string "Oh! You're a Pokémon Trainer! I'm Brawly,\n"
	.string "the Dewford Gym Leader.\p"
	.string "...Oh! You came here looking for me!\p"
	.string "I'll head back to Dewford. Come by soon,\n"
	.string "I look forward to your challenge!$"

SlateportFarm_EventScript_AquaGrunt_Text_0:
# 382 "data/maps/SlateportFarm/scripts.pory"
	.string "I don't have time for you! We're trying\n"
	.string "to return Slateport Bay to its natural\l"
	.string "state!$"

SlateportFarm_EventScript_MagmaGrunt_Text_0:
# 390 "data/maps/SlateportFarm/scripts.pory"
	.string "I can't speak now! We're trying to stop\n"
	.string "Team Aqua from destroying Slateport\l"
	.string "Farm!$"

SlateportFarm_EventScript_BoyInGrass_Text_0:
# 441 "data/maps/SlateportFarm/scripts.pory"
	.string "I saw you up there defending our farm -\n"
	.string "thank you.$"

SlateportFarm_EventScript_OldWomanByHouse_Text_0:
# 448 "data/maps/SlateportFarm/scripts.pory"
	.string "I used to work on a farm in Johto.\p"
	.string "When I heard they needed folks to\n"
	.string "develop new farmland in Hoenn, I moved\l"
	.string "with my family out here.$"

SlateportFarm_EventScript_ManByTrees_Text_0:
# 455 "data/maps/SlateportFarm/scripts.pory"
	.string "I take care of the trees in the farm -\n"
	.string "growing them, pruning them, picking\l"
	.string "berries and fruit, and eventually\l"
	.string "cutting them.\p"
	.string "Many Pokémon make nests in the trees,\n"
	.string "or feed in them.$"

SlateportFarm_EventScript_WomanByFlowers_Text_0:
# 462 "data/maps/SlateportFarm/scripts.pory"
	.string "It's scary that some people tried\n"
	.string "destroying our farm.\p"
	.string "I've worked so hard growing these\n"
	.string "lovely flowers.$"

SlateportFarm_BeatMagmaAdminMultiText::
# 76 "data/maps/SlateportFarm/scripts.pory"
	.string "We won't let you destroy these farms!$"

SlateportFarm_BeatMagmaGruntMultiText::
# 80 "data/maps/SlateportFarm/scripts.pory"
	.string "We couldn't stop them...$"

SlateportFarm_BeatAquaAdminMultiText::
# 84 "data/maps/SlateportFarm/scripts.pory"
	.string "We won't let you get away with the harm\n"
	.string "you've done to Slateport!$"

SlateportFarm_BeatAquaGruntMultiText::
# 88 "data/maps/SlateportFarm/scripts.pory"
	.string "It seems the damage is done...$"

SlateportFarm_MagmaGruntIntroText::
# 411 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Aqua is trying to undo all the work\n"
	.string "to build new farms in Slateport! I'm not\l"
	.string "letting anyone else get to the wall.$"

SlateportFarm_MagmaGruntDefeatText::
# 415 "data/maps/SlateportFarm/scripts.pory"
	.string "These farms are too important to lose!$"

SlateportFarm_AquaGruntIntroText::
# 419 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Magma's land reclamation project\n"
	.string "ruined the Slateport Bay, and tainted\l"
	.string "the seas all around the city! We're\l"
	.string "going to revitalize the area, one way or\l"
	.string "another!$"

SlateportFarm_AquaGruntDefeatText::
# 423 "data/maps/SlateportFarm/scripts.pory"
	.string "We can't sit by and watch as Slateport\n"
	.string "suffers from pollution.$"

SlateportFarm_PokemonBattlingText::
# 427 "data/maps/SlateportFarm/scripts.pory"
	.string "These Pokémon are engaged in a battle.$"
