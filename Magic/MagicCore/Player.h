#pragma once

class CGraph;
class CTriggeredActionController;
class CUndoAction;

//____________________________________________________________________________
//
#define DEFAULT_PLAYER_LIFE		(20)
#define DEFAULT_MAX_HAND_SIZE	(7)

/*
//____________________________________________________________________________
//
struct DeckStatistic
{
	DeckStatistic()
		: nLandCount(0)
		, nCreatureCount(0)
		, nSpellCount(0)
		, prominentManaColorByCard(CManaPool::Color::Colorless)
		, prominentManaColor(CManaPool::Color::Colorless)
		, nReferenceScore(0)
		, nCardCount(0)
	{}

	int								nCardCount;
	int								nLandCount;
	int								nCreatureCount;
	int								nSpellCount;
	int								nReferenceScore;
	std::set<SingleCreatureType>	creatureTypes;
	CManaPool::Color				prominentManaColorByCard;
	std::map<CManaPool::Color, int>	manaColorCountByCard;
	CManaPool::Color				prominentManaColor;
	std::map<CManaPool::Color, int>	manaColorCount;
	StringSet						cardNames;
};
*/
//____________________________________________________________________________
//
struct CardTypeStoreEntry
{
	CardTypeStoreEntry(CardType cardType = CardType::Null)
		: m_CardType(cardType)
	{}

	bool operator==(const CardTypeStoreEntry& entry) const
	{
		return m_CardType == entry.m_CardType;
	}
	
	CardType	m_CardType;	
	
};
class CCardTypeStoreStack
	: protected CValueContainerBase_<CardTypeStoreEntry>
{
public:
	CCardTypeStoreStack()
	{
	}

	virtual ~CCardTypeStoreStack()
	{
		RemoveSavedState();
	}

	int GetSizeSpecial() const {return GetSize();}
	CardTypeStoreEntry GetAtSpecial(int i) const {return GetAt(i);}
	void RemoveAllSpecial() { RemoveAll(); }
	void AddCardType(CardType cardType) { Add(CardTypeStoreEntry(cardType));}
             
private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const CardTypeStoreEntry& entry = GetAt(i);

			stateStack.AddTail((PVOID)entry.m_CardType.Get());
		}

		stateStack.AddTail((PVOID)nCount);
	}

	OVERRIDE(void, Pop)()
	{
		CValueContainer<CardTypeStoreEntry>::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			CardTypeStoreEntry entry;
			entry.m_CardType = (CardType::Enum)(DWORD)m_Stack.RemoveTail();

			CValueContainer<CardTypeStoreEntry>::AddImpl(entry);
		}
	}

	OVERRIDE(void, Peek)()
	{
		CValueContainer<CardTypeStoreEntry>::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			CardTypeStoreEntry entry;
					entry.m_CardType = (CardType::Enum)(DWORD)m_Stack.GetPrev(pos);

			CValueContainer<CardTypeStoreEntry>::AddImpl(entry);
		}
	}


};
//____________________________________________________________________________
//
struct ZoneIdStoreEntry
{
	ZoneIdStoreEntry(ZoneId zoneId = ZoneId::Null)
		: m_ZoneId(zoneId)
	{}

	bool operator==(const ZoneIdStoreEntry& entry) const
	{
		return m_ZoneId == entry.m_ZoneId;
	}
	
	ZoneId	m_ZoneId;	
	
};
class CZoneIdStoreStack
	: protected CValueContainerBase_<ZoneIdStoreEntry>
{
public:
	CZoneIdStoreStack()
	{
	}

	virtual ~CZoneIdStoreStack()
	{
		RemoveSavedState();
	}

	int GetSizeSpecial() const {return GetSize();}
	ZoneIdStoreEntry GetAtSpecial(int i) const {return GetAt(i);}
	void RemoveAllSpecial() { RemoveAll(); }
	void AddZoneId(ZoneId zoneId) { Add(ZoneIdStoreEntry(zoneId));}
             
private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const ZoneIdStoreEntry& entry = GetAt(i);

			stateStack.AddTail((PVOID)entry.m_ZoneId.Get());
		}

		stateStack.AddTail((PVOID)nCount);
	}

	OVERRIDE(void, Pop)()
	{
		CValueContainer<ZoneIdStoreEntry>::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			ZoneIdStoreEntry entry;
			entry.m_ZoneId = (ZoneId::Enum)(DWORD)m_Stack.RemoveTail();

			CValueContainer<ZoneIdStoreEntry>::AddImpl(entry);
		}
	}

	OVERRIDE(void, Peek)()
	{
		CValueContainer<ZoneIdStoreEntry>::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			ZoneIdStoreEntry entry;
					entry.m_ZoneId = (ZoneId::Enum)(DWORD)m_Stack.GetPrev(pos);

			CValueContainer<ZoneIdStoreEntry>::AddImpl(entry);
		}
	}


};
//____________________________________________________________________________
/*//
struct MoveTypeStoreEntry
{
	MoveTypeStoreEntry(MoveType moveType = MoveType::Null)
		: m_MoveType(moveType)
	{}

	bool operator==(const MoveTypeStoreEntry& entry) const
	{
		return m_MoveType == entry.m_MoveType;
	}
	
	MoveType	m_MoveType;	
	
};
class CMoveTypeStoreStack
	: protected CValueContainerBase_<MoveTypeStoreEntry>
{
public:
	CMoveTypeStoreStack()
	{
	}

	virtual ~CMoveTypeStoreStack()
	{
		RemoveSavedState();
	}

	int GetSizeSpecial() const {return GetSize();}
	MoveTypeStoreEntry GetAtSpecial(int i) const {return GetAt(i);}
	void RemoveAllSpecial() { RemoveAll(); }
	void AddMoveType(MoveType moveType) { Add(MoveTypeStoreEntry(moveType));}
             
private:
	OVERRIDE(void, Push)(StateStack& stateStack)
	{
		int nCount = GetSize();
		for (int i = nCount - 1; i >= 0; --i)
		{
			const MoveTypeStoreEntry& entry = GetAt(i);

			stateStack.AddTail((PVOID)entry.m_MoveType.Get());
		}

		stateStack.AddTail((PVOID)nCount);
	}

	OVERRIDE(void, Pop)()
	{
		CValueContainer<MoveTypeStoreEntry>::RemoveAllImpl();

		int nCount = (int)m_Stack.RemoveTail();
		for (int i = 0; i < nCount; ++i)
		{
			MoveTypeStoreEntry entry;
			entry.m_MoveType = (MoveType::Enum)(DWORD)m_Stack.RemoveTail();

			CValueContainer<MoveTypeStoreEntry>::AddImpl(entry);
		}
	}

	OVERRIDE(void, Peek)()
	{
		CValueContainer<MoveTypeStoreEntry>::RemoveAllImpl();

		StateStack::Position pos = m_Stack.GetTailPosition();

		int nCount = (int)m_Stack.GetPrev(pos);
		for (int i = 0; i < nCount; ++i)
		{
			MoveTypeStoreEntry entry;
					entry.m_MoveType = (MoveType::Enum)(DWORD)m_Stack.GetPrev(pos);

			CValueContainer<MoveTypeStoreEntry>::AddImpl(entry);
		}
	}


};*/
//____________________________________________________________________________
//
class CORE_EXPORT CPlayer
	: public noncopyable
{
public:
	// Event Sources

	// void OnPlayerChangedLife(CPlayer* pPlayer, Life nFromLife, Life nToLife)
	ChangeLifeEventSource* GetChangeLifeEventSource() const	{ return m_cpChangeLifeEventSource.GetPointer(); }	

	// Event source for notifying if any of this player's cards are dealing damage
	// void OnDealtDamage(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, Damage damage)
	DamageDealEventSource* GetDamageDealEventSource() const	{ return m_cpDamageDealEventSource.GetPointer(); }

	BeforeDamageDealtEventSource* GetBeforeDamageDealtEventSource() const	{ return m_cpBeforeDamageDealtEventSource.GetPointer(); }

	CounterMovedEventSource* GetCounterMovedEventSource() const	{ return m_cpCounterMovedEventSource.GetPointer(); }

	SpecialTriggerEventSource* GetSpecialTriggerEventSource() const	{ return m_cpSpecialTriggerEventSource.GetPointer(); }

	CardCycledEventSource* GetCardCycledEventSource() const	{ return m_cpCardCycledEventSource.GetPointer(); }
	
	ManaAddEventSource* GetManaAddEventSource() const	{ return m_cpManaAddEventSource.GetPointer(); }	

	CPlayer(CGame* pGame);
	virtual ~CPlayer();

	CZone* GetZoneById(ZoneId zoneId) const;
	int GetZoneCount() const						{ return m_Zones.GetSize(); }
	CZone* GetZone(int nIndex)						{ return m_Zones.GetAt(nIndex); }
	const CZone* GetZone(int nIndex) const			{ return m_Zones.GetAt(nIndex); }

	CGame* GetGame() const							{ return m_pGame; }

	void SetSeed(unsigned uSeed);					// 0 - time based
	unsigned GetSeed() const						{ return m_uSeed; }
	unsigned long GetRand() const;

	void SetStartingPlayer(BOOL bStartingPlayer)	{ m_bStartingPlayer = bStartingPlayer; }
	BOOL GetStartingPlayer() const					{ return m_bStartingPlayer; }

	CGraph* GetGraph() const;
	void SetGraph(CGraph* pGraph);

	Life GetLife() const;
	void SetLife(Life nLife);
	void ChangeLife(Damage damage, int prev_index = 0);

	Life GetLifeAtBeginningOfTurn() const;
	Life GetStartingLife() const;
	void SetStartingLife(Life nLife);
	Life GetCombatDamageTakenThisTurn() const;
	Life GetNoncombatDamageTakenThisTurn() const;
	Life GetLifeLossTakenThisTurn() const;
	Life GetDamageTakenThisTurn() const;		// Only damage
	Life GetTotalLifeLossTakenThisTurn() const; // Total delta

	BOOL IsProwled() const;

	BOOL IsArchenemy() const					{ return m_archenemy; }
	BOOL IsPlanechase() const					{ return m_planechase; }
	BOOL IsPhasing() const						{ return m_phasing; }
	void SetPhasing()   						{ m_phasing = TRUE; }
	BOOL IsCommander() const					{ return m_commander; }

	BOOL CanResolveScheme() const					{ return !m_resolved_scheme; }
	void ResolveScheme()                             {m_resolved_scheme = TRUE; }
	void SetPlanechase()                        { m_planechase = TRUE; }

	const CDamagePrevention_& GetDamagePrevention() const;
	CDamagePrevention_& GetDamagePrevention();

	void Reset();

	BOOL GetLost() const;
	void SetLostByOtherReasons()					{ m_bLostByOtherReasons = TRUE; }
	void UpdateLost();
	void SetDrawFailed()							{ m_bDrawFailed = TRUE; }

	const CManaPool_& GetManaPool() const;
	CManaPool_& GetManaPool();

	int GetMaxHandSize() const;
	void SetMaxHandSize(int nMaxHandSize);
	void IncreaseMaxHandSize(int nMaxHandSize);

	BOOL GetSearchedLibraryThisTurn() const;
	void SetSearchedLibraryThisTurn(BOOL searched);
	
	BOOL GetCreatureCounteredByOpponent() const;
	void SetCreatureCounteredByOpponent(BOOL searched);

	void SetPoisonCounters(int value,BOOL replace);
	int GetPoisonCounters() const					{ return m_nPoisonCounters; }

	void AddLifeLossTakenThisTurn(Life pLifeLost);

	void IncreaseTurnDrawCount()					{ ++m_nTurnDrawCount; }
	int GetTurnDrawCount() const					{ return m_nTurnDrawCount; }	

	void AddToCardsDrawnThisTurn(CCard* pCard)		{ m_pCardsDrawnThisTurn.AddCard(pCard, CardPlacement::Top); m_pLastDrawThisTurn = pCard; }
	void RemoveFromCardsDrawnThisTurn (CCard* pCard)	{ m_pCardsDrawnThisTurn.RemoveCard(pCard); if (m_pLastDrawThisTurn == pCard) m_pLastDrawThisTurn = NULL; }
	CCountedCardContainer GetCardsDrawnThisTurn() const					{ return m_pCardsDrawnThisTurn; }
	CCard* GetLastDraw()						{ return m_pLastDrawThisTurn; }


	void IncreaseTurnDiscardCount()					{ ++m_nTurnDiscardCount; }
	int GetTurnDiscardCount() const					{ return m_nTurnDiscardCount; }

	void IncreaseAttackCount()					{ ++m_nTurnAttackCount; }              // Could be merged with prowl/attacking creatures history someday
	int GetAttackCount() const					{ return m_nTurnAttackCount; }

	CString GetPlayerName() const;
	void SetPlayerName(LPCTSTR strName);

	const CTriggeredActionContainer* GetTriggeredActionContainer() const;
	CTriggeredActionContainer* GetTriggeredActionContainer();

	const CCountedPtrContainer<CUndoAction>* GetUndoActions() const;
	CCountedPtrContainer<CUndoAction>* GetUndoActions();

	int GetPlayerTurnNumber() const;
	void IncreasePlayerTurnNumber();

	/*
	int GetPlayerDrawNumber() const;
	void IncreasePlayerDrawNumber();
	*/

	void SetComputer();
	BOOL IsComputer() const;

	BOOL IsLocal() const;	// Computer and net players are not local
	BOOL IsRemote() const;

	void SetManaBurn(int nManaBurn);
	int GetManaBurn() const;

	counted_ptr<CAction> GetNextStrategy();
	void RemoveNextStrategy();
	void RemoveStrategy(StrategyRemovalReason reason);
	void SetStrategy(const CStrategy& strategy);

	void AddInPlayBonus(int nBonus);
	int GetInPlayBonus() const;
	void ResetInPlayBonus();

	void AddInHandBonus(int nBonus);
	int GetInHandBonus() const;
	void ResetInHandBonus();

	void AddMiscBonus(int nBonus);
	int GetMiscBonus() const;
	void ResetMiscBonus();

	void SetInterface(CInterface* pInterface);
	CInterface* GetInterface() const;

	void MemorizeCard(const CCard* pCard);
	void ForgetCard(const CCard* pCard);
	bool IsMemorizedCard(const CCard* pCard) const;
	bool AreMemorizedCards(const CCountedCardContainer& cards) const;
	const CCountedPtrSet<const CCard>& GetMemorizedCards() const;

	void SetDeck(const CDeck& deck);
	const CDeck& GetDeck() const					{ return m_Deck; }

	const CPlayerEffect_& GetPlayerEffect() const	{ return m_PlayerEffect; }
	CPlayerEffect_& GetPlayerEffect()				{ return m_PlayerEffect; }

	int GetTurnUntappedCount() const				{ return m_nTurnUntappedCount; }
	void IncreaseTurnUntapCount()					{ m_nTurnUntappedCount += 1; }

	int GetTurnUntappedLandsCount() const				{ return m_nTurnUntappedLandsCount; }
	void IncreaseTurnUntapLandsCount()					{ m_nTurnUntappedLandsCount += 1; }

	int GetTurnUntappedCreaturesCount() const				{ return m_nTurnUntappedCreaturesCount; }
	void IncreaseTurnUntapCreaturesCount()					{ m_nTurnUntappedCreaturesCount += 1; }

	int GetTurnCastedSpellCount() const				{ return m_nTurnCastedSpellCount; }
	int GetLastTurnCastedSpellCount() const				{ return m_nLastTurnCastedSpellCount; }
	void IncreaseTurnCastedSpellCount()				{ m_nTurnCastedSpellCount += 1; }

	void AddTurnCastedSpell(CCard* pCard, CardType pTypes, ZoneId fromZone, ZoneId toZone)							{ s_hCard.AddCard(pCard, CardPlacement::Top);
																													  s_hTypes.AddCardType(pTypes);
																													  s_hfromZones.AddZoneId(fromZone);
																													   s_htoZones.AddZoneId(toZone);}
	void AddDetainedCard(CCard* pCard)					{ detainedCard.AddCard(pCard, CardPlacement::Top); }
	
	//void AddTurnCastedSpellTypes(CardType pTypes)				    { s_hTypes.AddCardType(pTypes); }	

	void AddTurnMovementHistory(CCard* pCard, CardType pTypes, ZoneId fromZone, ZoneId toZone)
	{
		s_hCard.AddCard(pCard, CardPlacement::Top);
		s_hTypes.AddCardType(pTypes);
		s_hfromZones.AddZoneId(fromZone);
		s_htoZones.AddZoneId(toZone);  
	}	

	CCountedCardContainer DredgeCards();

	bool ExternalDamageReplacementCards();

	int GetCertainTypeCastedCount(CardType pType);
	int GetCertainAntiTypeCastedCount(CardType pType);
	int GetCertainTypeEnteredBattlefieldCount(CardType pType);
	int GetCertainAntiTypeEnteredBattlefieldCount(CardType pType);
	int GetCertainTypeDiedCount(CardType pType);
	int GetCertainTypeDiedCountNonToken(CardType pType);	// for Caller of the Claw
	int GetDetainedCount()                  {return detainedCard.GetSize();}
	bool IsCertainCardPresentInHistory(CCard* pCard, ZoneId toZone, ZoneId fromZone);
	bool IsCertainCardDetained(CCard* pCard);

	void RemoveDetain(CCard* pCard)               { detainedCard.RemoveCard(pCard);}

	//CCard* GetTurnCastedSpell(int pIndex) const                        { return s_hCard.GetAt(pIndex);}
//	CardType GetTurnCastedSpellTypes(int pIndex) const                   { return s_hTypes.GetAtSpecial(pIndex).m_CardType;}	

	//CardType GetTurnEnteredBattlefieldTypes(int pIndex) const                   { return b_fTypes.GetAtSpecial(pIndex).m_CardType;}	

//	CCountedCardContainer GetAllTurnCastedSpell()	 { return s_hCard;}
//	CCardTypeStoreStack GetAllTurnCastedSpellTypes()                    { return s_hTypes;}	

//	CCardTypeStoreStack GetAllTurnEnteredBattlefieldTypes()                    { return b_fTypes;}	

	void ResetTurnInfo();

	void ResetPlayerTurnNumber()                               { m_nPlayerTurnNumber = 0; }

	const CDamageRedirection_& GetDamageRedirection() const	{ return m_DamageRedirection; }
	CDamageRedirection_& GetDamageRedirection()				{ return m_DamageRedirection; }

	int AddUntapCardType(CardType cardType, CardType mask, BOOL bThisTurnOnly);
	void RemoveUntapCardType(int nUniqueId);
	int AddCantUntapCardType(CardType cardType, CardType mask, BOOL bThisTurnOnly);
	void RemoveCantUntapCardType(int nUniqueId);
	BOOL CanUntap(const CCard* pCard) const;

	int SetCanBeAttackedBy(const CCardFilter* pCardFilter, BOOL bThisTurnOnly);
	void RemoveCanBeAttackedBy(int nUniqueId);
	bool CanBeAttackedBy(const CCreatureCard* pCreature) const;

	void GetState(StringArray& lines, BOOL bLibrary, BOOL bHand) const;

	BOOL GetFinishedMulligan() const { return m_bFinishedMulligan; }
	void SetFinishedMulligan(BOOL bFinishedMulligan) { m_bFinishedMulligan = bFinishedMulligan; }

protected:
	void OnDamageRedirectionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnPlaneswalkerSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnReplacementSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5);
	void OnCurrentNodeChanged(CNode* pToNode);

	void ChangeLifeImpl(Damage damage);
	void ChangeLifeImpl2(Damage damage);
	bool HasPlaneswalkers() const;
	bool CanRedirectToPlaneswalkers(Damage damage) const;

	CGame*						m_pGame;

	CZoneContainer				m_Zones;
	mutable CZone				m_OwnedCards;

	ListenerPtr<ChangeNodeEventSource::Listener>	m_cpNListener;	// Listen to node change

	std::auto_ptr<CMTRNG>		m_apRNG;
	unsigned					m_uSeed;

	CString						m_strPlayerName;
	BOOL						m_bComputer;
	BOOL						m_bStartingPlayer;
	CStrategy					m_Strategy;
	StateStack					m_StateStack;
	std::auto_ptr<CInterface>	m_apInterface;
	CDeck						m_Deck;
	CCountedPtrSet<const CCard>	m_MemorizedCards;	// See also CGame::m_VisibleCards

	CCountedPtrContainer<CUndoAction>	m_UndoActions;
	
	BOOL_	m_bLost;
	BOOL_	m_bDrawFailed;
	BOOL_	m_bLostByOtherReasons;
	BOOL_   m_bLostByPoison;
	BOOL_   m_bSearchedLibraryThisTurn;
	BOOL_   m_bCreatureCounteredByOpponent;
	BOOL_   m_nProwl;
	BOOL_   m_archenemy;
	BOOL_   m_planechase;
	BOOL_   m_resolved_scheme;
	BOOL_   m_commander;
	BOOL_   m_phasing;
	Life_	m_nLife;
	int_	m_nMaxHandSize;
	int_	m_nPlayerTurnNumber;
	int_	m_nInPlayBonus;
	int_	m_nInHandBonus;
	int_	m_nMiscBonus;
	int_	m_nTurnUntappedCount;	// Untapped cards count during the untap step
	int_	m_nTurnUntappedLandsCount;
	int_	m_nTurnUntappedCreaturesCount;
	int_	m_nTurnCastedSpellCount;
	int_	m_nLastTurnCastedSpellCount;
	int_    m_nPoisonCounters;
	Life_	m_nLifeAtBeginningOfTurn;
	Life_	m_nStartingLife;
	Life_	m_nTurnCombatDamageTaken;
	Life_	m_nTurnNoncombatDamageTaken;
	Life_	m_nTurnLifeLossTaken;

	BOOL_	m_bFinishedMulligan;

	int_	m_nTurnDrawCount;
	CCountedCardContainer_ m_pCardsDrawnThisTurn;
	CCard* m_pLastDrawThisTurn;

	int_	m_nTurnAttackCount;

	int_	m_nTurnDiscardCount;

	std::auto_ptr<CGraph>	m_apGraph;
	CManaPool_				m_ManaPool;
	CPlayerEffect_			m_PlayerEffect;

	std::auto_ptr<CTriggeredActionContainer>	m_apTriggeredMoveContainer;

	counted_ptr<DamageDealEventSource>	m_cpDamageDealEventSource;
	counted_ptr<BeforeDamageDealtEventSource>	m_cpBeforeDamageDealtEventSource;
	counted_ptr<CounterMovedEventSource>	m_cpCounterMovedEventSource;
	counted_ptr<SpecialTriggerEventSource>	m_cpSpecialTriggerEventSource;
	counted_ptr<CardCycledEventSource>	m_cpCardCycledEventSource;
	counted_ptr<ChangeLifeEventSource>	m_cpChangeLifeEventSource;
	counted_ptr<ManaAddEventSource>	m_cpManaAddEventSource;

	CDamagePrevention_		m_DamagePrevention;
	CDamageRedirection_		m_DamageRedirection;
	CSelectionSupport		m_DamageRedirectionSelection;
	CSelectionSupport		m_PlaneswalkerSelection;
	CSelectionSupport		m_ReplacementSelection;

	CCardTypeStack			m_UntapCardType;
	CCardTypeStack			m_CantUntapCardType;

	CPredefinedCardFilterStack	m_CanBeAttackedBy;

	// Casted spells history

	//CCountedCardContainer s_hCard;	
	//CCardTypeStoreStack s_hTypes;

	// Entered battlefield history

	//CCardTypeStoreStack b_fTypes;

	// Moving Card History

	CCountedCardContainer_ s_hCard;	
	CCardTypeStoreStack s_hTypes;
	CZoneIdStoreStack s_hfromZones;
	CZoneIdStoreStack s_htoZones;

	CCountedCardContainer_ detainedCard;	

};

//____________________________________________________________________________
//
typedef CPtrContainer<CPlayer> CPlayerContainer;

//____________________________________________________________________________
//
class CPlayerFilter
{
public:
	CPlayerFilter()
		: m_bIncludeOpponents(FALSE)
		, m_bIncludeController(FALSE)
	{}

	void SetIncludes(BOOL bIncludeOpponents = TRUE, BOOL bIncludeController = TRUE)
	{
		m_bIncludeOpponents = bIncludeOpponents;
		m_bIncludeController = bIncludeController;
	}

	BOOL Empty() const { return !m_bIncludeOpponents && !m_bIncludeController; }

	BOOL IsPlayerIncluded(const CPlayer* pPlayer, const CPlayer* pController) const
	{
		ATLASSERT(pController);

		if (m_bIncludeController && pController == pPlayer)
			return TRUE;

		if (m_bIncludeOpponents && pController != pPlayer)
			return TRUE;

		return FALSE;
	}

	void GetPlayers(const CPlayer* pController, std::vector<CPlayer*>& players) const;

protected:
	BOOL m_bIncludeOpponents;
	BOOL m_bIncludeController;
};
