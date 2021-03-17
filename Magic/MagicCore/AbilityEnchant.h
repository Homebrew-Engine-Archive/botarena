#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CEnchantment : public CSpell
{
protected:
	CEnchantment(CCard* pCard, LPCTSTR strManaCost,
				 CardComparer* pComparer);	// Primary enchantment

	CEnchantment(CCard* pCard, AbilityType abilityType,	// Until EOT spell (call SetToActivatedAbility() to use as Until EOT ability)
				 LPCTSTR strManaCost,
				 CardComparer* pComparer);

	CEnchantment(CCard* pCard,
				 CardComparer* pComparer);	// Secondary enchantment

	virtual ~CEnchantment();

public:
	// General settings

	const CCardFilter& GetEnchantmentCardFilter() const	{ return m_EnchantmentCardFilter; }
	CCardFilter& GetEnchantmentCardFilter()				{ return m_EnchantmentCardFilter; }

	OVERRIDE(void, SetToActivatedAbility)();		// Change Until EOT spell to Until EOT activated ability
	void SetDisableWhenTapped();					// Set to artifact style (use only with the first cstr type (in-play))
	void SetDisableWhenUntapped();					// Needed for Centaur Omenreader

	void SetCertainCountersActivation()							{ m_SelfCounterTracking = TRUE; }
	const CCardFilter& GetActivationCardFilter() const	{ return m_thisActivationCardFilter; }
	CCardFilter& GetActivationCardFilter()				{ return m_thisActivationCardFilter; }

	void SetNotifyWhenControlSwitched(BOOL bNotify)	{ m_bNotifyWhenControlSwitched = bNotify; } // Default: TRUE

	// Player settings

	void SetAffectPlayers()							{ m_bAffectPlayers = TRUE; }
	void SetAffectControllerOnly()					{ m_bAffectPlayers = TRUE; m_bAffectControllerOnly = TRUE; m_bAffectOpponentsOnly = FALSE; m_pAffectThisPlayerOnly = NULL; }
	void SetAffectOpponentsOnly()					{ m_bAffectPlayers = TRUE; m_bAffectOpponentsOnly = TRUE; m_bAffectControllerOnly = FALSE; m_pAffectThisPlayerOnly = NULL; }
	void SetAffectThisPlayerOnly(CPlayer* pPlayer)	{ m_bAffectPlayers = TRUE; m_bAffectOpponentsOnly = FALSE; m_bAffectControllerOnly = FALSE; m_pAffectThisPlayerOnly = pPlayer; }

	// Card settings

	void SetAffectControllerCardsOnly();
	void SetAffectOpponentCardsOnly();
	void SetExceptParent();						// Added: 4/22/2001

	VIRTUAL(void, SetAffectTappedOnly)();
	VIRTUAL(void, SetAffectUntappedOnly)();

	void SetAffectCardsInTheseZones(ZoneId zones);
	void SetEnchantmentActiveIn(ZoneId zones);

	// Condition filters work
	struct ConditionCheckPlayerType
	{
		enum Enum
		{
			CheckControllerOnly = 1,
			CheckOpponentsOnly,
			CheckAllPlayers,
			CheckEachPlayer
		};

		DEFINE_DISTINCT_ENUM_OPS( ConditionCheckPlayerType );
	};
	
	void SetConditionWork()	{m_ConditionWork=TRUE;}
	CCardFilter& GetConditionFilter()				{ return m_ConditionFilter; }
	void SetConditionValue(int threshold) {m_ConditionValue = threshold;}
	void SetConditionCheckZone(ZoneId zones);
	void SetConditionCheckPlayer(ConditionCheckPlayerType::Enum players);
	void SetConditionIsMaximum() {m_ConditionIsMaximum=TRUE;}
	void SetConditionCheckLife() {m_ConditionCheckLife=TRUE;}
	bool EvaluateCondition();

	// Others

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;	// 5/6/2001
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	VIRTUAL(Characteristic, GetEnchantmentCharacteristic)() const { return Characteristic::Neutral; }

	void StartEnchantment();		// To support CAbilityEnchant
	void EndEnchantment();			// To support Brass Herald

protected:
	struct EnchantmentInternalType
	{
		enum Enum
		{
			PrimaryEnchantment = 1,
			SecondaryEnchantment,
			UntilEOTSpell,
			UntilEOTActivatedAbility
		};

		DEFINE_DISTINCT_ENUM_OPS( EnchantmentInternalType );
	};

	struct EventSourceType
	{
		enum Enum
		{
			CardMovement = 1,
		};

		DEFINE_DISTINCT_ENUM_OPS(EventSourceType);
	};

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	VIRTUAL(BOOL, IsCardAffected)(const CCard* pCard) const;
	VIRTUAL(BOOL, IsPlayerAffected)(const CPlayer* pPlayer) const;

	VIRTUAL(void, OnEnchantPlayer)(CPlayer* pPlayer, ContextValue& contextValue) {};		// Override
	VIRTUAL(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue) {};			//	"
	VIRTUAL(void, OnDisenchantPlayer)(CPlayer* pPlayer, const ContextValue& contextValue) {};	//	"
	VIRTUAL(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue) {};		//	"

	VIRTUAL(void, ListenToCardEventSources)(CCard* pCard);						//	"
	VIRTUAL(void, RemoveListenToCardEventSources)(CCard* pCard);						//	"

	VIRTUAL(BOOL, OnEnchantmentStarted)(BOOL bNotify);							//  " (ref: Engineered Plague)
	VIRTUAL(void, OnEnchantmentEnded)(BOOL bNotify);								// Override (not common)

	VIRTUAL(void, OnZoneChanged) (CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnNodeChanged(CNode* pToNode);
	void OnOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation);
	void OnSelfCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	void OnCardZoneChangedActive(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnCardIsAlsoAChangedActive(CCard* pCard, CCard* pPreviousIsAlsoA, CCard* pIsAlsoA) ;

	void OnCardZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnCardOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation); // { CheckCard(pOrientation->GetCard()); }
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType); // { CheckCard(pCard); } // to support Crusade	
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);// { CheckCard(pFromCard); } // to support Bramblwood Paragon	
	void OnCardIsAlsoAChanged(CCard* pCard, CCard* pPreviousIsAlsoA, CCard* pIsAlsoA) ;
	void OnLifeChanged(CPlayer* pPlayer, Life nFromLife, Life nToLife) ;
	/*{
		if (pIsAlsoA)
			CheckCard(pIsAlsoA); 
	}*/

	BOOL OnEnchantmentStartedImpl(BOOL bNotify);
	void OnEnchantmentEndedImpl(BOOL bNotify);

	VIRTUAL(void,CheckCard)(CCard* pCard);

	void SetTappedOnly()
	{
		ATLASSERT(false);	// Use SetAffectTappedOnly()
		m_EnchantmentCardFilter.AddComparer(new TappedComparer());
	}

	void SetUntappedOnly()
	{
		ATLASSERT(false);	// Use SetAffectUntappedOnly()
		m_EnchantmentCardFilter.AddComparer(new UntappedComparer());
	}

	EnchantmentInternalType m_Type;

	CCardFilter		m_EnchantmentCardFilter;

	BOOL			m_bDisableWhenTapped;
	BOOL			m_bDisableWhenUntapped;
	StringArray		m_ListenToEventSources;
	BOOL			m_bAffectPlayers;
	BOOL			m_bAffectControllerOnly;
	BOOL			m_bAffectOpponentsOnly;
	ZoneId			m_AffectCardsInTheseZones;
	CPlayer*		m_pAffectThisPlayerOnly;
	BOOL			m_bAffectByOrientation;
	BOOL			m_bNotifyWhenControlSwitched;	
	BOOL            m_SelfCounterTracking;
	CCardFilter		m_thisActivationCardFilter;

	// Condition work
	BOOL            m_ConditionWork;
	CCardFilter     m_ConditionFilter;
	int_            m_ConditionValue;
	ZoneId          m_ConditionCheckZone;
	BOOL			m_ConditionIsMaximum;
	BOOL			m_ConditionCheckLife;
	ZoneId          m_ActiveIn;
	BOOL            m_ConditionActive;
	ConditionCheckPlayerType m_ConditionCheckPlayer;

	// State managed

	CPtrContainer_<CCard>	m_AffectedCards;
	CPtrContainer_<CPlayer>	m_AffectedPlayers;

	CContextValueContainer_	m_AffectedCardContexts;
	CContextValueContainer_	m_AffectedPlayerContexts;

	BOOL_											m_bInEffect;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
	ListenerPtr<ChangeNodeEventSource::Listener>	m_cpNListener;	// Listen to node changes; for bAsTurnGlobalSpell only
	ListenerPtr<COrientation::Listener>				m_cpOListener;	// Listen to this card's orientation changes
	ListenerPtr<CounterMovedEventSource::Listener>  m_cpCListener;  // Listen to this card's counter changes

	ListenerPtr<CardTypeEventSource::Listener>		m_cpCardTypeListener;	// Listen to cards' card type changed (to support Crusade)
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpCounterMovedListener;	// Listen to cards' counters amout changed (to support Bramblewood Paragon)
	ListenerPtr<CardMovementEventSource::Listener>	m_cpCardZoneListener;	// Listen to all card's zone changes
	ListenerPtr<CardIsAlsoAEventSource::Listener>	m_cpCardIsAlsoAListener; // Listen to is-also-a card changes
	ListenerPtr<COrientation::Listener>				m_cpCardOrientationListener;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpActiveCardZoneListener;	// Listen to all card's zone changes
	ListenerPtr<CardIsAlsoAEventSource::Listener>	m_cpActiveCardIsAlsoAListener; // Listen to is-also-a card changes
	ListenerPtr<ChangeLifeEventSource::Listener>	m_cpChangeLifeListener; // Listen to life changes
};

//____________________________________________________________________________
//
class CORE_EXPORT CDblConditionEnchantment : public CSpell
{
protected:
	CDblConditionEnchantment(CCard* pCard, LPCTSTR strManaCost,
				 CardComparer* pComparer);	// Primary enchantment

	CDblConditionEnchantment(CCard* pCard, AbilityType abilityType,	// Until EOT spell (call SetToActivatedAbility() to use as Until EOT ability)
				 LPCTSTR strManaCost,
				 CardComparer* pComparer);

	CDblConditionEnchantment(CCard* pCard,
				 CardComparer* pComparer);	// Secondary enchantment

	virtual ~CDblConditionEnchantment();

public:
	// General settings

	const CCardFilter& GetEnchantmentCardFilter() const	{ return m_EnchantmentCardFilter; }
	CCardFilter& GetEnchantmentCardFilter()				{ return m_EnchantmentCardFilter; }

	OVERRIDE(void, SetToActivatedAbility)();		// Change Until EOT spell to Until EOT activated ability
	void SetDisableWhenTapped();					// Set to artifact style (use only with the first cstr type (in-play))
	void SetDisableWhenUntapped();					// Needed for Centaur Omenreader

	void SetCertainCountersActivation()							{ m_SelfCounterTracking = TRUE; }
	const CCardFilter& GetActivationCardFilter() const	{ return m_thisActivationCardFilter; }
	CCardFilter& GetActivationCardFilter()				{ return m_thisActivationCardFilter; }

	void SetNotifyWhenControlSwitched(BOOL bNotify)	{ m_bNotifyWhenControlSwitched = bNotify; } // Default: TRUE

	// Player settings

	void SetAffectPlayers()							{ m_bAffectPlayers = TRUE; }
	void SetAffectControllerOnly()					{ m_bAffectPlayers = TRUE; m_bAffectControllerOnly = TRUE; m_bAffectOpponentsOnly = FALSE; m_pAffectThisPlayerOnly = NULL; }
	void SetAffectOpponentsOnly()					{ m_bAffectPlayers = TRUE; m_bAffectOpponentsOnly = TRUE; m_bAffectControllerOnly = FALSE; m_pAffectThisPlayerOnly = NULL; }
	void SetAffectThisPlayerOnly(CPlayer* pPlayer)	{ m_bAffectPlayers = TRUE; m_bAffectOpponentsOnly = FALSE; m_bAffectControllerOnly = FALSE; m_pAffectThisPlayerOnly = pPlayer; }

	// Card settings

	void SetAffectControllerCardsOnly();
	void SetAffectOpponentCardsOnly();
	void SetExceptParent();						// Added: 4/22/2001

	VIRTUAL(void, SetAffectTappedOnly)();
	VIRTUAL(void, SetAffectUntappedOnly)();

	void SetAffectCardsInTheseZones(ZoneId zones);
	void SetEnchantmentActiveIn(ZoneId zones);

	// Condition filters work
	struct ConditionCheckPlayerType
	{
		enum Enum
		{
			CheckControllerOnly = 1,
			CheckOpponentsOnly,
			CheckAllPlayers,
			CheckEachPlayer
		};

		DEFINE_DISTINCT_ENUM_OPS( ConditionCheckPlayerType );
	};
	
	void SetCondition1Work()	{m_Condition1Work=TRUE;}
	CCardFilter& GetCondition1Filter()				{ return m_Condition1Filter; }
	void SetCondition1Value(int threshold) {m_Condition1Value = threshold;}
	void SetCondition1CheckZone(ZoneId zones);
	void SetCondition1CheckPlayer(ConditionCheckPlayerType::Enum players);
	void SetCondition1IsMaximum() {m_Condition1IsMaximum=TRUE;}
	void SetConditio1nCheckLife() {m_Condition1CheckLife=TRUE;}

	void SetCondition2Work()	{m_Condition2Work=TRUE;}
	CCardFilter& GetCondition2Filter()				{ return m_Condition2Filter; }
	void SetCondition2Value(int threshold) {m_Condition2Value = threshold;}
	void SetCondition2CheckZone(ZoneId zones);
	void SetCondition2CheckPlayer(ConditionCheckPlayerType::Enum players);
	void SetCondition2IsMaximum() {m_Condition2IsMaximum=TRUE;}
	void SetCondition2CheckLife() {m_Condition2CheckLife=TRUE;}

	void SetAndCondition() {m_ConditionLogic = 0;}
	void SetOrCondition() {m_ConditionLogic = 1;}

	bool EvaluateCondition();

	// Others

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;	// 5/6/2001
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	VIRTUAL(Characteristic, GetEnchantmentCharacteristic)() const { return Characteristic::Neutral; }

	void StartEnchantment();		// To support CAbilityEnchant
	void EndEnchantment();			// To support Brass Herald

protected:
	struct EnchantmentInternalType
	{
		enum Enum
		{
			PrimaryEnchantment = 1,
			SecondaryEnchantment,
			UntilEOTSpell,
			UntilEOTActivatedAbility
		};

		DEFINE_DISTINCT_ENUM_OPS( EnchantmentInternalType );
	};

	struct EventSourceType
	{
		enum Enum
		{
			CardMovement = 1,
		};

		DEFINE_DISTINCT_ENUM_OPS(EventSourceType);
	};

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	VIRTUAL(BOOL, IsCardAffected)(const CCard* pCard) const;
	VIRTUAL(BOOL, IsPlayerAffected)(const CPlayer* pPlayer) const;

	VIRTUAL(void, OnEnchantPlayer)(CPlayer* pPlayer, ContextValue& contextValue) {};		// Override
	VIRTUAL(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue) {};			//	"
	VIRTUAL(void, OnDisenchantPlayer)(CPlayer* pPlayer, const ContextValue& contextValue) {};	//	"
	VIRTUAL(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue) {};		//	"

	VIRTUAL(void, ListenToCardEventSources)(CCard* pCard);						//	"
	VIRTUAL(void, RemoveListenToCardEventSources)(CCard* pCard);						//	"

	VIRTUAL(BOOL, OnEnchantmentStarted)(BOOL bNotify);							//  " (ref: Engineered Plague)
	VIRTUAL(void, OnEnchantmentEnded)(BOOL bNotify);								// Override (not common)

	VIRTUAL(void, OnZoneChanged) (CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnNodeChanged(CNode* pToNode);
	void OnOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation);
	void OnSelfCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	void OnCardZoneChangedActive(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnCardIsAlsoAChangedActive(CCard* pCard, CCard* pPreviousIsAlsoA, CCard* pIsAlsoA) ;

	void OnCardZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnCardOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation); // { CheckCard(pOrientation->GetCard()); }
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType); // { CheckCard(pCard); } // to support Crusade	
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);// { CheckCard(pFromCard); } // to support Bramblwood Paragon	
	void OnCardIsAlsoAChanged(CCard* pCard, CCard* pPreviousIsAlsoA, CCard* pIsAlsoA) ;
	void OnLifeChanged(CPlayer* pPlayer, Life nFromLife, Life nToLife) ;
	/*{
		if (pIsAlsoA)
			CheckCard(pIsAlsoA); 
	}*/

	BOOL OnEnchantmentStartedImpl(BOOL bNotify);
	void OnEnchantmentEndedImpl(BOOL bNotify);

	VIRTUAL(void,CheckCard)(CCard* pCard);

	void SetTappedOnly()
	{
		ATLASSERT(false);	// Use SetAffectTappedOnly()
		m_EnchantmentCardFilter.AddComparer(new TappedComparer());
	}

	void SetUntappedOnly()
	{
		ATLASSERT(false);	// Use SetAffectUntappedOnly()
		m_EnchantmentCardFilter.AddComparer(new UntappedComparer());
	}

	EnchantmentInternalType m_Type;

	CCardFilter		m_EnchantmentCardFilter;

	BOOL			m_bDisableWhenTapped;
	BOOL			m_bDisableWhenUntapped;
	StringArray		m_ListenToEventSources;
	BOOL			m_bAffectPlayers;
	BOOL			m_bAffectControllerOnly;
	BOOL			m_bAffectOpponentsOnly;
	ZoneId			m_AffectCardsInTheseZones;
	CPlayer*		m_pAffectThisPlayerOnly;
	BOOL			m_bAffectByOrientation;
	BOOL			m_bNotifyWhenControlSwitched;	
	BOOL            m_SelfCounterTracking;
	CCardFilter		m_thisActivationCardFilter;

	// Condition work
	BOOL            m_Condition1Work;
	CCardFilter     m_Condition1Filter;
	int_            m_Condition1Value;
	ZoneId          m_Condition1CheckZone;
	BOOL			m_Condition1IsMaximum;
	BOOL			m_Condition1CheckLife;
	BOOL            m_Condition1Active;
	ConditionCheckPlayerType m_Condition1CheckPlayer;

	BOOL            m_Condition2Work;
	CCardFilter     m_Condition2Filter;
	int_            m_Condition2Value;
	ZoneId          m_Condition2CheckZone;
	BOOL			m_Condition2IsMaximum;
	BOOL			m_Condition2CheckLife;
	BOOL            m_Condition2Active;
	ConditionCheckPlayerType m_Condition2CheckPlayer;

	int_			m_ConditionLogic;

	ZoneId          m_ActiveIn;
	
	// State managed

	CPtrContainer_<CCard>	m_AffectedCards;
	CPtrContainer_<CPlayer>	m_AffectedPlayers;

	CContextValueContainer_	m_AffectedCardContexts;
	CContextValueContainer_	m_AffectedPlayerContexts;

	BOOL_											m_bInEffect;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to this card's zone changes
	ListenerPtr<ChangeNodeEventSource::Listener>	m_cpNListener;	// Listen to node changes; for bAsTurnGlobalSpell only
	ListenerPtr<COrientation::Listener>				m_cpOListener;	// Listen to this card's orientation changes
	ListenerPtr<CounterMovedEventSource::Listener>  m_cpCListener;  // Listen to this card's counter changes

	ListenerPtr<CardTypeEventSource::Listener>		m_cpCardTypeListener;	// Listen to cards' card type changed (to support Crusade)
	ListenerPtr<CounterMovedEventSource::Listener>	m_cpCounterMovedListener;	// Listen to cards' counters amout changed (to support Bramblewood Paragon)
	ListenerPtr<CardMovementEventSource::Listener>	m_cpCardZoneListener;	// Listen to all card's zone changes
	ListenerPtr<CardIsAlsoAEventSource::Listener>	m_cpCardIsAlsoAListener; // Listen to is-also-a card changes
	ListenerPtr<COrientation::Listener>				m_cpCardOrientationListener;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpActiveCardZoneListener;	// Listen to all card's zone changes
	ListenerPtr<CardIsAlsoAEventSource::Listener>	m_cpActiveCardIsAlsoAListener; // Listen to is-also-a card changes
	ListenerPtr<ChangeLifeEventSource::Listener>	m_cpChangeLifeListener; // Listen to life changes
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardTypeEnchantment : public CEnchantment
{											
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCardTypeEnchantment(CCard* pCard,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 CardType addCardType, CardType addCardTypeMask);

	CCardTypeEnchantment(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 CardType addCardType, CardType addCardTypeMask);

	CCardTypeEnchantment(CCard* pCard,					
						 CardComparer* pComparer,
						 CardType addCardType, CardType addCardTypeMask);

	virtual ~CCardTypeEnchantment() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);
	OVERRIDE(void, CheckCard)(CCard* pCard);

	CardType m_AddCardType;
	CardType m_AddCardTypeMask;
};

//____________________________________________________________________________
//
//Added to fix Painter's Servant. maybe other cards need to use this too.
class CORE_EXPORT CCardTypeEnchantment2 : public CEnchantment
{											
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCardTypeEnchantment2(CCard* pCard,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 CardType addCardType, CardType addCardTypeMask);

	CCardTypeEnchantment2(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 CardType addCardType, CardType addCardTypeMask);

	CCardTypeEnchantment2(CCard* pCard,					
						 CardComparer* pComparer,
						 CardType addCardType, CardType addCardTypeMask);

	virtual ~CCardTypeEnchantment2() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);
	OVERRIDE(void, CheckCard)(CCard* pCard);

	CardType m_AddCardType;
	CardType m_AddCardTypeMask;
};

//____________________________________________________________________________
//
class CORE_EXPORT CIsAlsoAEnchantment : public CEnchantment
{											
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CIsAlsoAEnchantment(CCard* pCard,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 LPCTSTR strToken,
						 UINT uID);

	CIsAlsoAEnchantment(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 LPCTSTR strToken,
						 UINT uID);

	CIsAlsoAEnchantment(CCard* pCard,					
						 CardComparer* pComparer,
						 LPCTSTR strToken,
						 UINT uID);

	virtual ~CIsAlsoAEnchantment() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	LPCTSTR m_strToken;
	UINT m_uID;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardKeywordEnchantment : public CEnchantment
{			
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCardKeywordEnchantment(CCard* pCard,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer);

	CCardKeywordEnchantment(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer);

	CCardKeywordEnchantment(CCard* pCard,					
						 CardComparer* pComparer);

	virtual ~CCardKeywordEnchantment() {}

public:
	CCardKeywordModifier* GetCardKeywordMod() { return &m_CardKeywordModifier; }

protected:
	OVERRIDE(Characteristic, GetEnchantmentCharacteristic)() const;

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	CCardKeywordModifier m_CardKeywordModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCreatureEnchantment : public CEnchantment	// Ref: Castle
{				
protected:
	CCreatureEnchantment(CCard* pCard,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer);

	CCreatureEnchantment(CCard* pCard, AbilityType abilityType,		// Special bAsTurnGlobalCreatureSpell version
						 LPCTSTR strManaCost,
						 CardComparer* pComparer);

	CCreatureEnchantment(CCard* pCard,							// As continuous ability, use it on another in-play card
						 CardComparer* pComparer);

	virtual ~CCreatureEnchantment() {}

public:
	VIRTUAL(void, SetToAttackingOnly)();
	VIRTUAL(void, SetToBlockingOnly)();
	VIRTUAL(void, SetToAttackingBlockingOnly)();
	void SetListenToKeyword() { m_bListenToKeywords = TRUE;};

protected:
	OVERRIDE(void, ListenToCardEventSources)(CCard* pCard);
	OVERRIDE(void, RemoveListenToCardEventSources)(CCard* pCard);
	OVERRIDE(void, OnEnchantmentEnded)(BOOL bNotify);

	void OnAttacked(AttackSubject attacked, CCreatureCard* pCreatureCard);
	void OnBlocking(CCreatureCard* pCreature, CCreatureCard* pBlockedCreature, int nNewBlockingCount, int nBlockingIndex);
	void OnCreatureTypeChanged(CCard* pCard);
	void OnCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword);

	ListenerPtr<AttackedPlayerEventSource::Listener>	m_cpAListener;
	ListenerPtr<BlockedCreatureEventSource::Listener>	m_cpBListener;
	ListenerPtr<CreatureTypeEventSource::Listener>		m_cpCListener;
	ListenerPtr<CCreatureKeyword::Listener>			    m_cpCreatureKeywordListener;

	BOOL m_bAffectAttacking;
	BOOL m_bAffectBlocking;
	BOOL m_bListenToKeywords;
};

//____________________________________________________________________________
//
/*class CORE_EXPORT CDblConditionCreatureEnchantment : public CDblConditionEnchantment	// Ref: Castle
{				
protected:
	CDblConditionCreatureEnchantment(CCard* pCard,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer);

	CDblConditionCreatureEnchantment(CCard* pCard, AbilityType abilityType,		// Special bAsTurnGlobalCreatureSpell version
						 LPCTSTR strManaCost,
						 CardComparer* pComparer);

	CDblConditionCreatureEnchantment(CCard* pCard,							// As continuous ability, use it on another in-play card
						 CardComparer* pComparer);

	virtual ~CDblConditionCreatureEnchantment() {}

public:
	VIRTUAL(void, SetToAttackingOnly)();
	VIRTUAL(void, SetToBlockingOnly)();
	VIRTUAL(void, SetToAttackingBlockingOnly)();
	void SetListenToKeyword() { m_bListenToKeywords = TRUE;};

protected:
	OVERRIDE(void, ListenToCardEventSources)(CCard* pCard);
	OVERRIDE(void, RemoveListenToCardEventSources)(CCard* pCard);
	OVERRIDE(void, OnEnchantmentEnded)(BOOL bNotify);

	void OnAttacked(AttackSubject attacked, CCreatureCard* pCreatureCard);
	void OnBlocking(CCreatureCard* pCreature, CCreatureCard* pBlockedCreature, int nNewBlockingCount, int nBlockingIndex);
	void OnCreatureTypeChanged(CCard* pCard);
	void OnCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword);

	ListenerPtr<AttackedPlayerEventSource::Listener>	m_cpAListener;
	ListenerPtr<BlockedCreatureEventSource::Listener>	m_cpBListener;
	ListenerPtr<CreatureTypeEventSource::Listener>		m_cpCListener;
	ListenerPtr<CCreatureKeyword::Listener>			    m_cpCreatureKeywordListener;

	BOOL m_bAffectAttacking;
	BOOL m_bAffectBlocking;
	BOOL m_bListenToKeywords;
};
*/
//____________________________________________________________________________
//
class CORE_EXPORT CProdExtraManaEnchantment : public CEnchantment	// Ref: Vernal Bloom (Note: This is not implemented as Triggered ability because the all the mana check routines need to know the amount of mana each ability can produce in advance)
{	
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CProdExtraManaEnchantment(CCard* pCard,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaText);

	CProdExtraManaEnchantment(CCard* pCard, AbilityType abilityType,	// As turn global spell
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaText);

	CProdExtraManaEnchantment(CCard* pCard,							// As continuous ability
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaText);

	virtual ~CProdExtraManaEnchantment() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	CString m_strExtraManaText;
};

//____________________________________________________________________________
//
class CORE_EXPORT CConsExtraManaEnchantment : public CEnchantment	// Ref: Feroz's Ban
{	
	DEFINE_CREATE_TO_CPTR_ONLY;

public:	
	CManaCost GetManacost() { return m_ExtraManaCost; }	
	void SetManaCost(CManaCost pCost) {  m_ExtraManaCost = pCost; }
	const CManaCost GetManacost() const { return m_ExtraManaCost; }	

protected:
	CConsExtraManaEnchantment(CCard* pCard,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// Enchantment Spell

	CConsExtraManaEnchantment(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// As Turn Global Spell

	CConsExtraManaEnchantment(CCard* pCard,						
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// As Secondary Ability

	virtual ~CConsExtraManaEnchantment() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	CManaCost	m_ExtraManaCost;	
};

//____________________________________________________________________________
//
class CORE_EXPORT CConsAttackExtraManaEnchantment : public CEnchantment	// Ref: Feroz's Ban
{	
	DEFINE_CREATE_TO_CPTR_ONLY;

public:	
	CManaCost GetManacost() { return m_ExtraManaCost; }	
	void SetManaCost(CManaCost pCost) {  m_ExtraManaCost = pCost; }
	const CManaCost GetManacost() const { return m_ExtraManaCost; }	
	void SetAffectOnlyPlayerDeclaration() { m_AttackPlayerOnly = TRUE;}

protected:
	CConsAttackExtraManaEnchantment(CCard* pCard,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// Enchantment Spell

	CConsAttackExtraManaEnchantment(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// As Turn Global Spell

	CConsAttackExtraManaEnchantment(CCard* pCard,						
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// As Secondary Ability

	virtual ~CConsAttackExtraManaEnchantment() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	CManaCost	m_ExtraManaCost;
	BOOL m_AttackPlayerOnly;
};

//____________________________________________________________________________
//
class CORE_EXPORT CConsLessManaEnchantment : public CEnchantment	// Ref: Feroz's Ban
{	
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	const CardComparer* GetCardComparer() const { return m_Comparer; }	
	const CManaCost GetManacost() const { return m_ExtraManaCost; }	

	CManaCost GetManacost() { return m_ExtraManaCost; }	
	void SetManaCost(CManaCost pCost) {  m_ExtraManaCost.SetCost(pCost.ToString()); }

protected:
	CConsLessManaEnchantment(CCard* pCard,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// Enchantment Spell

	CConsLessManaEnchantment(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// As Turn Global Spell

	CConsLessManaEnchantment(CCard* pCard,						
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// As Secondary Ability

	virtual ~CConsLessManaEnchantment() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	CManaCost_	m_ExtraManaCost;
	CardComparer* m_Comparer;
};
//____________________________________________________________________________
//
class CORE_EXPORT CPuresteelPaladinEnchantment : public CEnchantment	// Ref: Feroz's Ban
{	
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	const CardComparer* GetCardComparer() const { return m_Comparer; }		

protected:
	CPuresteelPaladinEnchantment(CCard* pCard,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer);			// Enchantment Spell

	CPuresteelPaladinEnchantment(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer);			// As Turn Global Spell

	CPuresteelPaladinEnchantment(CCard* pCard,						
							  CardComparer* pComparer);			// As Secondary Ability

	virtual ~CPuresteelPaladinEnchantment() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	CardComparer* m_Comparer;
};
//____________________________________________________________________________
//
class CORE_EXPORT CCommanderCastEnchantment : public CEnchantment	// Ref: Feroz's Ban
{	
	DEFINE_CREATE_TO_CPTR_ONLY;	

protected:
	CCommanderCastEnchantment(CCard* pCard,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer);			// Enchantment Spell

	CCommanderCastEnchantment(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer);			// As Turn Global Spell

	CCommanderCastEnchantment(CCard* pCard,						
							  CardComparer* pComparer);			// As Secondary Ability

	virtual ~CCommanderCastEnchantment() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

};

//____________________________________________________________________________
//
/*//____________________________________________________________________________
//
class CORE_EXPORT CConsLessManaAbilityEnchantment : public CEnchantment	// Ref: 
{	
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	const CardComparer* GetCardComparer() const { return m_Comparer; }	
	const CManaCost GetManacost() const { return m_ExtraManaCost; }	

protected:
	CConsLessManaAbilityEnchantment(CCard* pCard,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// Enchantment Spell

	CConsLessManaAbilityEnchantment(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// As Turn Global Spell

	CConsLessManaAbilityEnchantment(CCard* pCard,						
							  CardComparer* pComparer,
							  LPCTSTR strExtraManaCost);			// As Secondary Ability

	virtual ~CConsLessManaAbilityEnchantment() {}

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	CManaCost	m_ExtraManaCost;
	CardComparer* m_Comparer;
};

//____________________________________________________________________________
//*/
class CORE_EXPORT CPlayExtraLandEnchantment : public CEnchantment	// Ref: Storm Cauldron
{													
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPlayExtraLandEnchantment(CCard* pCard,
							  LPCTSTR strManaCost,
							  int nAdditionalLandCount);			// Enchantment Spell

	CPlayExtraLandEnchantment(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  int nAdditionalLandCount);			// As Turn Global Spell

	CPlayExtraLandEnchantment(CCard* pCard,						
							  int nAdditionalLandCount);			// As Secondary Ability

	virtual ~CPlayExtraLandEnchantment() {}

	OVERRIDE(void, OnEnchantPlayer)(CPlayer* pPlayer, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantPlayer)(CPlayer* pPlayer, const ContextValue& contextValue);

	int m_nAdditionalLandCount;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCanBeAttackedByEnchantment : public CEnchantment	// Ref: Storm Cauldron
{						
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCanBeAttackedByEnchantment(CCard* pCard,
							  LPCTSTR strManaCost,
							  const CCardFilter* pCanBeAttackedBy);			// Enchantment Spell

	CCanBeAttackedByEnchantment(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  const CCardFilter* pCanBeAttackedBy);			// As Turn Global Spell

	CCanBeAttackedByEnchantment(CCard* pCard,						
							  const CCardFilter* pCanBeAttackedBy);			// As Secondary Ability

	virtual ~CCanBeAttackedByEnchantment() {}

	OVERRIDE(void, OnEnchantPlayer)(CPlayer* pPlayer, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantPlayer)(CPlayer* pPlayer, const ContextValue& contextValue);

	const CCardFilter* m_pCanBeAttackedBy;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDamageRedirectionEnchantment : public CEnchantment	// Ref: Kjeldoran Royal Guard
{		
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDamageRedirectionEnchantment(CCard* pCard,
								  LPCTSTR strManaCost,
								  DamageType damageType,				// -1 for combat and non-combat damage
								  CCreatureCard* pToCreature);			// Primary Enchantment 

	CDamageRedirectionEnchantment(CCard* pCard, AbilityType abilityType,
								  LPCTSTR strManaCost,
								  DamageType damageType,				// -1 for combat and non-combat damage
								  CCreatureCard* pToCreature);			// Until EOT spell

	CDamageRedirectionEnchantment(CCard* pCard,						
								  DamageType damageType,				// -1 for combat and non-combat damage
								  CCreatureCard* pToCreature);			// Secondary Enchantment

	virtual ~CDamageRedirectionEnchantment() {}

	OVERRIDE(void, OnEnchantPlayer)(CPlayer* pPlayer, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantPlayer)(CPlayer* pPlayer, const ContextValue& contextValue);

	DamageType		m_DamageType;
	CCreatureCard*	m_pToCreature;	
};

//____________________________________________________________________________
//
class CORE_EXPORT CPlayerEffectEnchantment : public CEnchantment
{			
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPlayerEffectEnchantment(CCard* pCard, LPCTSTR strManaCost,
						   PlayerEffectType playerEffect,
						   int nParam = 0,
						   BOOL bAdd = TRUE);

	CPlayerEffectEnchantment(CCard* pCard, AbilityType abilityType,
						   LPCTSTR strManaCost,
						   PlayerEffectType playerEffect,
						   int nParam = 0,
						   BOOL bAdd = TRUE);

	CPlayerEffectEnchantment(CCard* pCard, 
						   PlayerEffectType playerEffect,
						   int nParam = 0,
						   BOOL bAdd = TRUE);

	virtual ~CPlayerEffectEnchantment() {}

public:
	// Ref: Furnace of Rath
	void SetMultipleEffectType(BOOL bMultipleEffectType) { m_bMultipleEffectType = bMultipleEffectType; } // Default: false, affects only trick actions

	// Ref: Ensnaring Bridge
	void SetParameterToController(BOOL bSetParameterToController) { m_bSetParameterToController = bSetParameterToController; }

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(void, OnEnchantPlayer)(CPlayer* pPlayer, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantPlayer)(CPlayer* pPlayer, const ContextValue& contextValue);

	PlayerEffectType	m_PlayerEffect;

	int		m_nParam;
	BOOL	m_bAdd;

	BOOL	m_bMultipleEffectType;
	BOOL	m_bSetParameterToController;
};

//____________________________________________________________________________
//
class CORE_EXPORT CChgHandVisibilityEnchantment : public CPlayerEffectEnchantment
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CChgHandVisibilityEnchantment(CCard* pCard, LPCTSTR strManaCost);
	virtual ~CChgHandVisibilityEnchantment() {}

	OVERRIDE(void, OnDisenchantPlayer)(CPlayer* pPlayer, ContextValue& contextValue);
};

/*
//____________________________________________________________________________
//
class CORE_EXPORT CLifeCreditEnchantment : public CEnchantment
{			
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CLifeCreditEnchantment(CCard* pCard, LPCTSTR strManaCost,
						   Life nLifeDelta);
	virtual ~CLifeCreditEnchantment() {}

	OVERRIDE(void, OnEnchantPlayer)(CPlayer* pPlayer, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantPlayer)(CPlayer* pPlayer, const ContextValue& contextValue);

	CLifeModifier	m_LifeAddition;
	CLifeModifier	m_LifeRemoval;
};
*/

//____________________________________________________________________________
//
class CORE_EXPORT CPwrTghAttrEnchantment : public CCreatureEnchantment
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPwrTghAttrEnchantment(CCard* pCard,
						   LPCTSTR strManaCost,
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	CPwrTghAttrEnchantment(CCard* pCard, AbilityType abilityType,	// Special bAsTurnGlobalCreatureSpell version
						   LPCTSTR strManaCost,
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	CPwrTghAttrEnchantment(CCard* pCard,						// As continuous ability, use it on another in-play card
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	virtual ~CPwrTghAttrEnchantment() {}

public:
	CLifeModifier& GetLifeModifier() { return m_LifeModifier; }
	CPowerModifier& GetPowerModifier() { return m_PowerModifier; }

	const CLifeModifier& GetLifeModifier() const { return m_LifeModifier; }
	const CPowerModifier& GetPowerModifier() const { return m_PowerModifier; }

	const CCreatureKeywordModifier& GetCreatureKeywordMod() const { return m_CreatureKeywordModifier; }
	const CCardKeywordModifier& GetCardKeywordMod() const { return m_CardKeywordModifier; }

	CCreatureKeywordModifier& GetCreatureKeywordMod() { return m_CreatureKeywordModifier; }
	CCardKeywordModifier& GetCardKeywordMod() { return m_CardKeywordModifier; }

	CCardModifiers& GetOtherCardModifiers() { return m_OtherCardModifiers; }
	const CCardModifiers& GetOtherCardModifiers() const { return m_OtherCardModifiers; }

protected:
	OVERRIDE(Characteristic, GetEnchantmentCharacteristic)() const;

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	CLifeModifier	m_LifeModifier;
	CPowerModifier	m_PowerModifier;
	CCreatureKeywordModifier m_CreatureKeywordModifier;
	CCardKeywordModifier m_CardKeywordModifier;

	CCardModifiers m_OtherCardModifiers;
};

//____________________________________________________________________________
//
/*class CORE_EXPORT CDblConditionPwrTghAttrEnchantment : public CDblConditionCreatureEnchantment
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDblConditionPwrTghAttrEnchantment(CCard* pCard,
						   LPCTSTR strManaCost,
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	CDblConditionPwrTghAttrEnchantment(CCard* pCard, AbilityType abilityType,	// Special bAsTurnGlobalCreatureSpell version
						   LPCTSTR strManaCost,
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	CDblConditionPwrTghAttrEnchantment(CCard* pCard,						// As continuous ability, use it on another in-play card
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	virtual ~CDblConditionPwrTghAttrEnchantment() {}

public:
	CLifeModifier& GetLifeModifier() { return m_LifeModifier; }
	CPowerModifier& GetPowerModifier() { return m_PowerModifier; }

	const CLifeModifier& GetLifeModifier() const { return m_LifeModifier; }
	const CPowerModifier& GetPowerModifier() const { return m_PowerModifier; }

	const CCreatureKeywordModifier& GetCreatureKeywordMod() const { return m_CreatureKeywordModifier; }
	const CCardKeywordModifier& GetCardKeywordMod() const { return m_CardKeywordModifier; }

	CCreatureKeywordModifier& GetCreatureKeywordMod() { return m_CreatureKeywordModifier; }
	CCardKeywordModifier& GetCardKeywordMod() { return m_CardKeywordModifier; }

	CCardModifiers& GetOtherCardModifiers() { return m_OtherCardModifiers; }
	const CCardModifiers& GetOtherCardModifiers() const { return m_OtherCardModifiers; }

protected:
	OVERRIDE(Characteristic, GetEnchantmentCharacteristic)() const;

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	CLifeModifier	m_LifeModifier;
	CPowerModifier	m_PowerModifier;
	CCreatureKeywordModifier m_CreatureKeywordModifier;
	CCardKeywordModifier m_CardKeywordModifier;

	CCardModifiers m_OtherCardModifiers;
};
*/
//____________________________________________________________________________
//
class CORE_EXPORT CPwrTghAttrEnchantmentCount : public CCreatureEnchantment
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPwrTghAttrEnchantmentCount(CCard* pCard,
						   LPCTSTR strManaCost,
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	CPwrTghAttrEnchantmentCount(CCard* pCard, AbilityType abilityType,	// Special bAsTurnGlobalCreatureSpell version
						   LPCTSTR strManaCost,
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	CPwrTghAttrEnchantmentCount(CCard* pCard,						// As continuous ability, use it on another in-play card
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	virtual ~CPwrTghAttrEnchantmentCount() {}

public:
	CLifeModifier& GetLifeModifier() { return m_LifeModifier; }
	CPowerModifier& GetPowerModifier() { return m_PowerModifier; }

	const CLifeModifier& GetLifeModifier() const { return m_LifeModifier; }
	const CPowerModifier& GetPowerModifier() const { return m_PowerModifier; }

	const CCreatureKeywordModifier& GetCreatureKeywordMod() const { return m_CreatureKeywordModifier; }
	const CCardKeywordModifier& GetCardKeywordMod() const { return m_CardKeywordModifier; }

	CCreatureKeywordModifier& GetCreatureKeywordMod() { return m_CreatureKeywordModifier; }
	CCardKeywordModifier& GetCardKeywordMod() { return m_CardKeywordModifier; }

	CCardModifiers& GetOtherCardModifiers() { return m_OtherCardModifiers; }
	const CCardModifiers& GetOtherCardModifiers() const { return m_OtherCardModifiers; }

protected:
	OVERRIDE(Characteristic, GetEnchantmentCharacteristic)() const;

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	void OnEnchantCountChanged(CCard* pCard, int nFromCount, int nToCount);

	CLifeModifier	m_LifeModifier;
	CPowerModifier	m_PowerModifier;
	CCreatureKeywordModifier m_CreatureKeywordModifier;
	CCardKeywordModifier m_CardKeywordModifier;

	CCardModifiers m_OtherCardModifiers;
	int_ enchantment_count;

	ListenerPtr<CardEnchantCountEventSource::Listener>	m_cpEnchantListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CEquipPwrTghAttrEnchantment : public CPwrTghAttrEnchantment
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CEquipPwrTghAttrEnchantment(CCard* pCard,						// As continuous ability, use it on another in-play card
						   CardComparer* pComparer,
						   Power nPowerDelta, Life nLifeDelta,
						   CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);

	virtual ~CEquipPwrTghAttrEnchantment() {}

protected:	
	OVERRIDE(void, OnZoneChanged) (CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnEquipped(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard);
	
	
	CCardFilter m_EquipCardFilter;

	ListenerPtr<CardEquippedEventSource::Listener>	m_cpEquipListener;

};

//____________________________________________________________________________
//
class CORE_EXPORT CPwrTghAttrEnchantment2 : public CCreatureEnchantment		// Ref: Coat of Arms
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPwrTghAttrEnchantment2(CCard* pCard,
						    LPCTSTR strManaCost,
						    CardComparer* pComparer);

	CPwrTghAttrEnchantment2(CCard* pCard, AbilityType abilityType,	// Special bAsTurnGlobalCreatureSpell version
						    LPCTSTR strManaCost,
						    CardComparer* pComparer);

	CPwrTghAttrEnchantment2(CCard* pCard,						// As continuous ability, use it on another in-play card
						    CardComparer* pComparer);

	virtual ~CPwrTghAttrEnchantment2() {}

	void OnInPlayCardsChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	OVERRIDE(Characteristic, GetEnchantmentCharacteristic)() const;

	OVERRIDE(void, OnEnchantCard)(CCard* pCard, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantCard)(CCard* pCard, const ContextValue& contextValue);

	int CountCreatures(const CCard* pCard) const;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpInPlayListener;

	OVERRIDE(void, CheckCard)(CCard* pCard);

	CLifeModifier m_LifeModifier;
	CPowerModifier m_PowerModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CEnchant : public CTargetSpell		// Known as Aura Enchantment in 9th
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CEnchant(CCard* pCard,
			 LPCTSTR strManaCost,
			 CardComparer* pComparer,
			 CTargeting* pTargeting = new CTargeting);

	virtual ~CEnchant() {}

public:
	CCard* GetEnchantedOnCard() const { return m_pOnCard.GetPointer(); }

	BOOL Enchant(CCard* pOnCard, CPlayer* pByPlayer, const ContextValue& contextValue);

	BOOL HasEnchantTarget() const;
	BOOL SelectEnchantTarget();
	
protected:
	OVERRIDE(void, ResolveCard)(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value);
	OVERRIDE(void, OnResolutionCompleted)(const CAbilityAction* pAction, BOOL bResolutionResult);

	VIRTUAL(BOOL, OnEnchant)(CCard* pCard, ContextValue_& contextValue);			// call this last in derived classes
	VIRTUAL(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);	// call this last in derived classes

	void OnCardZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	void OnCardKeywordChanged(CCardKeyword* pCardKeyword, CardKeyword fromCardKeyword, CardKeyword toCardKeyword)	{ OnEnchantedCardChanged(); }
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)								{ OnEnchantedCardChanged(); }
	void OnACardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)								{ OnEnchantedCardChanged(); }
	void OnEnchantCountChanged(int nFromCount, int nToCount)														{ OnEnchantedCardChanged(); }
	void OnCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword) { OnEnchantedCardChanged(); }
	void OnEnchantedCardChanged();

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	CStateSupportPtrType<CCard>	m_pOnCard;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpACardListener;	// Listen to zone change
	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;
	ListenerPtr<CardMovementEventSource::Listener>	m_cpPhaseListener;
	ListenerPtr<CCardKeyword::Listener>				m_cpCardKeywordListener;
	ListenerPtr<CardTypeEventSource::Listener>		m_cpCardTypeListener;
	ListenerPtr<CardTypeEventSource::Listener>		m_cpACardTypeListener;
	ListenerPtr<CCreatureKeyword::Listener>			m_cpCreatureKeywordListener;
	ListenerPtr<CNumberEventSource<int>::Listener>	m_cpECListener;
	
	ContextValue_	m_ContextValue;

	ListenerPtr<SelectionEventSource::Listener>		m_cpSelectionListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CChgPwrTghAttrEnchant
	: public CEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CChgPwrTghAttrEnchant(CCard* pCard,
						  LPCTSTR strManaCost,
						  Power nPowerDelta, Life nLifeDelta,
						  CreatureKeyword creatureKeywordToAdd);
	virtual ~CChgPwrTghAttrEnchant() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	const CCreatureKeywordModifier& GetCreatureKeywordMod() const { return m_CreatureKeywordModifier; }
	const CCardKeywordModifier& GetCardKeywordMod() const { return m_CardKeywordModifier; }

	CCreatureKeywordModifier& GetCreatureKeywordMod() { return m_CreatureKeywordModifier; }
	CCardKeywordModifier& GetCardKeywordMod() { return m_CardKeywordModifier; }

	void AddCreatureModifier(CCreatureModifier* pModifier) { m_CreatureModifiers.Add(pModifier); }
	CCreatureModifiers	GetCreatureModifiers()  {return m_CreatureModifiers;}

protected:
	OVERRIDE(BOOL, OnEnchant)(CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);

	CLifeModifier				m_LifeModifier;
	CPowerModifier				m_PowerModifier;
	CCreatureKeywordModifier	m_CreatureKeywordModifier;
	CCardKeywordModifier		m_CardKeywordModifier;
	CCreatureModifiers			m_CreatureModifiers;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			CChgPwrTghAttrEnchant* pAbility = (CChgPwrTghAttrEnchant*)GetAbility();

			return GetPwrTghAttrCharacteristic(
				Life(GetAbility()->GetActionValue().nValue1), Power(GetAbility()->GetActionValue().nValue2),
				!GetAbility()->GetActionValue().nValue1 && !GetAbility()->GetActionValue().nValue2 && GetAbility()->GetExtraActionValueVector().Any() ? 
					(GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive) 
					: Characteristic::Neutral,
				pAbility->m_CardKeywordModifier.GetModifier().GetToAdd(),
				pAbility->m_CardKeywordModifier.GetModifier().GetToRemove(),
				pAbility->m_CreatureKeywordModifier.GetModifier().GetToAdd(),
				pAbility->m_CreatureKeywordModifier.GetModifier().GetToRemove());
		}
	};
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardKeywordEnchant
	: public CEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCardKeywordEnchant(CCard* pCard,
						LPCTSTR strManaCost,
						CardComparer* pComparer,
						CardKeyword cardKeywordToAdd);
	virtual ~CCardKeywordEnchant() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	const CCardKeywordModifier& GetCardKeywordMod() const { return m_CardKeywordModifier; }
	CCardKeywordModifier& GetCardKeywordMod() { return m_CardKeywordModifier; }

protected:
	OVERRIDE(BOOL, OnEnchant)(CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);

	CCardKeywordModifier m_CardKeywordModifier;

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			CCardKeywordEnchant* pAbility = (CCardKeywordEnchant*)GetAbility();

			return GetPwrTghAttrCharacteristic(
				Life(0), Power(0), Characteristic::Neutral,
				pAbility->m_CardKeywordModifier.GetModifier().GetToAdd(),
				pAbility->m_CardKeywordModifier.GetModifier().GetToRemove());
		}
	};
};

//____________________________________________________________________________
//
class CORE_EXPORT CAbilityEnchant : public CEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	typedef FastDelegate< counted_ptr<CAbility> ( CCard* /* Enchanted On Card */, CCard* /* Enchant Card */, ContextValue_& ) > CreateAbilityCallback;
	typedef FastDelegate< void ( CAbility* ) > PostEnchantCallback;

	struct AdditionType
	{
		enum Enum
		{
			ToEnchantCard = 1,
			ToEnchantedCard
		};

		DEFINE_DISTINCT_ENUM_OPS( AdditionType );
	};

protected:
	CAbilityEnchant(CCard* pCard,
					LPCTSTR strManaCost,
					CardComparer* pComparer,
					CreateAbilityCallback createAbilityCallback,
					AdditionType additionType,
					PostEnchantCallback postEnchantCallback = PostEnchantCallback(),
					CTargeting* pTargeting = new CTargeting);
	virtual ~CAbilityEnchant() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, OnEnchant)(CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);

	void AddAbilityToCard(CCard* pOnCard, CAbility* pAbility);

	CStateSupportCountedPtrType<CAbility>	m_cpInternalAbility;
	CreateAbilityCallback	m_CreateAbilityCallback;
	PostEnchantCallback		m_PostEnchantCallback;
	AdditionType			m_AdditionType;
};


//____________________________________________________________________________
//
class CORE_EXPORT CCreatureAbilityEnchant : public CAbilityEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCreatureAbilityEnchant(CCard* pCard,
					LPCTSTR strManaCost,
					CreateAbilityCallback createAbilityCallback,
					AdditionType additionType,
					PostEnchantCallback postEnchantCallback = PostEnchantCallback(),
					CTargeting* pTargeting = new CTargeting)
		: CAbilityEnchant(pCard, strManaCost, new AnyCreatureComparer, createAbilityCallback, 
						  additionType, postEnchantCallback, pTargeting)
	{
	}

	virtual ~CCreatureAbilityEnchant() {}
};

//____________________________________________________________________________
//
class CORE_EXPORT CControlEnchant : public CEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CControlEnchant(CCard* pCard, LPCTSTR strManaCost,
					CardComparer* pComparer);
	virtual ~CControlEnchant() {}

public:
	void SetUntapTargetOnEnchant(BOOL bUntap) { m_bUntapTargetOnEnchant = bUntap; }
	void SetMoveTargetToOnDisenchant(ZoneId uWhenTargetIsInThisZone, ZoneId uMoveTargetToThisZone, BOOL bOwnersZone);

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, OnEnchant)(CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);
	
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	BOOL	m_bUntapTargetOnEnchant;

	ZoneId	m_WhenTargetIsInThisZone;
	ZoneId	m_MoveTargetToThisZone;
	BOOL	m_bOwnersZone;
	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CControlPumpEnchant : public CControlEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CControlPumpEnchant(CCard* pCard, LPCTSTR strManaCost,
					CardComparer* pComparer,
					Power nPowerDelta, Life nLifeDelta,
					CardKeyword cardKeywordToAdd = CardKeyword::Null,
					CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null);
	virtual ~CControlPumpEnchant() {}

protected:
	OVERRIDE(BOOL, OnEnchant)(CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);


protected:
	CLifeModifier				m_LifeModifier;
	CPowerModifier				m_PowerModifier;
	CCardKeywordModifier		m_CardKeywordModifier;
	CCreatureKeywordModifier	m_CreatureKeywordModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCardTypeEnchant : public CEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCardTypeEnchant(CCard* pCard, LPCTSTR strManaCost,
					 CardComparer* pComparer);
	virtual ~CCardTypeEnchant() {}

public:
	void AddCardTypeToAdd(CardType cardTypeToAdd, CardType mask, LPCTSTR strName);

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	struct CardTypeAddition
	{
		CardType cardTypeToAdd;
		CardType mask;
		CString strName;
	};

	OVERRIDE(BOOL, OnEnchant)(CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void ChangeCardTypeImpl(CCard* pCard, unsigned nSelectedCardTypeIndex);

	vector<CardTypeAddition> m_CardTypesToAdd;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CIsAlsoAEnchant
	: public CEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CIsAlsoAEnchant(CCard* pCard,
					LPCTSTR strManaCost,
					CardComparer* pComparer,
					LPCTSTR strToken,
					UINT uID);
	virtual ~CIsAlsoAEnchant() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	void SetMoveTargetToOnDisenchant(ZoneId uWhenTargetIsInThisZone, ZoneId uMoveTargetToThisZone, BOOL bOwnersZone);

protected:
	OVERRIDE(BOOL, OnEnchant)(CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);

	ZoneId	m_WhenTargetIsInThisZone;
	ZoneId	m_MoveTargetToThisZone;
	BOOL	m_bOwnersZone;

	LPCTSTR m_strToken;
	UINT m_uID;
};
//____________________________________________________________________________
//
/*
	Ref: Edge of the Divinity W/B
		 Enchantment - Aura
		 Enchant Creature
		 As long as enchanted creature is white, it gets +1/+2.
		 As long as enchanted creature is black, it gets +2/+1.
	
	Use CDoubleChgPwrTghAttrEnchant for enchant creature cards that have 
	two parts that are be both applied if the enchanted creature card ever meets both conditions.
*/
class CORE_EXPORT CDoubleChgPwrTghAttrEnchant
	: public CEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDoubleChgPwrTghAttrEnchant(CCard* pCard,
								LPCTSTR strManaCost,
								Power nPowerDelta1, 
								Life nLifeDelta1,
								CreatureKeyword creatureKeywordToAdd1, 
								CardType n_Var1CardFilter,
								Power nPowerDelta2, 
								Life nLifeDelta2,
								CreatureKeyword creatureKeywordToAdd2, 
								CardType n_Var2CardFilter);
	virtual ~CDoubleChgPwrTghAttrEnchant() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	const CCreatureKeywordModifier& GetCreatureKeywordMod1()	 const { return m_CreatureKeywordModifier1; }
	const CCardKeywordModifier& GetCardKeywordMod1()			 const { return m_CardKeywordModifier1;	    }

	CCreatureKeywordModifier& GetCreatureKeywordMod1()				   { return m_CreatureKeywordModifier1; }
	CCardKeywordModifier& GetCardKeywordMod1()						   { return m_CardKeywordModifier1;	    }

	const CCreatureKeywordModifier& GetCreatureKeywordMod2()	 const { return m_CreatureKeywordModifier2; }
	const CCardKeywordModifier& GetCardKeywordMod2()			 const { return m_CardKeywordModifier2;	    }

	CCreatureKeywordModifier& GetCreatureKeywordMod2()				   { return m_CreatureKeywordModifier2; }
	CCardKeywordModifier& GetCardKeywordMod2()						   { return m_CardKeywordModifier2;	    }

protected:
	OVERRIDE(BOOL, OnEnchant)   (CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);

	void CheckCard(CCard* pCard, CardType fromCardType, CardType toCardType);
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType) { CheckCard(pCard, fromCardType, toCardType); } // to support Crusade	

	CLifeModifier				m_LifeModifier1;
	CPowerModifier				m_PowerModifier1;
	CCreatureKeywordModifier	m_CreatureKeywordModifier1;
	CCardKeywordModifier		m_CardKeywordModifier1;

	CLifeModifier				m_LifeModifier2;
	CPowerModifier				m_PowerModifier2;
	CCreatureKeywordModifier	m_CreatureKeywordModifier2;
	CCardKeywordModifier		m_CardKeywordModifier2;

	CardType					m_Var1CardFilter;
	CardType					m_Var2CardFilter;	

	ListenerPtr<CardTypeEventSource::Listener>		m_cpCardTypeListener;	// Listen to cards' card type changed (to support Crusade)

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			CDoubleChgPwrTghAttrEnchant* pAbility = (CDoubleChgPwrTghAttrEnchant*)GetAbility();

			return GetPwrTghAttrCharacteristic(
				Life(GetAbility()->GetActionValue().nValue1), Power(GetAbility()->GetActionValue().nValue2),
				!GetAbility()->GetActionValue().nValue1 && !GetAbility()->GetActionValue().nValue2 && GetAbility()->GetExtraActionValueVector().Any() ? 
					(GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive) 
					: Characteristic::Neutral,
				pAbility->m_CardKeywordModifier1.GetModifier().GetToAdd(),
				pAbility->m_CardKeywordModifier1.GetModifier().GetToRemove(),
				pAbility->m_CreatureKeywordModifier1.GetModifier().GetToAdd(),
				pAbility->m_CreatureKeywordModifier1.GetModifier().GetToRemove());
		}
	};
};


//____________________________________________________________________________
//
/*
	Ref: Serra's Boon 2W
		 Enchantment - Aura
		 Enchant Creature
		 Enchanted creature gets +1/+2 as long as it's white. 
		 Otherwise, it gets -2/-1.
	Use CDoubleChgPwrTghAttrExclusiveEnchant for enchant creature cards that have 
	two mutually exclusive parts.

	CDoubleChgPwrTghAttrExclusiveEnchant cards have two options and only one is ever 
	active depending on which condition is currently met.
*/
class CORE_EXPORT CDoubleChgPwrTghAttrExclusiveEnchant
	: public CEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDoubleChgPwrTghAttrExclusiveEnchant(CCard* pCard,
										 LPCTSTR strManaCost,
										 Power nPowerDelta1, 
										 Life nLifeDelta1,
										 CreatureKeyword creatureKeywordToAdd1, 
										 CardType n_Var1CardFilter,
										 Power nPowerDelta2, 
										 Life nLifeDelta2,
										 CreatureKeyword creatureKeywordToAdd2, 
										 CardType n_Var2CardFilter);
	virtual ~CDoubleChgPwrTghAttrExclusiveEnchant() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	const CCreatureKeywordModifier& GetCreatureKeywordMod1()	 const { return m_CreatureKeywordModifier1; }
	const CCardKeywordModifier& GetCardKeywordMod1()			 const { return m_CardKeywordModifier1;	    }

	CCreatureKeywordModifier& GetCreatureKeywordMod1()				   { return m_CreatureKeywordModifier1; }
	CCardKeywordModifier& GetCardKeywordMod1()						   { return m_CardKeywordModifier1;	    }

	const CCreatureKeywordModifier& GetCreatureKeywordMod2()	 const { return m_CreatureKeywordModifier2; }
	const CCardKeywordModifier& GetCardKeywordMod2()			 const { return m_CardKeywordModifier2;	    }

	CCreatureKeywordModifier& GetCreatureKeywordMod2()				   { return m_CreatureKeywordModifier2; }
	CCardKeywordModifier& GetCardKeywordMod2()						   { return m_CardKeywordModifier2;	    }

protected:
	OVERRIDE(BOOL, OnEnchant)   (CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);

	void CheckCard(CCard* pCard, CardType fromCardType, CardType toCardType);
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType) { CheckCard(pCard, fromCardType, toCardType); } // to support Crusade	

	CLifeModifier				m_LifeModifier1;
	CPowerModifier				m_PowerModifier1;
	CCreatureKeywordModifier	m_CreatureKeywordModifier1;
	CCardKeywordModifier		m_CardKeywordModifier1;

	CLifeModifier				m_LifeModifier2;
	CPowerModifier				m_PowerModifier2;
	CCreatureKeywordModifier	m_CreatureKeywordModifier2;
	CCardKeywordModifier		m_CardKeywordModifier2;

	CardType					m_Var1CardFilter;
	CardType					m_Var2CardFilter;	
	bool						m_Option1Active; 

	ListenerPtr<CardTypeEventSource::Listener>		m_cpCardTypeListener;	// Listen to cards' card type changed (to support Crusade)

private:
	class CORE_EXPORT CMyTargeting : public CTargeting
	{
	public:
		OVERRIDE(Characteristic, GetCharacteristic)() const			
		{ 
			CDoubleChgPwrTghAttrExclusiveEnchant* pAbility = (CDoubleChgPwrTghAttrExclusiveEnchant*)GetAbility();

			return GetPwrTghAttrCharacteristic(
				Life(GetAbility()->GetActionValue().nValue1), Power(GetAbility()->GetActionValue().nValue2),
				!GetAbility()->GetActionValue().nValue1 && !GetAbility()->GetActionValue().nValue2 && GetAbility()->GetExtraActionValueVector().Any() ? 
					(GetAbility()->GetExtraActionValueVector().Sum() < 0 ? Characteristic::Negative : Characteristic::Positive) 
					: Characteristic::Neutral,
				pAbility->m_CardKeywordModifier1.GetModifier().GetToAdd(),
				pAbility->m_CardKeywordModifier1.GetModifier().GetToRemove(),
				pAbility->m_CreatureKeywordModifier1.GetModifier().GetToAdd(),
				pAbility->m_CreatureKeywordModifier1.GetModifier().GetToRemove());
		}
	};
};

//____________________________________________________________________________
//
class CORE_EXPORT CPlayerHandEnchantment : public CEnchantment
{			
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPlayerHandEnchantment(CCard* pCard, LPCTSTR strManaCost,
						   int nParam = 0);

	CPlayerHandEnchantment(CCard* pCard, AbilityType abilityType,
						   LPCTSTR strManaCost,
						   int nParam = 0);

	CPlayerHandEnchantment(CCard* pCard, 
						   int nParam = 0);

	virtual ~CPlayerHandEnchantment() {}

protected:
	OVERRIDE(void, OnEnchantPlayer)(CPlayer* pPlayer, ContextValue& contextValue);
	OVERRIDE(void, OnDisenchantPlayer)(CPlayer* pPlayer, const ContextValue& contextValue);

	int		m_nParam;

};

//____________________________________________________________________________
//
class CORE_EXPORT CEnchantDeadCreature	: public CChgPwrTghAttrEnchant
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CEnchantDeadCreature(CCard* pCard,
						  LPCTSTR strManaCost,
						  Power nPowerDelta, Life nLifeDelta,
						  bool bTapOnEnchant);
	virtual ~CEnchantDeadCreature() {}

	OVERRIDE(BOOL, OnEnchant)(CCard* pCard, ContextValue_& contextValue);
	OVERRIDE(void, OnDisenchant)(CCard* pCard, const ContextValue& contextValue);

	bool m_bTapOnEnchant;
};

//____________________________________________________________________________
//