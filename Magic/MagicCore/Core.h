#pragma once

#define MIN(A,B)	((A) > (B) ? (B) : (A))
#define MAX(A,B)	((A) < (B) ? (B) : (A))

#ifdef min
#undef min // for numeric_limits<>::min, use MIN instead
#endif

#ifdef max
#undef max // for numeric_limits<>::max, use MAX instead
#endif

#define DEFINE_COUNTED_CSTOR(CLASS)		public: static counted_ptr<CLASS> CreateObject() { return new CLASS; } protected: CLASS() {}
#define DECLARE_COUNTED_CSTOR(CLASS)	public: static counted_ptr<CLASS> CreateObject() { return new CLASS; } protected: CLASS();
#define DECLARE_CARD_CSTOR(CLASS)		public: CLASS(UINT uID);

#define MY_BEGINNING_PHASE_DRAW_LOOKAHEAD			1	// my beginning phase(n)->my draw(n+1)
#define OPPONENTS_BEGINNING_PHASE_DRAW_LOOKAHEAD	2	// opponent's beginning phase(n)->opponent's turn(n+1)->my draw(n+2)

#define MY_TURNS_DRAW_LOOKAHEAD				3	// my turn(n)->opponent's turn(n+1)->my turn(n+2)->opponent's draw(n+3)
#define OFFENSIVE_DRAW_LOOKAHEAD			3	// my combat phase(n)->opponent's turn(n+1)->my turn(n+2)->opponent's draw(n+3)
#define OPPONENT_TURNS_DRAW_LOOKAHEAD		2	// opponent's turn(n)->my turn(n+1)->opponent's draw
#define DEFENSIVE_DRAW_LOOKAHEAD			2	// opponent's combat phase(n)->my turn(n+1)->opponent's draw

//#define USE_HIGH_CREATURE_COUNT_LOOKAHEAD
#define HIGH_CREATURE_COUNT_THRESHOLD		5	// 5 total creatures -> adjust lookahead
#define HIGH_CREATURE_COUNT_DRAW_LOOKAHEAD_DELTA -1

#define USE_NS_CUT							// Optimize searching of no-state,non-stack moves
#define CUT_REQUIRED_TRANSIENT_MOVES		// Optimize searching of temporally transient moves
#define LAND_MOVES_FIRST					// Remove all other moves if land moves are present
//#define RECYCLE_TIME						// (bug) Re-think already thought moves if there are enough time left

#define MIN_TIME_ALLOWED		(50)		// Minimum time required for one MinimaxAB call

#define USE_MOVE_SCORE_IN_THINK_TIME_CALC	// Use move score in calculating thinking time slots
//#define CONSIDER_PASS_MOVE_FIRST
//#define FIND_EXPENSIVE_MOVES
//#define EXPENSIVE_MOVE_TIME	(1000 * 60)
//#define LOG_MANA_POOL						// Log mana pools during debug runs in minimax log files

//#define GATHER_CHANGED_VARIABLE_STATS		// Gather max. and ave. changed variables per think-step

#ifndef _MY_DEBUG
	#undef FIND_EXPENSIVE_MOVES
#endif

//#define NO_CHECKSUM
//#define LOG_CHECKSUM

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

//____________________________________________________________________________
//

#include "..\Core\CoreResource.h"

#include "..\Core\Utilities\Utility.h"
#include "..\Core\States\StateStack.h"
#include "..\Core\States\Container.h"
#include "..\Core\States\StateManager.h"
#include "..\Core\States\StateManagedValues.h"
#include "..\Core\States\StateManagedContainers.h"

#include "..\Core\Enumerations.h"
#include "..\Core\Cards\CreatureType.h"

#include "..\Core\Misc\ContextValue.h"
#include "..\Core\Misc\Numbers.h"
#include "..\Core\Misc\Counter.h"
#include "..\Core\Misc\Damage.h"
#include "..\Core\Misc\Effect.h"
#include "..\Core\Events\Event.h"
#include "..\Core\Misc\Selection.h"
#include "..\Core\Events\Event1.h"
#include "..\Core\Cards\CardFilter.h"

#include "..\Core\Mana\ManaPool.h"
#include "..\Core\Mana\ManaCost.h"
#include "..\Core\Events\Event2.h"
#include "..\Core\Misc\Modifiers.h"
#include "..\Core\Abilities\Cost.h"
#include "..\Core\Cards\CardFactory.h"
#include "..\Core\Misc\Triggers.h"
#include "..\Core\Abilities\Trait.h"
#include "..\Core\Abilities\Trait1.h"


#include "..\Core\Abilities\Ability.h"
#include "..\Core\Mana\ManaProductionHint.h"
#include "..\Core\Cards\Card.h"
#include "..\Core\Areas\Area.h"
#include "..\Core\Moves\Move.h"
#include "..\Core\Communications\NetManager.h"
#include "..\Core\Players\Interface.h"
#include "..\Core\Players\Player.h"
#include "..\Core\Misc\Subject.h"
#include "..\Core\Misc\Target.h"

#include "..\Core\Misc\Scheduler.h"
#include "..\Core\Abilities\Reveals.h"
#include "..\Core\Nodes\Node.h"
#include "..\Core\Abilities\AbilityNonStack.h"
#include "..\Core\Abilities\AbilityNonStack1.h"
#include "..\Core\Abilities\AbilityStack.h"
#include "..\Core\Abilities\AbilityStack1.h"
#include "..\Core\Abilities\AbilityNonStack2.h"
#include "..\Core\Abilities\AbilityNonStack3.h"
#include "..\Core\Abilities\AbilityStack2.h"
#include "..\Core\Abilities\AbilityTarget.h"
#include "..\Core\Abilities\AbilityGlobal.h"
#include "..\Core\Abilities\AbilityEnchant.h"
#include "..\Core\Abilities\AbilityTriggered.h"
#include "..\Core\Abilities\AbilityTriggered1.h"
#include "..\Core\Abilities\AbilityTriggeredT.h"
#include "..\Core\Cards\Card1.h"
#include "..\Core\Cards\Card2.h"
#include "..\Core\Cards\Card3.h"

#include "..\Core\Moves\Move1.h"
#include "..\Core\Moves\Move2.h"
#include "..\Core\Abilities\AbilityTriggered2.h"
#include "..\Core\Abilities\AbilityTriggered3.h"
#include "..\Core\Misc\StackProjection.h"
#include "..\Core\Moves\Stack.h"
#include "..\Core\Nodes\Node1.h"
#include "..\Core\Nodes\Graph.h"
#include "..\Core\Misc\UsagePattern.h"
#include "..\Core\Misc\Score.h"
#include "..\Core\Utilities\MT19937.h"
#include "..\Core\CoreApp.h"
#include "..\Core\Game.h"
#include "..\Core\Cards\CardStore.h"
#include "..\Core\Utilities\GUIUtility.h"
