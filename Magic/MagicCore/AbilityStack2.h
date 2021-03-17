#pragma once

class CTargetStackSpellAction;
class CManaConsumptionAbilityAction;
class CEnchant;
class CStack;

//____________________________________________________________________________
//
class CORE_EXPORT CPlayerEffectSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPlayerEffectSpell(CCard* pCard, AbilityType abilityType,
					 LPCTSTR strManaCost,
					 PlayerEffectType playerEffect,
					 BOOL bThisTurnOnly,
					 int nParam = 0,
					 BOOL bAdd = TRUE);
	virtual ~CPlayerEffectSpell() {}

public:
	PlayerEffectType GetPlayerEffect() const	{ return m_PlayerEffect; }

	int GetParam() const			{ return m_nParam; }
	BOOL GetThisTurnOnly() const	{ return m_bThisTurnOnly; }

	void SetAffectControllerOnly()	{ m_bAffectControllerOnly = TRUE; m_bAffectOpponentsOnly = FALSE; }
	void SetAffectOpponentsOnly()	{ m_bAffectOpponentsOnly = TRUE; m_bAffectControllerOnly = FALSE; }

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	PlayerEffectType	m_PlayerEffect;

	int		m_nParam;
	BOOL	m_bThisTurnOnly;
	BOOL	m_bAdd;
	BOOL	m_bAffectControllerOnly;
	BOOL	m_bAffectOpponentsOnly;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPumpAbility : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPumpAbility(CCard* pCard,
				 LPCTSTR strManaCost,
				 Power nPowerDelta, Life nLifeDelta,
				 CreatureKeyword creatureKeywordToAdd = CreatureKeyword::Null,
				 CCreatureCard* pCreatureCard = NULL); // if NULL, pumped creature is the ability's card
	virtual ~CPumpAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

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

	CCreatureModifiers&	GetOtherCreatureModifiers()  {return m_OtherCreatureModifiers; }
	const CCreatureModifiers& GetOtherCreatureModifiers() const {return m_OtherCreatureModifiers; }

	void AddAbilityModifier(CCardAbilityModifier::CreateAbilityCallback callback);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CLifeModifier				m_LifeModifier;
	CPowerModifier				m_PowerModifier;
	CCreatureKeywordModifier	m_CreatureKeywordModifier;
	CCardKeywordModifier		m_CardKeywordModifier;
	CCardModifiers				m_OtherCardModifiers;
	CCreatureModifiers			m_OtherCreatureModifiers;

	CCreatureCard*				m_pCreatureCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CRegenerationAbility : public CSpell	// Not a spell by default, ability only applies to owner cards
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	CRegenerationAbility(CCard* pCard, LPCTSTR strManaCost, 
					     CCreatureCard* pCreatureCard = NULL); // if NULL, same as pCard
	virtual ~CRegenerationAbility() {}

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CCreatureCard* m_pCreatureCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CRevealLibraryCardSpell : public CSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CRevealLibraryCardSpell(CCard* pCard,
							AbilityType abilityType,
						    LPCTSTR strManaCost,
							int nRevealCount);

	virtual ~CRevealLibraryCardSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	// Ref: 'Call of the Wild' and 'Commune with Nature'
	void SetRevealCardsToOthers(BOOL bRevealCardsToOthers, BOOL bRevealOnlySelected) 
	{ 
		m_bRevealCardsToOthers = bRevealCardsToOthers; 
		m_bRevealOnlySelected = bRevealOnlySelected;
	}

	/* Use SetSelectionOptions
	void SetRevealedCardsTo(CardComparer* pComparer,
		ZoneId toZoneId,
		MoveType moveType,
		ZoneId uToZoneId1 = ZoneId::Null);	// Invalid -> do not move card if not included
	*/

	void SetReorder(BOOL bReorder,
		ZoneId reorderToZone = ZoneId::Library,
		CardPlacement reorderToZonePlacement = CardPlacement::Top) 
	{ 
		AddAbilityTag(AbilityTag(ZoneId::Library, reorderToZone));

		m_bReorder = bReorder; 
		m_ReorderToZone = reorderToZone;
		m_ReorderToZonePlacement = reorderToZonePlacement;
	}

	void SetSelectionOptions(
		MinimumValue nMinSelectionCount,
		MaximumValue nMaxSelectionCount, // supports SpecialNumber::Any
		ZoneId selectToZone, 
		CardPlacement selectToZonePlacement,
		const CCardFilter* pSelectionCardFilter)
	{ 
		AddAbilityTag(AbilityTag(ZoneId::Library, selectToZone));

		m_nMaxSelectionCount = nMaxSelectionCount; 
		m_SelectToZone = selectToZone;
		m_SelectToZonePlacement = selectToZonePlacement;
		m_pSelectionCardFilter = pSelectionCardFilter;
		m_nMinSelectionCount = nMinSelectionCount;
	} 

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	int			m_nRevealCount;
	BOOL		m_bRevealCardsToOthers;
	BOOL		m_bRevealOnlySelected;
	BOOL		m_bReorder;
	ZoneId		m_ReorderToZone;
	CardPlacement m_ReorderToZonePlacement;

	/*
	CCardFilter	m_MoveCardFilter;
	MoveType	m_MoveType;
	ZoneId		m_uMoveToZoneId;
	ZoneId		m_uMoveToZoneId1;
	*/

	MaximumValue	m_nMaxSelectionCount;
	MinimumValue	m_nMinSelectionCount;
	ZoneId			m_SelectToZone;
	CardPlacement	m_SelectToZonePlacement;
	const CCardFilter* m_pSelectionCardFilter;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSearchLibrarySpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSearchLibrarySpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						const CCardFilter* pSearchCardFilter,
						ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped);
	virtual ~CSearchLibrarySpell() {}

public:
	void SetFromZoneId(ZoneId fromZoneId);	// Default is library, can use a combination of library and graveyard
	void SetSearchCount(MinimumValue nMinSearchCount, MaximumValue nMaxSearchCount);	// Default is 1, nMaxSearchCount == SpecialNumber::Any means any number 
	void SetRevealCards(BOOL bRevealCards);	// Default: true
	void SetRemoveRemainingCardsFromGame(BOOL bRemoveRemainingCardsFromGame);
	void SetOnlyPlayableIfControlsLess(const CCardFilter* pCompareCardFilter) 
	{ 
		m_pCompareCardFilter = pCompareCardFilter;
	}

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	const CCardFilter*	m_pSearchCardFilter;
	MaximumValue m_nMaxSearchCount;
	MinimumValue m_nMinSearchCount;
	ZoneId	m_FromZoneId;
	ZoneId	m_ToZoneId;
	BOOL	m_bTapped;
	BOOL	m_bRevealCards;
	BOOL	m_bRemoveRemainingCardsFromGame;
	BOOL	m_bToOwnersZone;
	BOOL	m_bToTop;
	const CCardFilter* m_pCompareCardFilter;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCounterSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

	friend CCostBase<class CManaCost>;

protected:
	CCounterSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost,
				  CardComparer* pComparer);	// Countered cards will go to graveyard by default
	virtual ~CCounterSpell() {}

public:
	const CCardFilter& GetCounterspellCardFilter() const	{ return m_CounterspellCardFilter; }
	CCardFilter& GetCounterspellCardFilter()				{ return m_CounterspellCardFilter; }

	void SetToZone(ZoneId toZone, BOOL bToOwner, CardPlacement bPlacement = CardPlacement::Top);	// Set zone countered cards go to
	void SetTargetOnlySpellsWithEqualCost();		// Ref: Spell Blast, will automatically use extra cost
	void SetToAlternateZone(
		CardComparer* pAlternateComparer,
		ZoneId toZone, BOOL bToOwner);				// Ref: Desertion

	void SetExtraCostToDenialCost();				// Ref: Power Sink
	void SetTapAllLands();							// "
	void SetClearManaPool();						// "
		
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	VIRTUAL(BOOL, CanDeflectTargetToSpell)(const CTargetStackSpellAction* pAction, const CCard* pSource) const;

	VIRTUAL(void, DeflectTargetToSpell)(CTargetStackSpellAction* pAction, CCard* pCard);
	VIRTUAL(CCost, GetSpecialDenialCost)(CPlayer* pPlayer);

	void SetExtraManaCost(int nExtraCost = SpecialNumber::Any,	
						  BOOL bAllowZeroExtra = TRUE,
						  const CManaCost::Colors& costColor = CManaCost::AllCostColors,
						  BOOL bDivide = FALSE,
						  BOOL bZeroExtraIsTrick = TRUE)
	{
		m_Cost.SetExtraManaCost(nExtraCost, bAllowZeroExtra, costColor, bDivide, bZeroExtraIsTrick);
	}

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	void OnPlacementSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_PlacementSelection;

	CCardFilter	m_CounterspellCardFilter;

	ZoneId		m_ToZone;
	BOOL		m_bToOwnersZone;
	CardPlacement m_bPlacement;

	ZoneId		m_ToAlternateZone;
	BOOL		m_bToAlternateOwnersZone;
	CCardFilter	m_AlternateZoneCardFilter;

	BOOL		m_bTargetOnlySpellsWithEqualCost;	// Ref: Spell Blast

	BOOL		m_bSetExtraCostToDenialCost;		// Ref: Power Sink
	BOOL		m_bTapAllLands;						// "
	BOOL		m_bClearManaPool;					// "
};

//____________________________________________________________________________
//
// Rewind: Counter target spell, _then_ untap up to four lands.
//
class CORE_EXPORT CCounterSpell2 : public CCounterSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCounterSpell2(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost,
				   CardComparer* pCounterspellCardComparer,
				   CardComparer* pUntapCardComparer,
				   int nMinUntap, int nMaxUntap);
	virtual ~CCounterSpell2() {}

public:
	CSubjectGatherer& GetUntapCardFilter() { return m_UntapCardFilter; }
	const CSubjectGatherer& GetUntapCardFilter() const { return m_UntapCardFilter; }
	
protected:
	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CSubjectGatherer m_UntapCardFilter;
	int m_nMinUntap;
	int m_nMaxUntap;
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDeflectionSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDeflectionSpell(CCard* pCard, AbilityType abilityType,
					 LPCTSTR strManaCost,
					 CardComparer* pDeflectionComparer);
	virtual ~CDeflectionSpell() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	VIRTUAL(BOOL, CanDeflectTargetToSpell)(const CTargetStackSpellAction* pAction, const CCard* pSource) const;	// Deflection spells can be responded to and their targets deflected
	VIRTUAL(void, DeflectTargetToSpell)(CTargetStackSpellAction* pAction, CCard* pCard);

	// Default: TRUE
	void SetDeflectSpells(BOOL bDeflectSpells) { m_bDeflectSpells = bDeflectSpells; }	

	// Default: FALSE
	void SetDeflectAbilities(BOOL bDeflectAbilities) { m_bDeflectAbilities = bDeflectAbilities; }

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CCardFilter m_DeflectionCardFilter;
	BOOL m_bDeflectSpells;
	BOOL m_bDeflectAbilities;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawCardSpellEx : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDrawCardSpellEx(CCard* pCard, AbilityType abilityType,
				     LPCTSTR strManaCost,
					 int nDrawCount);
	virtual ~CDrawCardSpellEx() {}

public:
	const CZoneModifier& GetZoneModifier() const { return m_ZoneModifier; }
	CZoneModifier& GetZoneModifier() { return m_ZoneModifier; }

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	int m_nDrawCount;
	CZoneModifier m_ZoneModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawCardSpell : public CSpell			// No support for reveals to other players yet
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDrawCardSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost,
				   int nDrawCount);		// Draw count will increase if extra costs are paid
	virtual ~CDrawCardSpell() {}

public:
	void SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType = MoveType::Discard,
		ZoneId discardToZone = ZoneId::Graveyard, BOOL bDiscardToOwner = TRUE,
		CardPlacement discardToPlacement = CardPlacement::Top);

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	VIRTUAL(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction) { return 0; }

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	int		m_nDrawCount;

	int		m_nDiscardCount;
	BOOL	m_bFromDrawsOnly;
	ZoneId	m_DiscardToZone;
	BOOL	m_bDiscardToOwner;
	MoveType	m_DiscardMoveType;
	CardPlacement	m_DiscardToPlacement;

	// State managed
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
	CCountedCardContainer_			m_DiscardedCards;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawCardSpell3 : public CSpell			// Ref: Tolarian Winds: Discard your hand, then draw that many cards
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDrawCardSpell3(CCard* pCard, AbilityType abilityType,
				    LPCTSTR strManaCost);

	virtual ~CDrawCardSpell3() {}

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CPlayExtraLandSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPlayExtraLandSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 int nAdditionalLandCount, BOOL bThisTurnOnly);

	virtual ~CPlayExtraLandSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	int		m_nAdditionalLandCount;
	BOOL	m_bThisTurnOnly;
};

//____________________________________________________________________________
//
class CORE_EXPORT CExtraCombatSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CExtraCombatSpell(CCard* pCard, AbilityType abilityType,
						   LPCTSTR strManaCost,
						   BOOL bUntapAttackedThisTurn,
						   int nAdditionalAttackCount, BOOL bThisTurnOnly);

	virtual ~CExtraCombatSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	BOOL	m_bUntapAttackedThisTurn;
	int		m_nAdditionalAttackCount;
	BOOL	m_bThisTurnOnly;
};

//____________________________________________________________________________
//
class CORE_EXPORT CChgLifeSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CChgLifeSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost,
				  Life nLifeDelta, PreventableType preventable);		// Life Delta will increase/decrease if extra costs are paid

	virtual ~CChgLifeSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetExtraManaCost(int nExtraCost = SpecialNumber::Any,	
						  BOOL bAllowZeroExtra = TRUE,
						  const CManaCost::Colors& costColor = CManaCost::AllCostColors,
						  BOOL bDivide = FALSE,
						  BOOL bZeroExtraIsTrick = TRUE)
	{
		m_Cost.SetExtraManaCost(nExtraCost, bAllowZeroExtra, costColor, bDivide, bZeroExtraIsTrick);
	}
	void SetExtraValueMultiplier(int nMultiplier) { m_nMultiplier = nMultiplier; }	// Ref: Essence Bottle

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CLifeModifier	m_LifeModifier;
	int				m_nMultiplier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CChgLifeBySurveySpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CChgLifeBySurveySpell(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost, 
							  BOOL bSurveyOpponentZones = FALSE,
							  BOOL bSurveyControllerZones = TRUE);

	virtual ~CChgLifeBySurveySpell() {}

public:
	CPlayerFilter& GetPlayerFilter() { return m_PlayerFilter; }
	const CPlayerFilter& GetPlayerFilter() const { return m_PlayerFilter; }

	void SetAttackedByMultiplier(int nMultiplier);	// Ref: Blessed Reversal
	void SetCardsMultiplier(int nMultiplier,
		const CCardFilter* pSurveyCardFilter,
		ZoneId zoneId);	// Ref: Gerrard's Wisdom

	int GetAttackedByMultiplier() const { return m_nAttackedByMultiplier; }
	int GetCardsMultiplier() const		{ return m_nCardsMultiplier; }

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CLifeModifier GetLifeDeltaResolutionModifier() const;

	CPlayerFilter		m_PlayerFilter;

	ZoneId				m_ZoneId;
	const CCardFilter*	m_pSurveyCardFilter;
	int					m_nCardsMultiplier;

	int					m_nAttackedByMultiplier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSelfUntapAbility : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSelfUntapAbility(CCard* pCard, LPCTSTR strManaCost);
	virtual ~CSelfUntapAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CSelfMoveCardAbility : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	CSelfMoveCardAbility(CCard* pCard,
						 LPCTSTR strManaCost,
						 ZoneId toZoneId, BOOL bToOwner, MoveType moveType);
	virtual ~CSelfMoveCardAbility() {}

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	BOOL	m_bToOwner;
	ZoneId	m_ToZoneId;
	MoveType m_MoveType;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDamagePreventionSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDamagePreventionSpell(CCard* pCard, AbilityType abilityType,
						   LPCTSTR strManaCost,
						   Life nLifeDelta,
						   SourceColor sourceColor,
						   BOOL bPreventDamageToController);
	virtual ~CDamagePreventionSpell() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	BOOL GetPreventDamageToController() const { return m_bPreventDamageToController; }

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	Life		m_nLifeDelta;
	SourceColor	m_SourceColor;
	BOOL		m_bPreventDamageToController;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTokenProductionSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTokenProductionSpell(CCard* pCard, AbilityType abilityType,
					   LPCTSTR strManaCost,
					   LPCTSTR strTokenName,
					   UINT uID,
					   int nTokenCount);
	virtual ~CTokenProductionSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetExtraManaCost(int nExtraCost = SpecialNumber::Any,	
						  BOOL bAllowZeroExtra = TRUE,
						  const CManaCost::Colors& costColor = CManaCost::AllCostColors,
						  BOOL bDivide = FALSE,
						  BOOL bZeroExtraIsTrick = TRUE)
	{
		m_Cost.SetExtraManaCost(nExtraCost, bAllowZeroExtra, costColor, bDivide, bZeroExtraIsTrick);
	}

	void FlagTokens(BOOL bFlag,								// if set, tokens will be flagged by CardFlag::AbilityFlag and the ability's instance ID.
					BOOL bKeepFlagUntilEndOfTurn = FALSE);	// if set, flags are not cleared until end of turn. Normally flags are cleared immediately after resolutions.

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
	OVERRIDE(void, OnResolutionCompleted)(const CAbilityAction* pAction, BOOL bResolutionResult);

	CString				m_strTokenName;
	CString				m_strTokenDisplayName;
	UINT				m_uID;
	int					m_nTokenCount;
	CCardFlagModifier	m_CardFlagModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CRandomTokenProductionSpell		// Ref: Bottle of Suleiman
	: public CSpell		
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CRandomTokenProductionSpell(CCard* pCard, AbilityType abilityType,
								LPCTSTR strManaCost,
								LPCTSTR strTokenName,
								UINT uID,
								int nTokenCount,
								Life nLifeDelta);
	virtual ~CRandomTokenProductionSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetExtraManaCost(int nExtraCost = SpecialNumber::Any,	
						  BOOL bAllowZeroExtra = TRUE,
						  const CManaCost::Colors& costColor = CManaCost::AllCostColors,
						  BOOL bDivide = FALSE,
						  BOOL bZeroExtraIsTrick = TRUE)
	{
		m_Cost.SetExtraManaCost(nExtraCost, bAllowZeroExtra, costColor, bDivide, bZeroExtraIsTrick);
	}

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CString		m_strTokenName;
	UINT		m_uID;
	int			m_nTokenCount;

	CLifeModifier	m_LifeModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTokenProductionBySurveySpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTokenProductionBySurveySpell(CCard* pCard, AbilityType abilityType,
								  LPCTSTR strManaCost,
								  CardComparer* pSurveyComparer,
								  BOOL bUntappedOnly,
								  BOOL bOpponentsAlso,
								  LPCTSTR strTokenName,
								  UINT uID,
								  int nTokenMultipler = 1);
	virtual ~CTokenProductionBySurveySpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	
protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CString		m_strTokenName;
	UINT		m_uID;
	int			m_nTokenMultipler;
	CCardFilter	m_SurveyCardFilter;
	BOOL		m_bUntappedOnly;
	BOOL		m_bOpponentsAlso;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDiscardCardSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDiscardCardSpell(CCard* pCard, AbilityType abilityType,
					  LPCTSTR strManaCost,
					  int nDiscardCount,
					  MoveType discardMoveType,
					  const CCardFilter* pDiscardCardFilter,
					  ZoneId toZone = ZoneId::Graveyard,
					  BOOL bToOwner = TRUE);
	virtual ~CDiscardCardSpell() {}

public:
	void SetSearchCards(const CCardFilter* pSearchCardFilter, // Note: ref-Recall, cards are searched before the discard
						ZoneId fromZone,
						int nSearchCount,				// If SpecialNumber::Any, equals to discard count
						BOOL bRevealSearchCards);

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	void SetExtraManaCost(int nExtraCost = SpecialNumber::Any,	
						  BOOL bAllowZeroExtra = TRUE,
						  const CManaCost::Colors& costColor = CManaCost::AllCostColors,
						  BOOL bDivide = FALSE,
						  BOOL bZeroExtraIsTrick = TRUE)
	{
		m_Cost.SetExtraManaCost(nExtraCost, bAllowZeroExtra, costColor, bDivide, bZeroExtraIsTrick);
	}

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	VIRTUAL(void, OnDiscardCards)(const CManaConsumptionAbilityAction* pAction1, CCountedCardContainer* pDiscardedCards) {};

	int			m_nDiscardCount;
	ZoneId		m_ToZone;
	BOOL		m_bToOwner;
	const CCardFilter*	m_pDiscardCardFilter;
	MoveType	m_DiscardMoveType;

	const CCardFilter*	m_pSearchCardFilter;
	ZoneId		m_SearchFromZoneId;
	int			m_nSearchCount;
	BOOL		m_bRevealSearchCards;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDiscardCardSpell2 : public CDiscardCardSpell	
// Ref: Flash: Put a creature card from your hand into play. You may pay its mana cost reduced by up to 2. If you don't, sacrifice it.
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDiscardCardSpell2(CCard* pCard, AbilityType abilityType,
					   LPCTSTR strManaCost,
					   MoveType discardMoveType,
					   const CCardFilter* pDiscardCardFilter,
					   int nLessColorlessCost,
					   bool bExtraCost);
	virtual ~CDiscardCardSpell2() {}

	OVERRIDE(void, OnDiscardCards)(const CManaConsumptionAbilityAction* pAction1, CCountedCardContainer* pDiscardedCards);
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pPlayer);

	int		m_nLessColorlessCost;
	bool	m_bExtraCost;
};

//____________________________________________________________________________
//
class CORE_EXPORT CRepayManaCostSpell : public CSpell				// Ref: Tariff: Each player chooses a creature with the highest converted mana cost he or she controls, then plays mana equal to that cost or sacrifices that creature.
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CRepayManaCostSpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						CardComparer* pRepayComparer);
	virtual ~CRepayManaCostSpell() {}

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	void PromptForSelection(CPlayer* pPlayer, CPlayer* pCaster);
	void RepayManaCost(CCard* pCard, CPlayer* pCaster);
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pPlayer);

	CCardFilter	m_RepayCardFilter;

	// State managed

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
// Thieves' Auction
// Set aside all cards in play. Starting with you, each player chooses one of the cards set 
// aside and puts it into play tapped under his or her control. Repeat this process until 
// all those cards have been chosen. 
//
class CORE_EXPORT CAuctionSpell : public CSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	void SetTapped() { m_bTapped = TRUE; }

protected:
	CAuctionSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost);
	virtual ~CAuctionSpell() {}

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	bool IsSelectionPossibleForCard(const CPlayer* pPlayer, const CCard* pCard);
	bool IsSelectionPossible(const CPlayer* pPlayer);
	void ContinueSelection(CPlayer* pPlayer);
	bool SelectEnchantTarget(CPlayer* pPlayer, CCard* pEnchantCard);
	void SelectCard(CCard* pCard, CCard* pEnchantCard, CPlayer* pPlayer);

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
	CCountedCardContainer_ m_ToSelect;
	BOOL m_bTapped;
};

//____________________________________________________________________________
//
class CORE_EXPORT CManaFilterSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CManaFilterSpell(CCard* pCard, AbilityType abilityType,
					   LPCTSTR strManaCost, LPCTSTR strManaPool);
	virtual ~CManaFilterSpell() {}

public:
	const CManaPool& GetManaPool() const { return m_ManaPool; }

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CManaPool m_ManaPool;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawCardSpell2 : public CSpell				// Ref: Collective Unconscious
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDrawCardSpell2(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
					ZoneId uSurveyZoneId, BOOL bSurveyCastersZone, BOOL bSurveyOpponentsZone);
	virtual ~CDrawCardSpell2() {}

public:
	CCardFilter& GetSurveyCardFilter() { return m_SurveyCardFilter; }
	const CCardFilter& GetSurveyCardFilter() const { return m_SurveyCardFilter; }

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CCardFilter	m_SurveyCardFilter;
	ZoneId		m_uSurveyZoneId;
	BOOL		m_bSurveyCastersZone;
	BOOL		m_bSurveyOpponentsZone;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawCardSpell4 : public CSpell				// Ref: Reprocess
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDrawCardSpell4(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
					int nSacrificeCount,
					const CCardFilter* pSacrificeCardFilter);
	virtual ~CDrawCardSpell4() {}

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	int		m_nSacrificeCount;
	const CCardFilter* m_pSacrificeCardFilter;

	// State managed

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawCardSpell5 : public CSpell				// Ref: Necrologia
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDrawCardSpell5(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost);
	virtual ~CDrawCardSpell5() {}

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
// Greater Good: Sacrifice a creature: draw cards equal to the sacrificed creature's power, then discard three cards
//
class CORE_EXPORT CDrawCardSpell6 : public CDrawCardSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDrawCardSpell6(CCard* pCard, AbilityType abilityType,
					LPCTSTR strManaCost,
					const CCardFilter* pSacrificeCardFilter);
	virtual ~CDrawCardSpell6() {}

	OVERRIDE(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CIsAlsoAAbility : public CSpell	// Not a spell by default, ability only applies to owner cards
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CIsAlsoAAbility(CCard* pCard, LPCTSTR strManaCost, 
					LPCTSTR strToken,
					UINT uID,
					CCard* pACard = NULL, NodeId UntilNode = NodeId::CleanupStep2); // if NULL, same as pCard
	virtual ~CIsAlsoAAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	void SetDoesntEnd()  {m_UntilNode = NodeId::Null;}

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CCard* m_pACard;
	CString m_strToken;
	UINT m_uID;
	NodeId m_UntilNode;
};
//____________________________________________________________________________
//
/*
class CORE_EXPORT CSneakAttackSpell : public CDiscardCardSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSneakAttackSpell(CCard* pCard, AbilityType abilityType,
					   LPCTSTR strManaCost,
					   MoveType discardMoveType,
					   const CCardFilter* pDiscardCardFilter);
	virtual ~CSneakAttackSpell() {}

	OVERRIDE(void, OnDiscardCards)(const CManaConsumptionAbilityAction* pAction1, CCountedCardContainer* pDiscardedCards);
	void PreRemoveAbilityCallback(CCard* pCard, CPlayer* pPlayer);
	
};
*/
//____________________________________________________________________________
//
class CORE_EXPORT CSpellstutterSpriteSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSpellstutterSpriteSpell(CCard* pCard, AbilityType abilityType,
				  LPCTSTR strManaCost,
				  CardComparer* pComparer);	// Countered cards will go to graveyard by default
	virtual ~CSpellstutterSpriteSpell() {}

public:
	const CCardFilter& GetCounterspellCardFilter() const	{ return m_CounterspellCardFilter; }
	CCardFilter& GetCounterspellCardFilter()				{ return m_CounterspellCardFilter; }

	void SetToZone(ZoneId toZone, BOOL bToOwner);	// Set zone countered cards go to
	void SetTargetOnlySpellsWithEqualCost();		// Ref: Spell Blast, will automatically use extra cost
	void SetToAlternateZone(
		CardComparer* pAlternateComparer,
		ZoneId toZone, BOOL bToOwner);				// Ref: Desertion

	void SetExtraCostToDenialCost();				// Ref: Power Sink
	void SetTapAllLands();							// "
	void SetClearManaPool();						// "
		
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	VIRTUAL(BOOL, CanDeflectTargetToSpell)(const CTargetStackSpellAction* pAction, const CCard* pSource) const;

	VIRTUAL(void, DeflectTargetToSpell)(CTargetStackSpellAction* pAction, CCard* pCard);

	void SetExtraManaCost(int nExtraCost = SpecialNumber::Any,	
						  BOOL bAllowZeroExtra = TRUE,
						  const CManaCost::Colors& costColor = CManaCost::AllCostColors,
						  BOOL bDivide = FALSE,
						  BOOL bZeroExtraIsTrick = TRUE)
	{
		m_Cost.SetExtraManaCost(nExtraCost, bAllowZeroExtra, costColor, bDivide, bZeroExtraIsTrick);
	}

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CCardFilter	m_CounterspellCardFilter;

	ZoneId		m_ToZone;
	BOOL		m_bToOwnersZone;

	ZoneId		m_ToAlternateZone;
	BOOL		m_bToAlternateOwnersZone;
	CCardFilter	m_AlternateZoneCardFilter;

	BOOL		m_bTargetOnlySpellsWithEqualCost;	// Ref: Spell Blast

	BOOL		m_bSetExtraCostToDenialCost;		// Ref: Power Sink
	BOOL		m_bTapAllLands;						// "
	BOOL		m_bClearManaPool;					// "
};

//____________________________________________________________________________
//
class CORE_EXPORT CExplosiveKegSpell : public CSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CExplosiveKegSpell(CCard* pCard,
							AbilityType abilityType,
						    LPCTSTR strManaCost,
							CardComparer* pComparer,
							ZoneId toZoneId, MoveType moveType,
							ZoneId fromZoneId, LPCTSTR p_name, int card = 1 );

	virtual ~CExplosiveKegSpell() {}

	// 0 - Powder keg
	// 1 - Engineered Explosives

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
	//CardComparer* nComparer;
	LPCTSTR m_name;
	ZoneId m_toZoneId;
	ZoneId m_fromZoneId;
	MoveType m_moveType;
	int m_card;
	

};

//____________________________________________________________________________
//
class CORE_EXPORT CDrawCardBreakthroughSpell : public CSpell			// No support for reveals to other players yet
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDrawCardBreakthroughSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost,
				   int nDrawCount);		// Draw count will increase if extra costs are paid
	virtual ~CDrawCardBreakthroughSpell() {}

public:
	void SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
		ZoneId discardToZone = ZoneId::Graveyard, BOOL bDiscardToOwner = TRUE,
		CardPlacement discardToPlacement = CardPlacement::Top);

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	VIRTUAL(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction) { return 0; }

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	int		m_nDrawCount;
	int		m_nDiscardCount;
	BOOL	m_bFromDrawsOnly;
	ZoneId	m_DiscardToZone;
	BOOL	m_bDiscardToOwner;
	MoveType	m_DiscardMoveType;

	CardPlacement	m_DiscardToPlacement;

	// State managed

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
	CCountedCardContainer_			m_DiscardedCards;
};

//____________________________________________________________________________
//
class CORE_EXPORT CThirstforKnowledgeSpell : public CSpell			// No support for reveals to other players yet
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CThirstforKnowledgeSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost,
				   int nDrawCount);		// Draw count will increase if extra costs are paid
	virtual ~CThirstforKnowledgeSpell() {}

public:
	void SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
		ZoneId discardToZone = ZoneId::Graveyard, BOOL bDiscardToOwner = TRUE,
		CardPlacement discardToPlacement = CardPlacement::Top);

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	VIRTUAL(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction) { return 0; }

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	int		m_nDrawCount;
	int		m_nDiscardCount;
	BOOL	m_bFromDrawsOnly;
	ZoneId	m_DiscardToZone;
	BOOL	m_bDiscardToOwner;
	MoveType	m_DiscardMoveType;

	CardPlacement	m_DiscardToPlacement;

	// State managed

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
	CCountedCardContainer_			m_DiscardedCards;
};

//____________________________________________________________________________
//
class CORE_EXPORT CPerniciousDeedSpell : public CSpell			
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPerniciousDeedSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost,
				   const CCardFilter* pCardFilter);	
	virtual ~CPerniciousDeedSpell() {}

public:

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	VIRTUAL(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction) { return 0; }

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	const CCardFilter* m_pCardFilter;
	//CCardFilter* m_FilterTemp;
	CardComparer* m_pComparer;
};

//____________________________________________________________________________
//
class CORE_EXPORT CCyclingSpell : public CDrawCardSpell			
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCyclingSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost);		
	virtual ~CCyclingSpell() {}


protected:	

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

};

//____________________________________________________________________________
//
class CORE_EXPORT CSearchCyclingSpell : public CSearchLibrarySpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSearchCyclingSpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						const CCardFilter* pSearchCardFilter);
	virtual ~CSearchCyclingSpell() {}

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

};

//____________________________________________________________________________
//

class CORE_EXPORT CKodamasReachSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CKodamasReachSpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						const CCardFilter* pSearchCardFilter,
						ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped);
	virtual ~CKodamasReachSpell() {}

public:
	void SetFromZoneId(ZoneId fromZoneId);	// Default is library, can use a combination of library and graveyard
	void SetSearchCount(MinimumValue nMinSearchCount, MaximumValue nMaxSearchCount);	// Default is 1, nMaxSearchCount == SpecialNumber::Any means any number 
	void SetRevealCards(BOOL bRevealCards);	// Default: true
	void SetRemoveRemainingCardsFromGame(BOOL bRemoveRemainingCardsFromGame);
	void SetOnlyPlayableIfControlsLess(const CCardFilter* pCompareCardFilter) 
	{ 
		m_pCompareCardFilter = pCompareCardFilter;
	}

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	const CCardFilter*	m_pSearchCardFilter;
	MaximumValue m_nMaxSearchCount;
	MinimumValue m_nMinSearchCount;
	ZoneId	m_FromZoneId;
	ZoneId	m_ToZoneId;
	BOOL	m_bTapped;
	BOOL	m_bRevealCards;
	BOOL	m_bRemoveRemainingCardsFromGame;
	BOOL	m_bToOwnersZone;
	BOOL	m_bToTop;
	const CCardFilter* m_pCompareCardFilter;

	CCountedCardContainer m_SearchedCards;
	CSelectionSupport m_SelectionSupport;
};

//____________________________________________________________________________
//
class CORE_EXPORT CJaradsOrdersSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CJaradsOrdersSpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						const CCardFilter* pSearchCardFilter,
						ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped);
	virtual ~CJaradsOrdersSpell() {}

public:
	void SetFromZoneId(ZoneId fromZoneId);	// Default is library, can use a combination of library and graveyard
	void SetSearchCount(MinimumValue nMinSearchCount, MaximumValue nMaxSearchCount);	// Default is 1, nMaxSearchCount == SpecialNumber::Any means any number 
	void SetRevealCards(BOOL bRevealCards);	// Default: true
	void SetRemoveRemainingCardsFromGame(BOOL bRemoveRemainingCardsFromGame);
	void SetOnlyPlayableIfControlsLess(const CCardFilter* pCompareCardFilter) 
	{ 
		m_pCompareCardFilter = pCompareCardFilter;
	}

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	const CCardFilter*	m_pSearchCardFilter;
	MaximumValue m_nMaxSearchCount;
	MinimumValue m_nMinSearchCount;
	ZoneId	m_FromZoneId;
	ZoneId	m_ToZoneId;
	BOOL	m_bTapped;
	BOOL	m_bRevealCards;
	BOOL	m_bRemoveRemainingCardsFromGame;
	BOOL	m_bToOwnersZone;
	BOOL	m_bToTop;
	const CCardFilter* m_pCompareCardFilter;

	CCountedCardContainer m_SearchedCards;
	CSelectionSupport m_SelectionSupport;
};

//____________________________________________________________________________
//
class CORE_EXPORT CScapeshiftSpell : public CSpell				// Ref: Scapeshift   - Should be moved to AbilityStack2 when Gander finishes his cost changes
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CScapeshiftSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost,
					int nSacrificeCount,
					const CCardFilter* pSacrificeCardFilter, const CCardFilter* pSearchCardFilter);
	virtual ~CScapeshiftSpell() {}

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	int		m_nSacrificeCount;
	const CCardFilter* m_pSacrificeCardFilter;
	const CCardFilter* m_pSearchCardFilter;

	// State managed

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CAEtherVialSpell : public CSpell			
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CAEtherVialSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost,
				   const CCardFilter* pCardFilter, LPCTSTR nCounterName);	
	virtual ~CAEtherVialSpell() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	VIRTUAL(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction) { return 0; }

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	//CardComparer* m_pComparer;
	LPCTSTR m_nCounterName;
	//CCardFilter* temp_filter;
	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGenesisWaveSpell : public CSpell			
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGenesisWaveSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost, const CCardFilter* pCardFilter);	
	virtual ~CGenesisWaveSpell() {}

public:

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	VIRTUAL(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction) { return 0; }

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	const CCardFilter* m_pCardFilter;	
};

//____________________________________________________________________________
//
class CORE_EXPORT CExtraPumpAbility : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CExtraPumpAbility(CCard* pCard,
				 LPCTSTR strManaCost,
				 Power nPowerDelta, Life nLifeDelta,				 
				 CCreatureCard* pCreatureCard = NULL); // if NULL, pumped creature is the ability's card
	virtual ~CExtraPumpAbility() {}

public:	
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	CLifeModifier& GetLifeModifier() { return m_LifeModifier; }
	CPowerModifier& GetPowerModifier() { return m_PowerModifier; }

	const CLifeModifier& GetLifeModifier() const { return m_LifeModifier; }
	const CPowerModifier& GetPowerModifier() const { return m_PowerModifier; }

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CLifeModifier				m_LifeModifier;
	CPowerModifier				m_PowerModifier;

	CCreatureCard*				m_pCreatureCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CRhystheRedeemedAbility : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CRhystheRedeemedAbility(CCard* pCard,
				 LPCTSTR strManaCost);
	virtual ~CRhystheRedeemedAbility() {}

public:	
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);	
};

//____________________________________________________________________________
//
class CORE_EXPORT CCounterAbilitySpell : public CSpell	
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CCounterAbilitySpell(CCard* pCard,
							AbilityType abilityType,
						    LPCTSTR strManaCost, const CCardFilter* pCardFilter, 
							BOOL pSeparate = FALSE,
							BOOL pTriggered = TRUE); // if separate is TRUE pTriggered = TRUE - triggered ability only FALSE - activated ability only

	virtual ~CCounterAbilitySpell() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);	

protected:
	BOOL m_pSeparate;
	BOOL m_pTriggered;
	const CCardFilter* m_pCardFilter;
};

//____________________________________________________________________________
//
struct FreecastCardActionsSelection
{		
	FreecastCardActionsSelection(const FreecastCardActionsSelection& s)
		: SpellIndex(s.SpellIndex)
		, ActionIndex(s.ActionIndex)
	{}
	FreecastCardActionsSelection()
		: SpellIndex(99999)
		, ActionIndex(99999)
	{}

	CStackAbility* GetAbility(CCard* c)const{return c->GetSpells().GetAt(SpellIndex);}
	CCost_& GetCost(CCard* c)const			{return GetAbility(c)->GetCost();}
	void PerformAction(CCard* c)const		{GetAbility(c)->GetAbilityActions(TRUE,TRUE)->PerformAction(ActionIndex);}
	counted_ptr <CAction> GetAction(CCard* c)		{return GetAbility(c)->GetAbilityActions(TRUE,TRUE)->GetAt(ActionIndex);}

	void RemoveReductionCost(CCard* c)const	{GetCost(c).RemoveReductionCost(GetCost(c).GetOriginalManaCost());}
	void AddReductionCost(CCard* c)const	{GetCost(c).AddReductionCost(GetCost(c).GetOriginalManaCost());}
	void AddTotalReductionCost(CCard* c)const	{GetCost(c).AddReductionCost(GetCost(c).GetOriginalManaCost());
												 GetCost(c).AddReductionCost(GetCost(c).GetIncreasedCost()); }
	void RemoveTotalReductionCost(CCard* c)const	{GetCost(c).RemoveReductionCost(GetCost(c).GetOriginalManaCost());
												  	GetCost(c).RemoveReductionCost(GetCost(c).GetIncreasedCost());	}

	bool operator==(const FreecastCardActionsSelection& v) const
	{
		return SpellIndex == v.SpellIndex && ActionIndex == v.ActionIndex;
	}

	bool operator!=(const FreecastCardActionsSelection& v) const
	{
		return !operator==(v);
	}

	int SpellIndex;
	int ActionIndex;
};


class CORE_EXPORT CHideawayFreeCastAbility : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CHideawayFreeCastAbility(CCard* pCard,
				  AbilityType abilityType, LPCTSTR strManaCost, const CCardFilter* pFreeCastCardFilter);
	virtual ~CHideawayFreeCastAbility() {}

public:	
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);	
	const CCardFilter* m_pFreeCastCardFilter;

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;
};

//____________________________________________________________________________
//
struct AttackSubjectStorage
{		
	AttackSubjectStorage(CCreatureCard* pAttacker, CPlayer* pPlayer, CPlaneswalkerCard* pWalker)
		: m_pAttacker(pAttacker)
		, m_pAttackedPlayer(pPlayer)
		, m_pAttackedPlaneswalker(pWalker)
	{}
	AttackSubjectStorage()
		: m_pAttacker(NULL)
		, m_pAttackedPlayer(NULL)
		, m_pAttackedPlaneswalker(NULL)
	{}

	bool operator==(const AttackSubjectStorage& v) const
	{
		return m_pAttacker == v.m_pAttacker && m_pAttackedPlayer == v.m_pAttackedPlayer && m_pAttackedPlaneswalker == v.m_pAttackedPlaneswalker;
	}

	bool operator!=(const AttackSubjectStorage& v) const
	{
		return !operator==(v);
	}


	CCreatureCard * m_pAttacker;
	CPlayer* m_pAttackedPlayer;
	CPlaneswalkerCard* m_pAttackedPlaneswalker;
	
};

class CORE_EXPORT CNinjutsuSelfMoveCardAbility : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	CNinjutsuSelfMoveCardAbility(CCard* pCard,
						 LPCTSTR strManaCost,
						 ZoneId toZoneId, BOOL bToOwner, MoveType moveType);
	virtual ~CNinjutsuSelfMoveCardAbility() {}

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	BOOL	m_bToOwner;
	ZoneId	m_ToZoneId;
	MoveType m_MoveType;

	CCardFilter m_CardFilter;

	vector<AttackSubjectStorage>	m_Selection;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDistantMemoriesSearchLibrarySpell : public CSearchLibrarySpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CDistantMemoriesSearchLibrarySpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						const CCardFilter* pSearchCardFilter,
						ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped);
	virtual ~CDistantMemoriesSearchLibrarySpell() {}

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport m_SelectionSupport;
};

//____________________________________________________________________________
//
class CORE_EXPORT CMyrIncubatorSearchLibrarySpell : public CSearchLibrarySpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CMyrIncubatorSearchLibrarySpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						const CCardFilter* pSearchCardFilter,
						ZoneId toZoneId, BOOL bToOwnersZone, BOOL bToTop, BOOL bTapped);
	virtual ~CMyrIncubatorSearchLibrarySpell() {}

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CReorderZoneSpell : public CSpell	// Ref: Fossil Find
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CReorderZoneSpell(CCard* pCard, AbilityType abilityType,
				    LPCTSTR strManaCost, ZoneId zone);

	virtual ~CReorderZoneSpell() {}

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	ZoneId	m_Zone;
};

//____________________________________________________________________________
//
// Only until EoT modifiers should be used here
class CORE_EXPORT CModifyEnchantedCardAbility : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CModifyEnchantedCardAbility(CCard* pCard, CEnchant* pEnchantSpell, LPCTSTR strManaCost);
	virtual ~CModifyEnchantedCardAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;

	const CCardModifiers& GetCardModifiers() const { return m_CardModifiers; }
	CCardModifiers& GetCardModifiers() { return m_CardModifiers; }

	const CCreatureModifiers& GetCreatureModifiers() const { return m_CreatureModifiers; }
	CCreatureModifiers& GetCreatureModifiers() { return m_CreatureModifiers; }

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	CCardModifiers m_CardModifiers;
	CCreatureModifiers m_CreatureModifiers;
	CEnchant* m_pEnchantSpell;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGenericSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGenericSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost);
	virtual ~CGenericSpell() {}
};

//____________________________________________________________________________
//
class CORE_EXPORT CWarpWorldSpell : public CSpell			
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CWarpWorldSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost);	
	virtual ~CWarpWorldSpell() {}

public:

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	VIRTUAL(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction) { return 0; }

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//
class CORE_EXPORT CPunishmentSpell : public CSpell			
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CPunishmentSpell(CCard* pCard, AbilityType abilityType,
				   LPCTSTR strManaCost,
				   const CCardFilter* pCardFilter);	
	virtual ~CPunishmentSpell() {}

public:

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	VIRTUAL(int, GetExtraDrawCount)(const CManaConsumptionAbilityAction* pAction) { return 0; }

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	const CCardFilter* m_pCardFilter;
	//CCardFilter* m_FilterTemp;
	CardComparer* m_pComparer;
};

//____________________________________________________________________________
//

class CORE_EXPORT CSearchFreeCastAbility : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSearchFreeCastAbility(CCard* pCard,
				  AbilityType abilityType, LPCTSTR strManaCost, const CCardFilter* pFreeCastCardFilter);
	virtual ~CSearchFreeCastAbility() {}

public:	
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);	
	const CCardFilter* m_pFreeCastCardFilter;

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	CSelectionSupport m_CardSelection;

	void CardtoCastSelectionRun(CPlayer* pPlayer);
	void FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer);
	void PostProcessCards();

	CCountedCardContainer_ toCastCard;
	CCountedCardContainer_ toCastCard1;
};

//____________________________________________________________________________
//
class CORE_EXPORT CEpicExperimentSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CEpicExperimentSpell(CCard* pCard, AbilityType abilityType,
				     LPCTSTR strManaCos, const CCardFilter* pFreeCastCardFilter);
	virtual ~CEpicExperimentSpell() {}

public:

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	const CCardFilter* m_pFreeCastCardFilter;

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	CSelectionSupport m_CardSelection;

	void CardtoCastSelectionRun(CPlayer* pPlayer);
	void FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer);
	void PostProcessCards();

	CCountedCardContainer_ toCastCard;
	CCountedCardContainer_ toCastCard1;
};

//____________________________________________________________________________
//
class CORE_EXPORT CChandraAblazeUltimateSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CChandraAblazeUltimateSpell(CCard* pCard, AbilityType abilityType,
				     LPCTSTR strManaCos, const CCardFilter* pFreeCastCardFilter);
	virtual ~CChandraAblazeUltimateSpell() {}

public:

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	const CCardFilter* m_pFreeCastCardFilter;

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	CSelectionSupport m_CardSelection;

	void CardtoCastSelectionRun(CPlayer* pPlayer);
	void FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer);

	CCountedCardContainer_ toCastCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSpawnsireOfUlamogSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSpawnsireOfUlamogSpell(CCard* pCard, AbilityType abilityType,
				     LPCTSTR strManaCos, const CCardFilter* pFreeCastCardFilter);
	virtual ~CSpawnsireOfUlamogSpell() {}

public:

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	const CCardFilter* m_pFreeCastCardFilter;

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	CSelectionSupport m_CardSelection;

	void CardtoCastSelectionRun(CPlayer* pPlayer);
	void FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer);

	CCountedCardContainer_ toCastCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CBrilliantUltimatumSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CBrilliantUltimatumSpell(CCard* pCard, AbilityType abilityType,
				     LPCTSTR strManaCos, const CCardFilter* pFreeCastCardFilter, int nCards);
	virtual ~CBrilliantUltimatumSpell() {}

public:

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	const CCardFilter* m_pFreeCastCardFilter;
	int m_nCards;

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCardSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);


	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;

	CSelectionSupport m_CardSelection;

	void CardtoCastSelectionRun(CPlayer* pPlayer);
	void FreeCastSelectionRun(CCard* toCast, CPlayer* pPlayer);
	void ProcessPiling(CPlayer* pPlayer1, CPlayer* pPlayer2);
	void OnTargetZoneSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	CSelectionSupport		m_TargetZoneSelection;

	CCountedCardContainer_ toCastCard;
	CCountedCardContainer_ toCastCard1;
	CCountedCardContainer_ toCastCard2;
	CCountedCardContainer_ m_SelectedCards1;
	CCountedCardContainer_ m_SelectedCards2;
};

//____________________________________________________________________________
//
class CORE_EXPORT CXLowerLimitSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CXLowerLimitSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost, int LowerLimit = 1);
	virtual ~CXLowerLimitSpell() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	int_ m_nLowerLimit;
};

//____________________________________________________________________________
//
class CORE_EXPORT CUnexpectedResultsSpell : public CSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CUnexpectedResultsSpell(CCard* pCard,
				  AbilityType abilityType, LPCTSTR strManaCost, const CCardFilter* pFreeCastCardFilter);
	virtual ~CUnexpectedResultsSpell() {}

public:	
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);	
	const CCardFilter* m_pFreeCastCardFilter;

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	
	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;

	vector<FreecastCardActionsSelection>	m_Selection;
};

//____________________________________________________________________________
//