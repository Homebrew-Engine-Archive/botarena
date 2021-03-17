#pragma once

//____________________________________________________________________________
//
class CORE_EXPORT CManaFilterAbility : public CManaProductionAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CManaFilterAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType,
					   LPCTSTR strManaPool, LPCTSTR strManaCost);
	virtual ~CManaFilterAbility() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CManaProductionBySacificeAbility : public CManaProductionAbility	// Ref: 'Blood Pet'
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CManaProductionBySacificeAbility(CCard* pCard, LPCTSTR strManaPool);
	virtual ~CManaProductionBySacificeAbility() {}
};

//____________________________________________________________________________
//
class CORE_EXPORT CManaProductionAbility2 : public CManaProductionAbility	// Ref: Urza's Mine, Urza's Power Plant, Urza's Tower
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CManaProductionAbility2(CCard* pCard, LPCTSTR strManaPool, LPCTSTR strAbilityName, AbilityType abilityType,
						LPCTSTR strBonusManaPool,
						LPCTSTR strBonusCardName1,
						LPCTSTR strBonusCardName2);
	virtual ~CManaProductionAbility2() {}

	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to controller's in-play zone

	BOOL_ m_bAddedBonusManaPool;
	CString m_strBonusManaPool;
	CString m_strBonusCardName1;
	CString m_strBonusCardName2;
};

//____________________________________________________________________________
//
// Star Compass: T: Add to your mana pool one mana of any color a basic land you control could produce.
//
class CORE_EXPORT CManaProductionAbility3 
	: public CManaProductionAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CManaProductionAbility3(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType,
		CardComparer* pComparer, CManaPool::Color manaColor);

public:
	void SetMonitorControllerOnly()	
	{ 
		m_MonitoredCardType.SetThisCardsControllerOnly(CAbility::m_pCard);
// We have to trigger on all controller cards because of Exotic Orchard
//		m_WhenCardAdded.SetToControllerOnly(TRUE);
//		m_WhenCardRemoved.SetFromControllerOnly(TRUE);
	}
	
	void SetMonitorOpponentsOnly()	
	{ 
		m_MonitoredCardType.SetNotThisCardsControllerOnly(CAbility::m_pCard);
// We have to trigger on all controller cards because of Exotic Orchard
//		m_WhenCardAdded.SetToOpponentsOnly(TRUE);
//		m_WhenCardRemoved.SetFromOpponentsOnly(TRUE);
	}

	// Returns true if this is an Exotic Orchard like ability that checks opponents mana producers
	bool IsMonitoringOpponents() const
	{
		return m_MonitoredCardType.GetThisCardsControllerOnly() == NULL;
  }

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;

protected:
	void OnEnteredInPlay(CZone* pFromZone, CZone* pInplay, CPlayer* pByPlayer, MoveType moveType);
	void OnLeftInPlay(CZone* pInplay, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);
	void OnEnchantCountChanged(CCard* pCard, int nFromCount, int nToCount);

	void CheckCards();

	CCardFilter m_MonitoredCardType;
	CWhenCardMoved m_WhenCardAdded;
	CWhenCardMoved m_WhenCardRemoved;
	CWhenSelfInplay m_WhenSelfInPlay;
	CWhenCardTypeChanged	m_WhenCardTypeChanged;
	CWhenEnchantCountChanged m_WhenEnchantCountChanged;
	CManaPool::Color m_ManaColor;
};
//____________________________________________________________________________
//
class CORE_EXPORT CSpecialProtectionAbility
	: public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSpecialProtectionAbility(CCard* pCard, LPCTSTR strAbilityName, const CCardFilter* pCardFilter);
	virtual ~CSpecialProtectionAbility() {}

public:
	const CCardFilter* GetCardFilter() const { return m_pCardFilter; }	
	void SetFromSpellsOnly() { m_pSpellsOnly = TRUE; }
	const BOOL FromSpellsOnly() const {return m_pSpellsOnly;}

	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(counted_ptr<CAbilityAction>, CreateAction)() const;
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);

	const CCardFilter* m_pCardFilter;
	BOOL m_pSpellsOnly;

	counted_ptr<CardTapForManaEventSource> m_cpTapForManaEventSource;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSuspendAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSuspendAbility(CCard* pCard, LPCTSTR strManaCost, int nValue);
	virtual ~CSuspendAbility() {}

public:
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
//	OVERRIDE(ZoneId, GetPlayableFrom)() const;

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;

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

	int					m_nCounterCount;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSelfUntapNonstackAbility : public CNonStackAbility
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CSelfUntapNonstackAbility(CCard* pCard, LPCTSTR strManaCost);
	virtual ~CSelfUntapNonstackAbility() {}

public:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

protected:
	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
};

//____________________________________________________________________________
//