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
# 31 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_2
# 32 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 33 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_FaceUp
# 34 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 35 "data/maps/SlateportFarm/scripts.pory"
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
	goto_if_ne VAR_RESULT, 0, SlateportFarm_EventScript_MultiAgainstMagma
# 28 "data/maps/SlateportFarm/scripts.pory"
	special LoadPlayerParty
	goto SlateportFarm_EventScript_HelpAquaAdmin_1


# 39 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_BomberGruntMovement:
# 40 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 40 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 40 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 40 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 40 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 40 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 40 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 43 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_MultiBomberGruntMovement:
# 44 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 44 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 44 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 45 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 45 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 45 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 45 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 45 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

SlateportFarm_EventScript_HelpMagmaAdmin::
# 49 "data/maps/SlateportFarm/scripts.pory"
	lock
# 50 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FacePlayer
# 51 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpMagmaAdmin_Text_0, MSGBOX_YESNO
# 52 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportFarm_EventScript_HelpMagmaAdmin_2
SlateportFarm_EventScript_HelpMagmaAdmin_1:
# 66 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpMagmaAdmin_Text_1
# 67 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 68 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FaceDown
# 69 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 70 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end

SlateportFarm_EventScript_HelpMagmaAdmin_2:
# 53 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_1
# 54 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 56 "data/maps/SlateportFarm/scripts.pory"
	special SavePlayerParty
# 57 "data/maps/SlateportFarm/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 58 "data/maps/SlateportFarm/scripts.pory"
	special ChooseHalfPartyForBattle
# 59 "data/maps/SlateportFarm/scripts.pory"
	goto_if_ne VAR_RESULT, 0, SlateportFarm_EventScript_MultiAgainstAqua
# 60 "data/maps/SlateportFarm/scripts.pory"
	special LoadPlayerParty
	goto SlateportFarm_EventScript_HelpMagmaAdmin_1


SlateportFarm_EventScript_MultiAgainstMagma::
# 91 "data/maps/SlateportFarm/scripts.pory"
	lock
# 92 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_FaceUp
# 93 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 94 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 95 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 96 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceRight
# 97 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 98 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MultiAgainstMagma_Text_0
# 99 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 100 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FaceDown
# 101 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAMULTIGRUNT, GruntJoinMultibattle
# 102 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 103 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAMULTIGRUNT, Common_Movement_FaceDown
# 104 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 105 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 106 "data/maps/SlateportFarm/scripts.pory"
	multi_2_vs_2 TRAINER_MAGMA_ADMIN_FARM, SlateportFarm_BeatMagmaAdminMultiText, TRAINER_MAGMA_MULTI_GRUNT_FARM, SlateportFarm_BeatMagmaGruntMultiText, PARTNER_AQUA
# 107 "data/maps/SlateportFarm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 108 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportFarm_EventScript_MultiAgainstMagma_1
	return

SlateportFarm_EventScript_MultiAgainstMagma_1:
# 109 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_AquaVictory
# 110 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


# 115 "data/maps/SlateportFarm/scripts.pory"
GruntJoinMultibattle:
# 116 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 116 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 116 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 116 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 116 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 116 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 116 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 116 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
	step_end

# 119 "data/maps/SlateportFarm/scripts.pory"
StepToTheLeft:
# 120 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

SlateportFarm_EventScript_MultiAgainstAqua::
# 124 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_FaceDown
# 125 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 126 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 127 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 128 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceRight
# 129 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 130 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MultiAgainstAqua_Text_0
# 131 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 132 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 133 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_FaceUp
# 134 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, GruntJoinMultibattle
# 135 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 136 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, Common_Movement_FaceUp
# 137 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 138 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 139 "data/maps/SlateportFarm/scripts.pory"
	multi_2_vs_2 TRAINER_AQUA_ADMIN_FARM, SlateportFarm_BeatAquaAdminMultiText, TRAINER_AQUA_MULTI_GRUNT_FARM, SlateportFarm_BeatAquaGruntMultiText, PARTNER_MAGMA
# 140 "data/maps/SlateportFarm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 141 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportFarm_EventScript_MultiAgainstAqua_2
SlateportFarm_EventScript_MultiAgainstAqua_1:
# 144 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end

SlateportFarm_EventScript_MultiAgainstAqua_2:
# 142 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_MagmaVictory
	goto SlateportFarm_EventScript_MultiAgainstAqua_1


SlateportFarm_EventScript_AquaVictory::
# 149 "data/maps/SlateportFarm/scripts.pory"
	lock
# 150 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 151 "data/maps/SlateportFarm/scripts.pory"
	setobjectxy LOCALID_FARM_AQUAGRUNTBOMBER, 27, 35
# 152 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_0
# 153 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 154 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 155 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceRight
# 156 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, Common_Movement_FaceLeft
# 157 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 158 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_1
# 159 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceRight
# 160 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAMULTIGRUNT, Common_Movement_FaceLeft
# 161 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 162 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_2
# 163 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 164 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 165 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, SlateportFarm_Movement_AquaLeavesInDefeat
# 166 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAMULTIGRUNT, SlateportFarm_Movement_AquaLeavesInDefeat
# 167 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
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
# 203 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceFasterUp
# 204 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 205 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_4
# 206 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 207 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceRight
# 208 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 209 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_5
# 210 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 211 "data/maps/SlateportFarm/scripts.pory"
	giveitem ITEM_HM01
# 212 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 213 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 215 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_BrawlyRescuePlayer
# 216 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 217 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, Common_Movement_FaceDown
# 218 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 219 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 220 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_6
# 221 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 222 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 223 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 224 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_AquaLeavesInDefeat
# 225 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportFarm_Movement_AquaLeavesInDefeat
# 226 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 227 "data/maps/SlateportFarm/scripts.pory"
	clearflag FLAG_SLATEPORT_FARM_COMPLETED
# 228 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_BAY_FLOODED
# 232 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 234 "data/maps/SlateportFarm/scripts.pory"
	warp MAP_SLATEPORT_CITY_FARM_CORRIDOR, 8, 4
# 235 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 236 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaVictory::
# 241 "data/maps/SlateportFarm/scripts.pory"
	lock
# 242 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 243 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 244 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanDown
# 245 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 246 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_0
# 247 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 248 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 249 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_BrawlyChaseAqua
# 251 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 252 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 253 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_1
# 254 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, Common_Movement_WalkInPlaceFasterUp
# 255 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 256 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_2
# 257 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 258 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 259 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAADMIN, SlateportFarm_Movement_AquaLeavesInDefeat
# 260 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_AQUAMULTIGRUNT, SlateportFarm_Movement_AquaLeavesInDefeat
# 261 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 262 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceRight
# 263 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 264 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 265 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceDown
# 266 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 267 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_3
# 268 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 269 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, Common_Movement_WalkInPlaceFasterUp
# 270 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 271 "data/maps/SlateportFarm/scripts.pory"
	delay 10
# 272 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_4
# 273 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 274 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceDown
# 275 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_5
# 276 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 277 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, Common_Movement_WalkInPlaceRight
# 278 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 279 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 280 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_6
# 281 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 282 "data/maps/SlateportFarm/scripts.pory"
	giveitem ITEM_HM01
# 283 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 284 "data/maps/SlateportFarm/scripts.pory"
	removeobject LOCALID_MAGMAADMINMON
# 285 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 286 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_MAGMAADMIN, SlateportFarm_Movement_MagmaLeaves
# 287 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 288 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 290 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_BrawlyApproachPlayer
# 291 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 292 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, Common_Movement_WalkInPlaceRight
# 293 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 294 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 295 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_7
# 296 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 297 "data/maps/SlateportFarm/scripts.pory"
	applymovement LOCALID_FARM_BRAWLY, SlateportFarm_Movement_MagmaLeaves
# 298 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 299 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_FARM_COMPLETED
# 300 "data/maps/SlateportFarm/scripts.pory"
	removeobject 1
# 301 "data/maps/SlateportFarm/scripts.pory"
	removeobject 2
# 302 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 303 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 304 "data/maps/SlateportFarm/scripts.pory"
	removeobject 5
# 305 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 306 "data/maps/SlateportFarm/scripts.pory"
	removeobject 7
# 307 "data/maps/SlateportFarm/scripts.pory"
	removeobject 8
# 308 "data/maps/SlateportFarm/scripts.pory"
	removeobject 9
# 309 "data/maps/SlateportFarm/scripts.pory"
	removeobject 10
# 310 "data/maps/SlateportFarm/scripts.pory"
	removeobject 11
# 311 "data/maps/SlateportFarm/scripts.pory"
	removeobject 12
# 312 "data/maps/SlateportFarm/scripts.pory"
	removeobject 13
# 313 "data/maps/SlateportFarm/scripts.pory"
	removeobject 14
# 314 "data/maps/SlateportFarm/scripts.pory"
	removeobject 15
# 315 "data/maps/SlateportFarm/scripts.pory"
	removeobject 16
# 316 "data/maps/SlateportFarm/scripts.pory"
	removeobject 17
# 317 "data/maps/SlateportFarm/scripts.pory"
	removeobject 18
# 318 "data/maps/SlateportFarm/scripts.pory"
	removeobject 19
# 319 "data/maps/SlateportFarm/scripts.pory"
	removeobject 20
# 320 "data/maps/SlateportFarm/scripts.pory"
	removeobject 21
# 321 "data/maps/SlateportFarm/scripts.pory"
	removeobject 22
# 322 "data/maps/SlateportFarm/scripts.pory"
	removeobject 23
# 323 "data/maps/SlateportFarm/scripts.pory"
	removeobject 24
# 324 "data/maps/SlateportFarm/scripts.pory"
	removeobject 25
# 325 "data/maps/SlateportFarm/scripts.pory"
	removeobject 26
# 326 "data/maps/SlateportFarm/scripts.pory"
	removeobject 27
# 327 "data/maps/SlateportFarm/scripts.pory"
	removeobject 28
# 328 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanUp
# 329 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 330 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 331 "data/maps/SlateportFarm/scripts.pory"
	setvar VAR_LEVEL_CAP, 24
# 332 "data/maps/SlateportFarm/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 333 "data/maps/SlateportFarm/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 334 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


# 338 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyChaseAqua:
# 339 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_down
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
SlateportFarm_Movement_BrawlyRescuePlayer:
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
	step_end

# 347 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaGruntsArrive:
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 349 "data/maps/SlateportFarm/scripts.pory"
	walk_left
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
SlateportFarm_Movement_AquaGrunts4StepLeft:
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 356 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanDown:
# 357 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 357 "data/maps/SlateportFarm/scripts.pory"
	walk_down
	step_end

# 360 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanUp:
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 361 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

# 364 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaLeavesInDefeat:
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 365 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 368 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_MagmaLeaves:
# 369 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 370 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 373 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyApproachPlayer:
# 374 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 375 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 375 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 375 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

SlateportFarm_EventScript_AquaGrunt::
# 379 "data/maps/SlateportFarm/scripts.pory"
	lock
# 380 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaGrunt_Text_0
# 381 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 382 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGrunt::
# 387 "data/maps/SlateportFarm/scripts.pory"
	lock
# 388 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaGrunt_Text_0
# 389 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 390 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGruntBattle::
# 395 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_1, SlateportFarm_MagmaGruntIntroText, SlateportFarm_MagmaGruntDefeatText
	end


SlateportFarm_EventScript_AquaGruntBattle::
# 400 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_2, SlateportFarm_AquaGruntIntroText, SlateportFarm_AquaGruntDefeatText
	end


SlateportFarm_EventScript_PokemonBattling::
# 430 "data/maps/SlateportFarm/scripts.pory"
	lock
# 431 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_PokemonBattlingText
# 432 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 433 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_BoyInGrass::
# 438 "data/maps/SlateportFarm/scripts.pory"
	lock
# 439 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_BoyInGrass_Text_0, MSGBOX_NPC
# 440 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_OldWomanByHouse::
# 445 "data/maps/SlateportFarm/scripts.pory"
	lock
# 446 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_OldWomanByHouse_Text_0, MSGBOX_NPC
# 447 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_ManByTrees::
# 452 "data/maps/SlateportFarm/scripts.pory"
	lock
# 453 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_ManByTrees_Text_0, MSGBOX_NPC
# 454 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_WomanByFlowers::
# 459 "data/maps/SlateportFarm/scripts.pory"
	lock
# 460 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_WomanByFlowers_Text_0, MSGBOX_NPC
# 461 "data/maps/SlateportFarm/scripts.pory"
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
# 31 "data/maps/SlateportFarm/scripts.pory"
	.string "Then get out of the way! We have\n"
	.string "important work to do!$"

SlateportFarm_EventScript_HelpMagmaAdmin_Text_0:
# 51 "data/maps/SlateportFarm/scripts.pory"
	.string "Are you here to help us defeat these\n"
	.string "rebels from Team Aqua and protect the\l"
	.string "vital Slateport Farms?$"

SlateportFarm_EventScript_HelpMagmaAdmin_Text_1:
# 66 "data/maps/SlateportFarm/scripts.pory"
	.string "Then get out of the way! We need to\n"
	.string "stop them!$"

SlateportFarm_EventScript_MultiAgainstMagma_Text_0:
# 98 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: I need some help over\n"
	.string "here!$"

SlateportFarm_EventScript_MultiAgainstAqua_Text_0:
# 130 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: I need some help over here!$"

SlateportFarm_EventScript_AquaVictory_Text_0:
# 152 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: No... You've defeated our\n"
	.string "Pokémon...$"

SlateportFarm_EventScript_AquaVictory_Text_1:
# 158 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: Now is our opportunity! Bring the\n"
	.string "Pokémon!$"

SlateportFarm_EventScript_AquaVictory_Text_2:
# 162 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: We must retreat. We can't stop\n"
	.string "them, and we don't want to be here when\l"
	.string "they bring down the barrier.$"

SlateportFarm_EventScript_AquaVictory_Text_3:
# 201 "data/maps/SlateportFarm/scripts.pory"
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
# 205 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: But today we're going to fix all\n"
	.string "that.$"

SlateportFarm_EventScript_AquaVictory_Text_5:
# 209 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: As thanks for your help, take\n"
	.string "this. It will allow you to trim down\l"
	.string "trees, once your Pokémon are strong\l"
	.string "enough to use it.\p"
	.string "The small trees grow back fairly\n"
	.string "quickly, and you've proven yourself\l"
	.string "responsible.$"

SlateportFarm_EventScript_AquaVictory_Text_6:
# 220 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: These Electrode are going to\n"
	.string "explode! We need to get out of here\l"
	.string "immediately!$"

SlateportFarm_EventScript_MagmaVictory_Text_0:
# 246 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: Tch... You've defeated our\n"
	.string "Pokémon.$"

SlateportFarm_EventScript_MagmaVictory_Text_1:
# 253 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: You can't just take matters\n"
	.string "into your own hands like this!\p"
	.string "The people of Slateport chose to\n"
	.string "develop these farms, and they have\l"
	.string "already been established.\p"
	.string "I'm sorry, but that's the situation. Now\n"
	.string "go!$"

SlateportFarm_EventScript_MagmaVictory_Text_2:
# 256 "data/maps/SlateportFarm/scripts.pory"
	.string "Matt: We are not going to forget the\n"
	.string "harm they've done, and we will not give\l"
	.string "up.\p"
	.string "We will not allow a few fools to destroy\n"
	.string "the delicate natural balance we all rely\l"
	.string "on.\p"
	.string "We will be back.$"

SlateportFarm_EventScript_MagmaVictory_Text_3:
# 267 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: Thank you both for your help.\p"
	.string "I hate to think what Team Aqua would\n"
	.string "have done to them in their attempt to\l"
	.string "'fix' Slateport Bay.$"

SlateportFarm_EventScript_MagmaVictory_Text_4:
# 272 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: I agree, but they have a point\n"
	.string "about some of the consequences of the\l"
	.string "land reclamation project...$"

SlateportFarm_EventScript_MagmaVictory_Text_5:
# 275 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: Like it or not, Hoenn is\n"
	.string "growing at a rapid rate.\p"
	.string "It might be painful at times, but the\n"
	.string "scientists at Team Magma will not sit on\l"
	.string "the sidelines for a looming resource\l"
	.string "crisis.$"

SlateportFarm_EventScript_MagmaVictory_Text_6:
# 280 "data/maps/SlateportFarm/scripts.pory"
	.string "Tabitha: Take this as a token of our\n"
	.string "appreciation.\p"
	.string "This field move will allow you to cut\n"
	.string "down small trees blocking your path,\l"
	.string "once your Pokémon are strong enough to\l"
	.string "use it.\p"
	.string "It's sometimes necessary to bend the\n"
	.string "environment around us to move forward.$"

SlateportFarm_EventScript_MagmaVictory_Text_7:
# 295 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: You don't look like a member of\n"
	.string "Team Magma.\p"
	.string "Oh! You're a Pokémon Trainer! I'm Brawly,\n"
	.string "the Dewford Gym Leader.\p"
	.string "...Oh! You came here looking for me!\p"
	.string "I'll head back to Dewford. Come by soon,\n"
	.string "I look forward to your challenge!$"

SlateportFarm_EventScript_AquaGrunt_Text_0:
# 380 "data/maps/SlateportFarm/scripts.pory"
	.string "I don't have time for you! We're trying\n"
	.string "to return Slateport Bay to its natural\l"
	.string "state!$"

SlateportFarm_EventScript_MagmaGrunt_Text_0:
# 388 "data/maps/SlateportFarm/scripts.pory"
	.string "I can't speak now! We're trying to stop\n"
	.string "Team Aqua from destroying Slateport\l"
	.string "Farm!$"

SlateportFarm_EventScript_BoyInGrass_Text_0:
# 439 "data/maps/SlateportFarm/scripts.pory"
	.string "I saw you up there defending our farm -\n"
	.string "thank you.$"

SlateportFarm_EventScript_OldWomanByHouse_Text_0:
# 446 "data/maps/SlateportFarm/scripts.pory"
	.string "I used to work on a farm in Johto.\p"
	.string "When I heard they needed folks to\n"
	.string "develop new farmland in Hoenn, I moved\l"
	.string "with my family out here.$"

SlateportFarm_EventScript_ManByTrees_Text_0:
# 453 "data/maps/SlateportFarm/scripts.pory"
	.string "I take care of the trees in the farm -\n"
	.string "growing them, pruning them, picking\l"
	.string "berries and fruit, and eventually\l"
	.string "cutting them.\p"
	.string "Many Pokémon make nests in the trees,\n"
	.string "or feed in them.$"

SlateportFarm_EventScript_WomanByFlowers_Text_0:
# 460 "data/maps/SlateportFarm/scripts.pory"
	.string "It's scary that some people tried\n"
	.string "destroying our farm.\p"
	.string "I've worked so hard growing these\n"
	.string "lovely flowers.$"

SlateportFarm_BeatMagmaAdminMultiText::
# 74 "data/maps/SlateportFarm/scripts.pory"
	.string "We won't let you destroy these farms!$"

SlateportFarm_BeatMagmaGruntMultiText::
# 78 "data/maps/SlateportFarm/scripts.pory"
	.string "We couldn't stop them...$"

SlateportFarm_BeatAquaAdminMultiText::
# 82 "data/maps/SlateportFarm/scripts.pory"
	.string "We won't let you get away with the harm\n"
	.string "you've done to Slateport!$"

SlateportFarm_BeatAquaGruntMultiText::
# 86 "data/maps/SlateportFarm/scripts.pory"
	.string "It seems the damage is done...$"

SlateportFarm_MagmaGruntIntroText::
# 409 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Aqua is trying to undo all the work\n"
	.string "to build new farms in Slateport! I'm not\l"
	.string "letting anyone else get to the wall.$"

SlateportFarm_MagmaGruntDefeatText::
# 413 "data/maps/SlateportFarm/scripts.pory"
	.string "These farms are too important to lose!$"

SlateportFarm_AquaGruntIntroText::
# 417 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Magma's land reclamation project\n"
	.string "ruined the Slateport Bay, and tainted\l"
	.string "the seas all around the city! We're\l"
	.string "going to revitalize the area, one way or\l"
	.string "another!$"

SlateportFarm_AquaGruntDefeatText::
# 421 "data/maps/SlateportFarm/scripts.pory"
	.string "We can't sit by and watch as Slateport\n"
	.string "suffers from pollution.$"

SlateportFarm_PokemonBattlingText::
# 425 "data/maps/SlateportFarm/scripts.pory"
	.string "These Pokémon are engaged in a battle.$"
