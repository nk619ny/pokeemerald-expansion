//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 15
            .heldItem = ITEM_LIGHT_CLAY,
#line 18
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
#line 20
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 16
            .ability = ABILITY_LEVITATE,
#line 17
            .lvl = 65,
#line 19
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 21
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
            },
            },
            {
#line 26
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 26
            .heldItem = ITEM_LIFE_ORB,
#line 29
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 31
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .ability = ABILITY_ROCK_HEAD,
#line 28
            .lvl = 65,
#line 30
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 31
                MOVE_HEAD_SMASH,
                MOVE_BRAVE_BIRD,
                MOVE_TAILWIND,
                MOVE_WIDE_GUARD,
            },
            },
            {
#line 36
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 36
            .heldItem = ITEM_METAGROSSITE,
#line 39
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .ability = ABILITY_CLEAR_BODY,
#line 38
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 39
                MOVE_BULLET_PUNCH,
                MOVE_ZEN_HEADBUTT,
                MOVE_STOMPING_TANTRUM,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 45
    [DIFFICULTY_NORMAL][PARTNER_AQUA] =
    {
#line 46
        .trainerName = _("Shelly"),
#line 47
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 48
        .trainerPic = TRAINER_BACK_PIC_LEAF,
        .encounterMusic_gender =
#line 49
F_TRAINER_FEMALE | 
#line 50
            TRAINER_ENCOUNTER_MUSIC_AQUA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 52
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 52
            .heldItem = ITEM_SITRUS_BERRY,
#line 55
            .ev = TRAINER_PARTY_EVS(248, 252, 0, 0, 0, 8),
#line 57
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 53
            .ability = ABILITY_SWARM,
#line 54
            .lvl = 22,
#line 56
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 57
                MOVE_BUG_BITE,
                MOVE_CROSS_POISON,
                MOVE_TOXIC_THREAD,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 62
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 62
            .heldItem = ITEM_MUSCLE_BAND,
#line 65
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 164, 0, 4),
#line 67
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 63
            .ability = ABILITY_WATER_VEIL,
#line 64
            .lvl = 22,
#line 66
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 67
                MOVE_WATERFALL,
                MOVE_HORN_ATTACK,
                MOVE_ACUPRESSURE,
                MOVE_FURY_CUTTER,
            },
            },
            {
#line 72
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 72
            .heldItem = ITEM_LUM_BERRY,
#line 75
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 77
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 73
            .ability = ABILITY_INNER_FOCUS,
#line 74
            .lvl = 22,
#line 76
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 77
                MOVE_AVALANCHE,
                MOVE_LASH_OUT,
                MOVE_QUICK_ATTACK,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 82
    [DIFFICULTY_NORMAL][PARTNER_MAGMA] =
    {
#line 83
        .trainerName = _("Tabitha"),
#line 84
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 85
        .trainerPic = TRAINER_BACK_PIC_RED,
        .encounterMusic_gender =
#line 87
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 89
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 89
            .heldItem = ITEM_MUSCLE_BAND,
#line 92
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 94
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 90
            .ability = ABILITY_SAND_VEIL,
#line 91
            .lvl = 22,
#line 93
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 94
                MOVE_BRICK_BREAK,
                MOVE_DRILL_RUN,
                MOVE_SUPER_FANG,
                MOVE_CRUSH_CLAW,
            },
            },
            {
#line 99
            .species = SPECIES_ARBOLIVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 99
            .heldItem = ITEM_SITRUS_BERRY,
#line 102
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 104
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 100
            .ability = ABILITY_HARVEST,
#line 101
            .lvl = 22,
#line 103
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 105
                MOVE_ALLURING_VOICE,
                MOVE_MAGICAL_LEAF,
                MOVE_SYNTHESIS,
                MOVE_CHARM,
            },
            },
            {
#line 110
            .species = SPECIES_PYROAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 110
            .heldItem = ITEM_LUM_BERRY,
#line 113
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 115
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 111
            .ability = ABILITY_UNNERVE,
#line 112
            .lvl = 22,
#line 114
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 116
                MOVE_BURNING_JEALOUSY,
                MOVE_SNARL,
                MOVE_SWIFT,
                MOVE_NOBLE_ROAR,
            },
            },
        },
    },
