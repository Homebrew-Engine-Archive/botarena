#pragma once

//____________________________________________________________________________
//

#define MIN(A,B)	((A) > (B) ? (B) : (A))
#define MAX(A,B)	((A) < (B) ? (B) : (A))

#ifdef min
#undef min // for numeric_limits<>::min, use MIN instead
#endif

#ifdef max
#undef max // for numeric_limits<>::max, use MAX instead
#endif

//____________________________________________________________________________
// Lookahead

#define MY_BEGINNING_PHASE_DRAW_LOOKAHEAD			1	// my beginning phase(n)->my draw(n+1)
#define OPPONENTS_BEGINNING_PHASE_DRAW_LOOKAHEAD	2	// opponent's beginning phase(n)->opponent's turn(n+1)->my draw(n+2)

#define MY_TURNS_DRAW_LOOKAHEAD				3	// my turn(n)->opponent's turn(n+1)->my turn(n+2)->opponent's draw(n+3)
#define OFFENSIVE_DRAW_LOOKAHEAD			3	// my combat phase(n)->opponent's turn(n+1)->my turn(n+2)->opponent's draw(n+3)
#define OPPONENT_TURNS_DRAW_LOOKAHEAD		2	// opponent's turn(n)->my turn(n+1)->opponent's draw
#define DEFENSIVE_DRAW_LOOKAHEAD			2	// opponent's combat phase(n)->my turn(n+1)->opponent's draw

//#define USE_HIGH_CREATURE_COUNT_LOOKAHEAD
//#define HIGH_CREATURE_COUNT_THRESHOLD		5	// 5 total creatures -> adjust lookahead
//#define HIGH_CREATURE_COUNT_DRAW_LOOKAHEAD_DELTA -1

//____________________________________________________________________________
// Optimizations

#define USE_NS_CUT							// Optimize searching of no-state,non-stack actions
#define CUT_REQUIRED_TRANSIENT_ACTIONS		// Optimize searching of temporally transient actions
#define LAND_ACTIONS_FIRST					// Remove all other actions if land actions are present

#define MIN_TIME_ALLOWED		(30)		// Minimum time required for one MinimaxAB call

//#define USE_ACTION_SCORE_IN_THINK_TIME_CALC	// Use action score in calculating thinking time slots
//#define CONSIDER_PASS_ACTION_FIRST

#define THINK_TIME_FRACTION		(0.65)

//#define THINK_HISTORY						// Shelved: too much memory consumption; not many hits

//____________________________________________________________________________
// Diagnostics

//#define FIND_EXPENSIVE_ACTIONS
//#define EXPENSIVE_ACTION_TIME	(1000 * 60)

#ifdef _DEBUG
#define TRACE_ACTION_NAMES
#endif

#ifdef _MY_DEBUG
#define BREAK_AT_MINIMAX	(-1)
#define BREAK_AT_PLY		(-1)
#define BREAK_AT_ACTION		(-1)
#define BREAK_AT_ALLOC		(-1)
#endif

//____________________________________________________________________________
// Logging

//#define LOG_MANA_POOL						// Log mana pools during debug runs in minimax log files

//#define GATHER_CHANGED_VARIABLE_STATS		// Gather max. and ave. changed variables per think-step

//#define NO_CHECKSUM
#define LOG_CHECKSUM						// Require developer mode

//____________________________________________________________________________
// Counters ordered by alphabetic order

//Please update Æther Snap, Vampire Hexmage like cards when adding counters here. 
//NOTE: that is not necesary now.
#define AGE_COUNTER			 _T("age counter")
#define AIM_COUNTER			 _T("aim counter")
#define ARROW_COUNTER		 _T("arrow counter")
#define ARROWHEAD_COUNTER	 _T("arrowhead counter")
#define AWAKENING_COUNTER	 _T("awakening counter")
#define BLAZE_COUNTER		 _T("blaze counter")
#define BLOOD_COUNTER		 _T("blood counter")
#define BOUNTY_COUNTER		 _T("bounty counter")
#define BRIBERY_COUNTER		 _T("bribery counter")
#define CARRION_COUNTER		 _T("carrion counter")
#define CHARGE_COUNTER		 _T("charge counter")
#define CREDIT_COUNTER		 _T("credit counter")
#define CUBE_COUNTER		 _T("cube counter")
#define CORPSE_COUNTER		 _T("corpse counter")
#define CURRENCY_COUNTER	 _T("currency counter")
#define DEATH_COUNTER		 _T("death counter")
#define DELAY_COUNTER		 _T("delay counter")
#define DEPLETION_COUNTER	 _T("depletion counter")
#define DESPAIR_COUNTER		 _T("despair counter")
#define DEVOTION_COUNTER	 _T("devotion counter")
#define DIVINITY_COUNTER	 _T("divinity counter")
#define DOOM_COUNTER		 _T("doom counter")
#define DREAM_COUNTER		 _T("dream counter")
#define ECHO_COUNTER		 _T("echo counter")
#define ELIXIR_COUNTER		 _T("elixir counter")
#define ENERGY_COUNTER		 _T("energy counter")
#define EON_COUNTER			 _T("eon counter")
#define EYEBALL_COUNTER		 _T("eyeball counter")
#define FADE_COUNTER		 _T("fade counter")
#define FATE_COUNTER		 _T("fate counter")
#define FEATHER_COUNTER		 _T("feather counter")
#define FILIBUSTER_COUNTER	 _T("filibuster counter")
#define FLAME_COUNTER		 _T("flame counter")
#define FLOOD_COUNTER		 _T("flood counter")
#define FUNGUS_COUNTER		 _T("fungus counter")
#define FUSE_COUNTER		 _T("fuse counter")
#define GLYPH_COUNTER		 _T("glyph counter")
#define GOLD_COUNTER		 _T("gold counter")
#define GROWTH_COUNTER		 _T("growth counter")
#define HATCHLING_COUNTER	 _T("hatchling counter")
#define HEALING_COUNTER		 _T("healing counter")
#define HOOFPRINT_COUNTER	 _T("hoofprint counter")
#define HOURGLASS_COUNTER	 _T("hourglass counter")
#define HUNGER_COUNTER		 _T("hunger counter")
#define HUSK_COUNTER		 _T("husk counter")
#define ICE_COUNTER			 _T("ice counter")
#define INFECTION_COUNTER	 _T("infection counter")
#define INTERVENTION_COUNTER _T("intervention counter")
#define JAVELIN_COUNTER		 _T("javelin counter")
#define KI_COUNTER			 _T("ki counter")
#define LEVEL_COUNTER		 _T("level counter")
#define LORE_COUNTER		 _T("lore counter")
#define LOYALTY_COUNTER		 _T("loyalty counter")
#define LUCK_COUNTER		 _T("luck counter")
#define MAGNET_COUNTER		 _T("magnet counter")
#define MANNEQUIN_COUNTER	 _T("mannequin counter")
#define MATRIX_COUNTER		 _T("matrix counter")
#define MIRE_COUNTER		 _T("mire counter")
#define MINE_COUNTER		 _T("mine counter")
#define MINING_COUNTER		 _T("mining counter")
#define MUSIC_COUNTER		 _T("music counter")
#define MUSTER_COUNTER		 _T("muster counter")
#define NET_COUNTER			 _T("net counter")
#define OMEN_COUNTER		 _T("omen counter")
#define ORE_COUNTER			 _T("ore counter")
#define PAGE_COUNTER		 _T("page counter")
#define PAIN_COUNTER		 _T("pain counter")
#define PARALYZATION_COUNTER _T("paralyzation counter")
#define PETAL_COUNTER		 _T("petal counter")
#define PETRIFICATION_COUNTER _T("petrification counter")
#define PHYLACTERY_COUNTER	 _T("phylactery counter")
#define PIN_COUNTER			 _T("pin counter")
#define PLAGUE_COUNTER		 _T("plague counter")
#define POLYP_COUNTER		 _T("polyp counter")
#define PRESSURE_COUNTER	 _T("pressure counter")
#define PUPA_COUNTER		 _T("pupa counter")
#define QUEST_COUNTER		 _T("quest counter")
#define RUST_COUNTER		 _T("rust counter")
#define SCREAM_COUNTER		 _T("scream counter")
#define SCROLL_COUNTER		 _T("scroll counter")
#define SHELL_COUNTER		 _T("shell counter")
#define SHIELD_COUNTER		 _T("shield counter")
#define SHRED_COUNTER		 _T("shred counter")
#define SLEEP_COUNTER		 _T("sleep counter")
#define SLEIGHT_COUNTER		 _T("sleight counter")
#define SLIME_COUNTER		 _T("slime counter")
#define SOOT_COUNTER		 _T("soot counter")
#define SPORE_COUNTER		 _T("spore counter")
#define STORAGE_COUNTER		 _T("storage counter")
#define STRIFE_COUNTER		 _T("strife counter")
#define STUDY_COUNTER		 _T("study counter")
#define THEFT_COUNTER		 _T("theft counter")
#define TIDE_COUNTER		 _T("tide counter")
#define TIME_COUNTER		 _T("time counter")
#define TOWER_COUNTER		 _T("tower counter")
#define TRAINING_COUNTER	 _T("training counter")
#define TRAP_COUNTER		 _T("trap counter")
#define TREASURE_COUNTER	 _T("treasure counter")
#define VELOCITY_COUNTER	 _T("velocity counter")
#define VERSE_COUNTER		 _T("verse counter")
#define VITALITY_COUNTER	 _T("vitality counter")
#define WAGE_COUNTER		 _T("wage counter")
#define WINCH_COUNTER		 _T("winch counter")
#define WIND_COUNTER		 _T("wind counter")
#define WISH_COUNTER		 _T("wish counter")


#define SYSTEM_COUNTER _T("system counter")
//____________________________________________________________________________
// Token IDs

#define TOKEN_ID_BY_NAME		0		// search for the image/text ID by name

//____________________________________________________________________________
// Special Trigger IDs

#define COIN_FLIP_LOSE_ID				60331
#define COIN_FLIP_WIN_ID				60332
#define UNMORPH_TRIGGER_ID				60333
#define TRANSFORM_TRIGGER_ID			60334
#define PLANESWALKER_SYMBOL_TRIGGER_ID	60335
#define CHAOS_SYMBOL_TRIGGER_ID			60336
#define PLANAR_DIE_ROLL_TRIGGER_ID		60337
#define FORCE_CHAOS_SYMBOL_TRIGGER_ID	60338
#define MIRACLE_TRIGGER_ID				60339
#define COUNTERSPELL_REPLACE_TRIGGER_ID	60340
#define COUNTER_TRIGGER_ID				60341
#define CHOICE_1_TRIGGER_ID				60342
#define CHOICE_2_TRIGGER_ID				60343
#define CHOICE_3_TRIGGER_ID				60344
#define MONSTROUS_TRIGGER_ID			60345
#define SCRY_TRIGGER_ID					60346
#define RENOWNED_TRIGGER_ID				60345

//____________________________________________________________________________
// Misc

#define	WM_APP_GAME			(WM_APP + 1100)
#define WM_APP_NET			(WM_APP + 1200)
#define WM_APP_INTERFACE	(WM_APP + 1300)
#define WM_APP_CARDSTORE	(WM_APP + 1400)

#define COLOR_MASK			RGB(128,255,255)
#define	COLOR_BLACK_MANA	RGB(192,192,192)
#define COLOR_GREEN_MANA	RGB(128,255,128)
#define COLOR_RED_MANA		RGB(255,128,128)
#define COLOR_BLUE_MANA		RGB(128,255,255)
#define COLOR_WHITE_MANA	RGB(220,220,220)
#define COLOR_GENERIC_MANA	RGB(192,192,192)

#define REG_SETTINGS_KEY	_T("Settings")

#ifdef MAGIC_CORE_DLL
#define CORE_EXPORT			__declspec(dllexport)
#else
#define CORE_EXPORT			__declspec(dllimport)
#endif 

//____________________________________________________________________________
// Includes

#define M10_COMBAT // M10 combat rule changes in effect

#include <CoreResource.h>

#include <Utility.h>
#include <StateStack.h>
#include <Container.h>
#include <CheapList.h>
#include <ThreadCentral.h>
#include <StateManager.h>
#include <StateManagedValues.h>
#include <StateManagedContainers.h>

#include <CoreEnumerations.h>
#include <CreatureType.h>

#include <ContextValue.h>
#include <Numbers.h>
#include <Damage.h>
#include <Effect.h>
#include <Event.h>
#include <Event1.h>
#include <CardFilter.h>

#include <ManaPool.h>
#include <ManaCost.h>
#include <Selection1.h>
#include <Event2.h>
#include <Selection.h>
#include <Modifiers.h>
#include <Cost.h>
#include <Trait.h>
#include <CardFactory.h>

#include <Ability.h>
#include <ManaProductionHint.h>
#include <Card.h>
#include <Triggers.h>
#include <Counter.h>
#include <Deck.h>
#include <Trait1.h>
#include <Zone.h>
#include <Action.h>
#include <NetManager.h>
#include <Interface.h>
#include <MT19937.h>
#include <Player.h>
#include <Subject.h>
#include <Target.h>

#include <Reveals.h>
#include <Node.h>
#include <AbilityNonStack.h>
#include <AbilityNonStack1.h>
#include <AbilityStack.h>
#include <AbilityStack1.h>
#include <AbilityNonStack2.h>
#include <AbilityStack2.h>
#include <AbilityTarget.h>
#include <AbilityGlobal.h>
#include <AbilityEnchant.h>

#include <ContinuousStaticAbilities.h>

#include <Action1.h>
#include <Action2.h>
#include <AbilityTriggered.h>
#include <AbilityTriggered1.h>
#include <AbilityTriggered2.h>
#include <AbilityTriggered3.h>

#include <Card1.h>
#include <Card2.h>
#include <Card3.h>
#include <Card4.h>
#include <Scheduler.h>
#include <StackProjection.h>
#include <Stack.h>
#include <Node1.h>
#include <Graph.h>
#include <AbilityTriggeredT.h>
#include <AbilityKeyword.h>
#include <UsagePattern.h>
#include <Score.h>
#include <CoreApp.h>
#include <Game.h>
#include <CardStore.h>
#include <GUIUtility.h>
