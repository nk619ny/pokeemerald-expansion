# 1 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"

# 2 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
CaveOfOrigin_UnusedRubySapphireMap3_MapScripts::
# 3 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfOrigin_UnusedRubySapphireMap3_OnTransition
# 4 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	.byte 0
# 5 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"

# 6 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
CaveOfOrigin_UnusedRubySapphireMap3_OnTransition:
# 7 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	//call_if_set FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE, CaveOfOrigin_EventScript_DisableTriggers
# 8 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	end
