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
	msgbox SlateportFarm_EventScript_AquaVictory_Text_2
# 162 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 163 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 164 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, SlateportFarm_Movement_AquaLeavesInDefeat
# 165 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAMULTIGRUNT, SlateportFarm_Movement_AquaLeavesInDefeat
# 166 "data/maps/SlateportFarm/scripts.pory"
	waitmovement LOCALID_FARM_MAGMAADMIN
# 167 "data/maps/SlateportFarm/scripts.pory"
	waitmovement LOCALID_FARM_MAGMAMULTIGRUNT
# 168 "data/maps/SlateportFarm/scripts.pory"
	removeobject LOCALID_FARM_MAGMAADMIN
# 169 "data/maps/SlateportFarm/scripts.pory"
	removeobject LOCALID_FARM_MAGMAMULTIGRUNT
# 170 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 171 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_AQUAGRUNTBOMBER
# 172 "data/maps/SlateportFarm/scripts.pory"
	setobjectxy LOCALID_FARM_AQUAGRUNTBOMBER, 27, 35
# 173 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAGRUNTBOMBER, SlateportFarm_BomberGruntMovement
# 174 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, SlateportFarm_MultiBomberGruntMovement
# 175 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 176 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAGRUNTBOMBER, Common_Movement_FaceDown
# 177 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, Common_Movement_FaceDown
# 178 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 179 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 180 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_ELECTRODEFARRIGHT
# 181 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_ELECTRODECENTERRIGHT
# 182 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 183 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAGRUNTBOMBER, SlateportFarm_Movement_AquaGrunts4StepLeft
# 184 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, SlateportFarm_Movement_AquaGrunts4StepLeft
# 185 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 186 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAGRUNTBOMBER, Common_Movement_FaceDown
# 187 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, Common_Movement_FaceDown
# 188 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 189 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 190 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_ELECTRODEFARLEFT
# 191 "data/maps/SlateportFarm/scripts.pory"
	addobject LOCALID_FARM_ELECTRODECENTERLEFT
# 192 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 193 "data/maps/SlateportFarm/scripts.pory"
	removeobject 10
# 194 "data/maps/SlateportFarm/scripts.pory"
	removeobject 11
# 195 "data/maps/SlateportFarm/scripts.pory"
	removeobject 12
# 196 "data/maps/SlateportFarm/scripts.pory"
	removeobject 13
# 198 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceRight
# 199 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 200 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 201 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_3
# 202 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 204 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_FaceUp
# 205 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 206 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_4
# 207 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 208 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_FaceRight
# 209 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 210 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_5
# 211 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 212 "data/maps/SlateportFarm/scripts.pory"
	giveitem ITEM_HM01
# 213 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 214 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 216 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_BrawlyRescuePlayer
# 217 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 218 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, Common_Movement_FaceDown
# 219 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 220 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 221 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_6
# 222 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 223 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 224 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 225 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_AquaLeavesInDefeat
# 226 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportFarm_Movement_AquaLeavesInDefeat
# 227 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 228 "data/maps/SlateportFarm/scripts.pory"
	clearflag FLAG_SLATEPORT_FARM_COMPLETED
# 229 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_BAY_FLOODED
# 233 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 235 "data/maps/SlateportFarm/scripts.pory"
	warp MAP_SLATEPORT_CITY_FARM_CORRIDOR, 8, 4
# 236 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 237 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaVictory::
# 242 "data/maps/SlateportFarm/scripts.pory"
	lock
# 243 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 244 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 245 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanDown
# 246 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 247 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_0
# 248 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 249 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 250 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_BrawlyChaseAqua
# 252 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 30
# 253 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_1
# 254 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_2
# 255 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 256 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 257 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, SlateportFarm_Movement_AquaLeavesInDefeat
# 258 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, SlateportFarm_Movement_AquaLeavesInDefeat
# 259 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 260 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FaceRight
# 261 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 262 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 263 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FaceDown
# 264 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 265 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_3
# 266 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 267 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, Common_Movement_FaceUp
# 268 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 269 "data/maps/SlateportFarm/scripts.pory"
	delay 10
# 270 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_4
# 271 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_5
# 272 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 273 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FaceRight
# 274 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 275 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 276 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_6
# 277 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 278 "data/maps/SlateportFarm/scripts.pory"
	giveitem ITEM_HM01
# 279 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 280 "data/maps/SlateportFarm/scripts.pory"
	removeobject LOCALID_MAGMAADMINMON
# 281 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 282 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, SlateportFarm_Movement_MagmaLeaves
# 283 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 284 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 286 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_BrawlyApproachPlayer
# 287 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 288 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, Common_Movement_FaceRight
# 289 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 290 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 291 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_7
# 292 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 293 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_MagmaLeaves
# 294 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 295 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_FARM_COMPLETED
# 296 "data/maps/SlateportFarm/scripts.pory"
	removeobject 1
# 297 "data/maps/SlateportFarm/scripts.pory"
	removeobject 2
# 298 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 299 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 300 "data/maps/SlateportFarm/scripts.pory"
	removeobject 5
# 301 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 302 "data/maps/SlateportFarm/scripts.pory"
	removeobject 7
# 303 "data/maps/SlateportFarm/scripts.pory"
	removeobject 8
# 304 "data/maps/SlateportFarm/scripts.pory"
	removeobject 9
# 305 "data/maps/SlateportFarm/scripts.pory"
	removeobject 10
# 306 "data/maps/SlateportFarm/scripts.pory"
	removeobject 11
# 307 "data/maps/SlateportFarm/scripts.pory"
	removeobject 12
# 308 "data/maps/SlateportFarm/scripts.pory"
	removeobject 13
# 309 "data/maps/SlateportFarm/scripts.pory"
	removeobject 14
# 310 "data/maps/SlateportFarm/scripts.pory"
	removeobject 15
# 311 "data/maps/SlateportFarm/scripts.pory"
	removeobject 16
# 312 "data/maps/SlateportFarm/scripts.pory"
	removeobject 17
# 313 "data/maps/SlateportFarm/scripts.pory"
	removeobject 18
# 314 "data/maps/SlateportFarm/scripts.pory"
	removeobject 19
# 315 "data/maps/SlateportFarm/scripts.pory"
	removeobject 20
# 316 "data/maps/SlateportFarm/scripts.pory"
	removeobject 21
# 317 "data/maps/SlateportFarm/scripts.pory"
	removeobject 22
# 318 "data/maps/SlateportFarm/scripts.pory"
	removeobject 23
# 319 "data/maps/SlateportFarm/scripts.pory"
	removeobject 24
# 320 "data/maps/SlateportFarm/scripts.pory"
	removeobject 25
# 321 "data/maps/SlateportFarm/scripts.pory"
	removeobject 26
# 322 "data/maps/SlateportFarm/scripts.pory"
	removeobject 27
# 323 "data/maps/SlateportFarm/scripts.pory"
	removeobject 28
# 324 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanUp
# 325 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 326 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 327 "data/maps/SlateportFarm/scripts.pory"
	setvar VAR_LEVEL_CAP, 24
# 328 "data/maps/SlateportFarm/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 329 "data/maps/SlateportFarm/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 330 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


# 334 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyChaseAqua:
# 335 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_down
# 336 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 336 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 336 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 336 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 336 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
	step_end

# 339 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyRescuePlayer:
# 340 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 340 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 340 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 340 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 340 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 340 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 340 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
	step_end

# 343 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaGruntsArrive:
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 345 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 348 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaGrunts4StepLeft:
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 352 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanDown:
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_down
	step_end

# 356 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanUp:
# 357 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 357 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

# 360 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaLeavesInDefeat:
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 364 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_MagmaLeaves:
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 366 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 366 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 366 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 366 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 366 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 366 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 366 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 366 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 366 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 369 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyApproachPlayer:
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 371 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 371 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 371 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

SlateportFarm_EventScript_AquaGrunt::
# 375 "data/maps/SlateportFarm/scripts.pory"
	lock
# 376 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaGrunt_Text_0
# 377 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 378 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGrunt::
# 383 "data/maps/SlateportFarm/scripts.pory"
	lock
# 384 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaGrunt_Text_0
# 385 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 386 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGruntBattle::
# 391 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_1, SlateportFarm_MagmaGruntIntroText, SlateportFarm_MagmaGruntDefeatText
	end


SlateportFarm_EventScript_AquaGruntBattle::
# 396 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_2, SlateportFarm_AquaGruntIntroText, SlateportFarm_AquaGruntDefeatText
	end


SlateportFarm_EventScript_PokemonBattling::
# 426 "data/maps/SlateportFarm/scripts.pory"
	lock
# 427 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_PokemonBattlingText
# 428 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 429 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_BoyInGrass::
# 434 "data/maps/SlateportFarm/scripts.pory"
	lock
# 435 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_BoyInGrass_Text_0, MSGBOX_NPC
# 436 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_OldWomanByHouse::
# 441 "data/maps/SlateportFarm/scripts.pory"
	lock
# 442 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_OldWomanByHouse_Text_0, MSGBOX_NPC
# 443 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_ManByTrees::
# 448 "data/maps/SlateportFarm/scripts.pory"
	lock
# 449 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_ManByTrees_Text_0, MSGBOX_NPC
# 450 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_WomanByFlowers::
# 455 "data/maps/SlateportFarm/scripts.pory"
	lock
# 456 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_WomanByFlowers_Text_0, MSGBOX_NPC
# 457 "data/maps/SlateportFarm/scripts.pory"
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
	.string "Magma Admin: No... You've defeated our\n"
	.string "Pokémon...$"

SlateportFarm_EventScript_AquaVictory_Text_1:
# 160 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: Now is our opportunity!\n"
	.string "Bring the Pokémon!$"

SlateportFarm_EventScript_AquaVictory_Text_2:
# 161 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: We must fall back. We don't\n"
	.string "have the strength to stop them, and we\l"
	.string "don't want to be here when they bring\l"
	.string "down the wall.$"

SlateportFarm_EventScript_AquaVictory_Text_3:
# 201 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: I'm glad you arrived. The\n"
	.string "geniuses that now call themselves Team\l"
	.string "Magma built this wall to close off\l"
	.string "Slateport Bay. They said they were\l"
	.string "going to make new land for farms - what\l"
	.string "they didn't tell us was how badly it\l"
	.string "would devastate the sealife around\l"
	.string "Slateport. Many Pokémon lost their\l"
	.string "habitat, and many of us lost our way of\l"
	.string "life.$"

SlateportFarm_EventScript_AquaVictory_Text_4:
# 206 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: But today we're going to\n"
	.string "bring down this wall, and fix all that.$"

SlateportFarm_EventScript_AquaVictory_Text_5:
# 210 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: As a reward for your help,\n"
	.string "take this. It's a field move that will\l"
	.string "allow you to trim down trees, once your\l"
	.string "Pokémon are strong enough to use it.\p"
	.string "The small trees grow back fairly\n"
	.string "quickly, and you've proven yourself\l"
	.string "responsible enough to use it.$"

SlateportFarm_EventScript_AquaVictory_Text_6:
# 221 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: These Electrode are going to\n"
	.string "explode! We need to get out of here\l"
	.string "immediately!$"

SlateportFarm_EventScript_MagmaVictory_Text_0:
# 247 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: Tch... You've defeated our\n"
	.string "Pokémon.$"

SlateportFarm_EventScript_MagmaVictory_Text_1:
# 253 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: You can't just take matters\n"
	.string "into your own hands like that! The\l"
	.string "people of Slateport chose to develop\l"
	.string "these farms, and they have already\l"
	.string "been setup. I'm sorry, but that's the\l"
	.string "situation. Now go!$"

SlateportFarm_EventScript_MagmaVictory_Text_2:
# 254 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: We are not going to forget\n"
	.string "the harm done by this 'land\l"
	.string "reclamation', and we will not give up. We\l"
	.string "will not allow Team Magma and the\l"
	.string "shortsighted few of Hoenn to destroy\l"
	.string "the delicate natural balance all people\l"
	.string "and Pokémon rely on.\p"
	.string "We will be back.$"

SlateportFarm_EventScript_MagmaVictory_Text_3:
# 265 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: Thank you both for your\n"
	.string "help. The people of Slateport need\l"
	.string "these farms, and I shudder to think\l"
	.string "what Team Aqua would have done to them\l"
	.string "in their attempt to 'fix' Slateport Bay.$"

SlateportFarm_EventScript_MagmaVictory_Text_4:
# 270 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: I agree, but they have a point\n"
	.string "about some of the consequences of the\l"
	.string "land reclamation project. We all need to\l"
	.string "be more careful going forward how we\l"
	.string "develop Hoenn, and what it means for\l"
	.string "the Pokémon in the region.$"

SlateportFarm_EventScript_MagmaVictory_Text_5:
# 271 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: Like it or not, Hoenn is\n"
	.string "growing at a rapid rate. We need more\l"
	.string "land for people to live, and to grow\l"
	.string "crops and raise livestock to support\l"
	.string "them. It might be painful at times, but\l"
	.string "the scientists at Team Magma will not\l"
	.string "sit on the sidelines and allow Hoenn to\l"
	.string "crash into a resource crisis.\p"
	.string "Regardless, thank you.$"

SlateportFarm_EventScript_MagmaVictory_Text_6:
# 276 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: Take this as a token of\n"
	.string "our appreciation.\p"
	.string "This field move will allow you to cut\n"
	.string "down small trees blocking your path,\l"
	.string "once your Pokémon are strong enough to\l"
	.string "use it.\p"
	.string "It's sometimes necessary to bend the\n"
	.string "environment around us to move forward.$"

SlateportFarm_EventScript_MagmaVictory_Text_7:
# 291 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: You don't look like a member of\n"
	.string "Team Magma, and I don't recognize you\l"
	.string "from Slateport.\p"
	.string "Oh! You're a Pokémon Trainer! I'm Brawly,\n"
	.string "the Dewford Gym Leader.\p"
	.string "...Oh! You came here looking for me!\n"
	.string "You're trying to take the Hoenn League\l"
	.string "Challenge.\p"
	.string "Well, now that the situation here is\n"
	.string "taken care of, I'll head back to\l"
	.string "Dewford. Come by soon, I look forward to\l"
	.string "your challenge!$"

SlateportFarm_EventScript_AquaGrunt_Text_0:
# 376 "data/maps/SlateportFarm/scripts.pory"
	.string "I don't have time for you! We're trying\n"
	.string "to return Slateport Bay to its natural\l"
	.string "state!$"

SlateportFarm_EventScript_MagmaGrunt_Text_0:
# 384 "data/maps/SlateportFarm/scripts.pory"
	.string "I can't speak now! We're trying to stop\n"
	.string "Team Aqua from destroying Slateport\l"
	.string "Farm!$"

SlateportFarm_EventScript_BoyInGrass_Text_0:
# 435 "data/maps/SlateportFarm/scripts.pory"
	.string "I saw you up there defending our farm -\n"
	.string "thank you.$"

SlateportFarm_EventScript_OldWomanByHouse_Text_0:
# 442 "data/maps/SlateportFarm/scripts.pory"
	.string "I used to work on a farm in Johto.\p"
	.string "When I heard they needed folks to\n"
	.string "develop new farmland in Hoenn, I moved\l"
	.string "with my family out here.$"

SlateportFarm_EventScript_ManByTrees_Text_0:
# 449 "data/maps/SlateportFarm/scripts.pory"
	.string "I take care of the trees in the farm -\n"
	.string "growing them, pruning them, picking\l"
	.string "berries and fruit, and eventually\l"
	.string "cutting them.\p"
	.string "Many Pokémon make nests in the trees,\n"
	.string "or feed in them.$"

SlateportFarm_EventScript_WomanByFlowers_Text_0:
# 456 "data/maps/SlateportFarm/scripts.pory"
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
# 405 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Aqua is trying to undo all the work\n"
	.string "to build new farms in Slateport! I'm not\l"
	.string "letting anyone else get to the wall.$"

SlateportFarm_MagmaGruntDefeatText::
# 409 "data/maps/SlateportFarm/scripts.pory"
	.string "These farms are too important to lose!$"

SlateportFarm_AquaGruntIntroText::
# 413 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Magma's land reclamation project\n"
	.string "ruined the Slateport Bay, and tainted\l"
	.string "the seas all around the city! We're\l"
	.string "going to revitalize the area, one way or\l"
	.string "another!$"

SlateportFarm_AquaGruntDefeatText::
# 417 "data/maps/SlateportFarm/scripts.pory"
	.string "We can't sit by and watch as Slateport\n"
	.string "suffers from pollution.$"

SlateportFarm_PokemonBattlingText::
# 421 "data/maps/SlateportFarm/scripts.pory"
	.string "These Pokémon are engaged in a battle.$"
