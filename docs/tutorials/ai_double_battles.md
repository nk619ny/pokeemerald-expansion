# Battle AI Reference — Double Battle Focus

A structured reference to pokeemerald-expansion's battle AI, written for both AI coding
agents and human developers who will be modifying AI behavior. This hack focuses on
**double battles**, so double-battle-specific code is emphasized throughout.

For a plain-language description of every AI flag, see [ai_flags.md](ai_flags.md). This
document explains the *code structure* those flags plug into.

---

## 1. File Map

| File | Role |
|---|---|
| [include/constants/battle_ai.h](../../include/constants/battle_ai.h) | `AI_FLAG_*` bit definitions, composite flags, `AI_SCORE_DEFAULT`. |
| [include/battle_ai_main.h](../../include/battle_ai_main.h) | `enum AIScore` magnitudes, scoring macros, `AI_TryToFaint`/`AI_Risky` constants. |
| [include/battle_ai_util.h](../../include/battle_ai_util.h) | Signatures for ~200 AI utility helpers. |
| [src/battle_ai_main.c](../../src/battle_ai_main.c) | Turn pipeline, the scoring-function table, and the per-flag scoring functions (incl. `AI_DoubleBattle`). |
| [src/battle_ai_util.c](../../src/battle_ai_util.c) | Damage/effectiveness calc, ability/hold-effect prediction, **partner-coordination helpers**, spread-move detection. |
| [src/battle_ai_switch.c](../../src/battle_ai_switch.c) | Switch decisions and switch-in selection. |
| [src/battle_ai_items.c](../../src/battle_ai_items.c) | Trainer item usage. |
| [src/battle_ai_field_statuses.c](../../src/battle_ai_field_statuses.c) | Weather/terrain/field-effect scoring helpers. |
| [src/battle_ai_record.c](../../src/battle_ai_record.c) | Recording of observed player moves/abilities/items. |

---

## 2. Core Concept: Score-Based Move Selection

The AI never "plans." Every turn it assigns a **score** to each of the active mon's up
to 4 moves (against each candidate target), then picks the highest-scoring
(move, target) pair. Ties are broken randomly.

- Every move starts at `AI_SCORE_DEFAULT = 100` ([battle_ai.h](../../include/constants/battle_ai.h)).
- Each enabled AI flag runs a scoring function that nudges scores up or down.
- Score deltas use the `enum AIScore` scale from [battle_ai_main.h](../../include/battle_ai_main.h):

| Constant | Value | | Constant | Value |
|---|---|---|---|---|
| `NO_INCREASE` | 0 | | `BAD_EFFECT` | -1 |
| `WEAK_EFFECT` | +1 | | `AWFUL_EFFECT` | -3 |
| `DECENT_EFFECT` | +2 | | `WORST_EFFECT` | -10 |
| `GOOD_EFFECT` | +3 | | | |
| `BEST_EFFECT` | +4 | | | |
| `PERFECT_EFFECT` | +10 | | | |

Other notable magnitudes: `FAST_KILL = 6`, `SLOW_KILL = 4`, `LAST_CHANCE = 2`
(from `AI_TryToFaint`); `NO_DAMAGE_OR_FAILS = -20`; `POWERFUL_STATUS_MOVE = 10`.

### Scoring macros (all in [battle_ai_main.h](../../include/battle_ai_main.h))
- `ADJUST_SCORE(val)` — add to the local `score` variable (also logs for tests).
- `ADJUST_SCORE_PTR(val)` — add through an `s32 *score` pointer.
- `RETURN_SCORE_PLUS(val)` / `RETURN_SCORE_MINUS(val)` — adjust and return immediately.
- `ADJUST_AND_RETURN_SCORE(val)` — add and return, test-aware.
- `SET_SCORE(battler, moveIndex, val)` — hard set.

> When editing scoring code, always use these macros rather than touching `score`
> directly, so battle tests can trace the adjustment source (`__FILE__`/`__LINE__`).

---

## 3. Turn Pipeline (entry points)

```
ComputeAiBattlerDecisions            // src/battle_ai_main.c — full per-battler pipeline
  ├─ BattleAI_SetupAIData            // reset all move scores to AI_SCORE_DEFAULT (100)
  ├─ SetAiLogicDataForTurn           // precompute damage/effectiveness/accuracy caches
  └─ BattleAI_ChooseMoveIndex
        └─ ChooseMoveOrAction        // src/battle_ai_main.c:445
             ├─ IsDoubleBattle()  → ChooseMoveOrAction_Doubles   // :918
             └─ else              → ChooseMoveOrAction_Singles   // :856
```

Both `_Singles` and `_Doubles` walk the active battler's `aiFlags` bitfield and, for each
set bit, call `BattleAI_DoAIProcessing` ([battle_ai_main.c:1053](../../src/battle_ai_main.c)),
which dispatches to that flag's scoring function via the function table.

### The scoring-function table (`sBattleAiFuncTable`, [battle_ai_main.c:73](../../src/battle_ai_main.c))
Maps each flag bit to a scoring function. Key entries:

| Bit | Flag | Function |
|---|---|---|
| 0 | `CHECK_BAD_MOVE` | `AI_CheckBadMove` |
| 1 | `TRY_TO_FAINT` | `AI_TryToFaint` |
| 2 | `CHECK_VIABILITY` | `AI_CheckViability` (→ `AI_CompareDamagingMoves`) |
| 3 | `FORCE_SETUP_FIRST_TURN` | `AI_ForceSetupFirstTurn` |
| 4 | `RISKY` | `AI_Risky` |
| 5 | `TRY_TO_2HKO` | `AI_TryTo2HKO` |
| 6 | `PREFER_BATON_PASS` | `AI_PreferBatonPass` |
| **7** | **`DOUBLE_BATTLE`** | **`AI_DoubleBattle`** ← all doubles coordination |
| 8 | `HP_AWARE` | `AI_HPAware` |
| 9 | `POWERFUL_STATUS` | `AI_PowerfulStatus` |
| 23 | `PREDICT_SWITCH` | `AI_PredictSwitch` |
| 25 | `PP_STALL_PREVENTION` | `AI_CheckPpStall` |
| 30 | `ATTACKS_PARTNER` | `AI_AttacksPartner` |

> **`AI_FLAG_DOUBLE_BATTLE` (bit 7) is auto-added** whenever `IsDoubleBattle()` is true and
> the trainer has any AI flags set. You do not set it manually in trainer data — every
> double-battle trainer with an AI gets `AI_DoubleBattle` scoring for free.

---

## 4. Double-Battle Target Iteration ⭐

This is the single biggest structural difference from singles. See
[`ChooseMoveOrAction_Doubles`](../../src/battle_ai_main.c#L918).

```c
for (battlerIndex = 0; battlerIndex < MAX_BATTLERS_COUNT; battlerIndex++)
{
    if (dead || battlerIndex == self) { skip; }        // evaluate the other 3 battlers
    BattleAI_SetupAIData(0xF, battler);                // fresh 100-score array per target
    gBattlerTarget = battlerIndex;
    gAiLogicData->partnerMove = GetAllyChosenMove(battler);  // partner's chosen move
    // run every enabled AI flag's scoring fn against THIS target
    // then reduce to best move index for this target
    bestMovePointsForTarget[battlerIndex] = best score for this target;

    // Ally guard: never target the partner unless the move is genuinely good for it
    if (battlerIndex == BATTLE_PARTNER(battler)
        && bestMovePointsForTarget[battlerIndex] < AI_SCORE_DEFAULT)   // < 100
        bestMovePointsForTarget[battlerIndex] = -1;                    // reject
}
// pick the highest-scoring target, random tie-break
gBattlerTarget = mostViableTargetsArray[RandomUniform(RNG_AI_SCORE_TIE_DOUBLES_TARGET, ...)];
gAiBattleData->chosenTarget[battler] = gBattlerTarget;
```

Key facts an editor must remember:

1. **Three targets are scored**: left foe, right foe, and the ally. Every move is scored
   independently against each.
2. **Ally guard rule**: a move targeting the partner is discarded unless its score is
   `>= 100` (i.e., `AI_DoubleBattle` produced a *net positive* reason to hit the ally —
   ability triggers, Beat Up → Justified, Weakness Policy, etc.). This is why deliberate
   partner-targeting only happens when the coordination logic explicitly rewards it.
3. **`gAiLogicData->partnerMove`** is refreshed per target loop from `GetAllyChosenMove`
   and read throughout `AI_DoubleBattle`.
4. **Tie-breaking** uses two RNG tags: `RNG_AI_SCORE_TIE_DOUBLES_MOVE` (move ties) and
   `RNG_AI_SCORE_TIE_DOUBLES_TARGET` (target ties).
5. `CanTargetBattler` / `ShouldConsiderMoveForBattler`
   ([battle_ai_main.c:1041](../../src/battle_ai_main.c)) filter out illegal
   (move, target) pairs — e.g., a partner can't `TARGET_BOTH`/`TARGET_OPPONENTS_FIELD`
   onto the ally side.

---

## 5. `AI_DoubleBattle` — The Coordination Engine

Location: [src/battle_ai_main.c:3098](../../src/battle_ai_main.c). This ~300-line function
holds nearly all doubles-specific intelligence. It is called once per (move, target) pair.

### 5.1 Setup locals (top of function)
```c
battlerAtkPartner       = BATTLE_PARTNER(battlerAtk);
hasPartner              = HasPartner(battlerAtk);          // alive AND not ATTACKS_PARTNER
hasTwoOpponents         = HasTwoOpponents(battlerAtk);
friendlyFireThreshold   = GetFriendlyFireKOThreshold(battlerAtk);
noOfHitsToKOPartner     = GetNoOfHitsToKOBattler(..., AI_ATTACKING_PARTNER, ...);
wouldPartnerFaint       = hasPartner && CanIndexMoveFaintTarget(..., AI_ATTACKING_PARTNER) && !partnerProtecting;
isFriendlyFireOK        = !wouldPartnerFaint && (noOfHitsToKOPartner == 0 || noOfHitsToKOPartner > friendlyFireThreshold);
```

`isFriendlyFireOK` gates most "hit your own ally on purpose" logic.

### 5.2 Partner move de-duplication
- `AreMovesEquivalent(...)` true → `ADJUST_SCORE(-10)`. Prevents both mons doing the same
  category of thing (double weather, double screens, redundant status on same target).
- Reactions to the partner's chosen move:
  - Partner `EFFECT_HELPING_HAND` + our move is status → penalize (Helping Hand only boosts damage).
  - Partner `EFFECT_PERISH_SONG` + partner has a trapping move → `WEAK_EFFECT`.
  - Partner `EFFECT_AFTER_YOU` ↔ we have `EFFECT_TRICK_ROOM` (and vice-versa) → `DECENT_EFFECT` combo.

### 5.3 Our-move coordination (selected cases & magnitudes)

| Our move / situation | Score | Purpose |
|---|---|---|
| `EFFECT_HELPING_HAND`, partner has no damaging move / `GOOD_AS_GOLD` / using status | `WORST_EFFECT` (-10) | Helping Hand would be wasted. |
| `EFFECT_HELPING_HAND`, we're about to faint & partner can finish, or partner is far behind on KO count | `GOOD_EFFECT` (+3) | Hand the KO to the partner. |
| `EFFECT_PERISH_SONG`, partner has trapping move | `WEAK_EFFECT` (+1) | Perish-trap synergy. |
| `EFFECT_MAGNET_RISE`, we're grounded & partner has Earthquake/Magnitude that hits us | `RETURN_SCORE_PLUS(DECENT_EFFECT)` (+2) | Dodge partner's spread Ground move. |
| `EFFECT_DRAGON_CHEER`, already active / partner has no damaging move | -5 | Redundant. |
| `EFFECT_DRAGON_CHEER`, partner has crit setup (Scope Lens / Dragon-type / high-crit / multi-hit) | `GOOD_EFFECT` (+3) | Boost partner crit odds. |
| `EFFECT_TRICK_ROOM` on the room's final turn, partner also has Trick Room | `PERFECT_EFFECT` (+10)* | Both refresh together. |
| `EFFECT_TAILWIND` on Trick Room's final turn | `BEST_EFFECT` (+4)* | Stall out TR then benefit from Tailwind. |

\* gated behind `RandomPercentage(...)` RNG tags so behavior is non-deterministic.

### 5.4 Spread moves (`TARGET_FOES_AND_ALLY`, e.g. Earthquake/Surf/Rock Slide)
Detected via `IsSpreadMove` / `AI_IsDoubleSpreadMove`. When the spread move would also hit
the ally, `AI_DoubleBattle` decides based on `wouldPartnerFaint`:

- **Partner would faint:**
  - Kills *both* foes → `RETURN_SCORE_PLUS(10)` (or gated behind `RISKY`/`WILL_SUICIDE` if it's an Explosion-type move).
  - Both foes could KO the partner anyway → soften (`WEAK_EFFECT`), plus `GOOD_EFFECT` each if the attacker benefits from the ally fainting (Moxie-type abilities, `RECEIVER`, `MOVE_LAST_RESPECTS`).
  - Kills only one foe → `AWFUL_EFFECT` (-3), or `RETURN_SCORE_PLUS(10)` under `AI_FLAG_WILL_SUICIDE`.
  - No benefit → `RETURN_SCORE_MINUS(10)`.
- **Partner would survive:** allowed; extra `GOOD_EFFECT` if the hit intentionally procs the
  partner's `HOLD_EFFECT_WEAKNESS_POLICY` (2×+ effective and `isFriendlyFireOK`).

### 5.5 Deliberately targeting the ally (`IsTargetingPartner` true)
Guarded first by `if (wouldPartnerFaint) RETURN_SCORE_MINUS(30)`. Otherwise, if the ally is
not protecting and the move isn't `TARGET_BOTH`, it checks whether hitting the ally triggers a
beneficial ability or effect. Representative rewards:

- Absorb/redirect immunity abilities (`VOLT_ABSORB`, `WATER_ABSORB`, `DRY_SKIN`, `EARTH_EATER`,
  `LIGHTNING_ROD`, `STORM_DRAIN`, `MOTOR_DRIVE`, `FLASH_FIRE`, `WELL_BAKED_BODY`, `SAP_SIPPER`,
  `LEVITATE`): small positive when it helps, or fall through to `RETURN_SCORE_MINUS(10)`.
- Stat-gain-on-hit abilities (`ANGER_POINT` via always-crit move, `JUSTIFIED` via Dark move /
  Beat Up, `RATTLED`, `WATER_COMPACTION`, `STEAM_ENGINE`, `THERMAL_EXCHANGE`, `CONTRARY` via a
  stat-lowering move): rewarded when `isFriendlyFireOK`, typically `GOOD_EFFECT` for a spread
  proc or `WEAK_EFFECT`/`DECENT_EFFECT` for a single-target proc.
- Support move effects on the ally: `EFFECT_SKILL_SWAP`/`ENTRAINMENT`/`ROLE_PLAY` (ability
  swaps), `EFFECT_STAT_CHANGE`/`AROMATIC_MIST` (ally buffs), `EFFECT_MAGNETIC_FLUX`/`GEAR_UP`,
  `EFFECT_BEAT_UP` (Justified/Rage Fist proc), `EFFECT_HEAL_PULSE`/`HIT_ENEMY_HEAL_ALLY`
  (ally < 50% HP), `EFFECT_PURIFY`, `EFFECT_AFTER_YOU`.
- **Fallback:** if no beneficial reason is found, `RETURN_SCORE_MINUS(10)`. Combined with the
  ally guard in §4, this keeps friendly fire from ever being chosen accidentally.

---

## 6. Partner-Coordination Helpers ([battle_ai_util.c](../../src/battle_ai_util.c))

These are the building blocks `AI_DoubleBattle` (and switching) rely on. When adding new
doubles behavior, reuse these rather than reimplementing.

| Function | What it answers |
|---|---|
| `HasPartner(battler)` | Ally alive **and** not flagged `ATTACKS_PARTNER`. |
| `HasPartnerIgnoreFlags(battler)` | Ally alive, ignoring hostility flag. |
| `HasTwoOpponents(battler)` | Both foes still alive. |
| `IsTargetingPartner(atk, def)` | `def` is the attacker's ally (`atk == def ^ BIT_FLANK`); false under `ATTACKS_PARTNER`. |
| `GetAllyChosenMove(battler)` | Partner's move this turn. Returns already-locked move if partner is lower ID, else its predicted/last move. `MOVE_NONE` if partner unaware/dead. |
| `AreMovesEquivalent(...)` | Two moves share an AI effect group (via `GetAIEffectGroupFromMove`), i.e. redundant. |
| `DoesPartnerHaveSameMoveEffect(...)` | Exact `EFFECT_*` match on the same target. |
| `PartnerMoveEffectIs(...)` / `PartnerMoveIs(...)` | Partner's chosen move has a specific effect / is a specific move. |
| `PartnerMoveEffectIsStatusSameTarget(...)` | Partner is applying a non-volatile status (or Yawn) to the same foe. |
| `PartnerMoveIsSameAsAttacker(...)` / `PartnerMoveIsSameNoTarget(...)` | Same move (with / without target match). |
| `IsAllyProtectingFromMove(...)` | Whether the ally's Protect variant blocks our move (handles Wide Guard, Quick Guard, Crafty Shield, Mat Block, etc.). |
| `GetFriendlyFireKOThreshold(battler)` | Hits-to-KO-ally tolerance: `RISKY`→2, default→3, `CONSERVATIVE`→4, `ATTACKS_PARTNER`→0. Constants in [include/config/ai.h](../../include/config/ai.h). |
| `ShouldBeatUpForJustified(...)` / `ShouldBeatUpForRageFist(...)` | Whether Beat Up should hit the ally to proc its ability/counter. |
| `AI_ShouldSpicyExtract(...)` | Whether to Spicy Extract the ally (Atk up + Def down, skipped if ally has Contrary/Good as Gold or a foe has Foul Play). |
| `ShouldUseWishAromatherapy(...)` | Wish / Heal Bell / Aromatherapy support timing. |

### Spread-move detection
- `AI_IsDoubleSpreadMove(atk, move)` ([battle_ai_util.c:42](../../src/battle_ai_util.c)):
  true when a spread move currently hits **2+** valid targets (accounts for `TARGET_BOTH`
  excluding the ally, semi-invulnerability, and break-through abilities/moves).
- `AI_CanBattlerHitBothFoesInTerrain(...)`: for `EFFECT_TERRAIN_BOOST` moves that expand to
  both foes while the user is terrain-affected.
- `AI_GetBattlerMoveTargetType(atk, move)`: resolves the *effective* target type given the
  current battle state (use this, not the raw move data, when reasoning about targeting).

---

## 7. Relevant Data Structures ([include/battle.h](../../include/battle.h))

### `struct AiLogicData` (`gAiLogicData`)
Turn-scoped caches, indexed `[attacker][target][moveIndex]` where noted:
- `simulatedDmg[atk][def][moveIndex]` → `struct SimulatedDamage { minimum, median, maximum, random }`.
- `effectiveness[atk][def][moveIndex]` → type multiplier (`uq4_12_t`).
- `moveAccuracy[atk][def][moveIndex]`.
- `abilities[battler]`, `holdEffects[battler]`, `hpPercents[battler]`.
- `partnerMove` ⭐ — the ally's move for the current target-loop iteration.
- `predictedMove[battler]`, `mostSuitableMonId[battler]`, `turnOrder[battler]`.
- Bit flags: `predictingSwitch`, `predictingMove`, `aiCalcInProgress`, `switchInCalc`.

### `struct AiThinkingStruct` (`gAiThinkingStruct`)
- `score[MAX_MON_MOVES]` — working scores for the current target.
- `aiFlags[MAX_BATTLERS_COUNT]` — each battler's active `AI_FLAG_*` bitfield.
- `movesetIndex` — move currently being scored; `aiLogicId` — index into `sBattleAiFuncTable`.

### `gAiBattleData`
- `finalScore[battler][target][moveIndex]` — persisted per-target scores (battle tests read these).
- `chosenTarget[battler]` — the target the doubles selector settled on.

> In doubles, **always** think in terms of the `[atk][def]` matrix. A change that only
> considers a single opponent (singles assumption) will produce wrong scores for the
> second foe and the ally.

---

## 8. Switching in Doubles ([battle_ai_switch.c](../../src/battle_ai_switch.c))

- `ShouldSwitch` evaluates ordered switch triggers (Wonder Guard wall, hazard survival,
  trapper available, absorb synergy, opponent charging, Truant, all-moves-bad, bad status,
  ability synergy, bad type matchup, Encore/Choice lock, lowered stats, losing 1v1).
- `GetMostSuitableMonToSwitchInto` chooses the incoming mon:
  - `AI_FLAG_SEQUENCE_SWITCHING` → strict party order.
  - `AI_FLAG_SMART_MON_CHOICES` → `GetBestMonIntegrated` (**singles-oriented**).
  - default → `GetBestMonVanilla`.

> ⚠️ **Doubles caveat:** the *smart mon-choice / smart-switching* path is primarily built and
> tuned for singles and largely falls back to vanilla selection in doubles. If this hack
> needs strong doubles switch-in selection, this is the main gap to extend. `GetActiveBattlerIds`
> gives both foes so type-matchup and hazard checks can weigh two opponents.

---

## 9. Trick Room AI — Detailed Evaluation

Trick Room is one of the most complex moves the AI evaluates because it is both a
field-status reversal and a strategic pivot that affects every speed comparison on the
field. The AI touches it in five separate scoring functions and one support utility.
All of the following happens in `src/battle_ai_main.c` unless noted.

---

### 9.1 Does the AI benefit from Trick Room? (`BenefitsFromTrickRoom`)
Every path that awards a positive score for Trick Room first asks whether the attacker
*actually benefits*. This is answered by `BenefitsFromTrickRoom` in
[src/battle_ai_field_statuses.c:486](../../src/battle_ai_field_statuses.c), called via
`ShouldSetFieldStatus` / `ShouldClearFieldStatus` (in
[src/battle_ai_util.c:2219](../../src/battle_ai_util.c)):

```
singles:
  slower than opponent  → POSITIVE (want TR)
  same speed            → NEUTRAL  (don't change)
  faster than opponent  → NEGATIVE (don't want TR)

doubles:
  1. Check if attacker has a positive-priority move that isn't a status move
     (and Psychic Terrain is not active).  If so → POSITIVE regardless of speed.
     Rationale: a mon with a priority move doesn't need to go first, so slow
     mons behind TR become a free threat.
  2. If attacker is faster than or ties EITHER foe → NEGATIVE.
  3. Otherwise (slower than both foes) → POSITIVE.
```

In doubles, `FieldStatusChecker` (called from `ShouldSetFieldStatus`) iterates **both
ally battlers**. For Trick Room specifically, both mons must agree — the first battler's
result is stored and the check only returns the desired outcome if the *second* battler's
result matches ([field_statuses.c:135](../../src/battle_ai_field_statuses.c)). This means
Trick Room will not be scored positively unless it benefits the whole side, not just one mon.

`ShouldSetFieldStatus` additionally has a Trick Room–specific guard: if TR is already
active, `ShouldSetFieldStatus` returns `FALSE` unless the timer is on its final turn
(`trickRoomTimer == 1`), preventing the AI from using the move to cancel its own active
room mid-run ([battle_ai_util.c:2221](../../src/battle_ai_util.c)).

---

### 9.2 `AI_CheckBadMove` (flag 0) — blocking obviously wrong uses

Cases that trigger `ADJUST_SCORE(-10)` and return early:

| Condition | Why |
|---|---|
| TR not active AND `!ShouldSetFieldStatus(...)` | AI doesn't benefit; would set TR against itself. |
| TR active AND `trickRoomTimer > 1` AND `!ShouldClearFieldStatus(...)` | TR is still running and the AI wants it — cancelling would be self-destructive. |
| Partner already using Trick Room this turn (exception: final-turn double-refresh, see §9.5) | Redundant; only one succeeds. |

The second and third checks are explicitly gated on `!(AI_FLAG_POWERFUL_STATUS)` — trainers
with that flag bypass these tests and delegate Trick Room to `AI_PowerfulStatus` instead.

---

### 9.3 `AI_CalcMoveEffectScore` inside `AI_CheckViability` (flag 2) — positive scoring

When the checks in §9.2 did *not* block the move (and the trainer doesn't use
`AI_FLAG_POWERFUL_STATUS`), the viability scorer adds positive points:

| Condition | Score | Context |
|---|---|---|
| TR not active AND `ShouldSetFieldStatus(...)` (AI benefits) | `GOOD_EFFECT` (+3) | Happy path: the whole side wants TR. |
| TR not active AND no partner AND bench is not empty | `DECENT_EFFECT` (+2) | **Singles-specific**: TR isn't useful for the *current* mon but will benefit the next one out. |
| TR active AND `trickRoomTimer > 1` AND `ShouldClearFieldStatus(...)` (TR hurts us now) | `GOOD_EFFECT` (+3) | AI is now faster, wants to cancel opponent's room. |

The `!hasPartner && CountUsablePartyMons() != 0` path is **only reachable in singles**
(or when the ally has already fainted). In a normal double battle this branch is
unreachable, so the only path to a score bonus in doubles is the first row: both mons are
slower and agree they want TR.

---

### 9.4 `AI_PowerfulStatus` (flag 9) — override scoring

When `AI_FLAG_POWERFUL_STATUS` is enabled:

```c
case EFFECT_TRICK_ROOM:
    if (!(gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
     && !HasMoveWithEffect(battlerDef, EFFECT_TRICK_ROOM))
        ADJUST_SCORE(POWERFUL_STATUS_MOVE);  // +10
```

- **+10** whenever TR is not yet active and the **current target** doesn't have their own
  Trick Room. This is a flat strong bonus — it does *not* re-check `ShouldSetFieldStatus`.
  A trainer with `AI_FLAG_POWERFUL_STATUS` will set TR even if their team is faster, as
  long as the target can't flip it back.
- The function also guards at the top: it ignores all non-status moves and skips if the
  **partner is already using the same effect** (`GetMoveEffect(partnerMove) == moveEffect`),
  preventing double-up in doubles.
- The Tailwind case in the same function has `!(gFieldStatuses & STATUS_FIELD_TRICK_ROOM)`
  as a guard, so the AI will not set Tailwind when TR is active (they conflict).

---

### 9.5 `AI_DoubleBattle` (flag 7) — doubles-specific coordination

Two distinct checks live here:

#### Reaction to partner's already-chosen move

```c
case EFFECT_AFTER_YOU:   // partner is using After You
    if (effect == EFFECT_TRICK_ROOM
     && !TR_active
     && ShouldSetFieldStatus(battlerAtk, STATUS_FIELD_TRICK_ROOM))
        ADJUST_SCORE(DECENT_EFFECT);   // +2
    break;
case EFFECT_TRICK_ROOM:  // partner is using Trick Room
    if (effect == EFFECT_AFTER_YOU
     && !TR_active
     && ShouldSetFieldStatus(battlerAtk, STATUS_FIELD_TRICK_ROOM))
        ADJUST_SCORE(DECENT_EFFECT);   // +2
    break;
```

If the partner chose Trick Room and the AI has After You (or vice-versa), both moves
combine — After You forces the opponent to move before TR resolves, so the slow mon acts
first under TR *this turn*. The bonus (+2) is only applied if TR is not already up and the
side benefits from it.

#### Global doubles check — refreshing TR on the final turn

```c
case EFFECT_TRICK_ROOM:   // attacker's own move
    if (hasPartner
     && TR_active
     && trickRoomTimer == 1                          // final turn only
     && ShouldSetFieldStatus(attacker)               // side still wants TR
     && HasMoveWithEffect(partner, EFFECT_TRICK_ROOM)// partner can do it too
     && RandomPercentage(RNG_AI_REFRESH_TRICK_ROOM_ON_LAST_TURN,
                         DOUBLE_TRICK_ROOM_ON_LAST_TURN_CHANCE))
        ADJUST_SCORE(PERFECT_EFFECT);   // +10
    break;
```

This is the **double-TR-on-last-turn** gambit. On the final turn of TR, *both* mons use
Trick Room simultaneously. The game mechanic: when both mons use TR on the same turn,
the first activation cancels the room and the second one immediately re-sets it with a
fresh 5-turn timer. The intent is to anticipate that both opponents will Protect to stall
out the last turn, so the AI preemptively resets the room before it can expire.

This check is guarded by a **random percentage** (`DOUBLE_TRICK_ROOM_ON_LAST_TURN_CHANCE`
from [include/config/ai.h](../../include/config/ai.h)) to keep behavior non-deterministic.

When the *partner's* move is Trick Room and both mons happen to be doing the gambit, the
`AI_CheckViability` EFFECT_TRICK_ROOM handler also grants `PERFECT_EFFECT` (+10):

```c
// In AI_CheckViability case EFFECT_TRICK_ROOM:
if (PartnerMoveEffectIs(partner, partnerMove, EFFECT_TRICK_ROOM))
{
    if (TR_active && trickRoomTimer == 1)
        ADJUST_SCORE(PERFECT_EFFECT);   // +10 — partner already decided to do the gambit
    else
        ADJUST_SCORE(-10);              // partner using TR but not last-turn: redundant
}
```

If the partner's random roll succeeded (it already committed to the gambit), the attacker
receives +10 to do the same. If the partner chose TR at any other time, the attacker is
penalized -10 to prevent useless duplication.

#### Tailwind on Trick Room's last turn (same section)

```c
case EFFECT_TAILWIND:
    if (TR_active && trickRoomTimer == 1
     && RandomPercentage(RNG_AI_APPLY_TAILWIND_ON_LAST_TURN_OF_TRICK_ROOM,
                         TAILWIND_IN_TRICK_ROOM_CHANCE))
        ADJUST_SCORE(BEST_EFFECT);   // +4
```

A complementary gambit: instead of refreshing TR, the AI could use Tailwind to cover the
transition moment when TR expires. Also gated behind a random percentage. Tailwind is
blocked while TR still has turns remaining (`trickRoomTimer > 1`) by the check in
`AI_CalcMoveEffectScore` for Tailwind (`if TR_active && timer > 1: break`).

---

### 9.6 `AI_PredictSwitch` (flag 23) — switching context bonus

When the AI is predicting a switch from the opponent, Trick Room gets a flat +4
(`BEST_EFFECT`) regardless of all other considerations:

```c
case EFFECT_TRICK_ROOM:
    ADJUST_SCORE(BEST_EFFECT);   // +4
    break;
```

This is in the "set-up moves worth using during an opponent switch" block (alongside Light
Screen, Reflect, Stealth Rock, etc.). The logic is: if the opponent is switching, the AI
has a free turn and should use it for impactful setup.

---

### 9.7 Speed comparisons under Trick Room

`AI_WhoStrikesFirst` / `AI_IsFaster` / `AI_IsSlower` in
[src/battle_ai_util.c:1448](../../src/battle_ai_util.c) flip their return values when TR
is active:

```c
if (speedAI > speedOpponent)
    return TR_active ? AI_IS_SLOWER : AI_IS_FASTER;
else
    return TR_active ? AI_IS_FASTER : AI_IS_SLOWER;
```

This means all priority- and speed-based scoring in every other AI function (Sucker Punch
usefulness, Fake Out viability, `AI_TryToFaint` slow-kill vs fast-kill bonus, Quash,
`EFFECT_AFTER_YOU` timing, etc.) automatically accounts for active Trick Room.

Similarly, `EFFECT_SPEED_SWAP` scored in viability checks Trick Room before comparing
speeds ([battle_ai_main.c:2573](../../src/battle_ai_main.c)):

```c
if (TR_active && attackerSpeed <= targetSpeed)
    ADJUST_SCORE(-10);   // Under TR, slow mon doesn't want to give away its advantage
```

---

### 9.8 `AI_FLAG_ASSUME_STATUS_MOVES` — awareness of opponent's Trick Room

Trick Room has **medium detection odds** in `ShouldRecordStatusMove`
([src/battle_ai_util.c:313](../../src/battle_ai_util.c)):

```c
case EFFECT_TRICK_ROOM:
    return RandomPercentage(RNG_AI_ASSUME_STATUS_MEDIUM_ODDS, ASSUME_STATUS_MEDIUM_ODDS);
```

When `AI_FLAG_ASSUME_STATUS_MOVES` is set, the AI has a configurable chance
(`ASSUME_STATUS_MEDIUM_ODDS` in [include/config/ai.h](../../include/config/ai.h)) to
"know" the opponent has Trick Room before it is used. This feeds into `AI_FLAG_OMNISCIENT`
interaction paths (e.g., avoiding moves that waste turns under predicted TR), though the
AI does not have a dedicated counter-TR play beyond blocking `AI_PowerfulStatus` from
awarding its +10 when the target also has TR.

---

### 9.9 Summary table

| Scoring site | Flag | Condition | Score | Net direction |
|---|---|---|---|---|
| `AI_CheckBadMove` | 0 | TR not active, side doesn't benefit | -10 | Block |
| `AI_CheckBadMove` | 0 | TR active, timer > 1, side still benefits | -10 | Block cancel |
| `AI_CheckBadMove` | 0 | Partner using TR (not last-turn gambit) | -10 | Block dup |
| `AI_CalcMoveEffectScore` | 2 | TR not active, side benefits (doubles happy path) | +3 | Set |
| `AI_CalcMoveEffectScore` | 2 | TR not active, singles, next mon benefits | +2 | Set for bench |
| `AI_CalcMoveEffectScore` | 2 | TR active, timer > 1, side wants to cancel | +3 | Cancel |
| `AI_CalcMoveEffectScore` | 2 | Partner chose TR (last-turn gambit confirmed) | +10 | Refresh |
| `AI_CalcMoveEffectScore` | 2 | Partner chose TR (not last turn) | -10 | Block |
| `AI_PowerfulStatus` | 9 | TR not active, target lacks TR | +10 | Aggressive set |
| `AI_DoubleBattle` | 7 | Partner chose After You → TR is combo | +2 | After-You synergy |
| `AI_DoubleBattle` | 7 | Partner chose TR → we use After You | +2 | After-You synergy |
| `AI_DoubleBattle` | 7 | Last turn of TR, partner has TR, RNG pass | +10 | Double-refresh |
| `AI_PredictSwitch` | 23 | Opponent predicted to switch | +4 | Free-turn setup |
| `AI_HardTrickRoom` | 34 | TR not active, side benefits, partner not using TR, no fast kill or RNG pass | +10 | Hard set |
| `AI_HardTrickRoom` | 34 | Follow Me/Rage Powder, TR not active, side benefits, partner knows TR, no fast kill | +10 | Redirect for setter |

### 9.10 Custom flag: `AI_FLAG_HARD_TRICK_ROOM` (bit 34)

Custom flag for Trick Room-oriented teams (`Hard Trick Room` in `trainers.party`). Its dedicated scoring
function `AI_HardTrickRoom` in `src/battle_ai_main.c` only touches two effects:

- **`EFFECT_TRICK_ROOM`**: if TR is not active, `ShouldSetFieldStatus` passes, and the partner hasn't
  already committed to TR this turn, adds `POWERFUL_STATUS_MOVE` (+10). If the user has a *fast kill*
  available on either foe (mirrors `AI_TryToFaint`'s fast-kill condition via `HasFastKillOnFoe`), the
  bonus is instead gated behind `RandomPercentage(RNG_AI_HARD_TRICK_ROOM_OVER_FAST_KILL,
  SHOULD_TRICK_ROOM_OVER_FAST_KILL)` (default 50%, `include/config/ai.h`). The bonus is only applied
  when scoring against a single canonical foe (left foe, or right if left is fainted) so the RNG rolls
  exactly once per turn.
- **`EFFECT_FOLLOW_ME`**: if TR is not active, `ShouldSetFieldStatus` passes, the partner knows TR
  (`HasMoveWithEffect`), the partner hasn't committed to a non-TR move, and the user has *no* fast kill,
  adds `POWERFUL_STATUS_MOVE` (+10) — redirection to protect the setter. `AI_CheckBadMove`'s Follow Me
  case normally penalizes redirecting when the partner chose a status move; that penalty is exempted
  when this flag is set and the partner's chosen move is Trick Room.

All fundamental checks are preserved: the `AI_CheckBadMove` -10 blocks, `ShouldSetFieldStatus` gating
(no TR when the AI side is faster than both foes), partner dedup, and the final-turn refresh gambit are
untouched. Designed to be combined with `AI_FLAG_BASIC_TRAINER`/`AI_FLAG_SMART_TRAINER`; the "always
over slow kill" behavior relies on `AI_FLAG_CHECK_VIABILITY` being present. Tests:
`test/battle/ai/ai_flag_hard_trick_room.c`.

---

## 10. Editing Guidance for Agents

1. **Doubles logic lives in three places:** `ChooseMoveOrAction_Doubles` (target loop +
   ally guard), `AI_DoubleBattle` (coordination scoring), and the `battle_ai_util.c` partner
   helpers. Most new doubles behavior belongs in `AI_DoubleBattle` using existing helpers.
2. **Respect the ally guard** (§4): any move you want the AI to willingly aim at its partner
   must reach a score `>= AI_SCORE_DEFAULT` from `AI_DoubleBattle`, or it is discarded.
3. **Use the score macros**, not raw `score +=`, so battle tests can attribute the change.
4. **Gate friendly fire** through `isFriendlyFireOK` / `GetFriendlyFireKOThreshold` and
   `wouldPartnerFaint`; never assume it's safe to hit the ally.
5. **Reason per (attacker, target)** using the `gAiLogicData` matrices — a spread move must be
   evaluated against both foes and (if applicable) the ally.
6. **Add battle tests.** Doubles tests use `DOUBLE_BATTLE_TEST(...)` with `playerLeft`,
   `playerRight`, `opponentLeft`, `opponentRight` in `test/battle/`. Cover both the intended
   behavior and that the AI does *not* wrongly target its ally.
7. **Do not build ROMs** — edit source and let the user build in WSL (see repo instructions).
8. New AI flags are documented in [ai_flags.md](ai_flags.md); keep both docs in sync when
   adding flags in [battle_ai.h](../../include/constants/battle_ai.h).
