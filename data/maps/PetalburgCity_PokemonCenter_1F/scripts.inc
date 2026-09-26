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
	goto_if_set FLAG_BADGE06_GET, PokemonCenter_1F_EventScript_Abra_5
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_1, MSGBOX_YESNO
# 113 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PokemonCenter_1F_EventScript_Abra_8
# 118 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_PETALBURG_CITY, PokemonCenter_1F_EventScript_Abra_11
PokemonCenter_1F_EventScript_Abra_10:
# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_DEWFORD_TOWN, PokemonCenter_1F_EventScript_Abra_14
PokemonCenter_1F_EventScript_Abra_13:
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_SLATEPORT_CITY, PokemonCenter_1F_EventScript_Abra_17
PokemonCenter_1F_EventScript_Abra_16:
# 121 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_MAUVILLE_CITY, PokemonCenter_1F_EventScript_Abra_20
PokemonCenter_1F_EventScript_Abra_19:
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_LAVARIDGE_TOWN, PokemonCenter_1F_EventScript_Abra_23
PokemonCenter_1F_EventScript_Abra_22:
# 123 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_FALLARBOR_TOWN, PokemonCenter_1F_EventScript_Abra_26
PokemonCenter_1F_EventScript_Abra_25:
# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_RUSTBORO_CITY, PokemonCenter_1F_EventScript_Abra_29
PokemonCenter_1F_EventScript_Abra_28:
# 125 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_FORTREE_CITY, PokemonCenter_1F_EventScript_Abra_32
PokemonCenter_1F_EventScript_Abra_31:
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_10, 127
# 127 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultistack 25, 2, FALSE, 5, 0, 1, DYN_MULTICHOICE_CB_NONE
# 128 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 129 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 1, PokemonCenter_1F_EventScript_Abra_36
# 141 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 2, PokemonCenter_1F_EventScript_Abra_37
# 153 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 3, PokemonCenter_1F_EventScript_Abra_38
# 165 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 4, PokemonCenter_1F_EventScript_Abra_39
# 177 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 5, PokemonCenter_1F_EventScript_Abra_40
# 182 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 6, PokemonCenter_1F_EventScript_Abra_41
# 187 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 7, PokemonCenter_1F_EventScript_Abra_42
# 192 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 8, PokemonCenter_1F_EventScript_Abra_43
# 197 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case 127, PokemonCenter_1F_EventScript_Abra_44
PokemonCenter_1F_EventScript_Abra_44:
# 199 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 200 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
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
# 107 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_0
# 108 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 109 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_1F_EventScript_Abra_8:
# 114 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 115 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_1F_EventScript_Abra_11:
# 118 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_2, 1
	goto PokemonCenter_1F_EventScript_Abra_10

PokemonCenter_1F_EventScript_Abra_14:
# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_3, 2
	goto PokemonCenter_1F_EventScript_Abra_13

PokemonCenter_1F_EventScript_Abra_17:
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_4, 3
	goto PokemonCenter_1F_EventScript_Abra_16

PokemonCenter_1F_EventScript_Abra_20:
# 121 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_5, 4
	goto PokemonCenter_1F_EventScript_Abra_19

PokemonCenter_1F_EventScript_Abra_23:
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_6, 5
	goto PokemonCenter_1F_EventScript_Abra_22

PokemonCenter_1F_EventScript_Abra_26:
# 123 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_7, 6
	goto PokemonCenter_1F_EventScript_Abra_25

PokemonCenter_1F_EventScript_Abra_29:
# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_8, 7
	goto PokemonCenter_1F_EventScript_Abra_28

PokemonCenter_1F_EventScript_Abra_32:
# 125 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	dynmultipush PokemonCenter_1F_EventScript_Abra_Text_9, 8
	goto PokemonCenter_1F_EventScript_Abra_31

PokemonCenter_1F_EventScript_Abra_34:
# 203 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 204 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitstate
# 205 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end

PokemonCenter_1F_EventScript_Abra_36:
# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_11
# 131 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 132 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_46
PokemonCenter_1F_EventScript_Abra_45:
# 133 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_58
PokemonCenter_1F_EventScript_Abra_57:
# 134 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_70
PokemonCenter_1F_EventScript_Abra_69:
# 135 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_82
PokemonCenter_1F_EventScript_Abra_81:
# 136 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_94
PokemonCenter_1F_EventScript_Abra_93:
# 137 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_106
PokemonCenter_1F_EventScript_Abra_105:
# 138 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_118
PokemonCenter_1F_EventScript_Abra_117:
# 139 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_PETALBURG_CITY, 20, 17
	goto PokemonCenter_1F_EventScript_Abra_34

PokemonCenter_1F_EventScript_Abra_37:
# 142 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_11
# 143 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 144 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_49
PokemonCenter_1F_EventScript_Abra_48:
# 145 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_61
PokemonCenter_1F_EventScript_Abra_60:
# 146 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_73
PokemonCenter_1F_EventScript_Abra_72:
# 147 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_85
PokemonCenter_1F_EventScript_Abra_84:
# 148 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_97
PokemonCenter_1F_EventScript_Abra_96:
# 149 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_109
PokemonCenter_1F_EventScript_Abra_108:
# 150 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_121
PokemonCenter_1F_EventScript_Abra_120:
# 151 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_DEWFORD_TOWN, 17, 11
	goto PokemonCenter_1F_EventScript_Abra_34

PokemonCenter_1F_EventScript_Abra_38:
# 154 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_11
# 155 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 156 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_52
PokemonCenter_1F_EventScript_Abra_51:
# 157 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_64
PokemonCenter_1F_EventScript_Abra_63:
# 158 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_76
PokemonCenter_1F_EventScript_Abra_75:
# 159 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_88
PokemonCenter_1F_EventScript_Abra_87:
# 160 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_100
PokemonCenter_1F_EventScript_Abra_99:
# 161 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_112
PokemonCenter_1F_EventScript_Abra_111:
# 162 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_124
PokemonCenter_1F_EventScript_Abra_123:
# 163 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_SLATEPORT_CITY, 25, 20
	goto PokemonCenter_1F_EventScript_Abra_34

PokemonCenter_1F_EventScript_Abra_39:
# 166 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_11
# 167 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 168 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_55
PokemonCenter_1F_EventScript_Abra_54:
# 169 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_67
PokemonCenter_1F_EventScript_Abra_66:
# 170 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_79
PokemonCenter_1F_EventScript_Abra_78:
# 171 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_91
PokemonCenter_1F_EventScript_Abra_90:
# 172 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_103
PokemonCenter_1F_EventScript_Abra_102:
# 173 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_EventScript_Abra_115
PokemonCenter_1F_EventScript_Abra_114:
# 174 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PokemonCenter_1F_EventScript_Abra_127
PokemonCenter_1F_EventScript_Abra_126:
# 175 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_MAUVILLE_CITY, 22, 9
	goto PokemonCenter_1F_EventScript_Abra_34

PokemonCenter_1F_EventScript_Abra_40:
# 178 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_11
# 179 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 180 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_LAVARIDGE_TOWN, 9, 7
	goto PokemonCenter_1F_EventScript_Abra_34

PokemonCenter_1F_EventScript_Abra_41:
# 183 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_11
# 184 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 185 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_FALLARBOR_TOWN, 16, 8
	goto PokemonCenter_1F_EventScript_Abra_34

PokemonCenter_1F_EventScript_Abra_42:
# 188 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_11
# 189 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 190 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_RUSTBORO_CITY, 16, 39
	goto PokemonCenter_1F_EventScript_Abra_34

PokemonCenter_1F_EventScript_Abra_43:
# 193 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_EventScript_Abra_Text_11
# 194 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	delay 30
# 195 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	warpteleport MAP_FORTREE_CITY, 5, 7
	goto PokemonCenter_1F_EventScript_Abra_34

PokemonCenter_1F_EventScript_Abra_46:
# 132 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	goto PokemonCenter_1F_EventScript_Abra_45

PokemonCenter_1F_EventScript_Abra_49:
# 144 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	goto PokemonCenter_1F_EventScript_Abra_48

PokemonCenter_1F_EventScript_Abra_52:
# 156 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	goto PokemonCenter_1F_EventScript_Abra_51

PokemonCenter_1F_EventScript_Abra_55:
# 168 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	goto PokemonCenter_1F_EventScript_Abra_54

PokemonCenter_1F_EventScript_Abra_58:
# 133 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	goto PokemonCenter_1F_EventScript_Abra_57

PokemonCenter_1F_EventScript_Abra_61:
# 145 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	goto PokemonCenter_1F_EventScript_Abra_60

PokemonCenter_1F_EventScript_Abra_64:
# 157 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	goto PokemonCenter_1F_EventScript_Abra_63

PokemonCenter_1F_EventScript_Abra_67:
# 169 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	goto PokemonCenter_1F_EventScript_Abra_66

PokemonCenter_1F_EventScript_Abra_70:
# 134 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	goto PokemonCenter_1F_EventScript_Abra_69

PokemonCenter_1F_EventScript_Abra_73:
# 146 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	goto PokemonCenter_1F_EventScript_Abra_72

PokemonCenter_1F_EventScript_Abra_76:
# 158 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	goto PokemonCenter_1F_EventScript_Abra_75

PokemonCenter_1F_EventScript_Abra_79:
# 170 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	goto PokemonCenter_1F_EventScript_Abra_78

PokemonCenter_1F_EventScript_Abra_82:
# 135 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	goto PokemonCenter_1F_EventScript_Abra_81

PokemonCenter_1F_EventScript_Abra_85:
# 147 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	goto PokemonCenter_1F_EventScript_Abra_84

PokemonCenter_1F_EventScript_Abra_88:
# 159 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	goto PokemonCenter_1F_EventScript_Abra_87

PokemonCenter_1F_EventScript_Abra_91:
# 171 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	goto PokemonCenter_1F_EventScript_Abra_90

PokemonCenter_1F_EventScript_Abra_94:
# 136 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	goto PokemonCenter_1F_EventScript_Abra_93

PokemonCenter_1F_EventScript_Abra_97:
# 148 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	goto PokemonCenter_1F_EventScript_Abra_96

PokemonCenter_1F_EventScript_Abra_100:
# 160 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	goto PokemonCenter_1F_EventScript_Abra_99

PokemonCenter_1F_EventScript_Abra_103:
# 172 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	goto PokemonCenter_1F_EventScript_Abra_102

PokemonCenter_1F_EventScript_Abra_106:
# 137 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	goto PokemonCenter_1F_EventScript_Abra_105

PokemonCenter_1F_EventScript_Abra_109:
# 149 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	goto PokemonCenter_1F_EventScript_Abra_108

PokemonCenter_1F_EventScript_Abra_112:
# 161 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	goto PokemonCenter_1F_EventScript_Abra_111

PokemonCenter_1F_EventScript_Abra_115:
# 173 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	goto PokemonCenter_1F_EventScript_Abra_114

PokemonCenter_1F_EventScript_Abra_118:
# 138 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	goto PokemonCenter_1F_EventScript_Abra_117

PokemonCenter_1F_EventScript_Abra_121:
# 150 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	goto PokemonCenter_1F_EventScript_Abra_120

PokemonCenter_1F_EventScript_Abra_124:
# 162 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	goto PokemonCenter_1F_EventScript_Abra_123

PokemonCenter_1F_EventScript_Abra_127:
# 174 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	goto PokemonCenter_1F_EventScript_Abra_126


PokemonCenter_1F_EventScript_Abra_Text_0:
# 101 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "The Abra is not responding to your\n"
	.string "presence. It seems to be in a deep\l"
	.string "sleep.$"

PokemonCenter_1F_EventScript_Abra_Text_1:
# 112 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Use Abra to teleport?$"

PokemonCenter_1F_EventScript_Abra_Text_2:
# 118 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Petalburg$"

PokemonCenter_1F_EventScript_Abra_Text_3:
# 119 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Dewford$"

PokemonCenter_1F_EventScript_Abra_Text_4:
# 120 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Slateport$"

PokemonCenter_1F_EventScript_Abra_Text_5:
# 121 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Mauville$"

PokemonCenter_1F_EventScript_Abra_Text_6:
# 122 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Lavaridge$"

PokemonCenter_1F_EventScript_Abra_Text_7:
# 123 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Fallarbor$"

PokemonCenter_1F_EventScript_Abra_Text_8:
# 124 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Rustboro$"

PokemonCenter_1F_EventScript_Abra_Text_9:
# 125 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Fortree$"

PokemonCenter_1F_EventScript_Abra_Text_10:
# 126 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Nevermind$"

PokemonCenter_1F_EventScript_Abra_Text_11:
# 130 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "Abra used Teleport!$"
