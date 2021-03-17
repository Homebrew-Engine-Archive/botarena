#pragma once

class CTargetSpellAction;

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalSpell : public CSpell
{
protected:
	CGlobalSpell(CCard* pCard, AbilityType abilityType,
				 LPCTSTR strManaCost,
				 CardComparer* pComparer,
				 BOOL bAffectPlayer,
				 ZoneId fromZoneId = ZoneId::Battlefield);
	virtual ~CGlobalSpell() {}

public:
	const CCardFilter& GetGlobalCardFilter() const	{ return m_GlobalCardFilter; }
	CCardFilter& GetGlobalCardFilter()				{ return m_GlobalCardFilter; }

	void SetAffectControllerCardsOnly();
	void SetAffectOpponentCardsOnly();
	void SetExceptParent();							// 3/3/2001: Added, default false

	void SetTargetOpponentPlayerOnly();				// 3/3/2001: Added to support "controller only"
	void SetTargetControllerPlayerOnly();

	CSubjectModifier& GetSubjectModifier()				{ return m_SubjectModifier; }
	const CSubjectModifier& GetSubjectModifier() const	{ return m_SubjectModifier; }

	void FlagSubjects(BOOL bFlagSubjects,						// if set, subjects will be flagged by CardFlag::AbilityFlag and the ability's instance ID.
					  BOOL bKeepFlagUntilEndOfTurn = FALSE);	// if set, flags are not cleared until end of turn. Normally flags are cleared immediately after resolutions.

	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;	// 4/26/2001
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);

	VIRTUAL(Characteristic, GetGlobalCharacteristic)() const { return Characteristic::Neutral; }

protected:
	VIRTUAL(BOOL, IsCardAffected)(const CCard* pCard) const;
	VIRTUAL(BOOL, IsPlayerAffected)(const CPlayer* pPlayer) const;

	OVERRIDE(BOOL, ResolveImpl)(const CAbilityAction* pAction);
	OVERRIDE(void, OnResolutionCompleted)(const CAbilityAction* pAction, BOOL bResolutionResult);

	VIRTUAL(void, ResolveImpl2)(const CManaConsumptionAbilityAction* pAction);

	VIRTUAL(void, ResolveCard)(const CAbilityAction* pAction, CCard* pCard, const ContextValue& value);	// 3/3/2001: Generalized from ResolveCreature()
	VIRTUAL(void, ResolvePlayer)(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CSubjectModifier	m_SubjectModifier;

	ZoneId		m_FromZoneId;
	CCardFilter	m_GlobalCardFilter;

	BOOL		m_bAffectPlayer;

	BOOL		m_bOpponentPlayerOnly;		// 3/3/2001: Added to support "controller only"
	BOOL		m_bControllerPlayerOnly;

private:
	CCardFlagModifier m_CardFlagModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalChgLifeSpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalChgLifeSpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						Life nLifeDelta,
						CardComparer* pComparer,
						BOOL bAffectPlayer,
						PreventableType preventable,
						DamageType damageType = DamageType::NonCombatDamage);
	virtual ~CGlobalChgLifeSpell() {}

public:
	void SetReverseLifeDeltaToController(BOOL bReverseLifeDeltaToController) { m_bReverseLifeDeltaToController = bReverseLifeDeltaToController; }		// Ref: Syphon Soul

	OVERRIDE(Characteristic, GetGlobalCharacteristic)() const;

protected:
	OVERRIDE(void, ResolveCard)(const CAbilityAction* pAction, CCard* pCard, const ContextValue& value);
	OVERRIDE(void, ResolvePlayer)(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	BOOL m_bReverseLifeDeltaToController;
	CLifeModifier m_LifeModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalChgLifeSpell2 : public CGlobalChgLifeSpell			
	// Ref: Disorder: Disorder deals 2 damage to each white creature and each player who controls a white creature.
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalChgLifeSpell2(CCard* pCard, AbilityType abilityType,
					LPCTSTR strManaCost,
					Life nLifeDelta,
					CardComparer* pComparer,
					PreventableType preventable,
					DamageType damageType = DamageType::NonCombatDamage);
	virtual ~CGlobalChgLifeSpell2() {}

public:
	OVERRIDE(BOOL, IsPlayerAffected)(const CPlayer* pPlayer) const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalChgLifeSpell3 : public CGlobalChgLifeSpell			
	// Ref: Wildfire: Each player sacrifices four lands. Wildfire deals 4 damage to each creature. 
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalChgLifeSpell3(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 Life nLifeDelta,
						 CardComparer* pComparer,
						 PreventableType preventable,
						 int nSacrificeCount,
						 CardComparer* pSurveyComparer,
						 DamageType damageType = DamageType::NonCombatDamage);
	virtual ~CGlobalChgLifeSpell3() {}

	public:
	void SetSacrificeControllerCardsOnly();
	void SetSacrificeOpponentCardsOnly();
  
	protected:
	OVERRIDE(BOOL, IsPlayable)(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const;


	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	OVERRIDE(void, ResolveImpl2)(const CManaConsumptionAbilityAction* pAction);

	void PromptForSelection(CPlayer* pPlayer, CPlayer* pCaster);

	int			m_nSacrificeCount;
	CCardFilter	m_SacrificeCardFilter;

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
// Biorhythm: Each player's life total becomes the number of creatures he or she controls
// Stronghold Discipline: Each player loses 1 life for each creature he or she controls
//
class CORE_EXPORT CGlobalChgLifeBySurveySpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	void SetMultiplier(int nMultiplier) { m_nMultiplier = nMultiplier; } // default: 0 -> equal to the surveyed value; +1 -> +1 for each surveyed value; -1 -> -1 for each surveyed value

protected:
	CGlobalChgLifeBySurveySpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						CardComparer* pSurveyComparer,
						PreventableType preventable);
	virtual ~CGlobalChgLifeBySurveySpell() {}

	OVERRIDE(void, ResolvePlayer)(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	Life GetLifeDelta(const CPlayer* pPlayer) const;

	CCardFilter		m_SurveyCardFilter;
	CLifeModifier	m_LifeModifier;
	int				m_nMultiplier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalChgPwrTghSpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	void SetReplace(BOOL nReplace) { m_Replace = nReplace; }

protected:
	CGlobalChgPwrTghSpell(CCard* pCard, AbilityType abilityType,
						  LPCTSTR strManaCost,
						  Power nPowerDelta, Life nLifeDelta,
						  CardComparer* pComparer);
	virtual ~CGlobalChgPwrTghSpell() {}

public:
	OVERRIDE(Characteristic, GetGlobalCharacteristic)() const;

protected:
	OVERRIDE(void, ResolveCard)(const CAbilityAction* pAction, CCard* pCard, const ContextValue& value);

	CLifeModifier m_LifeModifier;
	CPowerModifier m_PowerModifier;
	BOOL m_Replace;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalMoveCardSpell : public CGlobalSpell	// Ref: Flashfires: Destroy all plains
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalMoveCardSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 CardComparer* pComparer,
						 ZoneId toZoneId, BOOL bToOwner, MoveType moveType,
						 ZoneId fromZoneId = ZoneId::Battlefield);
	virtual ~CGlobalMoveCardSpell() {}

public:
	OVERRIDE(Characteristic, GetGlobalCharacteristic)() const;

protected:
	OVERRIDE(void, ResolveCard)(const CAbilityAction* pAction, CCard* pCard, const ContextValue& value);

	CMoveCardModifier m_MoveCardModifier;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalTapSpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalTapSpell(CCard* pCard, AbilityType abilityType,
					  LPCTSTR strManaCost,
					  CardComparer* pComparer);
	virtual ~CGlobalTapSpell() {}

public:
	OVERRIDE(Characteristic, GetGlobalCharacteristic)() const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalUntapSpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalUntapSpell(CCard* pCard, AbilityType abilityType,
					  LPCTSTR strManaCost,
					  CardComparer* pComparer);
	virtual ~CGlobalUntapSpell() {}

public:
	OVERRIDE(Characteristic, GetGlobalCharacteristic)() const;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalDrawCardSpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalDrawCardSpell(CCard* pCard, AbilityType abilityType,
						 LPCTSTR strManaCost,
						 int nMinDrawCount,
						 int nMaxDrawCount);
	virtual ~CGlobalDrawCardSpell() {}

public:
	void SetDiscardHand(BOOL bDiscardHand)						{ m_bDiscardHand = bDiscardHand; m_bMergeHand = FALSE; }
	void SetMergeHand(BOOL bMergeHand)							{ m_bMergeHand = bMergeHand; m_bDiscardHand = FALSE; }

	void SetMergeGraveyard(BOOL bMergeGraveyard)				{ m_bMergeGraveyard = bMergeGraveyard; }
	void SetRemoveTopLibraryCardsBeforeDraw(int nRemoveCount)	{ m_nRemoveCount = nRemoveCount; }	// Ref: Diminishing Returns

	OVERRIDE(Characteristic, GetGlobalCharacteristic)() const;

protected:
	OVERRIDE(void, ResolvePlayer)(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	void OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);

	void PromptForSelection(CPlayer* pPlayer, int nMinDrawCount, int nMaxDrawCount, CPlayer* pCaster);

	BOOL	m_bDiscardHand;
	BOOL	m_bMergeHand;
	BOOL	m_bMergeGraveyard;
	int		m_nRemoveCount;

	// State managed

	ListenerPtr<SelectionEventSource::Listener>	m_cpSelectionListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalDrawCardBySurveySpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalDrawCardBySurveySpell(CCard* pCard, AbilityType abilityType,
								 LPCTSTR strManaCost,
								 ZoneId uCountInZone, BOOL bCountControllersZoneOnly,	// TRUE -> uCountInZone refers to controller's zone, FALSE -> uCountInZone refers to targeted player's zone or targeted cards' controllers' zone
								 CardComparer* pCountComparer);	// Count these cards
	virtual ~CGlobalDrawCardBySurveySpell() {}

public:
	OVERRIDE(Characteristic, GetGlobalCharacteristic)() const;

protected:
	OVERRIDE(void, ResolvePlayer)(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	ZoneId		m_uCountInZone;
	BOOL		m_bCountControllersZoneOnly;
	CCardFilter m_CountCardFilter;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalSearchLibrarySpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalSearchLibrarySpell(CCard* pCard, AbilityType abilityType,
							  LPCTSTR strManaCost,
							  const CCardFilter* pSearchCardFilter,
							  int nMinSearchCount,
							  int nMaxSearchCount,
							  ZoneId toZoneId = ZoneId::Hand, 
							  BOOL bToOwnersZone = FALSE, 
							  BOOL bToTop = TRUE, BOOL bTapped = FALSE);
	virtual ~CGlobalSearchLibrarySpell() {}

	OVERRIDE(void, ResolvePlayer)(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	const CCardFilter*	m_pSearchCardFilter;
	BOOL	m_bRevealCards;

	ZoneId	m_ToZoneId;
	BOOL	m_bToOwnersZone;
	BOOL	m_bToTop;
	BOOL	m_bTapped;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalRevealLibrarySpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CGlobalRevealLibrarySpell(CCard* pCard, AbilityType abilityType,
								 LPCTSTR strManaCost,
								 int nRevealCount);
	virtual ~CGlobalRevealLibrarySpell() {}

public:
	void SetRevealCardsToOthers(BOOL bRevealCardsToOthers, BOOL bRevealOnlySelected) 
	{ 
		m_bRevealCardsToOthers = bRevealCardsToOthers; 
		m_bRevealOnlySelected = bRevealOnlySelected;
	}

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
		MaximumValue nMaxSelectionCount,
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
	OVERRIDE(CActionContainer*, GetAbilityActions)(BOOL bIncludeTricks, BOOL bSetNames);
	OVERRIDE(void, ResolvePlayer)(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	int			m_nRevealCount;
	BOOL		m_bRevealCardsToOthers;
	BOOL		m_bRevealOnlySelected;
	BOOL		m_bReorder;
	ZoneId		m_ReorderToZone;
	CardPlacement m_ReorderToZonePlacement;

	MaximumValue	m_nMaxSelectionCount;
	MinimumValue	m_nMinSelectionCount;
	ZoneId			m_SelectToZone;
	CardPlacement	m_SelectToZonePlacement;
	const CCardFilter* m_pSelectionCardFilter;
};

//____________________________________________________________________________
//
class CORE_EXPORT CGlobalTokenProductionBySurveySpell : public CGlobalSpell
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	const CCardFilter& GetSurveyCardFilter() const	{ return m_SurveyCardFilter; }
	CCardFilter& GetSurveyCardFilter()				{ return m_SurveyCardFilter; }

protected:
	CGlobalTokenProductionBySurveySpell(CCard* pCard, AbilityType abilityType,
								 LPCTSTR strManaCost,
								 CardComparer* pSurveyComparer,
								 LPCTSTR strTokenName, UINT uID,
								 int nTokenMultipler = 1);
	virtual ~CGlobalTokenProductionBySurveySpell() {}

	OVERRIDE(void, ResolvePlayer)(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value);

	CCardFilter	m_SurveyCardFilter;
	CString		m_strTokenName;
	UINT		m_uID;
	int			m_nTokenMultipler;
};

//____________________________________________________________________________
//
