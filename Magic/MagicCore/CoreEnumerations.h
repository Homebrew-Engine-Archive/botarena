#pragma once

//____________________________________________________________________________
//
struct AbilityType 
{
	enum Enum : DWORD
	{	
		Null					= 0,

		_SlowSpeed				= 0x01000000,

		Artifact				= 0x01000001,
		Creature				= 0x01000002,
		Enchantment				= 0x01000004,
		Land					= 0x01000008,
		Sorcery					= 0x01000010,
		Equipment				= 0x01000020,
		AsSorcery				= 0x01000040,
		Suspend					= 0x01000080,

		_FastSpeed				= 0x02000000,

		Activated				= 0x02000100,
		Instant					= 0x02000200,	// Flash
		Triggered				= 0x02000400,	// Triggered actions have the same nature as instants and activated abilities once they are on the stack.
												// http://groups.google.com/group/rec.games.trading-cards.magic.rules/browse_thread/thread/99147cf78a879d18/1b25e839365fdd4e#1b25e839365fdd4e
		Untap					= 0x02000800,
		Upkeep					= 0x02001000,
		Discard					= 0x02002000,
		Attack					= 0x02004000,
		Block					= 0x02008000,
		CombatDamageAssign		= 0x02010000,
#ifdef M10_COMBAT
		CombatDamageOrder		= 0x02020000,
#endif
		AsInstant				= 0x02040000,

		_FastestSpeed			= 0x04000000,

		ManaSource				= 0x04100000,	// 9/27/2003

		Ninjutsu				= 0x04200000,

		_ProduceMana			= 0x10000000,
		_ConsumeMana			= 0x20000000,
		_FilterMana				= 0x40000000,

		_AbilityTypeMask		= 0x00ffffff,
		_AbilitySpeedMask		= 0x0f000000,
		_ManaAbilityMask		= 0xf0000000,

		_Spells					= (Artifact 
								| Creature 
								| Enchantment 
								| Sorcery 
								| Instant ) & _AbilityTypeMask,

		_SlowOkay				= (Artifact 
								| Creature
								| Enchantment
								| Land
								| Sorcery
								| Equipment
								| AsSorcery
								| Suspend),

		_TriggerOkay			= Triggered,

		_FastOkay				= (Activated
								| Instant 
								| Triggered
								| AsInstant
								| Ninjutsu),

		_UntapOkay				= Untap,
		_UpkeepOkay				= Upkeep,
		_DiscardOkay			= Discard,
		_AttackOkay				= Attack,
		_BlockOkay				= Block,

		_CombatDamageAssignOkay	= CombatDamageAssign,
#ifdef M10_COMBAT
		_CombatDamageOrderOkay	= CombatDamageOrder,
#endif

		_FastestOkay			= ManaSource

	};

	DEFINE_BITFLAG_ENUM_OPS(AbilityType, DWORD)
};

//____________________________________________________________________________
//
struct NodeId
{
#ifdef M10_COMBAT
	enum Enum : DWORD
	{
		Null						= 0,
		_BeginningPhase				= 0x000000ff,
			BeforeBeginningStep		= 0x00000001,	// Triggered okay
			BeginningStep			= 0x00000002,
			UntapStep				= 0x00000004,	// Untap okay
			UpkeepStep				= 0x00000008,	// Fast okay (optimized)
			DrawStep1				= 0x00000010,	// Draws okay
			DrawStep2				= 0x00000020,	// Fast okay (optimized)

		_MainPhase					= 0x00000f00,	
			MainPhaseStep			= 0x00000100,	// Slow, fast okay

		_CombatPhase				= 0x0ffff000,
			BeginningOfCombatStep	= 0x00001000,	// Fast okay (optimized)
			DeclareAttackersStep1	= 0x00002000,	// Attacker declarations only
			DeclareAttackersStep2	= 0x00004000,	// Fast okay
			_DeclareAttackersStep	= DeclareAttackersStep1 
									| DeclareAttackersStep2,
			DeclareBlockersStep1	= 0x00010000,	// Blocker declarations only
			DeclareBlockersStep1a	= 0x00020000,	// Attacker and blocker damage assignment ordering only (M10)
			DeclareBlockersStep2	= 0x00080000,	// Fast okay
			_DeclareBlockersStep	= DeclareBlockersStep1 
									| DeclareBlockersStep1a 
									| DeclareBlockersStep2,
			CombatDamageStep1a		= 0x00100000,	// First strikes & Double strikes only: Attackers assign damage to multiple blockers (blockers capable of blocking multiple attackers also assign damage to blocked attackers)
			CombatDamageStep1b		= 0x00200000,	// Fast okay
			CombatDamageStep2a		= 0x00400000,	// Non-first strikes & Doublestrikes only: Attackers assign damage to multiple blockers (blockers capable of blocking multiple attackers also assign damage to blocked attackers)
			CombatDamageStep2b		= 0x00800000,	// Fast okay
			_CombatDamageStep		= CombatDamageStep1a 
									| CombatDamageStep1b 
									| CombatDamageStep2a 
									| CombatDamageStep2b,
			EndOfCombatStep			= 0x01000000,	// Fast okay (optimized)

		_EndPhase					= 0xf0000000,
			EndStep					= 0x10000000,	// Fast okay (optimized) [ "At end of turn" triggers    ]
			CleanupStep1			= 0x20000000,	// Discards okay
			CleanupStep2			= 0x40000000,	// creature reset [ "Until end of turn" triggers ], trigger okay, fast okay if stack is non-empty, then repeats CleanupStep1 when stack is empty
			_CleanupStep			= CleanupStep1 
									| CleanupStep2,

		_Optimized
			= UpkeepStep
			| DrawStep2
			| BeginningOfCombatStep
			| EndOfCombatStep
			| EndStep,

		_All
			= _BeginningPhase
			| _MainPhase
			| _CombatPhase
			| _EndPhase
	};
#else
	enum Enum : DWORD
	{
		Null						= 0,

		_BeginningPhase				= 0x000000ff,
			BeforeBeginningStep		= 0x00000001,
			BeginningStep			= 0x00000002,
			UntapStep				= 0x00000004,	// Untap okay
			UpkeepStep				= 0x00000008,	// Fast okay (optimized)
			DrawStep1				= 0x00000010,	// Draws okay
			DrawStep2				= 0x00000020,	// Fast okay (optimized)

		_MainPhase					= 0x00000f00,	
			MainPhaseStep			= 0x00000100,	// Slow, fast and trigger okay

		_CombatPhase				= 0x00fff000,
			BeginningOfCombatStep	= 0x00001000,	// Fast and trigger okay (optimized)
			DeclareAttackersStep1	= 0x00002000,	// Attacker declarations only
			DeclareAttackersStep2	= 0x00004000,	// Fast and trigger okay
			_DeclareAttackersStep	= DeclareAttackersStep1 | DeclareAttackersStep2,
			DeclareBlockersStep1	= 0x00008000,	// Blocker declarations only
			DeclareBlockersStep2	= 0x00010000,	// Fast and trigger okay
			_DeclareBlockersStep	= DeclareBlockersStep1 | DeclareBlockersStep2,
			CombatDamageStep1a		= 0x00020000,	// First strikes & Double strikes only: Attackers assign damage to multiple blockers (blockers capable of blocking multiple attackers also assign damage to blocked attackers)
			CombatDamageStep1b		= 0x00040000,	// Fast and trigger after damage goes to stack
			CombatDamageStep2a		= 0x00080000,	// Non-first strikes & Doublestrikes only: Attackers assign damage to multiple blockers (blockers capable of blocking multiple attackers also assign damage to blocked attackers)
			CombatDamageStep2b		= 0x00100000,	// Fast and trigger after damage goes to stack
			_CombatDamageStep		= CombatDamageStep1a | CombatDamageStep1b | CombatDamageStep2a | CombatDamageStep2b,
			EndOfCombatStep			= 0x00200000,	// Fast and trigger okay (optimized)

		_EndPhase					= 0x0f000000,
			EndStep					= 0x01000000,	// Fast and trigger okay (optimized) [ "At end of turn" triggers    ]
			CleanupStep1			= 0x02000000,	// Trigger okay, mana source okay, discards okay
			CleanupStep2			= 0x04000000,	// creature reset [ "Until end of turn" triggers ]
			_CleanupStep			= CleanupStep1 | CleanupStep2,

		_Optimized
			= UpkeepStep
			| DrawStep2
			| BeginningOfCombatStep
			| EndOfCombatStep
			| EndStep,

		_All
			= _BeginningPhase
			| _MainPhase
			| _CombatPhase
			| _EndPhase
	};
#endif

	DEFINE_BITFLAG_ENUM_OPS(NodeId, DWORD);

public:
	static CString ToString(NodeId nodeId)
	{
		CString strNodeName;

		switch (nodeId.Get())
		{
		case BeforeBeginningStep: strNodeName = _T("Before Beginning turn"); break;
		case BeginningStep: strNodeName = _T("Beginning phase"); break;
		case UntapStep: strNodeName = _T("Untap step"); break;
		case UpkeepStep: strNodeName = _T("Upkeep step"); break;
		case DrawStep1: strNodeName = _T("Draw step (Normal Draws)"); break;
		case DrawStep2: strNodeName = _T("Draw step"); break;
		case MainPhaseStep: strNodeName = _T("Main phase"); break;
		case EndStep: strNodeName = _T("End step"); break;
		case CleanupStep1: strNodeName = _T("Clean Up step (Discard)"); break;
		case CleanupStep2: strNodeName = _T("Clean Up step"); break;
		case BeginningOfCombatStep: strNodeName = _T("Beginning Combat step"); break;
		case DeclareAttackersStep1: strNodeName = _T("Declare Attackers step"); break;
		case DeclareAttackersStep2: strNodeName = _T("End of Attacker Declaration"); break;
		case DeclareBlockersStep1: strNodeName = _T("Declare Blockers step"); break;
#ifdef M10_COMBAT
		case DeclareBlockersStep1a: strNodeName = _T("Declare Blockers step: damage assignment orderings"); break;
#endif
		case DeclareBlockersStep2: strNodeName = _T("End of Blocker Declaration"); break;
		case CombatDamageStep1a: strNodeName = _T("Combat Damage Step: first strike damage assignments)"); break;
		case CombatDamageStep1b: strNodeName = _T("Combat Damage Step: end of first strike damage assignments "); break;
		case CombatDamageStep2a: strNodeName = _T("Combat Damage step: damage assignments"); break;
		case CombatDamageStep2b: strNodeName = _T("Combat Damage step: end of damage assignments"); break;
		case EndOfCombatStep: strNodeName = _T("End of Combat step"); break;
		default:
			ATLASSERT(false);
		}

		return strNodeName;
	}

	CString ToString() const { return ToString(m_Value); }
};

//____________________________________________________________________________
//
struct DamageType
{
	enum Enum : DWORD
	{
		NotDealingDamage		= 0x0000,
		CombatDamage			= 0x0001,
		NonCombatDamage			= 0x0002,
		NoRegeneration			= 0x0004,	// if any damage of this type was taken, the creature will gain CreatureKeyword::CantRegenerate for the turn

		ToExileDamage			= 0x0008,
		SpellDamage				= 0x0010,
		AbilityDamage			= 0x0020,

		CreatureTapDamage		= 0x0040,	// creature dealt this type of damage will be tapped
		CreatureSpellOnlyDamage	= 0x0080,   // player dealt this type of damage won't be able to cast noncreature spels for the rest of turn
		AttackEnforceDamage		= 0x0100,	// creature dealt this type of damage must attack this turn if able

		_NonLoopDamage		= 0x1000,	// Special flag to avoid looping, eg. Pyromancer's Swath

		_AllDamage			= CombatDamage | NonCombatDamage | NoRegeneration | ToExileDamage | SpellDamage | AbilityDamage
	};

	DEFINE_BITFLAG_ENUM_OPS(DamageType, DWORD);
};

//____________________________________________________________________________
//
struct SourceColor
{
	enum Enum : DWORD
	{
		Null				= 0,

		BlueSource			= 0x01000000,
		BlackSource			= 0x02000000,
		RedSource			= 0x04000000,
		GreenSource			= 0x08000000,
		WhiteSource			= 0x10000000,
		ColorlessSource		= 0x20000000,

		_AllSources			= 0xff000000
	};

	DEFINE_BITFLAG_ENUM_OPS(SourceColor, DWORD);

public:
	static CString ToString(SourceColor sourceColor)
	{
		CString strSourceColor;

		switch (sourceColor.Get())
		{
		case BlueSource: strSourceColor = _T("Blue Source"); break;
		case BlackSource: strSourceColor = _T("Black Source"); break;
		case RedSource: strSourceColor = _T("Red Source"); break;
		case GreenSource: strSourceColor = _T("Green Source"); break;
		case WhiteSource: strSourceColor = _T("White Source"); break;
		case ColorlessSource: strSourceColor = _T("Colorless Source"); break;
		default:
			ATLASSERT(false);
		}

		return strSourceColor;
	}

	CString ToString() const { return ToString(m_Value); }
};

//____________________________________________________________________________
//
struct CardPlacement
{
	enum Enum
	{
		NotApplicable,
		Top,
		Bottom,
		TopOrBottom
	};

	DEFINE_DISTINCT_ENUM_OPS(CardPlacement)
};

//____________________________________________________________________________
//
struct Characteristic
{
	enum Enum
	{
		Negative	= -1,
		Neutral		= 0,
		Positive	= 1
	};

	DEFINE_DISTINCT_ENUM_OPS(Characteristic);
};

//________________________________________________________________________
//
struct SearchBreak
{
	enum Enum	// Search Break constants	
	{
		Continue				= 0x00000000,
		ManaBurn				= 0x00000001,
		NullAttack				= 0x00000002,
		PassWithMana			= 0x00000004,
		TooMuchMana				= 0x00000008,
		NotEnoughInformation	= 0x00000010
		//EndOfCombat			= 0x00000010
	};

	DEFINE_BITFLAG_ENUM_OPS(SearchBreak, DWORD);
};

//________________________________________________________________________
//
struct StackActionStatus
{
	enum Enum : DWORD
	{
		Okay	= 0,
		Denied	= 1
	};

	DEFINE_BITFLAG_ENUM_OPS(StackActionStatus, DWORD);
	ENUM_CONTAINER_STATE_SUPPORT(StackActionStatus);
};

//________________________________________________________________________
//
struct ZoneId
{
	enum Enum : DWORD
	{
		Null			= 0x0000,		

		Graveyard		= 0x0001,
		Hand			= 0x0002,
		Battlefield		= 0x0004,
		Library			= 0x0008,

		Stack			= 0x0010,
		Exile			= 0x0020,		

		_OwnedCards		= 0x0040, // pseudo zone: contains all the player's owned cards plus temporary view of all owned tokens
		_Tokens			= 0x0080,	// pseudo zone: use for tokens to transit into/remove from in-play zones

		_Effects        = 0x0100,

		_ExileFaceDown  = 0x0200, // Made to support exiled face-down cards until GUI support

		_Sideboard      = 0x0400,

		_Schemes        = 0x0800,

		_Planes         = 0x1000,

		_PhasedOut      = 0x2000,

		_PseudoZones	= _OwnedCards,
		_NonResetZones	= Battlefield | _PhasedOut,
		_SecondaryZones	= _Tokens | _PseudoZones,
		_PrimaryZones	= Stack | Battlefield | Hand | _Effects | Library | _ExileFaceDown | Exile,
		_OptimizedZones	= (DWORD)(~_PrimaryZones),
		_ActiveCounterZones = Graveyard | Stack | Battlefield | _Effects | _ExileFaceDown | Exile,

		_AllZones		= 0xffff
	};

	DEFINE_BITFLAG_ENUM_OPS(ZoneId, DWORD);

public:
	static CString ToString(ZoneId zoneId)
	{
		CString strZoneName;

		switch (zoneId.Get())
		{
		case Graveyard: strZoneName = _T("Graveyard"); break;
		case Hand: strZoneName = _T("Hand"); break;
		case Battlefield: strZoneName = _T("Battlefield"); break;
		case Library: strZoneName = _T("Library"); break;
		case Stack: strZoneName = _T("Stack"); break;
		case Exile: strZoneName = _T("Exile"); break;
		case _OwnedCards: strZoneName = _T("Owned cards"); break;
		case _Tokens: strZoneName = _T("Tokens"); break;
		case _Effects: strZoneName = _T("Effects"); break;
		case _ExileFaceDown: strZoneName = _T("Exile"); break;
		default:
			ATLASSERT(false);
		}

		return strZoneName;
	}

	CString ToString() const { return ToString(m_Value); }
};

//________________________________________________________________________
//
struct PreventionType
{
	enum Enum
	{
		Null				= 0,
		PreventNextDamage	= -1,	// 'PNx'
		PreventAllDamage	= -2,	// 'PAll'
		ReverseNextDamage	= -3	// 'RNx' Ref: Reverse Damage
	};

	DEFINE_DISTINCT_ENUM_OPS(PreventionType);
};

//________________________________________________________________________
//
struct RedirectionType
{
	enum Enum
	{
		Null				= 0,
		RedirectNextDamage	= -1,
		RedirectAllDamage	= -2,
	};

	DEFINE_DISTINCT_ENUM_OPS(RedirectionType);
};

//________________________________________________________________________
//
struct PreventableType
{
	enum Enum
	{
		NotPreventable,
		Preventable
	};

	DEFINE_DISTINCT_ENUM_OPS(PreventableType);
};

//________________________________________________________________________
//
struct PlayerEffectType
{
	enum Enum
	{
		Null = 0,

		PreventAllCombatDamage = 1,	// Prevent all combat damage that would be dealt to the player
		Meekstone,					// Creatures with power X or greater don't untap during their controllers' untap steps
		Worship,					// If you control a creature, damage that would reduce your life total to less than X reduces it to X instead
		EnsnaringBridge,			// Creatures with power greather than the number of cards in your hand can't attack (Parameter is the player who's hand size is to be considered)
		UntapLimit,					// Players can't untap more than X permanents during their untap steps
		SpellCastLimit,				// Each player can't play more than X spell each turn.
		DrawCardLimit,				// Each player can't draw more than X cards each turn. Ref: Spirit of the Labyrinth
		NoMaximumHandSize,			// You have no maximum hand size
		RevealHand,					// Your opponents play with their hands revealed
		TimeWalk,					// Take an extra turn after this one.
		InPlayTapped,				// Cards come into play tapped. [Param] is card filter index.
		DoubleCounters,				// Doubles counters put on permanents
		DoubleTokens,				// Double tokens put into play, in accordance with setting of "doubling" parameter (bDoubling).  See Doubling Season.
		ToughnessCombatDamage,		// Creature assigns combat damage equal to its toughness rather than its power.
		NoLegendRule,               // The "legend rule" doesn't apply.
		TopCardRevealed,            // Play with the top card of your library revealed.

		ExileInsteadGraveyard,		// If a card would be put into your graveyard from anywhere, exile that card instead.
		OppCantForceYourSacrifice,	// Spells and abilities your opponents control can't cause you to sacrifice permanents.

		CantGainLife,				// Player can't gain life
		CantChangeLife,             // Player's life total can't change
		CantPreventDamage,			// Damage can't be prevented

		WitherDamage,				// All damage is dealt as though its source had wither.

		IndestructibleCreatures,	// Controller's creatures are indestructible until end of the turn
		IndestructibleArtifacts,	// Controller's arifacts are indestructible until end of the turn
		IndestructibleEnchantments,	// Controller's enchantments are indestructible until end of the turn
		IndestructibleLands,		// Controller's lands are indestructible until end of the turn
		IndestructiblePermanents,	// Controller's permanents are indestructible until end of the turn (Boros Charm)

		PreventAllPlayerDamage,		// Prevent all damage that would be dealt to player
		PreventAllDamageToCreatures,// Prevent all damage that would be dealt to creatures
		PreventAllDamageToPWalkers,	// Prevent all damage that would be dealt to planeswalkers
		CreaturesDontUntapNextCont,	// Creatures that player controls don't untap during the player's next untap step
		Protection,					// Protection (Parameter is card filter pointer)

		UnblockableCreatures,       // Creatures are unblockable

		DamageToLifeReplacement,    // If noncombat damage would be dealt to you, prevent that damage. You gain life equal to the damage prevented this way.
		DamageToTokensReplacement,  // If a spell you control would deal damage to an opponent, prevent that damage. Put a 3/1 red Elemental Shaman creature token with haste onto the battlefield for each 1 damage prevented this way.

		MustAttackGideon,           // Creatures that player controls attack Gideon Jura if able.
		PreventDamagetoGideon,      // Prevent all damage that would be dealt to gideon this turn/
		PreventDamagetoGideon2,     // Prevent all damage that would be dealt to Gideon, Champion of Justice this turn/
		
		SkipNextTurn,				// player skips his or her next turn
		SkipNextCombatPhase,		// player skips his or her next combat phase
		SkipAllCombatPhases,		// player skips all his or her combat phases
		SkipNextDrawStep,			// player skips his or her next draw step
		SkipNextUntapStep,			// player skips his or her next untap step
		MultiplyDamage,				// If a source would deal damage to a creature or player, it deals double (X) that damage to that creature or player instead.
		MultiplyLifeGain,			// If a source would deal damage to a creature or player, it deals double (X) that damage to that creature or player instead.

		CantBeTargetedBySpells,		// Player can't be the targets of spells. ref: Ivory Mask
		CantBeTargetedByAbilities,	// Player can't be the targets of abilities. ref: Ivory Mask
		CantBeTargeted,				// Known as 'shroud' in 10TH; Note: can only be used in AddPlayerEffect or RemovePlayerEffect and none of the other APIs
		CantBeTargetedByOpponentsSpells,    //Same as Ivory Mask, but applied on Leyline of Sanctity
		CantBeTargetedByOpponentsAbilities, //Same as Ivory Mask, but applied on Leyline of Sanctity

		CantPlayActivatedAbilities,	// Players can't play activated abilities (mana abilities not okay) (Parameter is card filter pointer)
		CantPlayActivatedAbilities2,// Players can't play activated abilities (mana abilities okay) (Parameter is card filter pointer)
		CantPlaySpells,				// Players can't play spells (Parameter is card filter pointer)
		TeferiEffect,				// Players can cast spells only any time they could cast a sorcery
		GrafdiggersCage,			// Players can't cast spells from graveyard or library, creatures can't move from graveyard or library to battlefield

		SpellsCantBeCountered,		// Ref: Gaea's Herald. X is the card filter index.

		PreventDamage,				// If a source would deal damage to your, prevent X of that damage. ref: Urza's Armor
		PlayCardsFromGraveyard,		// Ref: Crucible of Worlds (parameter is card filter pointer)
		PlayOneCardFromGraveyard,	// Ref: Crucible of Worlds (parameter is card filter pointer)
		PlayCardsFromLibraryTop,    // Ref: Oracle of Mul Daya (parameter is card filter pointer)
		CantLoseGame,				// Ref: Platinum angel
		WinInsteadTopDeck,			// Ref: Laboratory Maniac
		CantGetPoisonCounters,      // Player can't get poison counters

		EachBlankRollisChaosRoll,   // Each blank roll of planar die counts as Chaos roll

		SuppressedLandwalk,		    // Ref: Great Wall

		CoinFlipCheating,           // Krark's Thumb
		GraveShroud,                // Ground Seal
		Doublep11Counters,          // Doubles +1/+1 counters (eg Corpsejack Menace), in accordance with setting of "doubling" parameter (bDoubling).  See Doubling Season.
		ISExileInsteadGraveyard,    // If an instant or sorcery card would be put into your graveyard from anywhere, exile that card instead. -- Dryad Militant
		PermanentsExileInsteadGraveyard, // If a permanent would be put into your graveyard from anywhere, exile it instead. -- Samurai of the Pale Curtain
		TokensExileInsteadGraveyard,	 // If a token would be put into your graveyard from anywhere, exile it instead. -- part of Rest in Peace
		CantDrawCards,				// Player can't draw cards Ref: Maralen of the Mornsong
		IgnoreHexproofOnCreatures,	// Player can target opponent's creatures with hexproof
		Extrap11Counter,            // Creatures enter the battlefield with an extra +1/+1 counter
		CreaturesCantBeTargetedBySpells, // Creatures cannot be targeted by spells with certain characteristic (Autumn's Veil)
		SpellsCantBeCounteredBySpells,	 // Spells cannot be countered by spells with certain characteristic (Autumn's Veil)
		ZombieMill,					// Zombies mill instead of combat damage (Undead Alchemist)
		Power1OrLessCantBlock,		// Hero of Oxid Ridge
		ChampionOfLambholtEffect,	// Champion of Lambholt
		HoodedHorrorEffect,	        // Creature (Hooded Horror) can't be blocked if defending player controls the most creatures or is tied for the most.
		GraxiplonEffect,            // Creature (Graxiplon) can't be blocked unless defending player controls three or more creatures that share a creature type.
		HedronFields,				// Hedron Fields of Agadeem -- creatures with power 7 or more can't attack or block.

		CounterCastReplacement,     // If a spell or ability you control would counter a spell, instead exile that spell and you may play that card without paying its mana cost.
	
		WinterOrb,					// Player can only untap one land
		Smoke,						// Player can only untap one creature
		NoCycling,					// Player can't activate cycling abilities
		PreventPlayerCombatDamage,	// Prevent all combat damage that would be dealt to player
		BasandraEffect,				// Player can't cast spells in combat
		HandToHandEffect,			// Player can't cast instants or activate nonmana abilities in combat
		InstantEquip,				// Player can equip as instant

		Doublep11CountersAlways,    // Used by Primal Vigor Double +1/+1 counters, ignoring setting "doubling" parameter (bDoubling)
		DoubleTokensAlways          // Used by Primal Vigor Double tokens put into play, ignoring setting of "doubling" parameter (bDoubling)
	};

	DEFINE_DISTINCT_ENUM_OPS(PlayerEffectType);

public:
	static bool PositivePlayerEffectType(PlayerEffectType playerEffect)
	{
		switch(playerEffect.Get())
		{
		case PreventAllCombatDamage:
		case Worship:
		case EnsnaringBridge:
		case NoMaximumHandSize:
		case TimeWalk:
		case DoubleCounters:
		case DoubleTokens:
		case IndestructibleCreatures:
		case IndestructibleArtifacts:
		case IndestructibleEnchantments:
		case IndestructibleLands:
		case PreventAllPlayerDamage:
		case PreventAllDamageToCreatures:
		//case Protection:                    Removed because of Runed Halo selection (for AI to select opponent cards)
		case MultiplyDamage:
		case MultiplyLifeGain:
		case CantBeTargetedBySpells:
		case CantBeTargetedByAbilities:
		case CantBeTargeted:
		case SpellsCantBeCountered:
		case PreventDamage:
		case PlayCardsFromGraveyard:
		case CantLoseGame:
		case CoinFlipCheating:
		case Doublep11Counters:
		case Doublep11CountersAlways:    
		case DoubleTokensAlways:   
			return true;
		}

		return false;
	}

	static bool NegativePlayerEffectType(PlayerEffectType playeEffect)
	{
		return !PositivePlayerEffectType(playeEffect);
	}
};

//________________________________________________________________________
//
struct Orientation
{
	enum Enum : DWORD
	{
		Null		= 0,

		Tap			= 0x00000001,
		Untap		= 0x00000002,
		_TapMask	= (Tap | Untap),
		FaceDown	= 0x00000004,
		FaceUp		= 0x00000008,
		_FaceMask	= (FaceDown | FaceUp),
		Flipped		= 0x00000010,
		UnFlipped	= 0x00000020,
		_FlipMask   = (Flipped | UnFlipped),
		FaceFirst	= 0x00000040,
		FaceSecond	= 0x00000080,
		_DoubleFaceMask   = (FaceFirst | FaceSecond),
		UnMorph		= 0x00000100,
		Morph		= 0x00000200,
		_MorphMask   = (UnMorph | Morph),

		_All		= 0xffffffff
	};

	DEFINE_BITFLAG_ENUM_OPS(Orientation, DWORD);
};

//________________________________________________________________________
//
struct CardKeyword
{
	enum Enum : unsigned __int64
	{
		Null							= 0,

		NoUntapInUntapPhase				= 0x0000000000000001,	// Ref: Dehydration
		CantBeCountered					= 0x0000000000000002,	// Ref: Obliterate

		Vanishing						= 0x0000000000000004,	// When comes into play, set to N time counters. During beginning of upkeeps, remove a time counter and if the number of time counter reaches zero, sacrifice card. If no time counters, ignore.
		Suspend							= 0x0000000000000008,	// Pay suspend cost to put card to remove from game with N time counters. At the beginning of upkeeps, remove a time counter and if the number of time counter reaches zero, re-cast the spell as if the casting cost was paid. If no time counters, card remains in remove from game.

		Shroud							= 0x0000000000000010,

		Flash							= 0x0000000000000020,	// You may play this spell any time you could play an instant

		SplitSecond						= 0x0000000000000040,

		Changeling						= 0x0000000000000080,

		Indestructible					= 0x0000000000000100,

		NoUntapInNextContUntap			= 0x0000000000000200,   // This permanent doesn't untap during it's controllers next untap step

		CanChooseNotUntap				= 0x0000000000000400,	// "You may choose not to untap" cards

		//free							= 0x0000000000000800,	// was Tribal

		Lifelink						= 0x0000000000001000,

		Wither							= 0x0000000000002000,   // not functional yet, just a flag for now

		Dredge							= 0x0000000000004000,

		TotemArmor						= 0x0000000000008000,

		MovementReplacement				= 0x0000000000010000,

		Infect							= 0x0000000000020000,

		Emblem							= 0x0000000000040000,

		Freecast						= 0x0000000000080000,

		Pflash							= 0x0000000000100000,   // Pseudoflash

		StormCopy						= 0x0000000000200000,   // Storm copy marker

		Madness							= 0x0000000000400000,

		Phasing							= 0x0000000000800000,

		CardHaste						= 0x0000000001000000,

		SpellCopy						= 0x0000000002000000,

		Hexproof						= 0x0000000004000000,

		CantGetCounters					= 0x0000000008000000,

		Detain							= 0x0000000010000000,

		PhyrexianMana					= 0x0000000020000000,	// for Rage Extractor
		UnpreventableDamage				= 0x0000000040000000,
		Deathtouch						= 0x0000000080000000,
		CantBeEnchanted					= 0x0000000100000000,
		
		ProtectionSpecial				= 0x0400000000000000,
		ProtectionFromWhite				= 0x0800000000000000,
		ProtectionFromRed				= 0x1000000000000000,
		ProtectionFromBlack				= 0x2000000000000000,
		ProtectionFromBlue				= 0x4000000000000000,
		ProtectionFromGreen				= 0x8000000000000000,

		_ProtectionFromColors			= (ProtectionFromWhite | ProtectionFromRed | ProtectionFromBlack | ProtectionFromBlue | ProtectionFromGreen),
		_ProtectionMask					= (ProtectionFromWhite | ProtectionFromRed | ProtectionFromBlack | ProtectionFromBlue | ProtectionFromGreen | ProtectionSpecial),

		_All							= 0xffffffffffffffff,

		_NegativeCardKeywords	= (NoUntapInUntapPhase | Vanishing | Detain),
		_PositiveCardKeywords	= (unsigned __int64)(~_NegativeCardKeywords),
	};

	DEFINE_BITFLAG_ENUM_OPS(CardKeyword, unsigned __int64);

public:
	static CString ToString(CardKeyword cardKeyword);

	CString ToString() const { return ToString(m_Value); }
};

//________________________________________________________________________
//
struct CreatureKeyword
{
	enum Enum : unsigned __int64
	{
		Null								= 0,

		FirstStrike							= 0x0000000000000001,	// Evasion
		Flying								= 0x0000000000000002,
		Unblockable							= 0x0000000000000004,

		HasteCombat							= 0x0000000000000008,
		HasteTap							= 0x0000000000000010,
		Haste								= HasteCombat | HasteTap,

		Reach								= 0x0000000000000020,
		Vigilance							= 0x0000000000000040,	// Attack without tap
		DefenderMayAttack					= 0x0000000000000080,	// was WallMayAttack until 2010-06-27
		CantBeBlockedByMultiple				= 0x0000000000000100,

		Defender							= 0x0000000000000200,	// Cannot attack
		CantBlock							= 0x0000000000000400,

		CanAssignCombatDamageToDefPlayer	= 0x0000000000000800,	// Ref. Thorn Elemental

		Lure								= 0x0000000000001000,	// Other creatures must block when this creature is attacking
		CowardAttacker						= 0x0000000000002000,	// Can't attack unless a creature with greater power also attacks 
		CowardBlocker						= 0x0000000000004000,	// Can't block unless a creature with greater power also blocks

		CantBeBlockedBy1					= 0x0000000000008000,	// Ref: Goblin War Drums
		CantBeBlockedBy1Or2					= 0x0000000000010000,	// Ref: Phyrexian Colossus

		DealNoCombatDamage					= 0x0000000000020000,
		DealNoNoncombatDamage				= 0x0000000000040000,	// * Can be moved to CardKeyword to free up space here
		PreventAllCombatDamage				= 0x0000000000080000,
		PreventAllNoncombatDamage			= 0x0000000000100000,

		MustAttack							= 0x0000000000200000,	// Ref: Goblin Brigand
		CantRegenerate						= 0x0000000000400000,	// Ref: Incinerate

		Islandwalk							= 0x0000000000800000,
		Swampwalk							= 0x0000000001000000,
		Plainswalk							= 0x0000000002000000,
		Forestwalk							= 0x0000000004000000,
		Mountainwalk						= 0x0000000008000000,

		_LandwalkMask						= Islandwalk | Swampwalk | Plainswalk | Forestwalk | Mountainwalk, // NonBasicWalk not included

		OnlyBlockFlying						= 0x0000000010000000,	// Ref: Cloud Elemental, Cloud Sprite

		Trample								= 0x0000000020000000,
		Unleash								= 0x0000000040000000,
		DoubleStrike						= 0x0000000080000000,

		Shadow								= 0x0000000100000000,
		ShadowReach							= 0x0000000200000000,
		Horsemanship						= 0x0000000400000000,
		Flanking							= 0x0000000800000000,

		ReplacedDamage						= 0x0000001000000000,
		FullReplacedDamage					= 0x0000002000000000,
		CantAttack							= 0x0000004000000000,

		SwitchedPT							= 0x0000008000000000,
		Persist								= 0x0000010000000000,
		TappedCanBlock						= 0x0000020000000000,

		Devour								= 0x0000040000000000,
		Amplify								= 0x0000080000000000,

		NonBasicWalk						= 0x0000100000000000,	// Ref: Dryad Sophisticate
		UnblockableWalk						= 0x0000200000000000,	// Ref: Scrapdiver Serpent
		LandwalkReach						= 0x0000400000000000,	// Ref: Street Savvy

		Fear								= 0x0000800000000000,
		Intimidate							= 0x0001000000000000,
		CantBeEquipped                      = 0x0002000000000000,
		
		Paired								= 0x0004000000000000,
		Soulbond							= 0x0008000000000000,	// For use with Flowering Lumberknot

		MustAttackEachCombat				= 0x0010000000000000,	// Ref: Hellraiser Goblin
		Monstrous							= 0x0020000000000000,

		_All								= 0xffffffffffffffff,

		_NegativeCreatureKeywords			= (CantAttack | Defender | CantBlock | CowardAttacker | CowardBlocker | DealNoCombatDamage | DealNoNoncombatDamage | MustAttack | CantRegenerate | OnlyBlockFlying | CantBeEquipped | MustAttackEachCombat),
		_PositiveCreatureKeywords			= (unsigned __int64)(~_NegativeCreatureKeywords),

		// For usage patterns. These are the attributes which will affect a creature's ability to declare attack.

		_AbleToAttackCreatureKeywords		= (Haste | Vigilance | DefenderMayAttack | CantAttack | Defender | MustAttack | MustAttackEachCombat),

		// For usage patterns. These are the attributes which will give attacking creatures advantages.

		_PositiveAttackingCreatureKeywords	= (FirstStrike | DoubleStrike | Flying | Unblockable | CantBeBlockedByMultiple | _LandwalkMask | NonBasicWalk | UnblockableWalk | Lure | CantBeBlockedBy1 | CantBeBlockedBy1Or2 | Shadow | Horsemanship | Flanking | Fear | Intimidate),

		// For usage patterns. These are the attributes which will give a creature the ability to block.

		_AbleToBlockCreatureKeywords		= (Flying | Reach | CantBlock | OnlyBlockFlying | Shadow | ShadowReach | Horsemanship | TappedCanBlock | LandwalkReach | Unleash)
	};

	DEFINE_BITFLAG_ENUM_OPS(CreatureKeyword, unsigned __int64);

public:
	static CString ToString(CreatureKeyword creatureKeyword);

	CString ToString() const { return ToString(m_Value); }
};

//________________________________________________________________________
//
struct ReplacementKeyword
{
	enum Enum : unsigned __int64
	{
		Null								= 0,

		GraveyardToExile					= 0x0000000000000001,              // From battlefield to the graveyard
		Unearth								= 0x0000000000000002,              // Unearth
		Commander							= 0x0000000000000004,              // Commander General Movement replacement

		Flashback							= 0x0000000000000008,              // Flashback
		PseudoUnearth						= 0x0000000000000010,              // like unearth, but doesn't set off Malfegor Avatar; used by Gruesome Encore

		/*
		GraveyardToShuffle                  = 0x0000000000000010,              // Shuffle into library instead of going to graveyard from anywhere
		GraveyardToTopB                     = 0x0000000000000020,              // Move to top of library instead of going to graveyard from battlefield
		GraveyardToBottomB                  = 0x0000000000000040,              // Move to bottom of library instead of going to graveyard from battlefield (Nissa's Chosen)
		*/

		_NegativeReplacementKeywords		= (GraveyardToExile),
		_PositiveReplacementKeywords		= (unsigned __int64)(~_NegativeReplacementKeywords),
		_FieldOnlyKeywords                  = (Unearth),

		//_FieldOnlyKeywords                  = (Unearth | GraveyardToTopB | GraveyardToBottomB),

		_All								= 0xffffffffffffffff
	};

	DEFINE_BITFLAG_ENUM_OPS(ReplacementKeyword, unsigned __int64);
};

//________________________________________________________________________
//
struct CardFlag
{
	enum Enum : unsigned __int64
	{
		Null							= 0,

		AbilityFlag						= 0x0000000000000001,
		PhaseFlag						= 0x0000000000000002,
		EquippedEnchantedOnPhaseFlag	= 0x0000000000000004,
		CantTransform                   = 0x0000000000000008,

		PaymentReplacement              = 0x0000000000000010,

		DealtCombatDamage				= 0x0000000000000020,
		DealtNonCombatDamage			= 0x0000000000000040,
		_DealtDamage					= DealtCombatDamage | DealtNonCombatDamage,

		_NegativeCardFlags				= (0),
		_PositiveCardFlags				= (0),

		_All							= 0xffffffffffffffff,
	};

	DEFINE_BITFLAG_ENUM_OPS(CardFlag, unsigned __int64);
};

//________________________________________________________________________
//
struct CreatureFlag
{
	enum Enum : unsigned __int64
	{
		Null							= 0,

		TakenCombatDamage				= 0x0000000000000001,
		TakenNonCombatDamage			= 0x0000000000000002,		// Ref: Fatal Blow
		_TakenDamage					= TakenCombatDamage | TakenNonCombatDamage,

		Attacked						= 0x0000000000000004,
		Blocked							= 0x0000000000000008,
		BeenBlocked						= 0x0000000000000010,
		IsBlocked						= 0x0000000000000020,

		_NegativeCreatureFlags			= (0),
		_PositiveCreatureFlags			= (0),

		_All							= 0xffffffffffffffff,
	};

	DEFINE_BITFLAG_ENUM_OPS(CreatureFlag, unsigned __int64);
};

//________________________________________________________________________
//
struct ActionScore
{
	enum Enum
	{
		Minimum					= 1,

		Standard				= 2,

		Attack					= 3,
		Block					= 4,

		FilterMana				= 5,

		BeginningOfCombat		= 6,

		ConsumeMana				= 7,

		Spell					= 8,
		Counterspell			= Spell,

		SpellMaximum			= 20, 

		AttackPromoted			= 9,
		BlockPromoted			= 10,

		// Mana production

		ProduceManaNonland		= 11,
		ProduceManaMinimum		= 12,
		ProduceMana				= 20,

		// Land

		PlayLandLow				= 21,
		PlayLand				= 22,

		// Untap

		Untap					= 23
	};

	DEFINE_ENUM_OPS(ActionScore);
};

//________________________________________________________________________
//
struct ActionTransientId
{
	enum Enum
	{
		Untap			= -2,
		NotSupported	= -1	// 0 and up are reserved for card class Ids
	};

	DEFINE_DISTINCT_ENUM_OPS(ActionTransientId);
};

//________________________________________________________________________
//
struct SuppressWalkId
{
	enum Enum
	{
		Islandwalk,
		Swampwalk,
		Plainswalk,
		Forestwalk,
		Mountainwalk,
		Alltypewalk
	};

	DEFINE_DISTINCT_ENUM_OPS(SuppressWalkId);
};

//________________________________________________________________________
//
struct CORE_EXPORT UsagePatternItem
{
	enum Enum
	{
		Null = 0,

		_FirstItem						= IDS_FIRST_USAGE_NODE,

		YourTurn						= _FirstItem,
		YourBeginningPhase,
		YourUntapStep,
		YourUpkeepStep,
		YourDrawStep,
		YourMainPhase,
		YourMainPhasePrecombat,
		YourMainPhasePostcombat,
		YourEndOfTurnStep,

		YourCombatPhase,
		YourBeginningOfCombatStep,
		YourDeclareAttackersStep,
		YourDeclareBlockersStep,
		YourCombatDamageStep,
		YourEndOfCombatStep,

		YouAreTargeted,
		YourLifeMayIncrease,
		YourLifeMayDecrease,

		YourCardsAreTargeted,
		YourCardsMayLeaveInplay,
		YourCreaturesAreTargeted,
		YourCreaturesMayLeaveInplay,

		YourCreaturesAreAttacking,
		YourCreaturesAreBlocked,
		YourCreaturesAreBlocking,
		YourCreaturesLifeMayIncrease,
		YourCreaturesLifeMayDecrease,
		
		OpponentsTurn,
		OpponentsBeginningPhase,
		OpponentsUntapStep,
		OpponentsUpkeepStep,
		OpponentsDrawStep,
		OpponentsMainPhase,
		OpponentsMainPhasePrecombat,
		OpponentsMainPhasePostcombat,
		OpponentsEndOfTurnStep,

		OpponentsCombatPhase,
		OpponentsBeginningOfCombatStep,
		OpponentsDeclareAttackersStep,
		OpponentsDeclareBlockersStep,
		OpponentsCombatDamageStep,
		OpponentsEndOfCombatStep,

		OpponentsAreTargeted,			
		OpponentsLifeMayIncrease,
		OpponentsLifeMayDecrease,

		OpponentsCardsAreTargeted,
		OpponentsCardsMayLeaveInplay,
		OpponentsCreaturesAreTargeted,
		OpponentsCreaturesMayLeaveInplay,

		OpponentsCreaturesAreAttacking,
		OpponentsCreaturesAreBlocked,
		OpponentsCreaturesAreBlocking,
		OpponentsCreaturesLifeMayIncrease,
		OpponentsCreaturesLifeMayDecrease,

		ThisCardIsTargeted,		
		ThisCardMayLeaveInplay,
		ThisCardMayBeDiscarded,

		ThisCreatureIsAttacking,
		ThisCreatureIsBlocked,
		ThisCreatureIsBlocking,
		ThisCreaturesLifeMayIncrease,
		ThisCreaturesLifeMayDecrease,

		_LastItemPlusOne,
		_LastItem = _LastItemPlusOne - 1
	};

	DEFINE_DISTINCT_ENUM_OPS(UsagePatternItem);

public:
	static CString ToString(UsagePatternItem item);

	CString ToString() const { return ToString(m_Value); }
};

//________________________________________________________________________
//
struct CardType
{
	enum Enum : unsigned __int64
	{
		Null = 0,

		Swamp				= 0x0000000000000001,
		Island				= 0x0000000000000002,
		Forest				= 0x0000000000000004,
		Mountain			= 0x0000000000000008,
		Plains				= 0x0000000000000010,
		NonbasicLand		= 0x0000000000000020,
		BasicLand			= 0x0000000000000040,

		EnchantCreature		= 0x0000000000000080,
		EnchantArtifact		= 0x0000000000000100,
		EnchantPermanent	= 0x0000000000000200,
		EnchantLand			= 0x0000000000000400,
		EnchantEnchantment	= 0x0000000000000800,

		_Aura				= EnchantCreature | EnchantArtifact | EnchantPermanent | EnchantLand | EnchantEnchantment,

		GlobalEnchantment	= 0x0000000000001000,

		_Enchantment		= _Aura | GlobalEnchantment,

		Legendary			= 0x0000000000002000,
		Arcane				= 0x0000000000004000,
		Snow				= 0x0000000000008000,
		Creature			= 0x0000000000010000,
		Instant				= 0x0000000000020000,
		Sorcery				= 0x0000000000040000,
		Artifact			= 0x0000000000080000,
		Equipment			= 0x0000000000100000,
		Planeswalker		= 0x0000000000200000,
		World				= 0x0000000000400000,
		Trap				= 0x0000000000800000,
		Tribal				= 0x0000000001000000,

		_ArtifactCreature	= Artifact | Creature,
		_LegendaryArtifact	= Legendary | Artifact,
		_LegendaryCreature	= Legendary | Creature,
		_LegendaryGlobalEnchantment	= Legendary | GlobalEnchantment,
		_SnowCreature		= Snow | Creature,
		_WorldEnchantment	= World | GlobalEnchantment,

		Token				= 0x0000000002000000,

		White				= 0x0000000004000000,
		Blue				= 0x0000000008000000,
		Black				= 0x0000000010000000,
		Red					= 0x0000000020000000,
		Green				= 0x0000000040000000,
		Misc				= 0x0000000080000000,
		Locus				= 0x0000000100000000,
		Shrine				= 0x0000000200000000,
		Lair				= 0x0000000400000000,
		Vanguard			= 0x0000000800000000,

		Scheme				= 0x0000001000000000,
		Plane				= 0x0000002000000000,
		Copy				= 0x0000004000000000,
		Gate				= 0x0000008000000000,
		Urzas               = 0x0000010000000000,
		Mine                = 0x0000020000000000,
		PowerPlant          = 0x0000040000000000,
		Tower               = 0x0000080000000000,
		Desert              = 0x0000100000000000,
		PseudoBasicLand     = 0x0000200000000000, // This is to improve land type changing abilities

		_Land				= BasicLand | NonbasicLand | PseudoBasicLand,
		_SnowLand			= Snow | _Land,

		_LocusLand			= NonbasicLand | Locus,
		_LairLand			= NonbasicLand | Lair,
		_GateLand			= NonbasicLand | Gate,
		_UrzasLand			= NonbasicLand | Urzas,
		_MineLand			= NonbasicLand | Mine,
		_PowerPlantLand		= NonbasicLand | PowerPlant,
		_TowerLand			= NonbasicLand | Tower,
		_DesertLand         = NonbasicLand | Desert,

		_UrzasMineLand		= NonbasicLand | Urzas | Mine,
		_UrzasPowerPlantLand	= NonbasicLand | Urzas | PowerPlant,
		_UrzasTowerLand		= NonbasicLand | Urzas | Tower,

		_ColorMask			= White | Blue | Black | Red | Green,
		_LandTypeMask       = Desert | Forest | Gate | Island | Lair | Locus | Mine | Mountain | Plains | PowerPlant | Swamp | Tower | Urzas,
		_LandTypeChangeMask = NonbasicLand | Desert | Forest | Gate | Island | Lair | Locus | Mine | Mountain | Plains | PowerPlant | Swamp | Tower | Urzas, // This is to improve land type changing abilities

		_AllOfficial		= Artifact | Creature | _Enchantment | Instant | _Land | Planeswalker | Scheme | Sorcery | Tribal | Vanguard, // Rule 300.1
		_Permanent          = Artifact | Creature | _Enchantment | _Land | Planeswalker,
		_All				= 0xffffffffffffffff
	};

	DEFINE_BITFLAG_ENUM_OPS(CardType, unsigned __int64);

public:
	bool IsCreature() const { return (m_Value & Creature).Any(); }
	bool IsToken() const { return (m_Value & Token).Any(); }
	bool IsCopy() const { return (m_Value & Copy).Any(); }
	bool IsPlaneswalker() const { return (m_Value & Planeswalker).Any(); }
	bool IsLand() const { return (m_Value & _Land).Any(); }
	bool IsEmblem() const { return (m_Value & Vanguard).Any(); }
	bool IsScheme() const { return (m_Value & Scheme).Any();   }
	bool IsPlane() const { return (m_Value & Plane).Any();   }
	bool IsEnchantment() const { return (m_Value & _Enchantment).Any(); }
	bool IsArtifact() const { return (m_Value & Artifact).Any(); }
	bool IsSorcery() const { return (m_Value & Sorcery).Any(); }
	bool IsInstant() const { return (m_Value & Instant).Any(); }
	bool IsTribal() const { return (m_Value & Tribal).Any(); }
	bool IsPermanent() const { return (m_Value & _Permanent).Any(); }
	bool IsMulticolor() const
	{
		enum{	mask4 = unsigned __int64(_ColorMask - Green),	//WUBR
				mask2 = mask4 & (mask4>>2),			//  BR
				mask1 = mask2 & (mask2<<1)			//  B
		};
		STATIC_CHECK(((mask4<<4)&mask4)==0); //4 consecutive bits
		STATIC_CHECK(((mask2>>2)<<2)==mask2); //2 free bits to the right

		unsigned __int64 colors=unsigned __int64(m_Value) & mask4;
		
		if(colors==0)return false; //Green or colorless
		if((m_Value & Green).Any()) return true; //Green and something else

		unsigned __int64 shiftplus=(colors&mask2) + (colors>>2); // only 1001==0100+0101<1100
		return(shiftplus>mask1)&&(colors!=mask1); //1100>1001>1000 but 1000+0010==1010>1000 too!
	}//7 operations but only 3 jumps, all of them predictable!

	friend class CGame;
};

//________________________________________________________________________
//
struct CORE_EXPORT SingleCreatureType
{
#ifdef _MY_DEBUG
	friend class CGame;
#endif
	enum Enum : DWORD
	{
		Null = 0,
		Advisor,
		Ally,
		Angel,
		Anteater,
		Antelope,
		Ape,
		Archer,
		Archon,
		Artificer,
		Assassin,
		AssemblyWorker,
		Atog,
		Aurochs,
		Avatar,
		Badger,
		Barbarian,
		Basilisk,
		Bat,
		Bear,
		Beast,
		Beeble,
		Berserker,
		Bird,
		Blinkmoth,
		Boar,
		Bringer,
		Brushwagg,
		Camarid,
		Camel,
		Caribou,
		Carrier,
		Cat,
		Centaur,
		Cephalid,
		Chimera,
		Citizen,
		Cleric,
		Cockatrice,
		Construct,
		Coward,
		Crab,
		Crocodile,
		Cyclops,
		Dauthi,
		Demon,
		Deserter,
		Devil,
		Djinn,
		Dragon,
		Drake,
		Dreadnought,
		Drone,
		Druid,
		Dryad,
		Dwarf,
		Efreet,
		Elder,
		Eldrazi,
		Elemental,
		Elephant,
		Elf,
		Elk,
		Eye,
		Faerie,
		Ferret,
		Fish,
		Flagbearer,
		Fox,
		Frog,
		Fungus,
		Gamer,
		Gargoyle,
		Germ,
		Giant,
		Gnome,
		Goat,
		Goblin,
		God,
		Golem,
		Gorgon,
		Graveborn,
		Gremlin,
		Griffin,
		Hag,
		Harpy,
		Hellion,
		Hippo,
		Hippogriff,
		Homarid,
		Homunculus,
		Horror,
		Horse,
		Hound,
		Human,
		Hydra,
		Hyena,
		Illusion,
		Imp,
		Incarnation,
		Insect,
		Jellyfish,
		Juggernaut,
		Kavu,
		Kirin,
		Kithkin,
		Knight,
		Kobold,
		Kor,
		Kraken,
		Lamia,
		Lammasu,
		Leech,
		Leviathan,
		Lhurgoyf,
		Licid,
		Lizard,
		Manticore,
		Masticore,
		Mercenary,
		Merfolk,
		Metathran,
		Minion,
		Minotaur,
		Monger,
		Mongoose,
		Monk,
		Moonfolk,
		Mutant,
		Myr,
		Mystic,
		Naga,
		Nautilus,
		Nephilim,
		Nightmare,
		Nightstalker,
		Ninja,
		Noggle,
		Nomad,
		Nymph,
		Octopus,
		Ogre,
		Ooze,
		Orb,
		Orc,
		Orgg,
		Ouphe,
		Ox,
		Oyster,
		Pegasus,
		Pentavite,
		Pest,
		Phelddagrif,
		Phoenix,
		Pincher,
		Pirate,
		Plant,
		Praetor,
		Prism,
		Rabbit,
		Rat,
		Rebel,
		Reflection,
		Rhino,
		Rigger,
		Rogue,
		Sable,
		Salamander,
		Samurai,
		Sand,
		Saproling,
		Satyr,
		Scarecrow,
		Scorpion,
		Scout,
		Serf,
		Serpent,
		Shade,
		Shaman,
		Shapeshifter,
		Sheep,
		Siren,
		Skeleton,
		Slith,
		Sliver,
		Slug,
		Snake,
		Soldier,
		Soltari,
		Spawn,
		Specter,
		Spellshaper,
		Sphinx,
		Spider,
		Spike,
		Spirit,
		Splinter,
		Sponge,
		Squid,
		Squirrel,
		Starfish,
		Surrakar,
		Survivor,
		Tetravite,
		Thalakos,
		Thopter,
		Thrull,
		Treefolk,
		Triskelavite,
		Troll,
		Turtle,
		Unicorn,
		Vampire,
		Vedalken,
		Viashino,
		Volver,
		Wall,
		Warrior,
		Weird,
		Werewolf,
		Whale,
		Wizard,
		Wolf,
		Wolverine,
		Wombat,
		Worm,
		Wraith,
		Wurm,
		Yeti,
		Zombie,
		Zubera,

		_SingleTypeCount,
	};
	
	DEFINE_DISTINCT_ENUM_OPS(SingleCreatureType);
	ENUM_CONTAINER_STATE_SUPPORT(SingleCreatureType);

public:
	static CString ToString(SingleCreatureType type)
	{
		return s_Text[type.Get()];
	}

	CString ToString() const { return ToString(m_Value); }

protected:
	static const LPCTSTR s_Text[_SingleTypeCount];
};

//________________________________________________________________________
//
struct CORE_EXPORT PlaneswalkerType
{
	enum Enum : DWORD
	{
		Null = 0,
		Ajani,
		Ashiok,
		Bolas,
		Chandra,
		Domri,
		Elspeth,
		Garruk,
		Gideon,
		Jace,
		Karn,
		Koth,
		Liliana,
		Nissa,
		Ral,
		Sarkhan,
		Sheila,
		Sorin,
		Tamiyo,
		Tezzeret,
		Tibalt,
		Venser,
		Vraska,
		Xenagos,

		_SubtypeCount,
	};
	
	DEFINE_DISTINCT_ENUM_OPS(PlaneswalkerType);

public:
	static CString ToString(PlaneswalkerType type)
	{
		return s_Text[type.Get()];
	}

	CString ToString() const { return ToString(m_Value); }

protected:
	static const LPCTSTR s_Text[_SubtypeCount];
};

//________________________________________________________________________
//
struct MessageImportance
{
	enum Enum
	{
		Low = 1,
		Normal,
		High
	};

	DEFINE_DISTINCT_ENUM_OPS(MessageImportance);
};

//________________________________________________________________________
//
struct StrategyRemovalReason
{
	enum Enum
	{
		NewCardVisible = 1,
		SearchLibrary,
		RevealLibrary,
		BeforeCombat,
		NewDiscard,
		UnexpectedComputerAction,
		UnexpectedHumanAction,
		EndGame
	};

	DEFINE_DISTINCT_ENUM_OPS(StrategyRemovalReason);
};

//________________________________________________________________________
//
struct TriggerToPlayerOption
{
	enum Enum
	{
		TriggerToAllPlayers		= 1,
		TriggerToController,	// Default: trigger to this ability's controller only
		TriggerToOpponents,
		TriggerToParameter1,	// See TriggerInfo
		TriggerToParameter2,
		TriggerToParameter3,
		TriggerToParameter4,
	};

	DEFINE_DISTINCT_ENUM_OPS(TriggerToPlayerOption);
};

//________________________________________________________________________
//
struct AbilityTag
{
	enum Enum : DWORD
	{
		Null						= 0,
		Mana						= 0x00000001,
		Counterspell				= 0x00000002,
		CardChange					= 0x00000004,
		OrientationChange			= 0x00000008,
		CreatureChange				= 0x00000010,
		Regeneration				= 0x00000020,
		TokenCreation				= 0x00000040,
		LifeGain					= 0x00000080,
		LifeLost					= 0x00000100,
		DamageSource				= 0x00000200,
		DamageRedirection			= 0x00000400,
		DamagePrevention			= 0x00000800,
		Cycling                     = 0x00001000,
		MoveCard					= 0x00008000,

		_MoveCardZoneMask			= 0xffff0000,
	};

	DEFINE_BITFLAG_ENUM_OPS(AbilityTag, DWORD);

public:
	AbilityTag(ZoneId fromZoneId, ZoneId toZoneId)
	{
		m_Value = Enum(MoveCard | (fromZoneId.Get() << 24) | (toZoneId.Get() << 16));
	}
};

//________________________________________________________________________
//
struct MoveType
{
	enum Enum
	{
		Others = 1,
		Destroy,
		NormalDraw,
		Draw,
		NormalDiscard,
		Discard,
		Morph,
		Cast,
		DestroyWithoutRegeneration,
		Sacrifice,
		Suspend,
		Play,
		Phasing,
		Unearth,
	};

	DEFINE_DISTINCT_ENUM_OPS(MoveType);
};

//________________________________________________________________________
//
struct CORE_EXPORT PlaneType
{
	enum Enum : DWORD
	{
		Null = 0,
		Alara,
		Arkhos,
		Azgol,
		Belenon,
		BolassMeditationRealm,
		Dominaria,
		Equilor,
		Ergamon,
		Fabacin,
		Innistrad,
		Iquatana,
		Ir,
		Kaldheim,
		Kamigawa,
		Karsus,
		Kephalai,
		Kinshala,
		Kolbahan,
		Kyneth,
		Lorwyn,
		Luvion,
		Mercadia,
		Mirrodin,
		Moag,
		Monseng,
		Muraganda,
		NewPhyrexia,
		Phenomenon,
		Phyrexia,
		Pyrulea,
		Rabiah,
		Ravnica,
		Regatha,
		Segovia,
		SerrasRealm,
		Shadowmoor,
		Shandalar,
		Ulgrotha,
		Valla,
		Vryn,
		Wildfire,
		Xerex,
		Zendikar,

		_SubtypeCount,
	};
	
	DEFINE_DISTINCT_ENUM_OPS(PlaneType);

public:
	static CString ToString(PlaneType type)
	{
		return s_Text[type.Get()];
	}

	CString ToString() const { return ToString(m_Value); }

protected:
	static const LPCTSTR s_Text[_SubtypeCount];
};

//________________________________________________________________________
//