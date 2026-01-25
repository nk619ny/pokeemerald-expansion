//
// Elite Learnsets - Special moves that can only be learned through the Elite Move process
// Generated from the Elite Moves CSV data
//

// Pokemon without an Elite Learnset will use sNoneEliteLearnset
static const u16 sNoneEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};

// Pokemon Families with Elite Learnsets

#if P_FAMILY_PIKACHU
static const u16 sRaichuEliteLearnset[] = {
    MOVE_WILDBOLT_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
static const u16 sSandslashEliteLearnset[] = {
    MOVE_THOUSAND_ARROWS,
    MOVE_SPIKY_SHIELD,
    MOVE_CEASELESS_EDGE,
    MOVE_UNAVAILABLE,
};

#if P_ALOLAN_FORMS
static const u16 sSandslashAlolaEliteLearnset[] = {
    MOVE_CEASELESS_EDGE,
    MOVE_GLACIAL_LANCE,
    MOVE_UNAVAILABLE,
};
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_NIDORAN
static const u16 sNidoqueenEliteLearnset[] = {
    MOVE_BARB_BARRAGE,
    MOVE_DEFEND_ORDER,
    MOVE_ATTACK_ORDER,
    MOVE_UNAVAILABLE,
};

static const u16 sNidokingEliteLearnset[] = {
    MOVE_BARB_BARRAGE,
    MOVE_DEFEND_ORDER,
    MOVE_ATTACK_ORDER,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_CLEFAIRY
static const u16 sClefableEliteLearnset[] = {
    MOVE_LUNAR_BLESSING,
    MOVE_LUNAR_DANCE,
    MOVE_MOONGEIST_BEAM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
static const u16 sNinetalesEliteLearnset[] = {
    MOVE_FIRE_LASH,
    MOVE_EERIE_SPELL,
    MOVE_UNAVAILABLE,
};

#if P_ALOLAN_FORMS
static const u16 sNinetalesAlolaEliteLearnset[] = {
    MOVE_ICE_BURN,
    MOVE_UNAVAILABLE,
};
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_VULPIX

#if P_FAMILY_JIGGLYPUFF
static const u16 sJigglypuffEliteLearnset[] = {
    MOVE_RELIC_SONG,
    MOVE_UNAVAILABLE,
};

static const u16 sWigglytuffEliteLearnset[] = {
    MOVE_TORCH_SONG,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_JIGGLYPUFF

#if P_FAMILY_ZUBAT
static const u16 sCrobatEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ZUBAT

#if P_FAMILY_DIGLETT
static const u16 sDugtrioEliteLearnset[] = {
    MOVE_THOUSAND_WAVES,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
static const u16 sMeowthEliteLearnset[] = {
    MOVE_MAKE_IT_RAIN,
    MOVE_UNAVAILABLE,
};

static const u16 sPersianEliteLearnset[] = {
    MOVE_MAKE_IT_RAIN,
    MOVE_UNAVAILABLE,
};

#if P_ALOLAN_FORMS
static const u16 sMeowthAlolaEliteLearnset[] = {
    MOVE_MAKE_IT_RAIN,
    MOVE_UNAVAILABLE,
};

static const u16 sPersianAlolaEliteLearnset[] = {
    MOVE_MAKE_IT_RAIN,
    MOVE_UNAVAILABLE,
};
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
static const u16 sMeowthGalarEliteLearnset[] = {
    MOVE_MAKE_IT_RAIN,
    MOVE_UNAVAILABLE,
};

static const u16 sPerrserkerEliteLearnset[] = {
    MOVE_MAKE_IT_RAIN,
    MOVE_UNAVAILABLE,
};
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MEOWTH

#if P_FAMILY_PSYDUCK
static const u16 sGolduckEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PSYDUCK

#if P_FAMILY_MANKEY
#if P_GEN_9_CROSS_EVOS
static const u16 sAnnihilapeEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_MANKEY

#if P_FAMILY_GROWLITHE
static const u16 sArcanineEliteLearnset[] = {
    MOVE_SACRED_FIRE,
    MOVE_PYRO_BALL,
    MOVE_UNAVAILABLE,
};

#if P_HISUIAN_FORMS
static const u16 sArcanineHisuiEliteLearnset[] = {
    MOVE_ACCELEROCK,
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_POLIWAG
static const u16 sPoliwrathEliteLearnset[] = {
    MOVE_SURGING_STRIKES,
    MOVE_JET_PUNCH,
    MOVE_UNAVAILABLE,
};

#if P_GEN_2_CROSS_EVOS
static const u16 sPolitoedEliteLearnset[] = {
    MOVE_SPARKLING_ARIA,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG

#if P_FAMILY_ABRA
static const u16 sAlakazamEliteLearnset[] = {
    MOVE_SPACIAL_REND,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
static const u16 sMachampEliteLearnset[] = {
    MOVE_CRUSH_GRIP,
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
static const u16 sVictreebelEliteLearnset[] = {
    MOVE_JAW_LOCK,
    MOVE_SNAP_TRAP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_TENTACOOL
static const u16 sTentacruelEliteLearnset[] = {
    MOVE_OCTOLOCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TENTACOOL

#if P_FAMILY_GEODUDE
static const u16 sGolemEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GEODUDE

#if P_FAMILY_SLOWPOKE
static const u16 sSlowpokeEliteLearnset[] = {
    MOVE_SHED_TAIL,
    MOVE_UNAVAILABLE,
};

static const u16 sSlowbroEliteLearnset[] = {
    MOVE_SHED_TAIL,
    MOVE_UNAVAILABLE,
};

#if P_GEN_2_CROSS_EVOS
static const u16 sSlowkingEliteLearnset[] = {
    MOVE_SHED_TAIL,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_2_CROSS_EVOS

#if P_GALARIAN_FORMS
static const u16 sSlowpokeGalarEliteLearnset[] = {
    MOVE_SHED_TAIL,
    MOVE_UNAVAILABLE,
};

static const u16 sSlowbroGalarEliteLearnset[] = {
    MOVE_ARMOR_CANNON,
    MOVE_SHED_TAIL,
    MOVE_UNAVAILABLE,
};

static const u16 sSlowkingGalarEliteLearnset[] = {
    MOVE_SHED_TAIL,
    MOVE_UNAVAILABLE,
};
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_MAGNEMITE
static const u16 sMagnezoneEliteLearnset[] = {
    MOVE_THUNDER_CAGE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MAGNEMITE

#if P_FAMILY_DODUO
static const u16 sDodrioEliteLearnset[] = {
    MOVE_BOLT_BEAK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DODUO

#if P_FAMILY_GRIMER
static const u16 sMukEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GRIMER

#if P_FAMILY_SHELLDER
static const u16 sCloysterEliteLearnset[] = {
    MOVE_SPIKY_SHIELD,
    MOVE_SHELL_SIDE_ARM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SHELLDER

#if P_FAMILY_GASTLY
static const u16 sGengarEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
static const u16 sSteelixEliteLearnset[] = {
    MOVE_DIAMOND_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ONIX

#if P_FAMILY_DROWZEE
static const u16 sHypnoEliteLearnset[] = {
    MOVE_DARK_VOID,
    MOVE_NIGHT_DAZE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DROWZEE

#if P_FAMILY_KRABBY
static const u16 sKinglerEliteLearnset[] = {
    MOVE_CRUSH_GRIP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_KRABBY

#if P_FAMILY_VOLTORB
static const u16 sElectrodeEliteLearnset[] = {
    MOVE_MIND_BLOWN,
    MOVE_ENERGY_BALL,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VOLTORB

#if P_FAMILY_EXEGGCUTE
static const u16 sExeggutorEliteLearnset[] = {
    MOVE_MIND_BLOWN,
    MOVE_TWIN_BEAM,
    MOVE_UNAVAILABLE,
};

#if P_ALOLAN_FORMS
static const u16 sExeggutorAlolaEliteLearnset[] = {
    MOVE_CHLOROBLAST,
    MOVE_UNAVAILABLE,
};
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
static const u16 sMarowakEliteLearnset[] = {
    MOVE_HEAD_SMASH,
    MOVE_UNAVAILABLE,
};

#if P_ALOLAN_FORMS
static const u16 sMarowakAlolaEliteLearnset[] = {
    MOVE_INFERNAL_PARADE,
    MOVE_FIERY_DANCE,
    MOVE_UNAVAILABLE,
};
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CUBONE

#if P_FAMILY_HITMONS
static const u16 sHitmonleeEliteLearnset[] = {
    MOVE_THUNDEROUS_KICK,
    MOVE_TRIPLE_KICK,
    MOVE_TROP_KICK,
    MOVE_AXE_KICK,
    MOVE_UNAVAILABLE,
};

static const u16 sHitmonchanEliteLearnset[] = {
    MOVE_PLASMA_FISTS,
    MOVE_JET_PUNCH,
    MOVE_UNAVAILABLE,
};

#if P_GEN_2_CROSS_EVOS
static const u16 sHitmontopEliteLearnset[] = {
    MOVE_SPIN_OUT,
    MOVE_WICKED_TORQUE,
    MOVE_BLAZING_TORQUE,
    MOVE_NOXIOUS_TORQUE,
    MOVE_MAGICAL_TORQUE,
    MOVE_COMBAT_TORQUE,
    MOVE_TOPSY_TURVY,
    MOVE_COLLISION_COURSE,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_RHYHORN
static const u16 sRhydonEliteLearnset[] = {
    MOVE_HYPER_DRILL,
    MOVE_UNAVAILABLE,
};

#if P_GEN_4_CROSS_EVOS
static const u16 sRhyperiorEliteLearnset[] = {
    MOVE_HYPER_DRILL,
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RHYHORN

#if P_FAMILY_TANGELA
#if P_GEN_4_CROSS_EVOS
static const u16 sTangrowthEliteLearnset[] = {
    MOVE_CHLOROBLAST,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA

#if P_FAMILY_HORSEA
#if P_GEN_2_CROSS_EVOS
static const u16 sKingdraEliteLearnset[] = {
    MOVE_SNIPE_SHOT,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA

#if P_FAMILY_STARYU
static const u16 sStarmieEliteLearnset[] = {
    MOVE_LUSTER_PURGE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_STARYU

#if P_FAMILY_MR_MIME
static const u16 sMrMimeEliteLearnset[] = {
    MOVE_TIDY_UP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
#if P_GEN_2_CROSS_EVOS
static const u16 sScizorEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_8_CROSS_EVOS
static const u16 sKleavorEliteLearnset[] = {
    MOVE_MIGHTY_CLEAVE,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_SCYTHER

#if P_FAMILY_JYNX
static const u16 sJynxEliteLearnset[] = {
    MOVE_FREEZING_GLARE,
    MOVE_ICE_BURN,
    MOVE_FREEZE_SHOCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_JYNX

#if P_FAMILY_ELECTABUZZ
#if P_GEN_4_CROSS_EVOS
static const u16 sElectivireEliteLearnset[] = {
    MOVE_THUNDEROUS_KICK,
    MOVE_PLASMA_FISTS,
    MOVE_ZING_ZAP,
    MOVE_FUSION_BOLT,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS

static const u16 sElectabuzzEliteLearnset[] = {
    MOVE_ZING_ZAP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ELECTABUZZ

#if P_FAMILY_MAGMAR
#if P_GEN_4_CROSS_EVOS
static const u16 sMagmortarEliteLearnset[] = {
    MOVE_FIERY_WRATH,
    MOVE_FUSION_FLARE,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR

#if P_FAMILY_TAUROS
static const u16 sTaurosEliteLearnset[] = {
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TAUROS

#if P_FAMILY_MAGIKARP
static const u16 sGyaradosEliteLearnset[] = {
    MOVE_DRAGON_ASCENT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MAGIKARP

#if P_FAMILY_LAPRAS
static const u16 sLaprasEliteLearnset[] = {
    MOVE_RELIC_SONG,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LAPRAS

#if P_FAMILY_EEVEE
static const u16 sVaporeonEliteLearnset[] = {
    MOVE_SPARKLING_ARIA,
    MOVE_UNAVAILABLE,
};

static const u16 sJolteonEliteLearnset[] = {
    MOVE_FUSION_BOLT,
    MOVE_UNAVAILABLE,
};

static const u16 sFlareonEliteLearnset[] = {
    MOVE_SACRED_FIRE,
    MOVE_PYRO_BALL,
    MOVE_FUSION_FLARE,
    MOVE_UNAVAILABLE,
};

#if P_GEN_2_CROSS_EVOS
static const u16 sEspeonEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};

static const u16 sUmbreonEliteLearnset[] = {
    MOVE_LUNAR_BLESSING,
    MOVE_MOONGEIST_BEAM,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
static const u16 sGlaceonEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_ICE_BURN,
    MOVE_UNAVAILABLE,
};

static const u16 sLeafeonEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_EEVEE

#if P_FAMILY_KABUTO
static const u16 sKabutopsEliteLearnset[] = {
    MOVE_STONE_AXE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_KABUTO

#if P_FAMILY_AERODACTYL
static const u16 sAerodactylEliteLearnset[] = {
    MOVE_HEAD_SMASH,
    MOVE_BRAVE_BIRD,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
static const u16 sMunchlaxEliteLearnset[] = {
    MOVE_TEATIME,
    MOVE_UNAVAILABLE,
};

static const u16 sSnorlaxEliteLearnset[] = {
    MOVE_TEATIME,
    MOVE_SLACK_OFF,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SNORLAX

#if P_FAMILY_ARTICUNO
static const u16 sArticunoEliteLearnset[] = {
    MOVE_AEROBLAST,
    MOVE_MOUNTAIN_GALE,
    MOVE_GLACIATE,
    MOVE_BLEAKWIND_STORM,
    MOVE_UNAVAILABLE,
};

#if P_GALARIAN_FORMS
static const u16 sArticunoGalarEliteLearnset[] = {
    MOVE_MOUNTAIN_GALE,
    MOVE_UNAVAILABLE,
};
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARTICUNO

#if P_FAMILY_ZAPDOS
static const u16 sZapdosEliteLearnset[] = {
    MOVE_BOLT_BEAK,
    MOVE_AEROBLAST,
    MOVE_WILDBOLT_STORM,
    MOVE_FUSION_BOLT,
    MOVE_UNAVAILABLE,
};

#if P_GALARIAN_FORMS
static const u16 sZapdosGalarEliteLearnset[] = {
    MOVE_BOLT_BEAK,
    MOVE_UNAVAILABLE,
};
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZAPDOS

#if P_FAMILY_MOLTRES
static const u16 sMoltresEliteLearnset[] = {
    MOVE_AEROBLAST,
    MOVE_BEAK_BLAST,
    MOVE_FUSION_FLARE,
    MOVE_UNAVAILABLE,
};

#if P_GALARIAN_FORMS
static const u16 sMoltresGalarEliteLearnset[] = {
    MOVE_BEAK_BLAST,
    MOVE_UNAVAILABLE,
};
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MOLTRES

#if P_FAMILY_DRATINI
static const u16 sDragoniteEliteLearnset[] = {
    MOVE_DRAGON_ENERGY,
    MOVE_DRAGON_ASCENT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DRATINI

#if P_FAMILY_MEWTWO
static const u16 sMewtwoEliteLearnset[] = {
    MOVE_MIND_BLOWN,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MEWTWO

// Gen 2

#if P_FAMILY_CHIKORITA
static const u16 sMeganiumEliteLearnset[] = {
    MOVE_FLORAL_HEALING,
    MOVE_FLOWER_TRICK,
    MOVE_SPRINGTIDE_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CHIKORITA

#if P_FAMILY_CYNDAQUIL
static const u16 sTyphlosionEliteLearnset[] = {
    MOVE_BLAZING_TORQUE,
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CYNDAQUIL

#if P_FAMILY_TOTODILE
static const u16 sFeraligatrEliteLearnset[] = {
    MOVE_JAW_LOCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TOTODILE

#if P_FAMILY_SPINARAK
static const u16 sAriadosEliteLearnset[] = {
    MOVE_SILK_TRAP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SPINARAK

#if P_FAMILY_MAREEP
static const u16 sAmpharosEliteLearnset[] = {
    MOVE_TAIL_GLOW,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MAREEP

#if P_FAMILY_BELLOSSOM
static const u16 sBellossomEliteLearnset[] = {
    MOVE_FLORAL_HEALING,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BELLOSSOM

#if P_FAMILY_WOOPER
static const u16 sQuagsireEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WOOPER

#if P_FAMILY_MURKROW
#if P_GEN_4_CROSS_EVOS
static const u16 sHonchkrowEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MURKROW

#if P_FAMILY_MISDREAVUS
#if P_GEN_4_CROSS_EVOS
static const u16 sMismagiusEliteLearnset[] = {
    MOVE_EERIE_SPELL,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MISDREAVUS

#if P_FAMILY_GIRAFARIG
#if P_GEN_9_CROSS_EVOS
static const u16 sFarigirafEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_GIRAFARIG

#if P_FAMILY_PINECO
static const u16 sForretressEliteLearnset[] = {
    MOVE_SHELL_SIDE_ARM,
    MOVE_ARMOR_CANNON,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PINECO

#if P_FAMILY_DUNSPARCE
#if P_GEN_9_CROSS_EVOS
static const u16 sDudunsparceEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DUNSPARCE

#if P_FAMILY_GLIGAR
#if P_GEN_4_CROSS_EVOS
static const u16 sGliscorEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR

#if P_FAMILY_SNUBBULL
static const u16 sGranbullEliteLearnset[] = {
    MOVE_JAW_LOCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SNUBBULL

#if P_FAMILY_QWILFISH
static const u16 sQwilfishEliteLearnset[] = {
    MOVE_SPIKY_SHIELD,
    MOVE_BANEFUL_BUNKER,
    MOVE_UNAVAILABLE,
};

#if P_HISUIAN_FORMS
static const u16 sOverqwilEliteLearnset[] = {
    MOVE_CEASELESS_EDGE,
    MOVE_BANEFUL_BUNKER,
    MOVE_UNAVAILABLE,
};
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_QWILFISH

#if P_FAMILY_SHUCKLE
static const u16 sShuckleEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SHUCKLE

#if P_FAMILY_SNEASEL
#if P_GEN_4_CROSS_EVOS
static const u16 sWeavileEliteLearnset[] = {
    MOVE_GLACIAL_LANCE,
    MOVE_WICKED_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNEASEL

#if P_FAMILY_SWINUB
#if P_GEN_4_CROSS_EVOS
static const u16 sMamoswineEliteLearnset[] = {
    MOVE_GLACIAL_LANCE,
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB

#if P_FAMILY_REMORAID
static const u16 sOctilleryEliteLearnset[] = {
    MOVE_SHELL_SIDE_ARM,
    MOVE_SNIPE_SHOT,
    MOVE_OCTOLOCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_REMORAID

#if P_FAMILY_DELIBIRD
static const u16 sDelibirdEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DELIBIRD

#if P_FAMILY_HOUNDOUR
static const u16 sHoundoomEliteLearnset[] = {
    MOVE_FIERY_WRATH,
    MOVE_PYRO_BALL,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_HOUNDOUR

#if P_FAMILY_STANTLER
#if P_GEN_8_CROSS_EVOS
static const u16 sWyrdeerEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_STANTLER

#if P_FAMILY_RAIKOU
static const u16 sRaikouEliteLearnset[] = {
    MOVE_WILDBOLT_STORM,
    MOVE_FUSION_BOLT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_RAIKOU

#if P_FAMILY_ENTEI
static const u16 sEnteiEliteLearnset[] = {
    MOVE_FUSION_FLARE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ENTEI

#if P_FAMILY_SUICUNE
static const u16 sSuicuneEliteLearnset[] = {
    MOVE_AQUA_STEP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SUICUNE

#if P_FAMILY_LUGIA
static const u16 sLugiaEliteLearnset[] = {
    MOVE_ESPER_WING,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LUGIA

// Gen 3

#if P_FAMILY_LOTAD
static const u16 sLudicoloEliteLearnset[] = {
    MOVE_AQUA_STEP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LOTAD

#if P_FAMILY_SEEDOT
static const u16 sShiftryEliteLearnset[] = {
    MOVE_CHLOROBLAST,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SEEDOT

#if P_FAMILY_RALTS
static const u16 sGardevoirEliteLearnset[] = {
    MOVE_SPACIAL_REND,
    MOVE_UNAVAILABLE,
};

static const u16 sGalladeEliteLearnset[] = {
    MOVE_PSYBLADE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_RALTS

#if P_FAMILY_MAKUHITA
static const u16 sHariyamaEliteLearnset[] = {
    MOVE_SALT_CURE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MAKUHITA

#if P_FAMILY_SABLEYE
static const u16 sSableyeEliteLearnset[] = {
    MOVE_DIAMOND_STORM,
    MOVE_SPECTRAL_THIEF,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SABLEYE

#if P_FAMILY_MAWILE
static const u16 sMawileEliteLearnset[] = {
    MOVE_JAW_LOCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MAWILE

#if P_FAMILY_ELEKTRIKE
static const u16 sManectricEliteLearnset[] = {
    MOVE_WILDBOLT_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ELEKTRIKE

#if P_FAMILY_PLUSLE
static const u16 sPlusleEliteLearnset[] = {
    MOVE_WILDBOLT_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PLUSLE

#if P_FAMILY_MINUN
static const u16 sMinunEliteLearnset[] = {
    MOVE_WILDBOLT_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MINUN

#if P_FAMILY_VOLBEAT
static const u16 sIllumiseEliteLearnset[] = {
    MOVE_TAIL_GLOW,
    MOVE_LUNAR_DANCE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VOLBEAT

#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
static const u16 sRoseradeEliteLearnset[] = {
    MOVE_SPIKY_SHIELD,
    MOVE_BARB_BARRAGE,
    MOVE_FLORAL_HEALING,
    MOVE_FLOWER_TRICK,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA

#if P_FAMILY_CARVANHA
static const u16 sSharpedoEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CARVANHA

#if P_FAMILY_WAILMER
static const u16 sWailordEliteLearnset[] = {
    MOVE_SPARKLING_ARIA,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WAILMER

#if P_FAMILY_NUMEL
static const u16 sCameruptEliteLearnset[] = {
    MOVE_MAGMA_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_NUMEL

#if P_FAMILY_TORKOAL
static const u16 sTorkoalEliteLearnset[] = {
    MOVE_STRANGE_STEAM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TORKOAL

#if P_FAMILY_SPOINK
static const u16 sGrumpigEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SPOINK

#if P_FAMILY_TRAPINCH
static const u16 sFlygonEliteLearnset[] = {
    MOVE_JAW_LOCK,
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_SWABLU
static const u16 sAltariaEliteLearnset[] = {
    MOVE_MIST_BALL,
    MOVE_DRAGON_ENERGY,
    MOVE_DRAGON_ASCENT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SWABLU

#if P_FAMILY_ZANGOOSE
static const u16 sZangooseEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_SEVIPER
static const u16 sSeviperEliteLearnset[] = {
    MOVE_JAW_LOCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SEVIPER

#if P_FAMILY_LUNATONE
static const u16 sLunatoneEliteLearnset[] = {
    MOVE_LUNAR_BLESSING,
    MOVE_NIGHT_DAZE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LUNATONE

#if P_FAMILY_SOLROCK
static const u16 sSolrockEliteLearnset[] = {
    MOVE_SUNSTEEL_STRIKE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SOLROCK

#if P_FAMILY_BARBOACH
static const u16 sWhiscashEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BARBOACH

#if P_FAMILY_CORPHISH
static const u16 sCrawdauntEliteLearnset[] = {
    MOVE_CRUSH_GRIP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CORPHISH

#if P_FAMILY_BALTOY
static const u16 sClaydolEliteLearnset[] = {
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BALTOY

#if P_FAMILY_FEEBAS
static const u16 sMiloticEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FEEBAS

#if P_FAMILY_SHUPPET
static const u16 sBanetteEliteLearnset[] = {
    MOVE_COTTON_GUARD,
    MOVE_SPECTRAL_THIEF,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_TROPIUS
static const u16 sTropiusEliteLearnset[] = {
    MOVE_CHLOROBLAST,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TROPIUS

#if P_FAMILY_ABSOL
static const u16 sAbsolEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
static const u16 sGlalieEliteLearnset[] = {
    MOVE_MOUNTAIN_GALE,
    MOVE_UNAVAILABLE,
};

static const u16 sFroslassEliteLearnset[] = {
    MOVE_FREEZING_GLARE,
    MOVE_CHILLY_RECEPTION,
    MOVE_BITTER_MALICE,
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_HUNTAIL
static const u16 sHuntailEliteLearnset[] = {
    MOVE_FISHIOUS_REND,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_HUNTAIL

#if P_FAMILY_LUVDISC
static const u16 sLuvdiscEliteLearnset[] = {
    MOVE_TAKE_HEART,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_BAGON
static const u16 sSalamenceEliteLearnset[] = {
    MOVE_DRAGON_ENERGY,
    MOVE_DRAGON_HAMMER,
    MOVE_DRAGON_ASCENT,
    MOVE_BLEAKWIND_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BAGON

#if P_FAMILY_BELDUM
static const u16 sMetagrossEliteLearnset[] = {
    MOVE_SUNSTEEL_STRIKE,
    MOVE_DOUBLE_IRON_BASH,
    MOVE_SHIFT_GEAR,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BELDUM

#if P_FAMILY_REGIROCK
static const u16 sRegirockEliteLearnset[] = {
    MOVE_SHORE_UP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_REGIROCK

#if P_FAMILY_REGICE
static const u16 sRegiceEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_REGICE

#if P_FAMILY_LATIAS
static const u16 sLatiasEliteLearnset[] = {
    MOVE_TWIN_BEAM,
    MOVE_UNAVAILABLE,
};

static const u16 sLatiosEliteLearnset[] = {
    MOVE_TWIN_BEAM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LATIAS

#if P_FAMILY_GROUDON
static const u16 sGroudonEliteLearnset[] = {
    MOVE_LANDS_WRATH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GROUDON

// Gen 4

#if P_FAMILY_STARLY
static const u16 sStaraptorEliteLearnset[] = {
    MOVE_BOLT_BEAK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_STARLY

#if P_FAMILY_BIDOOF
static const u16 sBibarelEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BIDOOF

#if P_FAMILY_SHINX
static const u16 sLuxrayEliteLearnset[] = {
    MOVE_ZING_ZAP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SHINX

#if P_FAMILY_CRANIDOS
static const u16 sRampardosEliteLearnset[] = {
    MOVE_ACCELEROCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CRANIDOS

#if P_FAMILY_BURMY
static const u16 sWormadamEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BURMY

#if P_FAMILY_COMBEE
static const u16 sVespiquenEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_COMBEE

#if P_FAMILY_BUIZEL
static const u16 sFloatzelEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BUIZEL

#if P_FAMILY_CHERUBI
static const u16 sCherrimEliteLearnset[] = {
    MOVE_CHLOROBLAST,
    MOVE_SPRINGTIDE_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CHERUBI

#if P_FAMILY_BUNEARY
static const u16 sLopunnyEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_BRONZOR
static const u16 sBronzorEliteLearnset[] = {
    MOVE_DOUBLE_IRON_BASH,
    MOVE_UNAVAILABLE,
};

static const u16 sBronzongEliteLearnset[] = {
    MOVE_LUSTER_PURGE,
    MOVE_SUNSTEEL_STRIKE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BRONZOR

#if P_FAMILY_GIBLE
static const u16 sGarchompEliteLearnset[] = {
    MOVE_DRAGON_ENERGY,
    MOVE_DRAGON_HAMMER,
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
static const u16 sLucarioEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_RIOLU

#if P_FAMILY_HIPPOPOTAS
static const u16 sHippowdonEliteLearnset[] = {
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_HIPPOPOTAS

#if P_FAMILY_SKORUPI
static const u16 sDrapionEliteLearnset[] = {
    MOVE_WICKED_BLOW,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SKORUPI

#if P_FAMILY_CROAGUNK
static const u16 sToxicroakEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CROAGUNK

#if P_FAMILY_CARNIVINE
static const u16 sCarnivineEliteLearnset[] = {
    MOVE_JAW_LOCK,
    MOVE_SNAP_TRAP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CARNIVINE

#if P_FAMILY_MANTYKE
static const u16 sMantineEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MANTYKE

#if P_FAMILY_SNOVER
static const u16 sAbomasnowEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SNOVER

#if P_FAMILY_ROTOM
static const u16 sRotomEliteLearnset[] = {
    MOVE_THUNDER_CAGE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ROTOM

#if P_FAMILY_DIALGA
static const u16 sDialgaEliteLearnset[] = {
    MOVE_DIAMOND_STORM,
    MOVE_JUDGMENT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
static const u16 sPalkiaEliteLearnset[] = {
    MOVE_JUDGMENT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PALKIA

#if P_FAMILY_CRESSELIA
static const u16 sCresseliaEliteLearnset[] = {
    MOVE_MOONGEIST_BEAM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
static const u16 sManaphyEliteLearnset[] = {
    MOVE_PURIFY,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
static const u16 sDarkraiEliteLearnset[] = {
    MOVE_NIGHT_DAZE,
    MOVE_ROAR_OF_TIME,
    MOVE_SPACIAL_REND,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
static const u16 sShayminSkyEliteLearnset[] = {
    MOVE_SPRINGTIDE_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
static const u16 sArceusEliteLearnset[] = {
    MOVE_ROAR_OF_TIME,
    MOVE_SPACIAL_REND,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ARCEUS

// Gen 5

#if P_FAMILY_VICTINI
static const u16 sVictiniEliteLearnset[] = {
    MOVE_VICTORY_DANCE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VICTINI

#if P_FAMILY_TEPIG
static const u16 sEmboarEliteLearnset[] = {
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TEPIG

#if P_FAMILY_OSHAWOTT
static const u16 sSamurottEliteLearnset[] = {
    MOVE_SECRET_SWORD,
    MOVE_UNAVAILABLE,
};

#if P_HISUIAN_FORMS
static const u16 sSamurottHisuiEliteLearnset[] = {
    MOVE_SECRET_SWORD,
    MOVE_UNAVAILABLE,
};
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_OSHAWOTT

#if P_FAMILY_LILLIPUP
static const u16 sStoutlandEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LILLIPUP

#if P_FAMILY_PURRLOIN
static const u16 sLiepardEliteLearnset[] = {
    MOVE_SPECTRAL_THIEF,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PURRLOIN

#if P_FAMILY_PANSAGE
static const u16 sSimisageEliteLearnset[] = {
    MOVE_JUNGLE_HEALING,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PANSAGE

#if P_FAMILY_PANSEAR
static const u16 sSimisearEliteLearnset[] = {
    MOVE_JUNGLE_HEALING,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PANSEAR

#if P_FAMILY_PANPOUR
static const u16 sSimipourEliteLearnset[] = {
    MOVE_JUNGLE_HEALING,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PANPOUR

#if P_FAMILY_MUNNA
static const u16 sMusharnaEliteLearnset[] = {
    MOVE_DARK_VOID,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MUNNA

#if P_FAMILY_PIDOVE
static const u16 sUnfezantEliteLearnset[] = {
    MOVE_BLEAKWIND_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PIDOVE

#if P_FAMILY_WOOBAT
static const u16 sSwoobatEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WOOBAT

#if P_FAMILY_DRILBUR
static const u16 sExcadrillEliteLearnset[] = {
    MOVE_HYPER_DRILL,
    MOVE_HYDRO_PUMP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DRILBUR

#if P_FAMILY_TIMBURR
static const u16 sGurdurrEliteLearnset[] = {
    MOVE_STEEL_BEAM,
    MOVE_WOOD_HAMMER,
    MOVE_UNAVAILABLE,
};

static const u16 sConkeldurrEliteLearnset[] = {
    MOVE_WOOD_HAMMER,
    MOVE_DOUBLE_IRON_BASH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TIMBURR

#if P_FAMILY_TYMPOLE
static const u16 sSeismitoadEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TYMPOLE

#if P_FAMILY_THROH
static const u16 sThrohEliteLearnset[] = {
    MOVE_CRUSH_GRIP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_THROH

#if P_FAMILY_SEWADDLE
static const u16 sLeavannyEliteLearnset[] = {
    MOVE_SILK_TRAP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SEWADDLE

#if P_FAMILY_VENIPEDE
static const u16 sScolipedeEliteLearnset[] = {
    MOVE_NOXIOUS_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VENIPEDE

#if P_FAMILY_COTTONEE
static const u16 sWhimsicottEliteLearnset[] = {
    MOVE_SPRINGTIDE_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_COTTONEE

#if P_FAMILY_PETILIL
static const u16 sLilligantEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PETILIL

#if P_FAMILY_SANDILE
static const u16 sKrookodileEliteLearnset[] = {
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SANDILE

#if P_FAMILY_DARUMAKA
static const u16 sDarmanitanEliteLearnset[] = {
    MOVE_MIND_BLOWN,
    MOVE_UNAVAILABLE,
};

#if P_GALARIAN_FORMS
static const u16 sDarmanitanGalarEliteLearnset[] = {
    MOVE_ICE_BURN,
    MOVE_UNAVAILABLE,
};
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA

#if P_FAMILY_DWEBBLE
static const u16 sCrustleEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DWEBBLE

#if P_FAMILY_SCRAGGY
static const u16 sScraftyEliteLearnset[] = {
    MOVE_BODY_PRESS,
    MOVE_WICKED_BLOW,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SCRAGGY

#if P_FAMILY_YAMASK
static const u16 sCofagrigusEliteLearnset[] = {
    MOVE_SPIRIT_SHACKLE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_YAMASK

#if P_FAMILY_TIRTOUGA
static const u16 sCarracostaEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TIRTOUGA

#if P_FAMILY_ARCHEN
static const u16 sArcheopsEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ARCHEN

#if P_FAMILY_ZORUA
static const u16 sZoroarkEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ZORUA

#if P_FAMILY_MINCCINO
static const u16 sMinccinoEliteLearnset[] = {
    MOVE_TIDY_UP,
    MOVE_UNAVAILABLE,
};

static const u16 sCinccinoEliteLearnset[] = {
    MOVE_TIDY_UP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MINCCINO

#if P_FAMILY_GOTHITA
static const u16 sGothitelleEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GOTHITA

#if P_FAMILY_DUCKLETT
static const u16 sSwannaEliteLearnset[] = {
    MOVE_BLEAKWIND_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DUCKLETT

#if P_FAMILY_VANILLITE
static const u16 sVanilluxeEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VANILLITE

#if P_FAMILY_KARRABLAST
static const u16 sEscavalierEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_KARRABLAST

#if P_FAMILY_JOLTIK
static const u16 sGalvantulaEliteLearnset[] = {
    MOVE_SILK_TRAP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_JOLTIK

#if P_FAMILY_FERROSEED
static const u16 sFerrothornEliteLearnset[] = {
    MOVE_CHLOROBLAST,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FERROSEED

#if P_FAMILY_ELGYEM
static const u16 sBeheeyemEliteLearnset[] = {
    MOVE_LUSTER_PURGE,
    MOVE_SPACIAL_REND,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ELGYEM

#if P_FAMILY_LITWICK
static const u16 sChandelureEliteLearnset[] = {
    MOVE_WICKED_TORQUE,
    MOVE_BLAZING_TORQUE,
    MOVE_MAGICAL_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LITWICK

#if P_FAMILY_AXEW
static const u16 sHaxorusEliteLearnset[] = {
    MOVE_MIGHTY_CLEAVE,
    MOVE_GLAIVE_RUSH,
    MOVE_DRAGON_HAMMER,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_AXEW

#if P_FAMILY_CUBCHOO
static const u16 sBearticEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CUBCHOO

#if P_FAMILY_CRYOGONAL
static const u16 sCryogonalEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CRYOGONAL

#if P_FAMILY_STUNFISK
static const u16 sStunfiskEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_STUNFISK

#if P_FAMILY_DRUDDIGON
static const u16 sDruddigonEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DRUDDIGON

#if P_FAMILY_PAWNIARD
static const u16 sBisharpEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};

#if P_GEN_9_CROSS_EVOS
static const u16 sKingambitEliteLearnset[] = {
    MOVE_DEFEND_ORDER,
    MOVE_ATTACK_ORDER,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_PAWNIARD

#if P_FAMILY_BOUFFALANT
static const u16 sBouffalantEliteLearnset[] = {
    MOVE_RAGING_BULL,
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BOUFFALANT

#if P_FAMILY_BRAVIARY
static const u16 sBraviaryEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BRAVIARY

#if P_FAMILY_VULLABY
static const u16 sMandibuzzEliteLearnset[] = {
    MOVE_BONE_CLUB,
    MOVE_BONEMERANG,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VULLABY

#if P_FAMILY_HEATMOR
static const u16 sHeatmorEliteLearnset[] = {
    MOVE_BLAZING_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_HEATMOR

#if P_FAMILY_DEINO
static const u16 sHydreigonEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DEINO

#if P_FAMILY_LARVESTA
static const u16 sVolcaronaEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LARVESTA

#if P_FAMILY_COBALION
static const u16 sCobalionEliteLearnset[] = {
    MOVE_SECRET_SWORD,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_COBALION

#if P_FAMILY_TERRAKION
static const u16 sTerrakionEliteLearnset[] = {
    MOVE_SECRET_SWORD,
    MOVE_STONE_AXE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TERRAKION

#if P_FAMILY_VIRIZION
static const u16 sVirizionEliteLearnset[] = {
    MOVE_SECRET_SWORD,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VIRIZION

#if P_FAMILY_TORNADUS
static const u16 sTornadusEliteLearnset[] = {
    MOVE_MOUNTAIN_GALE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TORNADUS

#if P_FAMILY_LANDORUS
static const u16 sLandorusEliteLearnset[] = {
    MOVE_LANDS_WRATH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LANDORUS

#if P_FAMILY_MELOETTA
static const u16 sMeloettaEliteLearnset[] = {
    MOVE_TORCH_SONG,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MELOETTA

// Gen 6

#if P_FAMILY_FENNEKIN
static const u16 sDelphoxEliteLearnset[] = {
    MOVE_EERIE_SPELL,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FLETCHLING
static const u16 sTalonflameEliteLearnset[] = {
    MOVE_BEAK_BLAST,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_LITLEO
static const u16 sPyroarEliteLearnset[] = {
    MOVE_PYRO_BALL,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
static const u16 sFlorgesEliteLearnset[] = {
    MOVE_FLORAL_HEALING,
    MOVE_FLOWER_TRICK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
static const u16 sGogoatEliteLearnset[] = {
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
static const u16 sPangoroEliteLearnset[] = {
    MOVE_WICKED_BLOW,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_INKAY
static const u16 sMalamarEliteLearnset[] = {
    MOVE_OCTOLOCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
static const u16 sBarbaracleEliteLearnset[] = {
    MOVE_SURGING_STRIKES,
    MOVE_JET_PUNCH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BINACLE

#if P_FAMILY_TYRUNT
static const u16 sTyrantrumEliteLearnset[] = {
    MOVE_JAW_LOCK,
    MOVE_DRAGON_HAMMER,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
static const u16 sAurorusEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_AMAURA

#if P_FAMILY_DEDENNE
static const u16 sDedenneEliteLearnset[] = {
    MOVE_MAGICAL_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_CARBINK
static const u16 sCarbinkEliteLearnset[] = {
    MOVE_LUSTER_PURGE,
    MOVE_DIAMOND_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CARBINK

#if P_FAMILY_GOOMY
static const u16 sGoodraEliteLearnset[] = {
    MOVE_DRAGON_ENERGY,
    MOVE_UNAVAILABLE,
};

#if P_HISUIAN_FORMS
static const u16 sGoodraHisuiEliteLearnset[] = {
    MOVE_DRAGON_ENERGY,
    MOVE_UNAVAILABLE,
};
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
static const u16 sKlefkiEliteLearnset[] = {
    MOVE_CEASELESS_EDGE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
static const u16 sTrevenantEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_NOIBAT
static const u16 sNoivernEliteLearnset[] = {
    MOVE_DRAGON_ASCENT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_NOIBAT

// Gen 7

#if P_FAMILY_ROWLET
static const u16 sDecidueyeEliteLearnset[] = {
    MOVE_THOUSAND_ARROWS,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ROWLET

#if P_FAMILY_LITTEN
static const u16 sIncineroarEliteLearnset[] = {
    MOVE_FIERY_WRATH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LITTEN

#if P_FAMILY_POPPLIO
static const u16 sPrimarinaEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_POPPLIO

#if P_FAMILY_GRUBBIN
static const u16 sVikavoltEliteLearnset[] = {
    MOVE_THUNDER_CAGE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GRUBBIN

#if P_FAMILY_ORICORIO
static const u16 sOricorioEliteLearnset[] = {
    MOVE_LUNAR_DANCE,
    MOVE_VICTORY_DANCE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ORICORIO

#if P_FAMILY_DEWPIDER
static const u16 sAraquanidEliteLearnset[] = {
    MOVE_SILK_TRAP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DEWPIDER

#if P_FAMILY_FOMANTIS
static const u16 sLurantisEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FOMANTIS

#if P_FAMILY_MUDBRAY
static const u16 sMudsdaleEliteLearnset[] = {
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MUDBRAY

#if P_FAMILY_SALANDIT
static const u16 sSalazzleEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SALANDIT

#if P_FAMILY_BOUNSWEET
static const u16 sTsareenaEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BOUNSWEET

#if P_FAMILY_COMFEY
static const u16 sComfeyEliteLearnset[] = {
    MOVE_FLORAL_HEALING,
    MOVE_FLOWER_TRICK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_COMFEY

#if P_FAMILY_WIMPOD
static const u16 sGolisopodEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WIMPOD

#if P_FAMILY_SANDYGAST
static const u16 sPalossandEliteLearnset[] = {
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SANDYGAST

#if P_FAMILY_MINIOR
static const u16 sMiniorEliteLearnset[] = {
    MOVE_SUNSTEEL_STRIKE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MINIOR

#if P_FAMILY_TURTONATOR
static const u16 sTurtonatorEliteLearnset[] = {
    MOVE_BURNING_BULWARK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TURTONATOR

#if P_FAMILY_TOGEDEMARU
static const u16 sTogedemaruEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TOGEDEMARU

#if P_FAMILY_MIMIKYU
static const u16 sMimikyuEliteLearnset[] = {
    MOVE_SPECTRAL_THIEF,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MIMIKYU

#if P_FAMILY_BRUXISH
static const u16 sBruxishEliteLearnset[] = {
    MOVE_FISHIOUS_REND,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BRUXISH

#if P_FAMILY_DRAMPA
static const u16 sDrampaEliteLearnset[] = {
    MOVE_DRAGON_ENERGY,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DRAMPA

#if P_FAMILY_DHELMISE
static const u16 sDhelmiseEliteLearnset[] = {
    MOVE_SPIRIT_SHACKLE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DHELMISE

#if P_FAMILY_JANGMO_O
static const u16 sKommoOEliteLearnset[] = {
    MOVE_ARMOR_CANNON,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_JANGMO_O

#if P_FAMILY_TAPU_KOKO
static const u16 sTapuKokoEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TAPU_KOKO

#if P_FAMILY_LUNALA
static const u16 sLunalaEliteLearnset[] = {
    MOVE_LUNAR_BLESSING,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LUNALA

#if P_FAMILY_NIHILEGO
static const u16 sNihilegoEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_NIHILEGO

#if P_FAMILY_BUZZWOLE
static const u16 sBuzzwoleEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BUZZWOLE

#if P_FAMILY_CELESTEELA
static const u16 sCelesteelaEliteLearnset[] = {
    MOVE_SUNSTEEL_STRIKE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CELESTEELA

#if P_FAMILY_BLACEPHALON
static const u16 sBlacephalonEliteLearnset[] = {
    MOVE_INFERNAL_PARADE,
    MOVE_PYRO_BALL,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BLACEPHALON

// Gen 8

#if P_FAMILY_GROOKEY
static const u16 sRillaboomEliteLearnset[] = {
    MOVE_JUNGLE_HEALING,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GROOKEY

#if P_FAMILY_SOBBLE
static const u16 sInteleonEliteLearnset[] = {
    MOVE_SHELL_SIDE_ARM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SOBBLE

#if P_FAMILY_ROOKIDEE
static const u16 sCorviknightEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ROOKIDEE

#if P_FAMILY_NICKIT
static const u16 sThievulEliteLearnset[] = {
    MOVE_SPECTRAL_THIEF,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_NICKIT

#if P_FAMILY_WOOLOO
static const u16 sDubwoolEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WOOLOO

#if P_FAMILY_APPLIN
static const u16 sFlappleEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_APPLIN

#if P_FAMILY_SILICOBRA
static const u16 sSandacondaEliteLearnset[] = {
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SILICOBRA

#if P_FAMILY_ARROKUDA
static const u16 sBarraskewdaEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ARROKUDA

#if P_FAMILY_SINISTEA
static const u16 sPolteageistEliteLearnset[] = {
    MOVE_STRANGE_STEAM,
    MOVE_HYDRO_STEAM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SINISTEA

#if P_FAMILY_HATENNA
static const u16 sHattereneEliteLearnset[] = {
    MOVE_MAGICAL_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_HATENNA

#if P_FAMILY_FALINKS
static const u16 sFalinksEliteLearnset[] = {
    MOVE_DEFEND_ORDER,
    MOVE_ATTACK_ORDER,
    MOVE_TRIPLE_ARROWS,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FALINKS

#if P_FAMILY_SNOM
static const u16 sFrosmothEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SNOM

#if P_FAMILY_STONJOURNER
static const u16 sStonjournerEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_STONJOURNER

#if P_FAMILY_EISCUE
static const u16 sEiscueEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_EISCUE

#if P_FAMILY_CUFANT
static const u16 sCopperajahEliteLearnset[] = {
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CUFANT

#if P_FAMILY_DRACOZOLT
static const u16 sArctozoltEliteLearnset[] = {
    MOVE_WILDBOLT_STORM,
    MOVE_FREEZE_SHOCK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DRACOZOLT

#if P_FAMILY_DRACOVISH
static const u16 sDracovishEliteLearnset[] = {
    MOVE_JAW_LOCK,
    MOVE_UNAVAILABLE,
};

static const u16 sArctovishEliteLearnset[] = {
    MOVE_GLACIATE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DRACOVISH

#if P_FAMILY_DURALUDON
static const u16 sDuraludonEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DURALUDON

#if P_FAMILY_DREEPY
static const u16 sDragapultEliteLearnset[] = {
    MOVE_SHADOW_CLAW,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DREEPY

#if P_FAMILY_ZAMAZENTA
static const u16 sZamazentaEliteLearnset[] = {
    MOVE_PSYSHIELD_BASH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ZAMAZENTA

#if P_FAMILY_ETERNATUS
static const u16 sEternatusEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ETERNATUS

#if P_FAMILY_KUBFU
static const u16 sUrshifuEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_KUBFU

#if P_FAMILY_CALYREX
static const u16 sCalyrexIceEliteLearnset[] = {
    MOVE_FREEZING_GLARE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CALYREX

// Gen 9

#if P_FAMILY_LECHONK
static const u16 sOinkolongneEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LECHONK

#if P_FAMILY_FIDOUGH
static const u16 sDachsbunEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FIDOUGH

#if P_FAMILY_NACLI
static const u16 sGarganacleEliteLearnset[] = {
    MOVE_PURIFY,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_NACLI

#if P_FAMILY_CHARCADET
static const u16 sArmarougeEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};

static const u16 sCeruledgeEliteLearnset[] = {
    MOVE_PSYBLADE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CHARCADET

#if P_FAMILY_KLAWF
static const u16 sKlawfEliteLearnset[] = {
    MOVE_CRUSH_GRIP,
    MOVE_STONE_AXE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_KLAWF

#if P_FAMILY_RELLOR
static const u16 sRabscaEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_RELLOR

#if P_FAMILY_FLITTLE
static const u16 sEspathaEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FLITTLE

#if P_FAMILY_WIGLETT
static const u16 sWugtrioEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WIGLETT

#if P_FAMILY_FINIZEN
static const u16 sPalafineEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FINIZEN

#if P_FAMILY_VAROOM
static const u16 sRevavroomEliteLearnset[] = {
    MOVE_WICKED_TORQUE,
    MOVE_BLAZING_TORQUE,
    MOVE_NOXIOUS_TORQUE,
    MOVE_MAGICAL_TORQUE,
    MOVE_COMBAT_TORQUE,
    MOVE_COLLISION_COURSE,
    MOVE_ELECTRO_DRIFT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VAROOM

#if P_FAMILY_CYCLIZAR
static const u16 sCyclizarEliteLearnset[] = {
    MOVE_SPIN_OUT,
    MOVE_COLLISION_COURSE,
    MOVE_ELECTRO_DRIFT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CYCLIZAR

#if P_FAMILY_GREAVARD
static const u16 sHoundstoneEliteLearnset[] = {
    MOVE_BONEMERANG,
    MOVE_SHADOW_BONE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GREAVARD

#if P_FAMILY_FLAMIGO
static const u16 sFlamigoEliteLearnset[] = {
    MOVE_FLYING_PRESS,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FLAMIGO

#if P_FAMILY_VELUZA
static const u16 sVeluzaEliteLearnset[] = {
    MOVE_PSYBLADE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VELUZA

#if P_FAMILY_TATSUGIRI
static const u16 sTatsugiriEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TATSUGIRI

#if P_FAMILY_FRIGIBAX
static const u16 sBaxcaliburEliteLearnset[] = {
    MOVE_DRAGON_ENERGY,
    MOVE_MIGHTY_CLEAVE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FRIGIBAX

#if P_FAMILY_BRAMBLIN
static const u16 sBrambleghastEliteLearnset[] = {
    MOVE_SPIKY_SHIELD,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BRAMBLIN

#if P_FAMILY_GIMMIGHOUL
static const u16 sGholdengoEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GIMMIGHOUL

#if P_FAMILY_WO_CHIEN
static const u16 sWoChienEliteLearnset[] = {
    MOVE_RAGE_POWDER,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WO_CHIEN

#if P_FAMILY_CHIEN_PAO
static const u16 sChienPaoEliteLearnset[] = {
    MOVE_SECRET_SWORD,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CHIEN_PAO

#if P_FAMILY_ROARING_MOON
static const u16 sRoaringMoonEliteLearnset[] = {
    MOVE_DRAGON_ASCENT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ROARING_MOON

#if P_FAMILY_IRON_TREADS
static const u16 sIronTreadsEliteLearnset[] = {
    MOVE_SPIN_OUT,
    MOVE_BLAZING_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_IRON_TREADS

#if P_FAMILY_IRON_MOTH
static const u16 sIronMothEliteLearnset[] = {
    MOVE_SUNSTEEL_STRIKE,
    MOVE_BLAZING_TORQUE,
    MOVE_NOXIOUS_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_IRON_MOTH

#if P_FAMILY_IRON_THORNS
static const u16 sIronThornsEliteLearnset[] = {
    MOVE_ACCELEROCK,
    MOVE_ZING_ZAP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_IRON_THORNS

#if P_FAMILY_GREAT_TUSK
static const u16 sGreatTuskEliteLearnset[] = {
    MOVE_COMBAT_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_GREAT_TUSK

#if P_FAMILY_SCREAM_TAIL
static const u16 sScreamTailEliteLearnset[] = {
    MOVE_TORCH_SONG,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SCREAM_TAIL

#if P_FAMILY_SLITHER_WING
static const u16 sSlitherWingEliteLearnset[] = {
    MOVE_VICTORY_DANCE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SLITHER_WING

#if P_FAMILY_SANDY_SHOCKS
static const u16 sSandyShocksEliteLearnset[] = {
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SANDY_SHOCKS

#if P_FAMILY_IRON_VALIANT
static const u16 sIronValiantEliteLearnset[] = {
    MOVE_PSYBLADE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_IRON_VALIANT

#if P_FAMILY_KORAIDON
static const u16 sKoraidonEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_KORAIDON

#if P_FAMILY_MIRAIDON
static const u16 sMiraidonEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MIRAIDON

#if P_FAMILY_WALKING_WAKE
static const u16 sWalkingWakeEliteLearnset[] = {
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WALKING_WAKE

#if P_FAMILY_IRON_LEAVES
static const u16 sIronLeavesEliteLearnset[] = {
    MOVE_SECRET_SWORD,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_IRON_LEAVES

#if P_FAMILY_IRON_BOULDER
static const u16 sIronBoulderEliteLearnset[] = {
    MOVE_SECRET_SWORD,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_IRON_BOULDER

#if P_FAMILY_IRON_CROWN
static const u16 sIronCrownEliteLearnset[] = {
    MOVE_SECRET_SWORD,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_IRON_CROWN

// External Pokemon

#if P_FAMILY_SQUIRTLE
static const u16 sBlastoiseEliteLearnset[] = {
    MOVE_SHELL_SIDE_ARM,
    MOVE_SNIPE_SHOT,
    MOVE_ARMOR_CANNON,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_WEEDLE
static const u16 sBeedrillEliteLearnset[] = {
    MOVE_HYPER_DRILL,
    MOVE_BARB_BARRAGE,
    MOVE_DEFEND_ORDER,
    MOVE_ATTACK_ORDER,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WEEDLE

#if P_FAMILY_PIDGEY
static const u16 sPidgeotEliteLearnset[] = {
    MOVE_BOLT_BEAK,
    MOVE_AEROBLAST,
    MOVE_BLEAKWIND_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_PIDGEY

#if P_FAMILY_KOFFING
static const u16 sWeezingEliteLearnset[] = {
    MOVE_TWIN_BEAM,
    MOVE_UNAVAILABLE,
};

#if P_GALARIAN_FORMS
static const u16 sWeezingGalarEliteLearnset[] = {
    MOVE_TWIN_BEAM,
    MOVE_UNAVAILABLE,
};
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_KOFFING

#if P_FAMILY_CHARMANDER
static const u16 sCharizardEliteLearnset[] = {
    MOVE_FIRE_LASH,
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_AIPOM
#if P_GEN_4_CROSS_EVOS
static const u16 sAmbipomEliteLearnset[] = {
    MOVE_JUNGLE_HEALING,
    MOVE_UNAVAILABLE,
};
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_AIPOM

#if P_FAMILY_SUNKERN
static const u16 sSunfloraEliteLearnset[] = {
    MOVE_SEED_FLARE,
    MOVE_FLORAL_HEALING,
    MOVE_FLOWER_TRICK,
    MOVE_CHLOROBLAST,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SUNKERN

#if P_FAMILY_WOBBUFFET
static const u16 sWobbuffetEliteLearnset[] = {
    MOVE_TAUNT,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WOBBUFFET

#if P_FAMILY_BULBASAUR
static const u16 sVenusaurEliteLearnset[] = {
    MOVE_SEED_FLARE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_NINCADA
static const u16 sNinjaskEliteLearnset[] = {
    MOVE_WATER_SHURIKEN,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_NINCADA

#if P_FAMILY_WHISMUR
static const u16 sExploudEliteLearnset[] = {
    MOVE_TORCH_SONG,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WHISMUR

#if P_FAMILY_SKARMORY
static const u16 sSkarmoryEliteLearnset[] = {
    MOVE_CEASELESS_EDGE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SKARMORY

#if P_FAMILY_SLUGMA
static const u16 sMagcargoEliteLearnset[] = {
    MOVE_MAGMA_STORM,
    MOVE_BURNING_BULWARK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SLUGMA

#if P_FAMILY_CLAUNCHER
static const u16 sClawitzerEliteLearnset[] = {
    MOVE_CRUSH_GRIP,
    MOVE_SHELL_SIDE_ARM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_DRIFLOON
static const u16 sDrifblimEliteLearnset[] = {
    MOVE_MIND_BLOWN,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DRIFLOON

#if P_FAMILY_CHIMCHAR
static const u16 sInfernapeEliteLearnset[] = {
    MOVE_PYRO_BALL,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_CHIMCHAR

#if P_FAMILY_TYROGUE
static const u16 sHitmonleeExtEliteLearnset[] = {
    MOVE_TROP_KICK,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TYROGUE

#if P_FAMILY_NATU
static const u16 sXatuEliteLearnset[] = {
    MOVE_ESPER_WING,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_NATU

#if P_FAMILY_WINGULL
static const u16 sPelipperEliteLearnset[] = {
    MOVE_BLEAKWIND_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WINGULL

#if P_FAMILY_KELDEO
static const u16 sKeldeoEliteLearnset[] = {
    MOVE_AQUA_STEP,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_KELDEO

#if P_FAMILY_TYNAMO
static const u16 sEelektrossEliteLearnset[] = {
    MOVE_THUNDER_CAGE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TYNAMO

#if P_FAMILY_TORCHIC
static const u16 sBlazikenEliteLearnset[] = {
    MOVE_FLYING_PRESS,
    MOVE_BEAK_BLAST,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TORCHIC

#if P_FAMILY_HONEDGE
static const u16 sAegislashEliteLearnset[] = {
    MOVE_CEASELESS_EDGE,
    MOVE_BITTER_BLADE,
    MOVE_BEHEMOTH_BLADE,
    MOVE_BEHEMOTH_BASH,
    MOVE_PSYBLADE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPIRITOMB
static const u16 sSpiritombEliteLearnset[] = {
    MOVE_WICKED_TORQUE,
    MOVE_ASTRAL_BARRAGE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_SPIRITOMB

#if P_FAMILY_MORPEKO
static const u16 sMorpekoEliteLearnset[] = {
    MOVE_WICKED_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MORPEKO

#if P_FAMILY_MAGEARNA
static const u16 sMagearnaEliteLearnset[] = {
    MOVE_MAGICAL_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MAGEARNA

#if P_FAMILY_MILCERY
static const u16 sAlcremieEliteLearnset[] = {
    MOVE_MAGICAL_TORQUE,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_MILCERY

#if P_FAMILY_BERGMITE
static const u16 sAvaluggEliteLearnset[] = {
    MOVE_GLACIAL_LANCE,
    MOVE_UNAVAILABLE,
};

#if P_HISUIAN_FORMS
static const u16 sAvaluggHisuiEliteLearnset[] = {
    MOVE_ACCELEROCK,
    MOVE_MIGHTY_CLEAVE,
    MOVE_UNAVAILABLE,
};
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_WATTREL
static const u16 sKilowattrelEliteLearnset[] = {
    MOVE_BOLT_BEAK,
    MOVE_WILDBOLT_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_WATTREL

#if P_FAMILY_VOLCANION
static const u16 sVolcanionEliteLearnset[] = {
    MOVE_STRANGE_STEAM,
    MOVE_HYDRO_STEAM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_VOLCANION

#if P_FAMILY_FARFETCHD
static const u16 sSirfetchdEliteLearnset[] = {
    MOVE_SACRED_SWORD,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_ROCKRUFF
static const u16 sLycanrocMidnightEliteLearnset[] = {
    MOVE_ACCELEROCK,
    MOVE_LEECH_LIFE,
    MOVE_DYNAMIC_PUNCH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ROCKRUFF

#if P_FAMILY_LARVITAR
static const u16 sTyranitarEliteLearnset[] = {
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_LARVITAR

#if P_FAMILY_ROGGENROLA
static const u16 sGigalithEliteLearnset[] = {
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ROGGENROLA

#if P_FAMILY_ROLYCOLY
static const u16 sCoalossalEliteLearnset[] = {
    MOVE_SANDSEAR_STORM,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_ROLYCOLY

#if P_FAMILY_TINKATINK
static const u16 sTinkatonEliteLearnset[] = {
    MOVE_WOOD_HAMMER,
    MOVE_ICE_HAMMER,
    MOVE_HAMMER_ARM,
    MOVE_DRAGON_HAMMER,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_TINKATINK

#if P_FAMILY_DONPHAN
static const u16 sDonphanEliteLearnset[] = {
    MOVE_SPIN_OUT,
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_DONPHAN

#if P_FAMILY_BUNNELBY
static const u16 sDiggersbyEliteLearnset[] = {
    MOVE_HEADLONG_RUSH,
    MOVE_UNAVAILABLE,
};
#endif //P_FAMILY_BUNNELBY
