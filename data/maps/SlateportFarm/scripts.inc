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
SlateportFarm_EventScript_HelpAquaAdmin_1:
# 32 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_HelpAquaAdmin_Text_2
# 33 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 34 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
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
	applymovement 2, Common_Movement_FacePlayer
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
	applymovement 2, Common_Movement_FaceDown
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
	applymovement 1, Common_Movement_FaceUp
# 95 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 96 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 20
# 97 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MultiAgainstMagma_Text_0
# 98 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 99 "data/maps/SlateportFarm/scripts.pory"
	applymovement 6, GruntJoinMultibattle
# 100 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 101 "data/maps/SlateportFarm/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 102 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 20
# 103 "data/maps/SlateportFarm/scripts.pory"
	multi_2_vs_2 TRAINER_MAGMA_ADMIN_FARM, SlateportFarm_BeatMagmaAdminMultiText, TRAINER_MAGMA_MULTI_GRUNT_FARM, SlateportFarm_BeatMagmaGruntMultiText, PARTNER_AQUA
# 104 "data/maps/SlateportFarm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportFarm_EventScript_MultiAgainstMagma_1
	return

SlateportFarm_EventScript_MultiAgainstMagma_1:
# 106 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_AquaVictory
# 107 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


# 112 "data/maps/SlateportFarm/scripts.pory"
GruntJoinMultibattle:
# 113 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 113 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 113 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 113 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 113 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 113 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 113 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
# 113 "data/maps/SlateportFarm/scripts.pory"
	walk_faster_left
	step_end

# 116 "data/maps/SlateportFarm/scripts.pory"
StepToTheLeft:
# 117 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

SlateportFarm_EventScript_MultiAgainstAqua::
# 121 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 122 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 123 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 20
# 124 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MultiAgainstAqua_Text_0
# 125 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 126 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 127 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, GruntJoinMultibattle
# 128 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 129 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 130 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 20
# 131 "data/maps/SlateportFarm/scripts.pory"
	multi_2_vs_2 TRAINER_AQUA_ADMIN_FARM, SlateportFarm_BeatAquaAdminMultiText, TRAINER_AQUA_MULTI_GRUNT_FARM, SlateportFarm_BeatAquaGruntMultiText, PARTNER_MAGMA
# 132 "data/maps/SlateportFarm/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 133 "data/maps/SlateportFarm/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportFarm_EventScript_MultiAgainstAqua_2
SlateportFarm_EventScript_MultiAgainstAqua_1:
# 136 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end

SlateportFarm_EventScript_MultiAgainstAqua_2:
# 134 "data/maps/SlateportFarm/scripts.pory"
	goto SlateportFarm_EventScript_MagmaVictory
	goto SlateportFarm_EventScript_MultiAgainstAqua_1


SlateportFarm_EventScript_AquaVictory::
# 142 "data/maps/SlateportFarm/scripts.pory"
	lock
# 143 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 144 "data/maps/SlateportFarm/scripts.pory"
	setobjectxy 8, 27, 35
# 145 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_0
# 146 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 147 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 148 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 149 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 150 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 151 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_1
# 152 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_2
# 153 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 154 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 155 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, SlateportFarm_Movement_AquaLeavesInDefeat
# 156 "data/maps/SlateportFarm/scripts.pory"
	applymovement 6, SlateportFarm_Movement_AquaLeavesInDefeat
# 157 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 2
# 158 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 6
# 159 "data/maps/SlateportFarm/scripts.pory"
	removeobject 2
# 160 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 161 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 162 "data/maps/SlateportFarm/scripts.pory"
	addobject 8
# 163 "data/maps/SlateportFarm/scripts.pory"
	setobjectxy 8, 27, 35
# 164 "data/maps/SlateportFarm/scripts.pory"
	applymovement 8, SlateportFarm_BomberGruntMovement
# 165 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, SlateportFarm_MultiBomberGruntMovement
# 166 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 167 "data/maps/SlateportFarm/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 168 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 169 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 170 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 171 "data/maps/SlateportFarm/scripts.pory"
	addobject 32
# 172 "data/maps/SlateportFarm/scripts.pory"
	addobject 30
# 173 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 174 "data/maps/SlateportFarm/scripts.pory"
	applymovement 8, SlateportFarm_Movement_AquaGrunts4StepLeft
# 175 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, SlateportFarm_Movement_AquaGrunts4StepLeft
# 176 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 177 "data/maps/SlateportFarm/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 178 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 179 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 180 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 181 "data/maps/SlateportFarm/scripts.pory"
	addobject 29
# 182 "data/maps/SlateportFarm/scripts.pory"
	addobject 31
# 183 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 184 "data/maps/SlateportFarm/scripts.pory"
	removeobject 10
# 185 "data/maps/SlateportFarm/scripts.pory"
	removeobject 11
# 186 "data/maps/SlateportFarm/scripts.pory"
	removeobject 12
# 187 "data/maps/SlateportFarm/scripts.pory"
	removeobject 13
# 189 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 190 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 191 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_3
# 192 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 194 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 195 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 196 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_4
# 197 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 198 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 199 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 200 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_5
# 201 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 202 "data/maps/SlateportFarm/scripts.pory"
	giveitem ITEM_HM01
# 203 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 204 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 205 "data/maps/SlateportFarm/scripts.pory"
	removeobject 20
# 206 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_BrawlyRescuePlayer
# 207 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 208 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 209 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 210 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaVictory_Text_6
# 211 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 212 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 213 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 214 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_AquaLeavesInDefeat
# 215 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportFarm_Movement_AquaLeavesInDefeat
# 216 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 217 "data/maps/SlateportFarm/scripts.pory"
	clearflag FLAG_SLATEPORT_FARM_COMPLETED
# 218 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_BAY_FLOODED
# 222 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 224 "data/maps/SlateportFarm/scripts.pory"
	warp MAP_SLATEPORT_CITY_FARM_CORRIDOR, 8, 4
# 225 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 226 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaVictory::
# 231 "data/maps/SlateportFarm/scripts.pory"
	lock
# 232 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 233 "data/maps/SlateportFarm/scripts.pory"
	special SpawnCameraObject
# 234 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanDown
# 235 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 236 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_0
# 237 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 238 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 239 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_BrawlyChaseAqua
# 240 "data/maps/SlateportFarm/scripts.pory"
	applymovement 20, SlateportFarm_Movement_BrawlyChaseAqua
# 241 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 30
# 242 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_1
# 243 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_2
# 244 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 245 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 246 "data/maps/SlateportFarm/scripts.pory"
	applymovement 1, SlateportFarm_Movement_AquaLeavesInDefeat
# 247 "data/maps/SlateportFarm/scripts.pory"
	applymovement 7, SlateportFarm_Movement_AquaLeavesInDefeat
# 248 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 249 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 250 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 30
# 251 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 252 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 30
# 253 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_3
# 254 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 255 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 256 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 5
# 257 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_4
# 258 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_5
# 259 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 260 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 261 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 262 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 263 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_6
# 264 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 265 "data/maps/SlateportFarm/scripts.pory"
	giveitem ITEM_HM01
# 266 "data/maps/SlateportFarm/scripts.pory"
	closemessage
# 267 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 268 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 269 "data/maps/SlateportFarm/scripts.pory"
	applymovement 2, SlateportFarm_Movement_MagmaLeaves
# 270 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 271 "data/maps/SlateportFarm/scripts.pory"
	delay 20
# 272 "data/maps/SlateportFarm/scripts.pory"
	removeobject 20
# 273 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_BrawlyApproachPlayer
# 274 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 275 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 276 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 277 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 10
# 278 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaVictory_Text_7
# 279 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 280 "data/maps/SlateportFarm/scripts.pory"
	applymovement 5, SlateportFarm_Movement_MagmaLeaves
# 281 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 282 "data/maps/SlateportFarm/scripts.pory"
	setflag FLAG_SLATEPORT_FARM_COMPLETED
# 283 "data/maps/SlateportFarm/scripts.pory"
	removeobject 1
# 284 "data/maps/SlateportFarm/scripts.pory"
	removeobject 2
# 285 "data/maps/SlateportFarm/scripts.pory"
	removeobject 3
# 286 "data/maps/SlateportFarm/scripts.pory"
	removeobject 4
# 287 "data/maps/SlateportFarm/scripts.pory"
	removeobject 5
# 288 "data/maps/SlateportFarm/scripts.pory"
	removeobject 6
# 289 "data/maps/SlateportFarm/scripts.pory"
	removeobject 7
# 290 "data/maps/SlateportFarm/scripts.pory"
	removeobject 8
# 291 "data/maps/SlateportFarm/scripts.pory"
	removeobject 9
# 292 "data/maps/SlateportFarm/scripts.pory"
	removeobject 10
# 293 "data/maps/SlateportFarm/scripts.pory"
	removeobject 11
# 294 "data/maps/SlateportFarm/scripts.pory"
	removeobject 12
# 295 "data/maps/SlateportFarm/scripts.pory"
	removeobject 13
# 296 "data/maps/SlateportFarm/scripts.pory"
	removeobject 14
# 297 "data/maps/SlateportFarm/scripts.pory"
	removeobject 15
# 298 "data/maps/SlateportFarm/scripts.pory"
	removeobject 16
# 299 "data/maps/SlateportFarm/scripts.pory"
	removeobject 17
# 300 "data/maps/SlateportFarm/scripts.pory"
	removeobject 18
# 301 "data/maps/SlateportFarm/scripts.pory"
	removeobject 19
# 302 "data/maps/SlateportFarm/scripts.pory"
	removeobject 20
# 303 "data/maps/SlateportFarm/scripts.pory"
	removeobject 21
# 304 "data/maps/SlateportFarm/scripts.pory"
	removeobject 22
# 305 "data/maps/SlateportFarm/scripts.pory"
	removeobject 23
# 306 "data/maps/SlateportFarm/scripts.pory"
	removeobject 24
# 307 "data/maps/SlateportFarm/scripts.pory"
	removeobject 25
# 308 "data/maps/SlateportFarm/scripts.pory"
	removeobject 26
# 309 "data/maps/SlateportFarm/scripts.pory"
	removeobject 27
# 310 "data/maps/SlateportFarm/scripts.pory"
	removeobject 28
# 311 "data/maps/SlateportFarm/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SlateportFarm_Movement_CameraPanUp
# 312 "data/maps/SlateportFarm/scripts.pory"
	waitmovement 0
# 313 "data/maps/SlateportFarm/scripts.pory"
	special RemoveCameraObject
# 314 "data/maps/SlateportFarm/scripts.pory"
	setvar VAR_LEVEL_CAP, 24
# 315 "data/maps/SlateportFarm/scripts.pory"
	call Common_EventScript_ApplyHandicap
# 316 "data/maps/SlateportFarm/scripts.pory"
	call Common_EventScript_LevelCapUpdate
# 317 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


# 321 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyChaseAqua:
# 322 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_down
# 323 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 323 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 323 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 323 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 323 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
	step_end

# 326 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyRescuePlayer:
# 327 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 327 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 327 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 327 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 327 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 327 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
# 327 "data/maps/SlateportFarm/scripts.pory"
	walk_fast_right
	step_end

# 330 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaGruntsArrive:
# 331 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 332 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 335 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaGrunts4StepLeft:
# 336 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 336 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 336 "data/maps/SlateportFarm/scripts.pory"
	walk_left
# 336 "data/maps/SlateportFarm/scripts.pory"
	walk_left
	step_end

# 339 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanDown:
# 340 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 340 "data/maps/SlateportFarm/scripts.pory"
	walk_down
	step_end

# 343 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_CameraPanUp:
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 344 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

# 347 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_AquaLeavesInDefeat:
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 348 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 351 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_MagmaLeaves:
# 352 "data/maps/SlateportFarm/scripts.pory"
	walk_down
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 353 "data/maps/SlateportFarm/scripts.pory"
	walk_right
	step_end

# 356 "data/maps/SlateportFarm/scripts.pory"
SlateportFarm_Movement_BrawlyApproachPlayer:
# 357 "data/maps/SlateportFarm/scripts.pory"
	walk_right
# 358 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 358 "data/maps/SlateportFarm/scripts.pory"
	walk_up
# 358 "data/maps/SlateportFarm/scripts.pory"
	walk_up
	step_end

SlateportFarm_EventScript_AquaGrunt::
# 362 "data/maps/SlateportFarm/scripts.pory"
	lock
# 363 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_AquaGrunt_Text_0
# 364 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 365 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGrunt::
# 370 "data/maps/SlateportFarm/scripts.pory"
	lock
# 371 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_MagmaGrunt_Text_0
# 372 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 373 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_MagmaGruntBattle::
# 378 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_1, SlateportFarm_MagmaGruntIntroText, SlateportFarm_MagmaGruntDefeatText
	end


SlateportFarm_EventScript_AquaGruntBattle::
# 383 "data/maps/SlateportFarm/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_FARM_2, SlateportFarm_AquaGruntIntroText, SlateportFarm_AquaGruntDefeatText
	end


SlateportFarm_EventScript_PokemonBattling::
# 413 "data/maps/SlateportFarm/scripts.pory"
	lock
# 414 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_PokemonBattlingText
# 415 "data/maps/SlateportFarm/scripts.pory"
	waitmessage
# 416 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_BoyInGrass::
# 421 "data/maps/SlateportFarm/scripts.pory"
	lock
# 422 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_BoyInGrass_Text_0, MSGBOX_NPC
# 423 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_OldWomanByHouse::
# 428 "data/maps/SlateportFarm/scripts.pory"
	lock
# 429 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_OldWomanByHouse_Text_0, MSGBOX_NPC
# 430 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_ManByTrees::
# 435 "data/maps/SlateportFarm/scripts.pory"
	lock
# 436 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_ManByTrees_Text_0, MSGBOX_NPC
# 437 "data/maps/SlateportFarm/scripts.pory"
	releaseall
	end


SlateportFarm_EventScript_WomanByFlowers::
# 442 "data/maps/SlateportFarm/scripts.pory"
	lock
# 443 "data/maps/SlateportFarm/scripts.pory"
	msgbox SlateportFarm_EventScript_WomanByFlowers_Text_0, MSGBOX_NPC
# 444 "data/maps/SlateportFarm/scripts.pory"
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
# 97 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: I need some help over\n"
	.string "here!$"

SlateportFarm_EventScript_MultiAgainstAqua_Text_0:
# 124 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: I need some help over here!$"

SlateportFarm_EventScript_AquaVictory_Text_0:
# 145 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: No... You've defeated our\n"
	.string "Pokémon...$"

SlateportFarm_EventScript_AquaVictory_Text_1:
# 151 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: Now is our opportunity!\n"
	.string "Bring the Pokémon!$"

SlateportFarm_EventScript_AquaVictory_Text_2:
# 152 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: We must fall back. We don't\n"
	.string "have the strength to stop them, and we\l"
	.string "don't want to be here when they bring\l"
	.string "down the wall.$"

SlateportFarm_EventScript_AquaVictory_Text_3:
# 191 "data/maps/SlateportFarm/scripts.pory"
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
# 196 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: But today we're going to\n"
	.string "bring down this wall, and fix all that.$"

SlateportFarm_EventScript_AquaVictory_Text_5:
# 200 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: As a reward for your help,\n"
	.string "take this. It's a field move that will\l"
	.string "allow you to trim down trees, once your\l"
	.string "Pokémon are strong enough to use it.\p"
	.string "The small trees grow back fairly\n"
	.string "quickly, and you've proven yourself\l"
	.string "responsible enough to use it.$"

SlateportFarm_EventScript_AquaVictory_Text_6:
# 210 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: These Electrode are going to\n"
	.string "explode! We need to get out of here\l"
	.string "immediately!$"

SlateportFarm_EventScript_MagmaVictory_Text_0:
# 236 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: Tch... You've defeated our\n"
	.string "Pokémon.$"

SlateportFarm_EventScript_MagmaVictory_Text_1:
# 242 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: You can't just take matters\n"
	.string "into your own hands like that! The\l"
	.string "people of Slateport chose to develop\l"
	.string "these farms, and they have already\l"
	.string "been setup. I'm sorry, but that's the\l"
	.string "situation. Now go!$"

SlateportFarm_EventScript_MagmaVictory_Text_2:
# 243 "data/maps/SlateportFarm/scripts.pory"
	.string "Aqua Admin: We are not going to forget\n"
	.string "the harm done by this 'land\l"
	.string "reclamation', and we will not give up. We\l"
	.string "will not allow Team Magma and the\l"
	.string "shortsighted few of Hoenn to destroy\l"
	.string "the delicate natural balance all people\l"
	.string "and Pokémon rely on.\p"
	.string "We will be back.$"

SlateportFarm_EventScript_MagmaVictory_Text_3:
# 253 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: Thank you both for your\n"
	.string "help. The people of Slateport need\l"
	.string "these farms, and I shudder to think\l"
	.string "what Team Aqua would have done to them\l"
	.string "in their attempt to 'fix' Slateport Bay.$"

SlateportFarm_EventScript_MagmaVictory_Text_4:
# 257 "data/maps/SlateportFarm/scripts.pory"
	.string "Brawly: I agree, but they have a point\n"
	.string "about some of the consequences of the\l"
	.string "land reclamation project. We all need to\l"
	.string "be more careful going forward how we\l"
	.string "develop Hoenn, and what it means for\l"
	.string "the Pokémon in the region.$"

SlateportFarm_EventScript_MagmaVictory_Text_5:
# 258 "data/maps/SlateportFarm/scripts.pory"
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
# 263 "data/maps/SlateportFarm/scripts.pory"
	.string "Magma Admin: Take this as a token of\n"
	.string "our appreciation.\p"
	.string "This field move will allow you to cut\n"
	.string "down small trees blocking your path,\l"
	.string "once your Pokémon are strong enough to\l"
	.string "use it.\p"
	.string "It's sometimes necessary to bend the\n"
	.string "environment around us to move forward.$"

SlateportFarm_EventScript_MagmaVictory_Text_7:
# 278 "data/maps/SlateportFarm/scripts.pory"
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
# 363 "data/maps/SlateportFarm/scripts.pory"
	.string "I don't have time for you! We're trying\n"
	.string "to return the Bay to its natural state!$"

SlateportFarm_EventScript_MagmaGrunt_Text_0:
# 371 "data/maps/SlateportFarm/scripts.pory"
	.string "I can't speak now! We're trying to stop\n"
	.string "Team Aqua from ruining the farms!$"

SlateportFarm_EventScript_BoyInGrass_Text_0:
# 422 "data/maps/SlateportFarm/scripts.pory"
	.string "I saw you up there defending our farm -\n"
	.string "thank you.$"

SlateportFarm_EventScript_OldWomanByHouse_Text_0:
# 429 "data/maps/SlateportFarm/scripts.pory"
	.string "I used to work on a farm in Johto.\p"
	.string "When I heard they needed folks to\n"
	.string "develop new farmland in Hoenn, I moved\l"
	.string "with my family out here.$"

SlateportFarm_EventScript_ManByTrees_Text_0:
# 436 "data/maps/SlateportFarm/scripts.pory"
	.string "I take care of the trees in the farm -\n"
	.string "growing them, pruning them, picking\l"
	.string "berries and fruit, and eventually\l"
	.string "cutting them.\p"
	.string "Many Pokémon make nests in the trees,\n"
	.string "or feed in them.$"

SlateportFarm_EventScript_WomanByFlowers_Text_0:
# 443 "data/maps/SlateportFarm/scripts.pory"
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
# 392 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Aqua is trying to undo all the work\n"
	.string "to build new farms in Slateport! I'm not\l"
	.string "letting anyone else over to the wall.$"

SlateportFarm_MagmaGruntDefeatText::
# 396 "data/maps/SlateportFarm/scripts.pory"
	.string "These farms are too important to lose!$"

SlateportFarm_AquaGruntIntroText::
# 400 "data/maps/SlateportFarm/scripts.pory"
	.string "Team Magma's land reclamation project\n"
	.string "ruined the Slateport Bay, and tainted\l"
	.string "the seas all around the city! We're\l"
	.string "going to revitalize the area, one way or\l"
	.string "another!$"

SlateportFarm_AquaGruntDefeatText::
# 404 "data/maps/SlateportFarm/scripts.pory"
	.string "We can't sit by and watch as Slateport\n"
	.string "suffers from pollution.$"

SlateportFarm_PokemonBattlingText::
# 408 "data/maps/SlateportFarm/scripts.pory"
	.string "These Pokémon are engaged in a battle.$"
