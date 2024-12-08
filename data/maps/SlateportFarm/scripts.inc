SlateportFarm_MapScripts::
	.byte 0


SlateportFarm_EventScript_HelpAquaAdmin::
# 16 "data/maps/SlateportFarm/scripts.pory"
	lock
# 17 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 18 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_0, MSGBOX_YESNO
# 19 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportFarm_EventScript_HelpAquaAdmin_2
# 27 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_2
# 28 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 29 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 30 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
SlateportFarm_EventScript_HelpAquaAdmin_1:
# 32 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end

SlateportFarm_EventScript_HelpAquaAdmin_2:
# 20 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_1
# 21 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 22 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 23 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_MultiAgainstMagma
	goto SlateportFarm_EventScript_HelpAquaAdmin_1


# 36 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_BomberGruntMovement:
# 37 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 37 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 37 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 37 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 37 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 37 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 37 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 40 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_MultiBomberGruntMovement:
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 41 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 42 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 42 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 42 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 42 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 42 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

SlateportFarm_EventScript_HelpMagmaAdmin::
# 46 "data/maps/SlateportFarm/scripts.pory"
	lock
# 47 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 48 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpMagmaAdmin_Text_0, MSGBOX_YESNO
# 49 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportFarm_EventScript_HelpMagmaAdmin_2
# 56 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpMagmaAdmin_Text_1
# 57 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 58 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 59 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
SlateportFarm_EventScript_HelpMagmaAdmin_1:
# 61 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end

SlateportFarm_EventScript_HelpMagmaAdmin_2:
# 50 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_1
# 51 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 52 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_MultiAgainstAqua
	goto SlateportFarm_EventScript_HelpMagmaAdmin_1


SlateportFarm_EventScript_MultiAgainstMagma::
# 82 "data/maps/SlateportFarm/scripts.pory"
	lock
# 83 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 84 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 85 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 20
# 86 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MultiAgainstMagma_Text_0
# 87 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 88 "data/maps/SlateportFarm/scripts.pory"
	applymovement 6, GruntJoinMultibattle
# 89 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 90 "data/maps/SlateportFarm/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 91 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 20
# 92 "data/maps/SlateportFarm/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_MAGMA_ADMIN_FARM, SlateportFarm_BeatMagmaAdminMultiText, TRAINER_MAGMA_MULTI_GRUNT_FARM, SlateportFarm_BeatMagmaGruntMultiText, PARTNER_AQUA
# 93 "data/maps/SlateportFarm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 94 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportFarm_EventScript_MultiAgainstMagma_1
	return

SlateportFarm_EventScript_MultiAgainstMagma_1:
# 95 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_AquaVictory
# 96 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


# 101 "data/maps/SlateportFarm/scripts.pory"
GruntJoinMultibattle:
# 102 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 102 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 102 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 102 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 102 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 102 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 102 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 102 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
	step_end

# 105 "data/maps/SlateportFarm/scripts.pory"
StepToTheLeft:
# 106 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

SlateportFarm_EventScript_MultiAgainstAqua::
# 110 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 111 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 112 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 20
# 113 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MultiAgainstAqua_Text_0
# 114 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 115 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 116 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, GruntJoinMultibattle
# 117 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 118 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 119 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 20
# 120 "data/maps/SlateportFarm/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_AQUA_ADMIN_FARM, SlateportFarm_BeatAquaAdminMultiText, TRAINER_AQUA_MULTI_GRUNT_FARM, SlateportFarm_BeatAquaGruntMultiText, PARTNER_MAGMA
# 121 "data/maps/SlateportFarm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 122 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportFarm_EventScript_MultiAgainstAqua_2
SlateportFarm_EventScript_MultiAgainstAqua_1:
# 125 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end

SlateportFarm_EventScript_MultiAgainstAqua_2:
# 123 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_MagmaVictory
	goto SlateportFarm_EventScript_MultiAgainstAqua_1


SlateportFarm_EventScript_AquaVictory::
# 131 "data/maps/SlateportFarm/scripts.pory"
	lock
# 132 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 133 "data/maps/SlateportFarm/scripts.pory"
	setobjectxy 8, 27, 35
# 134 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_0
# 135 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 136 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 137 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 138 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 139 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 140 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_1
# 141 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_2
# 142 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 143 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 144 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, SlateportFarm_Movement_AquaLeavesInDefeat
# 145 "data/maps/SlateportFarm/scripts.pory"
	applymovement 6, SlateportFarm_Movement_AquaLeavesInDefeat
# 146 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 2
# 147 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 6
# 148 "data/maps/SlateportFarm/scripts.pory"
	removeobject 2
# 149 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 150 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 151 "data/maps/SlateportFarm/scripts.pory"
	addobject 8
# 152 "data/maps/SlateportFarm/scripts.pory"
	setobjectxy 8, 27, 35
# 153 "data/maps/SlateportFarm/scripts.pory"
	applymovement 8, SlateportFarm_BomberGruntMovement
# 154 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, SlateportFarm_MultiBomberGruntMovement
# 155 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 156 "data/maps/SlateportFarm/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 157 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 158 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 159 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 160 "data/maps/SlateportFarm/scripts.pory"
	addobject 32
# 161 "data/maps/SlateportFarm/scripts.pory"
	addobject 30
# 162 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 163 "data/maps/SlateportFarm/scripts.pory"
	applymovement 8, SlateportFarm_Movement_AquaGrunts4StepLeft
# 164 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, SlateportFarm_Movement_AquaGrunts4StepLeft
# 165 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 166 "data/maps/SlateportFarm/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 167 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 168 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 169 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 170 "data/maps/SlateportFarm/scripts.pory"
	addobject 29
# 171 "data/maps/SlateportFarm/scripts.pory"
	addobject 31
# 172 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 173 "data/maps/SlateportFarm/scripts.pory"
	removeobject 10
# 174 "data/maps/SlateportFarm/scripts.pory"
	removeobject 11
# 175 "data/maps/SlateportFarm/scripts.pory"
	removeobject 12
# 176 "data/maps/SlateportFarm/scripts.pory"
	removeobject 13
# 178 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 179 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 180 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_3
# 181 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 183 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 184 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 185 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_4
# 186 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 187 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 188 "data/maps/SlateportFarm/scripts.pory"
	removeobject 20
# 189 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_BrawlyRescuePlayer
# 190 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 191 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 192 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 193 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_5
# 194 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 195 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 196 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 197 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_AquaLeavesInDefeat
# 198 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportFarm_Movement_AquaLeavesInDefeat
# 199 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 200 "data/maps/SlateportFarm/scripts.pory"
	clearflag FLAG_SLATEPORT_FARM_COMPLETED
# 201 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_BAY_FLOODED
# 202 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 203 "data/maps/SlateportFarm/scripts.pory"
	warp MAP_SLATEPORT_CITY_FARM_CORRIDOR, 8, 4
# 204 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 205 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaVictory::
# 210 "data/maps/SlateportFarm/scripts.pory"
	lock
# 211 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 212 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 213 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanDown
# 214 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 215 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_0
# 216 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 217 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 218 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_BrawlyChaseAqua
# 219 "data/maps/SlateportFarm/scripts.pory"
	applymovement 20, SlateportFarm_Movement_BrawlyChaseAqua
# 220 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 30
# 221 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_1
# 222 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_2
# 223 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 224 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 225 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, SlateportFarm_Movement_AquaLeavesInDefeat
# 226 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, SlateportFarm_Movement_AquaLeavesInDefeat
# 227 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 228 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 229 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 30
# 230 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 231 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 30
# 232 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_3
# 233 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 234 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 235 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 5
# 236 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_4
# 237 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_5
# 238 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 239 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 240 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, SlateportFarm_Movement_MagmaLeaves
# 241 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 242 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 243 "data/maps/SlateportFarm/scripts.pory"
	removeobject 20
# 244 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_BrawlyApproachPlayer
# 245 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 246 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 247 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 248 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 10
# 249 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_6
# 250 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 251 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_MagmaLeaves
# 252 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 253 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_FARM_COMPLETED
# 254 "data/maps/SlateportFarm/scripts.pory"
	removeobject 1
# 255 "data/maps/SlateportFarm/scripts.pory"
	removeobject 2
# 256 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 257 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 258 "data/maps/SlateportFarm/scripts.pory"
	removeobject 5
# 259 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 260 "data/maps/SlateportFarm/scripts.pory"
	removeobject 7
# 261 "data/maps/SlateportFarm/scripts.pory"
	removeobject 8
# 262 "data/maps/SlateportFarm/scripts.pory"
	removeobject 9
# 263 "data/maps/SlateportFarm/scripts.pory"
	removeobject 10
# 264 "data/maps/SlateportFarm/scripts.pory"
	removeobject 11
# 265 "data/maps/SlateportFarm/scripts.pory"
	removeobject 12
# 266 "data/maps/SlateportFarm/scripts.pory"
	removeobject 13
# 267 "data/maps/SlateportFarm/scripts.pory"
	removeobject 14
# 268 "data/maps/SlateportFarm/scripts.pory"
	removeobject 15
# 269 "data/maps/SlateportFarm/scripts.pory"
	removeobject 16
# 270 "data/maps/SlateportFarm/scripts.pory"
	removeobject 17
# 271 "data/maps/SlateportFarm/scripts.pory"
	removeobject 18
# 272 "data/maps/SlateportFarm/scripts.pory"
	removeobject 19
# 273 "data/maps/SlateportFarm/scripts.pory"
	removeobject 20
# 274 "data/maps/SlateportFarm/scripts.pory"
	removeobject 21
# 275 "data/maps/SlateportFarm/scripts.pory"
	removeobject 22
# 276 "data/maps/SlateportFarm/scripts.pory"
	removeobject 23
# 277 "data/maps/SlateportFarm/scripts.pory"
	removeobject 24
# 278 "data/maps/SlateportFarm/scripts.pory"
	removeobject 25
# 279 "data/maps/SlateportFarm/scripts.pory"
	removeobject 26
# 280 "data/maps/SlateportFarm/scripts.pory"
	removeobject 27
# 281 "data/maps/SlateportFarm/scripts.pory"
	removeobject 28
# 282 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanUp
# 283 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 284 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 285 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


# 289 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyChaseAqua:
# 290 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_down
# 291 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 291 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 291 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 291 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 291 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
	step_end

# 294 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyRescuePlayer:
# 295 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 295 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 295 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 295 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 295 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 295 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 295 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
	step_end

# 298 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaGruntsArrive:
# 299 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 300 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 303 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaGrunts4StepLeft:
# 304 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 304 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 304 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 304 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 307 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanDown:
# 308 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 308 "data/maps/SlateportFarm/scripts.pory"
	walk_down
	step_end

# 311 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanUp:
# 312 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 312 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

# 315 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaLeavesInDefeat:
# 316 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 316 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 316 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 316 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 316 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 316 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 316 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 316 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 316 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 319 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_MagmaLeaves:
# 320 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 321 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 321 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 321 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 321 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 321 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 321 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 321 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 321 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 321 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 324 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyApproachPlayer:
# 325 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 326 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 326 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 326 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

SlateportFarm_EventScript_AquaGrunt::
# 330 "data/maps/SlateportFarm/scripts.pory"
	lock
# 331 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaGrunt_Text_0
# 332 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 333 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGrunt::
# 338 "data/maps/SlateportFarm/scripts.pory"
	lock
# 339 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaGrunt_Text_0
# 340 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 341 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGruntBattle::
# 346 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_1, SlateportFarm_MagmaGruntIntroText, SlateportFarm_MagmaGruntDefeatText
	end


SlateportFarm_EventScript_AquaGruntBattle::
# 351 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_2, SlateportFarm_AquaGruntIntroText, SlateportFarm_AquaGruntDefeatText
	end


SlateportFarm_EventScript_PokemonBattling::
# 381 "data/maps/SlateportFarm/scripts.pory"
	lock
# 382 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_PokemonBattlingText
# 383 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 384 "data/maps/SlateportFarm/scripts.pory"
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
# 27 "data/maps/SlateportFarm/scripts.pory"
	.string "Then get out of the way! We have\n"
	.string "important work to do!$"

SlateportFarm_EventScript_HelpMagmaAdmin_Text_0:
# 48 "data/maps/SlateportFarm/scripts.pory"
	.string "Are you here to help us defeat these\n"
	.string "rebels from Team Aqua and protect the\l"
	.string "vital Slateport Farms?$"

SlateportFarm_EventScript_HelpMagmaAdmin_Text_1:
# 56 "data/maps/SlateportFarm/scripts.pory"
	.string "Then get out of the way! We need to\n"
	.string "stop them!$"

SlateportFarm_EventScript_MultiAgainstMagma_Text_0:
# 86 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: I need some help over\n"
	.string "here!$"

SlateportFarm_EventScript_MultiAgainstAqua_Text_0:
# 113 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: I need some help over here!$"

SlateportFarm_EventScript_AquaVictory_Text_0:
# 134 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: No... You've defeated our\n"
	.string "Pokémon...$"

SlateportFarm_EventScript_AquaVictory_Text_1:
# 140 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: Now is our opportunity!\n"
	.string "Bring the Pokémon!$"

SlateportFarm_EventScript_AquaVictory_Text_2:
# 141 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: We must fall back. We don't\n"
	.string "have the strength to stop them, and we\l"
	.string "don't want to be here when they bring\l"
	.string "down the wall.$"

SlateportFarm_EventScript_AquaVictory_Text_3:
# 180 "data/maps/SlateportFarm/scripts.pory"
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
# 185 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: But today we're going to\n"
	.string "bring down this wall, and fix all that.$"

SlateportFarm_EventScript_AquaVictory_Text_5:
# 193 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: These Electrode are going to\n"
	.string "explode! We need to get out of here\l"
	.string "immediately!$"

SlateportFarm_EventScript_MagmaVictory_Text_0:
# 215 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: Tch... You've defeated our\n"
	.string "Pokémon.$"

SlateportFarm_EventScript_MagmaVictory_Text_1:
# 221 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: You can't just take matters\n"
	.string "into your own hands like that! The\l"
	.string "people of Slateport chose to develop\l"
	.string "these farms, and they have already\l"
	.string "been setup. I'm sorry, but that's the\l"
	.string "situation. Now go!$"

SlateportFarm_EventScript_MagmaVictory_Text_2:
# 222 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: We are not going to forget\n"
	.string "the harm done by this 'land\l"
	.string "reclamation', and we will not give up. We\l"
	.string "will not allow Team Magma and the\l"
	.string "shortsighted few of Hoenn to destroy\l"
	.string "the delicate natural balance all people\l"
	.string "and Pokémon rely on.\p"
	.string "We will be back.$"

SlateportFarm_EventScript_MagmaVictory_Text_3:
# 232 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: Thank you both for your\n"
	.string "help. The people of Slateport need\l"
	.string "these farms, and I shudder to think\l"
	.string "what Team Aqua would have done to them\l"
	.string "in their attempt to 'fix' Slateport Bay.$"

SlateportFarm_EventScript_MagmaVictory_Text_4:
# 236 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: I agree, but they have a point\n"
	.string "about some of the consequences of the\l"
	.string "land reclamation project. We all need to\l"
	.string "be more careful going forward how we\l"
	.string "develop Hoenn, and what it means for\l"
	.string "the Pokémon in the region.$"

SlateportFarm_EventScript_MagmaVictory_Text_5:
# 237 "data/maps/SlateportFarm/scripts.pory"
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
# 249 "data/maps/SlateportFarm/scripts.pory"
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
# 331 "data/maps/SlateportFarm/scripts.pory"
	.string "I don't have time for you! We're trying\n"
	.string "to return the Bay to its natural state!$"

SlateportFarm_EventScript_MagmaGrunt_Text_0:
# 339 "data/maps/SlateportFarm/scripts.pory"
	.string "I can't speak now! We're trying to stop\n"
	.string "Team Aqua from ruining the farms!$"

SlateportFarm_BeatMagmaAdminMultiText::
# 65 "data/maps/SlateportFarm/scripts.pory"
	.string "We won't let you destroy these farms!$"

SlateportFarm_BeatMagmaGruntMultiText::
# 69 "data/maps/SlateportFarm/scripts.pory"
	.string "We couldn't stop them...$"

SlateportFarm_BeatAquaAdminMultiText::
# 73 "data/maps/SlateportFarm/scripts.pory"
	.string "We won't let you get away with the harm\n"
	.string "you've done to Slateport!$"

SlateportFarm_BeatAquaGruntMultiText::
# 77 "data/maps/SlateportFarm/scripts.pory"
	.string "It seems the damage is done...$"

SlateportFarm_MagmaGruntIntroText::
# 360 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Aqua is trying to undo all the work\n"
	.string "to build new farms in Slateport! I'm not\l"
	.string "letting anyone else over to the wall.$"

SlateportFarm_MagmaGruntDefeatText::
# 364 "data/maps/SlateportFarm/scripts.pory"
	.string "These farms are too important to lose!$"

SlateportFarm_AquaGruntIntroText::
# 368 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Magma's land reclamation project\n"
	.string "ruined the Slateport Bay, and tainted\l"
	.string "the seas all around the city! We're\l"
	.string "going to revitalize the area, one way or\l"
	.string "another!$"

SlateportFarm_AquaGruntDefeatText::
# 372 "data/maps/SlateportFarm/scripts.pory"
	.string "We can't sit by and watch as Slateport\n"
	.string "suffers from pollution.$"

SlateportFarm_PokemonBattlingText::
# 376 "data/maps/SlateportFarm/scripts.pory"
	.string "These Pokémon are engaged in a battle.$"
