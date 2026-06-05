# 1 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 9 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 21 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
# 22 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 25 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
# 26 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
# 38 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
# 39 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
# 40 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	release
# 42 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	end
# 43 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
# 45 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 47 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 51 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 52 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
# 53 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	return
# 55 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
# 57 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based Pokémon Storage\n"
# 58 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "System…\p"
# 59 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Whoever made it must be some kind\n"
# 60 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "of a scientific wizard!$"
# 61 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
# 63 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my Pokémon ate an\n"
# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "ORAN BERRY, it regained HP!$"
# 65 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
# 67 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of Pokémon.\p"
# 68 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "All types have their strengths and\n"
# 69 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "weaknesses against other types.\p"
# 70 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the types of Pokémon,\n"
# 71 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "a battle could be easy or hard.$"
# 72 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 73 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
# 74 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TREECKO\n"
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a GRASS type.\p"
# 76 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the WATER and\n"
# 77 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "GROUND types.\p"
# 78 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against FIRE-type\n"
# 79 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon.$"
# 80 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 81 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
# 82 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TORCHIC\n"
# 83 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a FIRE type.\p"
# 84 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the GRASS and\n"
# 85 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "BUG types.\p"
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against WATER-type\n"
# 87 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon.$"
# 88 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"

# 89 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
# 90 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your MUDKIP\n"
# 91 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "is a WATER type.\p"
# 92 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "It's strong against the FIRE type.\p"
# 93 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "But, it's weak against GRASS-type\n"
# 94 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "and ELECTRIC-type Pokémon.$"

PokemonCenter_1F_EventScript_Abra::
# 99 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock
# 100 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_VISITED_DEWFORD_TOWN, PokemonCenter_1F_EventScript_Abra_2
# 106 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_1, MSGBOX_YESNO
# 107 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PokemonCenter_1F_EventScript_Abra_5
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_PETALBURG_CITY, PokemonCenter_1F_EventScript_Abra_8
PokemonCenter_1F_EventScript_Abra_7:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_DEWFORD_TOWN, PokemonCenter_1F_EventScript_Abra_11
PokemonCenter_1F_EventScript_Abra_10:
# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_SLATEPORT_CITY, PokemonCenter_1F_EventScript_Abra_14
PokemonCenter_1F_EventScript_Abra_13:
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_MAUVILLE_CITY, PokemonCenter_1F_EventScript_Abra_17
PokemonCenter_1F_EventScript_Abra_16:
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_FALLARBOR_TOWN, PokemonCenter_1F_EventScript_Abra_20
PokemonCenter_1F_EventScript_Abra_19:
# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_FORTREE_CITY, PokemonCenter_1F_EventScript_Abra_23
PokemonCenter_1F_EventScript_Abra_22:
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_8, 127
# 121 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 0, 1, DYN_MULTICHOICE_CB_NONE
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 123 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 1, PokemonCenter_1F_EventScript_Abra_27
# 135 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 2, PokemonCenter_1F_EventScript_Abra_28
# 147 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 3, PokemonCenter_1F_EventScript_Abra_29
# 159 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 4, PokemonCenter_1F_EventScript_Abra_30
# 174 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 6, PokemonCenter_1F_EventScript_Abra_31
# 182 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 8, PokemonCenter_1F_EventScript_Abra_32
# 187 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 127, PokemonCenter_1F_EventScript_Abra_33
PokemonCenter_1F_EventScript_Abra_33:
# 189 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 190 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_1F_EventScript_Abra_2:
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_0
# 102 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 103 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_1F_EventScript_Abra_5:
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_1F_EventScript_Abra_8:
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_2, 1
	goto PokemonCenter_1F_EventScript_Abra_7

PokemonCenter_1F_EventScript_Abra_11:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_3, 2
	goto PokemonCenter_1F_EventScript_Abra_10

PokemonCenter_1F_EventScript_Abra_14:
# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_4, 3
	goto PokemonCenter_1F_EventScript_Abra_13

PokemonCenter_1F_EventScript_Abra_17:
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_5, 4
	goto PokemonCenter_1F_EventScript_Abra_16

PokemonCenter_1F_EventScript_Abra_20:
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_6, 6
	goto PokemonCenter_1F_EventScript_Abra_19

PokemonCenter_1F_EventScript_Abra_23:
# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_7, 8
	goto PokemonCenter_1F_EventScript_Abra_22

PokemonCenter_1F_EventScript_Abra_25:
# 193 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 194 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 195 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_1F_EventScript_Abra_27:
# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_9
# 125 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 127 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 129 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 131 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 132 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 133 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_PETALBURG_CITY, 20, 17
	goto PokemonCenter_1F_EventScript_Abra_25

PokemonCenter_1F_EventScript_Abra_28:
# 136 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_9
# 137 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 138 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 139 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 140 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 141 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 142 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 143 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 144 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 145 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_DEWFORD_TOWN, 17, 11
	goto PokemonCenter_1F_EventScript_Abra_25

PokemonCenter_1F_EventScript_Abra_29:
# 148 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_9
# 149 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 150 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 151 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 152 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 153 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 154 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 155 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 156 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 157 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_SLATEPORT_CITY, 25, 20
	goto PokemonCenter_1F_EventScript_Abra_25

PokemonCenter_1F_EventScript_Abra_30:
# 160 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_9
# 161 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 162 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 163 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 164 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 165 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 166 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 167 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 168 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 169 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_MAUVILLE_CITY, 22, 9
	goto PokemonCenter_1F_EventScript_Abra_25

PokemonCenter_1F_EventScript_Abra_31:
# 175 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_9
# 176 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 177 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_FALLARBOR_TOWN, 16, 8
	goto PokemonCenter_1F_EventScript_Abra_25

PokemonCenter_1F_EventScript_Abra_32:
# 183 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_9
# 184 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 185 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_FORTREE_CITY, 5, 7
	goto PokemonCenter_1F_EventScript_Abra_25


PokemonCenter_1F_EventScript_Abra_Text_0:
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "The Abra is not responding to your\n"
	.string "presence. It seems to be in a deep\l"
	.string "sleep.$"

PokemonCenter_1F_EventScript_Abra_Text_1:
# 106 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Use Abra to teleport?$"

PokemonCenter_1F_EventScript_Abra_Text_2:
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Petalburg$"

PokemonCenter_1F_EventScript_Abra_Text_3:
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Dewford$"

PokemonCenter_1F_EventScript_Abra_Text_4:
# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Slateport$"

PokemonCenter_1F_EventScript_Abra_Text_5:
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Mauville$"

PokemonCenter_1F_EventScript_Abra_Text_6:
# 117 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Fallarbor$"

PokemonCenter_1F_EventScript_Abra_Text_7:
# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Fortree$"

PokemonCenter_1F_EventScript_Abra_Text_8:
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Nevermind$"

PokemonCenter_1F_EventScript_Abra_Text_9:
# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Abra used Teleport!$"
