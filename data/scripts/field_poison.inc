EventScript_FieldPoison::
	lockall
	special TryFieldPoisonWhiteOut
	waitstate
	goto_if_eq VAR_RESULT, FLDPSN_WHITEOUT, EventScript_FieldWhiteOut
	goto_if_eq VAR_RESULT, FLDPSN_FRONTIER_WHITEOUT, EventScript_FrontierFieldWhiteOut
	releaseall
	end

EventScript_FieldWhiteOut::
	message gText_PlayerWhitedOut
	clearflag FLAG_FORCE_SUN //added to remove the rough workaround that creates sun in Flannery's Gym, Lavaridge Gym
	waitmessage
	waitbuttonpress
	special Script_FadeOutMapMusic
	waitstate
	fadescreenswapbuffers FADE_TO_BLACK
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, EventScript_SetRespawnLavaridgePkmnCenter
	special SetCB2WhiteOut
	waitstate
	end

EventScript_SetRespawnLavaridgePkmnCenter::
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	return

EventScript_FrontierFieldWhiteOut::
	message gText_PlayerWhitedOut
	waitmessage
	waitbuttonpress
	pike_inchallenge
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePike_EventScript_Retire
	pyramid_inchallenge
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost  @ On Pyramid floor
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost  @ On Pyramid peak
	trainerhill_inchallenge
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_1F_EventScript_Lost
	special Script_FadeOutMapMusic
	waitstate
	fadescreenswapbuffers FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	end
