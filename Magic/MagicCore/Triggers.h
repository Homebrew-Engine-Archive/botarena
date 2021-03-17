#pragma once

class CManaProductionAbilityAction;
class CNode;
class CZone;

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSelfMoved
{
public:
	typedef FastDelegate< void ( CZone*, CZone*, CPlayer*, MoveType ) > EventCallback;

	CWhenSelfMoved(CCard* pCard, 
				   ZoneId fromZoneId = ZoneId::_AllZones,	// Bit flag
				   ZoneId toZoneId = ZoneId::_AllZones,		// Bit flag
				   BOOL bTriggerBefore = FALSE,
				   BOOL bTriggerAfter = TRUE,
				   BOOL bTriggerOnPhasing = FALSE);
	virtual ~CWhenSelfMoved() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetReportInPlayChanges(BOOL bReport) { m_bReportInPlayChanges = bReport; }	// Default:	FALSE
	BOOL GetReportInPlayChanges() const { return m_bReportInPlayChanges; }

	void SetFromZoneId(ZoneId pId)   {m_FromZoneId = pId;}
	void SetToZoneId(ZoneId pId)   {m_ToZoneId = pId;}

	void SetReportChangesByOpponentsOnly(BOOL bByOpponentsOnly) { m_bReportChangesByOpponentsOnly = bByOpponentsOnly; }
	BOOL GetReportChangesByOpponentsOnly() const				{ return m_bReportChangesByOpponentsOnly; }

	CString GetTriggeredHint(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

private:
	void OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	EventCallback m_Callback;

	CCard*	m_pCard;
	ZoneId	m_FromZoneId;
	ZoneId	m_ToZoneId;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpAListener;	// Listen to zone change
	BOOL	m_bReportInPlayChanges;
	BOOL	m_bReportChangesByOpponentsOnly;
	BOOL    m_bTriggerOnPhasing;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSelfInplay
{
public:
	typedef FastDelegate< void ( CZone*, CZone*, CPlayer*, MoveType ) > EventCallback;

	CWhenSelfInplay(CCard* pCard, 
					BOOL bTriggerBefore = FALSE,
					BOOL bTriggerAfter = TRUE);
	virtual ~CWhenSelfInplay() {}

	void SetEnterEventCallback(EventCallback enterCallback)
	{
		m_EnterCallback = enterCallback;
	}

	void SetLeaveEventCallback(EventCallback leaveCallback)
	{
		m_LeaveCallback = leaveCallback;
	}

	void SetFromThisZoneOnly(ZoneId fromZoneId) { m_FromZoneId = fromZoneId; }
	void SetToThisZoneOnly(ZoneId toZoneId) { m_ToZoneId = toZoneId; }

	CString GetTriggeredHint(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

private:
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfMoved m_WhenSelfMoved;

	EventCallback m_EnterCallback;
	EventCallback m_LeaveCallback;

	BOOL_	m_bInPlay;

	CCard* m_pCard;

	ZoneId m_FromZoneId;
	ZoneId m_ToZoneId;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenNodeChanged
{
public:
	typedef FastDelegate< void ( CNode* ) > EventCallback;

	CWhenNodeChanged(CCard* pCard, NodeId toNodeId, BOOL bInplayOnly = TRUE);
	virtual ~CWhenNodeChanged() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }		// Default: FALSE
	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }	// Default: FALSE
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }	// Default: FALSE

	CString GetTriggeredHint(CNode* pToNode) const
	{
		return _T("");
	}

protected:
	virtual void CallEventCallback(CNode* pToNode)
	{
		m_Callback(pToNode);
	}

private:
	void OnNodeChanged(CNode* pToNode);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	NodeId m_ToNodeId;

	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;
	BOOL	m_bThisIsUntappedOnly;

	ListenerPtr<ChangeNodeEventSource::Listener>	m_cpNListener;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenCardMoved
{
public:
	typedef FastDelegate< void ( CCard*, CZone*, CZone*, CPlayer*, MoveType ) > EventCallback;

	CWhenCardMoved(CCard* pCard, 
				   ZoneId fromZone, ZoneId toZone,
				   BOOL bTriggerBefore = FALSE,
				   BOOL bTriggerAfter = TRUE,
				   BOOL bInplayOnly = TRUE);
	virtual ~CWhenCardMoved() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetReportSelfMoves(BOOL bReportSelfMoves)		{ m_bReportSelfMoves = bReportSelfMoves; } // default: FALSE, self moves are not reported; TRUE, report self moves (only report post-movement events)
	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }
	void SetByOpponentsOnly(BOOL bByOpponentsOnly)		{ m_bByOpponentsOnly = bByOpponentsOnly; }

	void SetFromControllerOnly(BOOL bControllerOnly)	{ m_bFromControllerOnly = bControllerOnly; }
	void SetToControllerOnly(BOOL bControllerOnly)		{ m_bToControllerOnly = bControllerOnly; }

	void SetFromOpponentsOnly(BOOL bOpponentsOnly)		{ m_bFromOpponentsOnly = bOpponentsOnly; }
	void SetToOpponentsOnly(BOOL bOpponentsOnly)		{ m_bToOpponentsOnly = bOpponentsOnly; }
	
	BOOL GetThisIsUntappedOnly() const					{ return m_bThisIsUntappedOnly; }
	BOOL GetByOpponentsOnly() const						{ return m_bByOpponentsOnly; }

	BOOL GetFromControllerOnly() const					{ return m_bFromControllerOnly; }
	BOOL GetToControllerOnly() const					{ return m_bToControllerOnly; }

	BOOL GetFromOpponentsOnly() const					{ return m_bFromOpponentsOnly; }
	BOOL GetToOpponentsOnly() const						{ return m_bToOpponentsOnly; }

	void SetReportInPlayChanges(BOOL bReport)			{ m_bReportInPlayChanges = bReport; }	// Default:	FALSE
	BOOL GetReportInPlayChanges() const					{ return m_bReportInPlayChanges; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

private:
	void OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	BOOL m_bTriggerBefore;
	BOOL m_bTriggerAfter;

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	ListenerPtr<CardMovementEventSource::Listener> m_cpAListener;	// Listen to all players' zone changes
	
	CCardFilterHelper m_CardFilterHelper;

	ZoneId	m_FromZone;
	ZoneId	m_ToZone;
	BOOL	m_bFromControllerOnly;
	BOOL	m_bToControllerOnly;
	BOOL	m_bFromOpponentsOnly;
	BOOL	m_bToOpponentsOnly;
	BOOL	m_bThisIsUntappedOnly;
	BOOL	m_bByOpponentsOnly;
	BOOL	m_bReportSelfMoves;

	BOOL	m_bReportInPlayChanges;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenCardDrew
{
public:
	typedef FastDelegate< void ( CPlayer*, CCard*, CPlayer* ) > EventCallback;

	CWhenCardDrew(CCard* pCard);
	virtual ~CWhenCardDrew() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }		// Default: FALSE
	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }	// Default: FALSE
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }	// Default: FALSE

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	void SetRevealCards(BOOL bRevealCards)	{ m_bRevealCards = bRevealCards; } // Default: FALSE

	void SetFirstDrawOnly(BOOL bFirstDrawOnly) { m_bFirstDrawOnly = bFirstDrawOnly; }	// Default: FALSE

	CString GetTriggeredHint(CPlayer* pPlayer, CCard* pCard, CPlayer* pByPlayer) const
	{
		return _T(""); // To prevent card names to show in the log
	}

private:
	void OnCardDrew(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;
	BOOL	m_bThisIsUntappedOnly;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpMListener;

	CCardFilterHelper m_CardFilterHelper;

	BOOL m_bRevealCards;
	BOOL m_bFirstDrawOnly;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSpellCast
{
public:
	typedef FastDelegate< void ( CCard* ) > EventCallback;

	CWhenSpellCast(CCard* pCard);
	virtual ~CWhenSpellCast() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }
	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pCard) const;

private:
	void OnSpellCasted(CCard* pCard);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	ListenerPtr<CastSpellEventSource::Listener>	m_cpPListener;	// Listen to play card event

	CCardFilterHelper m_CardFilterHelper;

	BOOL	m_bThisIsUntappedOnly;
	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSelfAttackedBlocked 
{
public:
	typedef FastDelegate< void ( CCreatureCard* ) > EventCallback; // First parameter is this creature
	typedef FastDelegate< void ( AttackSubject ) > AttackEventCallback;
	typedef FastDelegate< void ( CCreatureCard*, CCreatureCard*, int, int ) > BlockEventCallback;
	typedef FastDelegate< void ( CCreatureCard*, BOOL, CCreatureCard*, int, int ) > BlockEventCallback2;

	CWhenSelfAttackedBlocked(CCard* pCard);
	virtual ~CWhenSelfAttackedBlocked() {}

	void SetAttackingEventCallback(AttackEventCallback callback);
	void SetBlockingEventCallback(BlockEventCallback callback);
	void SetBlockedEventCallback(BlockEventCallback callback);
	void SetBlockedEachTimeEventCallback(BlockEventCallback callback);
	void SetAttackingAloneEventCallback(AttackEventCallback callback);
	void SetAttackingOrBlockingEventCallback(EventCallback callback);
	void SetBlockingOrBlockedEventCallback(BlockEventCallback2 callback);
	void SetBlockingOrBlockedEachTimeEventCallback(BlockEventCallback2 callback);

	bool GetWhenAttacking() const { return !m_AttackingCallback.empty() || !m_AttackingOrBlockingCallback.empty(); }
	bool GetWhenBlocking() const { return !m_BlockingCallback.empty() || !m_AttackingOrBlockingCallback.empty() || !m_BlockingOrBlockedCallback.empty(); }
	bool GetWhenBlocked() const { return !m_BlockedCallback.empty() || !m_BlockingOrBlockedCallback.empty(); }
	bool GetWhenBlockedEachTime() const { return !m_BlockedEachTimeCallback.empty() || !m_BlockingOrBlockedEachTimeCallback.empty(); }
	bool GetWhenBlockingEachTime() const { return !m_BlockingOrBlockedEachTimeCallback.empty(); }
	bool GetWhenAttackingAlone() const { return !m_AttackingAloneCallback.empty(); }

	CCardFilterHelper& GetBlockFilter()				{ return m_BlockFilterHelper; }
	const CCardFilterHelper& GetBlockFilter() const	{ return m_BlockFilterHelper; }

	CString GetTriggeredHint(CCreatureCard* pCreatureCard) const;
	CString GetTriggeredHint(AttackSubject attacked) const;
	CString GetTriggeredHint(CCreatureCard*, CCreatureCard*, int, int) const;
	CString GetTriggeredHint(CCreatureCard*, BOOL, CCreatureCard* pBlockedByCreatureCard, int, int) const;

private:
	void OnAttacked(AttackSubject attacked, CCreatureCard* pCreatureCard);	
	void OnBlocking(CCreatureCard* pCreatureCard, CCreatureCard* pBlocked, int nBlockedCount, int nBlockedIndex);
	void OnBlocked(CCreatureCard* pCreatureCard, CCreatureCard* pBlockedBy, int nBlockedByCount, int nBlockingIndex);
	void OnNodeChanged(CNode* pToNode);

	AttackEventCallback m_AttackingCallback;
	BlockEventCallback m_BlockingCallback;
	EventCallback m_AttackingOrBlockingCallback;
	BlockEventCallback m_BlockedCallback;
	BlockEventCallback m_BlockedEachTimeCallback;
	AttackEventCallback m_AttackingAloneCallback;
	BlockEventCallback2 m_BlockingOrBlockedCallback;
	BlockEventCallback2 m_BlockingOrBlockedEachTimeCallback;

	CCreatureCard*	m_pCreatureCard;

	ListenerPtr<AttackedPlayerEventSource::Listener>		m_cpAListener;
	ListenerPtr<BlockedCreatureEventSource::Listener>		m_cpBListener;
	ListenerPtr<BlockedByCreatureEventSource::Listener>		m_cpBByListener;
	
	CWhenNodeChanged	m_WhenNodeChanged;

	CCardFilterHelper m_BlockFilterHelper;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenAttackedBlocked
{
public:
	typedef FastDelegate< void ( CCreatureCard* ) > EventCallback;
	typedef FastDelegate< void ( CCreatureCard*, CCreatureCard* ) > BlockedByEventCallback;
	typedef FastDelegate< void ( CCreatureCard*, AttackSubject ) > PlayerEventCallback;

	CWhenAttackedBlocked(CCard* pCard);
	virtual ~CWhenAttackedBlocked() {}

	void SetAttackingEventCallback(PlayerEventCallback callback);
	void SetAttackingOrBlockingEventCallback(EventCallback callback);
	void SetBlockingEventCallback(EventCallback callback);
	void SetBlockedEventCallback(EventCallback callback);
	void SetBlockedEachTimeEventCallback(BlockedByEventCallback callback);
	void SetAttackingAloneEventCallback(PlayerEventCallback callback);

	bool GetWhenAttacking() const { return !m_AttackingCallback.empty() || !m_AttackingOrBlockingCallback.empty(); }
	bool GetWhenBlocking() const { return !m_BlockingCallback.empty() || !m_AttackingOrBlockingCallback.empty(); }
	bool GetWhenBlocked() const { return !m_BlockedCallback.empty(); }
	bool GetWhenBlockedEachTime() const { return !m_BlockedEachTimeCallback.empty(); }
	bool GetWhenAttackingAlone() const { return !m_AttackingAloneCallback.empty(); }

	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }
	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	void ForceStart();

	CString GetTriggeredHint(CCreatureCard* pCreatureCard) const;
	CString GetTriggeredHint(CCreatureCard* pAttackingCreatureCard, CCreatureCard* pBlockedByCreatureCard) const;
	CString GetTriggeredHint(CCreatureCard* pCreatureCard, AttackSubject attacked) const;

	CCardFilterHelper& GetBlockedFilter()				{ return m_BlockedFilterHelper; }
	const CCardFilterHelper& GetBlockedFilter() const	{ return m_BlockedFilterHelper; }

private:
	void OnCreatureAttacked(CCreatureCard* pCreatureCard)	{ OnAttackedBlocked(pCreatureCard); }
	void OnCreatureBlocked(CCreatureCard* pCreatureCard)	{ OnAttackedBlocked(pCreatureCard); }	
	void OnCreatureBlocking(CCreatureCard* pCreatureCard)	{ OnAttackedBlocked(pCreatureCard); }	
	void OnAttackedBlocked(CCreatureCard* pCreatureCard);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	PlayerEventCallback m_AttackingCallback;
	EventCallback m_AttackingOrBlockingCallback;
	EventCallback m_BlockingCallback;
	EventCallback m_BlockedCallback;
	BlockedByEventCallback m_BlockedEachTimeCallback;
	PlayerEventCallback m_AttackingAloneCallback;

	CCard*	m_pCard;

	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;
	BOOL	m_bThisIsUntappedOnly;

	ListenerPtr<CreatureAttackEventSource::Listener>	m_cpAListener;
	ListenerPtr<CreatureBlockedEventSource::Listener>	m_cpBListener;
	ListenerPtr<CreatureBlockingEventSource::Listener>	m_cpBListener2;

	CCardFilterHelper m_BlockedFilterHelper;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSelfDamageDealt
{
public:
	typedef FastDelegate< void ( CPlayer*, Damage ) > PlayerEventCallback;
	typedef FastDelegate< void ( CCreatureCard*, Damage ) > CreatureEventCallback;
	typedef FastDelegate< void ( CPlaneswalkerCard*, Damage ) > PlaneswalkerEventCallback;
	typedef FastDelegate< void ( Damage ) > DamageEventCallback;

	CWhenSelfDamageDealt(CCard* pCard);
	virtual ~CWhenSelfDamageDealt() {}

	void SetPlayerEventCallback(PlayerEventCallback playerCallback)
	{
		m_PlayerCallback = playerCallback;
	}

	void SetCreatureEventCallback(CreatureEventCallback creatureCallback)
	{
		m_CreatureCallback = creatureCallback;
	}

	void SetPlaneswalkerEventCallback(PlaneswalkerEventCallback planeswalkerCallback)
	{
		m_PlaneswalkerCallback = planeswalkerCallback;
	}

	void SetDamageEventCallback(DamageEventCallback damageCallback)
	{
		m_DamageCallback = damageCallback;
	}

	void SetToControllerOnly(BOOL bControllerOnly)	{ m_bToControllerOnly = bControllerOnly; }
	void SetToOpponentsOnly(BOOL bOpponentsOnly)	{ m_bToOpponentsOnly = bOpponentsOnly; }

	void SetCombatDamageOnly() { m_bCombatDamageOnly = TRUE; m_bNonCombatDamageOnly = FALSE; }
	void SetNonCombatDamageOnly() { m_bNonCombatDamageOnly = TRUE; m_bCombatDamageOnly = FALSE; }

	CCardFilterHelper& GetToCardFilterHelper()				{ return m_ToCardFilterHelper; }
	const CCardFilterHelper& GetToCardFilterHelper() const	{ return m_ToCardFilterHelper; }

	CString GetTriggeredHint(CPlayer*, Damage) const;
	CString GetTriggeredHint(CCreatureCard*, Damage) const;
	CString GetTriggeredHint(Damage) const;

private:
	void OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage);

	PlayerEventCallback m_PlayerCallback;
	CreatureEventCallback m_CreatureCallback;
	PlaneswalkerEventCallback m_PlaneswalkerCallback;
	DamageEventCallback m_DamageCallback;

	CCardFilterHelper m_ToCardFilterHelper;

	BOOL m_bCombatDamageOnly;
	BOOL m_bNonCombatDamageOnly;

	BOOL m_bToControllerOnly;
	BOOL m_bToOpponentsOnly;

	ListenerPtr<DamageDealEventSource::Listener>	m_cpDListener;	// Listen to damage deals, need to save because RemoveAllEventSources() will change this

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
// Sengir Vampire: Whenever a creature dealt damage by Sengir Vampire is put into a graveyard, put a +1/+1 counter on Sengir Vampire.
//
class CORE_EXPORT CWhenSelfDamageDealt2
{
public:
	typedef FastDelegate< void ( CCard* ) > EventCallback;

	CWhenSelfDamageDealt2(CCard* pCard);
	virtual ~CWhenSelfDamageDealt2() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	CString GetTriggeredHint(CCard* pCard) const;

protected:
	void OnDamageDealtToCreature(CCreatureCard* pToCreature, Damage damage);
	void OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnEndOfTurn(CNode* pToNode);
	void OnSelfMoved(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfDamageDealt m_WhenSelfDamageDealt;
	CWhenCardMoved m_WhenCardMoved;
	CWhenNodeChanged m_WhenNodeChanged;
	CWhenSelfInplay m_WhenSelfMoved;

	CCountedCardContainer_	m_DamagedCreaturesThisTurn;

	EventCallback m_Callback;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenDamageDealt
{
public:
	typedef FastDelegate< void ( CCard*, CCreatureCard*, Damage ) > CreatureEventCallback;
	typedef FastDelegate< void ( CCard*, CPlayer*, Damage ) > PlayerEventCallback;
	typedef FastDelegate< void ( CCard*, CPlaneswalkerCard*, Damage ) > PlaneswalkerEventCallback;
	typedef FastDelegate< void ( Damage ) > DamageEventCallback;
	
	CWhenDamageDealt(CCard* pCard);
	virtual ~CWhenDamageDealt() {}

	void ForceStart();

	void SetCreatureEventCallback(CreatureEventCallback callback)
	{
		m_CreatureCallback = callback;
	}

	void SetPlayerEventCallback(PlayerEventCallback callback)
	{
		m_PlayerCallback = callback;
	}

	void SetPlaneswalkerEventCallback(PlaneswalkerEventCallback callback)
	{
		m_PlaneswalkerCallback = callback;
	}


	void SetDamageEventCallback(DamageEventCallback damageCallback)
	{
		m_DamageCallback = damageCallback;
	}

	void SetToControllerOnly(BOOL bControllerOnly)	{ m_bToControllerOnly = bControllerOnly; }
	void SetToOpponentsOnly(BOOL bOpponentsOnly)	{ m_bToOpponentsOnly = bOpponentsOnly; }

	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	void SetCombatDamageOnly(BOOL bCombatDamageOnly)		{ m_bCombatDamageOnly = bCombatDamageOnly; }
	void SetNonCombatDamageOnly(BOOL bNonCombatDamageOnly)	{ m_bNonCombatDamageOnly = bNonCombatDamageOnly; }

	CCardFilterHelper& GetFromCardFilterHelper()				{ return m_FromCardFilterHelper; }
	const CCardFilterHelper& GetFromCardFilterHelper() const	{ return m_FromCardFilterHelper; }

	CCardFilterHelper& GetToCardFilterHelper()				{ return m_ToCardFilterHelper; }
	const CCardFilterHelper& GetToCardFilterHelper() const	{ return m_ToCardFilterHelper; }

	CString GetTriggeredHint(CCard* pCard, CCreatureCard*, Damage) const;
	CString GetTriggeredHint(CCard* pCard, CPlayer*, Damage) const;
	CString GetTriggeredHint(CCard* pCard, CPlaneswalkerCard*, Damage) const;
	CString GetTriggeredHint(Damage) const;

private:
	void OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	CreatureEventCallback m_CreatureCallback;
	PlayerEventCallback m_PlayerCallback;
	PlaneswalkerEventCallback m_PlaneswalkerCallback;
	DamageEventCallback m_DamageCallback;

	CCardFilterHelper m_FromCardFilterHelper;
	CCardFilterHelper m_ToCardFilterHelper;

	BOOL m_bCombatDamageOnly;
	BOOL m_bNonCombatDamageOnly;

	BOOL m_bToControllerOnly;
	BOOL m_bToOpponentsOnly;

	BOOL m_bMonitorControllerOnly;
	BOOL m_bMonitorOpponentsOnly;

	ListenerPtr<DamageDealEventSource::Listener>	m_cpDListener;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenCardDiscarded
{
public:
	typedef FastDelegate< void ( CPlayer*, CCard*, CPlayer* ) > EventCallback;

	CWhenCardDiscarded(CCard* pCard);
	virtual ~CWhenCardDiscarded() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }
	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	CString GetTriggeredHint(CPlayer*, CCard* pCard, CPlayer*) const;

private:
	void OnCardDiscarded(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;
	BOOL	m_bThisIsUntappedOnly;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpMListener;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenOrientationChanged
{
public:
	typedef FastDelegate< void ( CCard*, Orientation, Orientation ) > EventCallback;

	CWhenOrientationChanged(CCard* pCard);
	virtual ~CWhenOrientationChanged() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetZoneId(ZoneId zoneId)							{ m_ZoneId = zoneId; }	// Default: In-play
	void SetFromOrientation(Orientation fromOrientation)	{ m_FromOrientation = fromOrientation; }	// Default: all
	void SetToOrientation(Orientation toOrientation)		{ m_ToOrientation = toOrientation; }		// Default: all

	void SetThisIsUntappedOnly(BOOL bUntappedOnly)			{ m_bThisIsUntappedOnly = bUntappedOnly; }
	void SetMonitorControllerOnly(BOOL bControllerOnly)		{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)		{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pCard, Orientation, Orientation) const;

private:
	void OnOrientationChanged(CCard* pCard, Orientation fromOrientation, Orientation toOrientation);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	CCardFilterHelper m_CardFilterHelper;

	EventCallback m_Callback;

	ListenerPtr<CardOrientationEventSource::Listener>	m_cpOListener;	// Listen to orientation changes

	ZoneId	m_ZoneId;
	Orientation	m_FromOrientation;
	Orientation	m_ToOrientation;
	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;
	BOOL	m_bThisIsUntappedOnly;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenTappedForMana
{
public:
	typedef FastDelegate< void ( const CManaProductionAbilityAction* ) > EventCallback;

	CWhenTappedForMana(CCard* pCard);
	virtual ~CWhenTappedForMana() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }
	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(const CManaProductionAbilityAction* pAction) const;
    CManaPool_ GetManaPool(const CManaProductionAbilityAction* pAction) const;

private:
	void OnTappedForMana(const CManaProductionAbilityAction* pAction, BOOL bResult);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	CCardFilterHelper m_CardFilterHelper;

	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;
	BOOL	m_bThisIsUntappedOnly;

	ListenerPtr<CardTapForManaEventSource::Listener>	m_cpTListener;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSelfTappedForMana
{
public:
	typedef FastDelegate< void ( const CManaProductionAbilityAction* ) > EventCallback;

	CWhenSelfTappedForMana(CCard* pCard);
	virtual ~CWhenSelfTappedForMana() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	CString GetTriggeredHint(const CManaProductionAbilityAction*) const;

protected:
	void OnTappedForMana(const CManaProductionAbilityAction* pAction, BOOL bResult);

	EventCallback m_Callback;

	ListenerPtr<CardTapForManaEventSource::Listener> m_cpTListener;
	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSelfOrientationChanged
{
public:
	typedef FastDelegate< void ( CCard* ) > EventCallback;

	CWhenSelfOrientationChanged(CCard* pCard);
	virtual ~CWhenSelfOrientationChanged() {}

	void SetTapEventCallback(EventCallback tapCallback)
	{
		m_TapCallback = tapCallback;
	}

	void SetUntapEventCallback(EventCallback untapCallback)
	{
		m_UntapCallback = untapCallback;
	}

	CString GetTriggeredHint(CCard* pCard) const;

private:
	void OnOrientationChanged(COrientation* pOrientation, Orientation fromOrientation, Orientation toOrientation);

	EventCallback m_TapCallback;
	EventCallback m_UntapCallback;

	CCard*	m_pCard;
	ListenerPtr<COrientation::Listener>	m_cpOListener;	// Listen to this card's orientation changes
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSelfEnchantCountChanged
{
public:
	typedef FastDelegate< void ( int, int ) > CountEventCallback;
	typedef FastDelegate< void () > EventCallback;

	CWhenSelfEnchantCountChanged(CCard* pCard);

	void SetFromCount(int nFromCount) { m_nFromCount = nFromCount; } // Default: SpecialNumber::Any
	void SetToCount(int nToCount) { m_nToCount = nToCount; } // Default: SpecialNumber::Any

	void SetCountEventCallback(CountEventCallback callback)
	{
		m_CountCallback = callback;
	}

	void SetEnchantEventCallback(EventCallback callback)
	{
		m_EnchantCallback = callback;
	}

	void SetDisenchantEventCallback(EventCallback callback)
	{
		m_DisenchantCallback = callback;
	}

	CString GetTriggeredHint() const;
	CString GetTriggeredHint(int, int) const;

private:
	void OnEnchantCountChanged(int nFromCount, int nToCount);

	CountEventCallback m_CountCallback;
	EventCallback m_EnchantCallback;
	EventCallback m_DisenchantCallback;

	int m_nFromCount;
	int m_nToCount;

	CCard* m_pCard;

	ListenerPtr<CNumberEventSource<int>::Listener>	m_cpListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenEnchantCountChanged
{
public:
	typedef FastDelegate< void ( CCard*, int, int ) > CountEventCallback;
	typedef FastDelegate< void ( CCard* ) > EventCallback;

	CWhenEnchantCountChanged(CCard* pCard);

	void SetFromCount(int nFromCount) { m_nFromCount = nFromCount; } // Default: SpecialNumber::Any
	void SetToCount(int nToCount) { m_nToCount = nToCount; } // Default: SpecialNumber::Any

	void SetCountEventCallback(CountEventCallback callback)
	{
		m_CountCallback = callback;
	}

	void SetEnchantEventCallback(EventCallback callback)
	{
		m_EnchantCallback = callback;
	}

	void SetDisenchantEventCallback(EventCallback callback)
	{
		m_DisenchantCallback = callback;
	}

	CString GetTriggeredHint(CCard* pCard) const;
	CString GetTriggeredHint(CCard* pCard, int, int) const;

private:
	void OnEnchantCountChanged(CCard* pCard, int nFromCount, int nToCount);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	CountEventCallback m_CountCallback;
	EventCallback m_EnchantCallback;
	EventCallback m_DisenchantCallback;

	int m_nFromCount;
	int m_nToCount;

	CCard* m_pCard;

	ListenerPtr<CardEnchantCountEventSource::Listener>	m_cpListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenEquipped
{
public:
	typedef FastDelegate< void ( CCard*, CCard*, CCard* ) > EventCallback;

	CWhenEquipped(CCard* pCard);


	void SetEventCallback(EventCallback callback)
	{
		m_EquippedCallback = callback;
	}

	CString GetTriggeredHint(CCard*, CCard*, CCard*) const;


public:
	void SetOnUnequip()               { m_pOnUnequip = TRUE;}

private:
	void OnEquipped(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_EquippedCallback;

	CCard* m_pCard;

	BOOL m_pOnEquip;
	BOOL m_pOnUnequip;

	ListenerPtr<CardEquippedEventSource::Listener>	m_cpListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSubjectTargeted
{
public:
	typedef FastDelegate< void ( CCard*, CPlayer*) > CardEventCallback;
	typedef FastDelegate< void ( CPlayer*,  CPlayer*) > PlayerEventCallback;

	CWhenSubjectTargeted(CCard* pCard, BOOL bMonitorInplayCards = TRUE,
						 BOOL bMonitorStackSpells = TRUE);
	virtual ~CWhenSubjectTargeted() {}

	void SetCardEventCallback(CardEventCallback callback)
	{
		m_CardCallback = callback;
	}

	void SetPlayerEventCallback(PlayerEventCallback callback)
	{
		m_PlayerCallback = callback;
	}

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }	// Default: FALSE
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }	// Default: FALSE

	CString GetTriggeredHint(CCard* pCard, CPlayer* byPlayer) const;
	CString GetTriggeredHint(CPlayer* pPlayer, CPlayer* byPlayer) const;

private:
	void OnSubjectTargeted(const CSubjectGroup& subjectGroup, CPlayer* byPlayer);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	PlayerEventCallback m_PlayerCallback;
	CardEventCallback m_CardCallback;

	ListenerPtr<TargetSubjectEventSource::Listener>	m_cpTListener;

	CCard* m_pCard;

	CCardFilterHelper m_CardFilterHelper;
	BOOL m_bMonitorInplayCards;
	BOOL m_bMonitorStackSpells;
	BOOL m_bMonitorControllerOnly;
	BOOL m_bMonitorOpponentsOnly;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenCardKeywordChanged
{
public:
	typedef FastDelegate< void ( CCard*, CardKeyword, CardKeyword ) > EventCallback;

	CWhenCardKeywordChanged(CCard* pCard);
	virtual ~CWhenCardKeywordChanged() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	CString GetTriggeredHint(CCard* pCard, CardKeyword, CardKeyword) const;

private:
	void OnCardKeywordChanged(CCardKeyword* pCardKeyword, CardKeyword fromCardKeyword, CardKeyword toCardKeyword);

	EventCallback m_Callback;
	CCard* m_pCard;

	ListenerPtr<CCardKeyword::Listener>	m_cpListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenPlayerLifeChanged
{
public:
	typedef FastDelegate< void ( const CPlayer*, Life, Life ) > EventCallback;

	CWhenPlayerLifeChanged(CCard* pCard);
	virtual ~CWhenPlayerLifeChanged() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}
	
	void SetThisIsInplayOnly(BOOL bInplayOnly)			{ m_bThisIsInplayOnly = bInplayOnly; }
	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }
	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	CString GetTriggeredHint(const CPlayer* pPlayer, Life, Life) const;

private:
	void OnLifeChanged(CPlayer* pPlayer, Life nFromLife, Life nToLife);

	EventCallback m_Callback;
	
	ListenerPtr<ChangeLifeEventSource::Listener>	m_cpPListener;

	BOOL	m_bThisIsInplayOnly;
	BOOL	m_bThisIsUntappedOnly;
	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenControllerChanged
{
public:
	typedef FastDelegate< void ( CPlayer*, CPlayer*, CCard* ) > EventCallback;

	CWhenControllerChanged(CCard* pCard);
	virtual ~CWhenControllerChanged() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	CString GetTriggeredHint(CPlayer*, CPlayer*, CCard* pCard) const;

private:
	void OnControllerChanged(CPlayer* pFromPlayer, CPlayer* pToPlayer, CCard* pCard);

	EventCallback m_Callback;

	ListenerPtr<CPtrEventSource1<CPlayer, CCard*>::Listener>	m_cpListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenSelfCardTypeChanged
{
public:
	typedef FastDelegate< void ( CCard*, CardType, CardType ) > EventCallback;

	CWhenSelfCardTypeChanged(CCard* pCard);
	virtual ~CWhenSelfCardTypeChanged() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	CString GetTriggeredHint(CCard* pCard, CardType, CardType) const;

private:
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);

	EventCallback m_Callback;

	ListenerPtr<CardTypeEventSource::Listener>	m_cpListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenCardTypeChanged
{
public:
	typedef FastDelegate< void ( CCard*, CardType, CardType ) > EventCallback;

	CWhenCardTypeChanged(CCard* pCard);
	virtual ~CWhenCardTypeChanged() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	CString GetTriggeredHint(CCard* pCard, CardType, CardType) const;

private:
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CCard* m_pCard;

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	ListenerPtr<CardTypeEventSource::Listener>	m_cpListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenCreatureKeywordChanged
{
public:
	typedef FastDelegate< void ( CCreatureCard*, CreatureKeyword, CreatureKeyword ) > EventCallback;

	CWhenCreatureKeywordChanged(CCreatureCard* pCreature);
	virtual ~CWhenCreatureKeywordChanged() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	CString GetTriggeredHint(CCreatureCard* pCreatureCard, CreatureKeyword, CreatureKeyword) const;

private:
	void OnCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword);

	EventCallback m_Callback;
	CCreatureCard* m_pCreatureCard;

	ListenerPtr<CCreatureKeyword::Listener>	m_cpListener;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenIsAlsoAChanged
{
public:
	typedef FastDelegate< void ( CCard*, CCard*, CCard* ) > EventCallback;

	CWhenIsAlsoAChanged(CCard* pCard);
	virtual ~CWhenIsAlsoAChanged() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	CString GetTriggeredHint(CCard* pCard, CCard*, CCard*) const;

private:
	void OnIsAlsoAChanged(CCard* pFromCard, CCard* pToCard);

	EventCallback m_Callback;
	CCard* m_pCard;

	ListenerPtr<CPtrEventSource<CCard>::Listener>	m_cpListener;
};

/*
//____________________________________________________________________________
//
class CORE_EXPORT CWhenSelfActivationStatusChanged 
{
public:
	typedef FastDelegate< void () > EventCallback;

	CWhenSelfActivationStatusChanged(CCard* pCard, BOOL bUntappedOnly = FALSE);
	virtual ~CWhenSelfActivationStatusChanged() {}

	void SetActivateEventCallback(EventCallback callback)
	{
		m_ActivateCallback = callback;
	}

	void SetDeactivateEventCallback(EventCallback callback)
	{
		m_DeactivateCallback = callback;
	}

private:
	void OnActivated()
	{
		if (!m_ActivateCallback.empty())
		{
			m_ActivateCallback();
		}
	}

	void OnDeactivated()
	{
		if (!m_DeactivateCallback.empty())
		{
			m_DeactivateCallback();
		}
	}

	void OnTapped();
	void OnUntapped();

	void OnEnteredInPlay(CZone* pFromZone, CZone* pInplay, CPlayer* pByPlayer);
	void OnLeftInPlay(CZone* pInplay, CZone* pToZone, CPlayer* pByPlayer);

	CWhenSelfOrientationChanged m_WhenSelfOrientationChanged;
	CWhenSelfInplay m_WhenSelfInPlay;

	EventCallback m_ActivateCallback;
	EventCallback m_DeactivateCallback;

	CCard*	m_pCard;
	BOOL_	m_bActivated;

	BOOL	m_bUntappedOnly;
};
*/
//____________________________________________________________________________
//
class CORE_EXPORT CWhenSpellCastAny
{
public:
	typedef FastDelegate< void ( CCard* ) > EventCallback;

	CWhenSpellCastAny(CCard* pCard);
	virtual ~CWhenSpellCastAny() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }
	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pCard) const;

private:
	void OnSpellCasted(CCard* pCard);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	ListenerPtr<CastSpellEventSource::Listener>	m_cpPListener;	// Listen to play card event

	CCardFilterHelper m_CardFilterHelper;

	BOOL	m_bThisIsUntappedOnly;
	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenDamageDealtAny
{
public:
	typedef FastDelegate< void ( CCard*, CCreatureCard*, Damage ) > CreatureEventCallback;
	typedef FastDelegate< void ( CCard*, CPlayer*, Damage ) > PlayerEventCallback;
	typedef FastDelegate< void ( CCard*, CPlaneswalkerCard*, Damage ) > PlaneswalkerEventCallback;
	typedef FastDelegate< void ( Damage ) > DamageEventCallback;
	
	CWhenDamageDealtAny(CCard* pCard);
	virtual ~CWhenDamageDealtAny() {}

	void SetCreatureEventCallback(CreatureEventCallback callback)
	{
		m_CreatureCallback = callback;
	}

	void SetPlayerEventCallback(PlayerEventCallback callback)
	{
		m_PlayerCallback = callback;
	}

	void SetDamageEventCallback(DamageEventCallback damageCallback)
	{
		m_DamageCallback = damageCallback;
	}

	void SetToControllerOnly(BOOL bControllerOnly)	{ m_bToControllerOnly = bControllerOnly; }
	void SetToOpponentsOnly(BOOL bOpponentsOnly)	{ m_bToOpponentsOnly = bOpponentsOnly; }

	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	void SetCombatDamageOnly(BOOL bCombatDamageOnly)		{ m_bCombatDamageOnly = bCombatDamageOnly; }
	void SetNonCombatDamageOnly(BOOL bNonCombatDamageOnly)	{ m_bNonCombatDamageOnly = bNonCombatDamageOnly; }

	CCardFilterHelper& GetFromCardFilterHelper()				{ return m_FromCardFilterHelper; }
	const CCardFilterHelper& GetFromCardFilterHelper() const	{ return m_FromCardFilterHelper; }

	CCardFilterHelper& GetToCardFilterHelper()				{ return m_ToCardFilterHelper; }
	const CCardFilterHelper& GetToCardFilterHelper() const	{ return m_ToCardFilterHelper; }

	CString GetTriggeredHint(CCard* pCard, CCreatureCard*, Damage) const;
	CString GetTriggeredHint(CCard* pCard, CPlayer*, Damage) const;
	CString GetTriggeredHint(Damage) const;

private:
	void OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	CreatureEventCallback m_CreatureCallback;
	PlayerEventCallback m_PlayerCallback;
	PlaneswalkerEventCallback m_PlaneswalkerCallback;
	DamageEventCallback m_DamageCallback;

	CCardFilterHelper m_FromCardFilterHelper;
	CCardFilterHelper m_ToCardFilterHelper;

	BOOL m_bCombatDamageOnly;
	BOOL m_bNonCombatDamageOnly;

	BOOL m_bToControllerOnly;
	BOOL m_bToOpponentsOnly;

	BOOL m_bMonitorControllerOnly;
	BOOL m_bMonitorOpponentsOnly;

	ListenerPtr<DamageDealEventSource::Listener>	m_cpDListener;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CBeforeDamageDealt
{
public:
	typedef FastDelegate< void ( CCard*, CCreatureCard*, Damage, int ) > CreatureEventCallback;
	typedef FastDelegate< void ( CCard*, CPlayer*, Damage, int ) > PlayerEventCallback;
	typedef FastDelegate< void ( CCard*, CPlaneswalkerCard*, Damage ) > PlaneswalkerEventCallback;
	typedef FastDelegate< void ( Damage ) > DamageEventCallback;


	// Index meaning:
	// 0 - Replacement works only if damage is prevented (DamageReplacement keyword)
	// 1 - Replacement works in case when damage can't be prevented (FullDamageReplacement keyword)
	// 2 - Vigor effect
	// 3 - Szadek, Lord of Secrets effect
	// 4 - Hostility effect
	// 5 - Undead Alchemist effect
	
	CBeforeDamageDealt(CCard* pCard);
	virtual ~CBeforeDamageDealt() {}

	void SetCreatureEventCallback(CreatureEventCallback callback)
	{
		m_CreatureCallback = callback;
	}

	void SetPlayerEventCallback(PlayerEventCallback callback)
	{
		m_PlayerCallback = callback;
	}

	void SetDamageEventCallback(DamageEventCallback damageCallback)
	{
		m_DamageCallback = damageCallback;
	}

	void SetToControllerOnly(BOOL bControllerOnly)	{ m_bToControllerOnly = bControllerOnly; }
	void SetToOpponentsOnly(BOOL bOpponentsOnly)	{ m_bToOpponentsOnly = bOpponentsOnly; }

	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	void SetCombatDamageOnly(BOOL bCombatDamageOnly)		{ m_bCombatDamageOnly = bCombatDamageOnly; }
	void SetNonCombatDamageOnly(BOOL bNonCombatDamageOnly)	{ m_bNonCombatDamageOnly = bNonCombatDamageOnly; }

	CCardFilterHelper& GetFromCardFilterHelper()				{ return m_FromCardFilterHelper; }
	const CCardFilterHelper& GetFromCardFilterHelper() const	{ return m_FromCardFilterHelper; }

	CCardFilterHelper& GetToCardFilterHelper()				{ return m_ToCardFilterHelper; }
	const CCardFilterHelper& GetToCardFilterHelper() const	{ return m_ToCardFilterHelper; }

	CString GetTriggeredHint(CCard* pCard, CCreatureCard*, Damage, int) const;
	CString GetTriggeredHint(CCard* pCard, CPlayer*, Damage, int) const;
	CString GetTriggeredHint(Damage) const;

private:
	void OnDamageDealt(CCard* pFromCard, CPlayer* pToPlayer, CCreatureCard* pToCreature, CPlaneswalkerCard* pToPlaneswalker, Damage damage, int effect_index);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	CreatureEventCallback m_CreatureCallback;
	PlayerEventCallback m_PlayerCallback;
	PlaneswalkerEventCallback m_PlaneswalkerCallback;
	DamageEventCallback m_DamageCallback;

	CCardFilterHelper m_FromCardFilterHelper;
	CCardFilterHelper m_ToCardFilterHelper;

	BOOL m_bCombatDamageOnly;
	BOOL m_bNonCombatDamageOnly;

	BOOL m_bToControllerOnly;
	BOOL m_bToOpponentsOnly;

	BOOL m_bMonitorControllerOnly;
	BOOL m_bMonitorOpponentsOnly;

	ListenerPtr<BeforeDamageDealtEventSource::Listener>	m_cpDListener;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenCounterMoved
{
public:
	typedef FastDelegate< void ( CCard* , LPCTSTR, int , int)  > EventCallback;

	CWhenCounterMoved(CCard* pCard);
	virtual ~CWhenCounterMoved() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetFromControllerOnly(BOOL bControllerOnly)	{ m_bFromControllerOnly = bControllerOnly; }	
	void SetFromOpponentsOnly(BOOL bOpponentsOnly)		{ m_bFromOpponentsOnly = bOpponentsOnly; }

	void SetOnIncreaseOnly(BOOL bOnIncreaseOnly)		{ m_bOnIncreaseOnly = bOnIncreaseOnly; }	
	void SetOnDecreaseOnly(BOOL bOnDecreaseOnly)		{ m_bOnDecreaseOnly = bOnDecreaseOnly; }	
		
	BOOL GetFromControllerOnly() const					{ return m_bFromControllerOnly; }	
	BOOL GetFromOpponentsOnly() const					{ return m_bFromOpponentsOnly; }	

	void SetReportInPlayChanges(BOOL bReport)			{ m_bReportInPlayChanges = bReport; }	// Default:	FALSE
	BOOL GetReportInPlayChanges() const					{ return m_bReportInPlayChanges; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pFromCard, LPCTSTR name, int old, int n_value) const;

private:
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	BOOL m_bTriggerBefore;
	BOOL m_bTriggerAfter;

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;	// Listen to all players' zone changes
	
	CCardFilterHelper m_CardFilterHelper;

	BOOL	m_bFromControllerOnly;	
	BOOL	m_bFromOpponentsOnly;
	BOOL	m_bOnIncreaseOnly;
	BOOL	m_bOnDecreaseOnly;

	BOOL	m_bReportInPlayChanges;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenTimeCounterRemoved
{
public:
	typedef FastDelegate< void ( CCard* , LPCTSTR, int , int)  > EventCallback;

	CWhenTimeCounterRemoved(CCard* pCard);
	virtual ~CWhenTimeCounterRemoved() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetFromControllerOnly(BOOL bControllerOnly)	{ m_bFromControllerOnly = bControllerOnly; }	

	void SetFromOpponentsOnly(BOOL bOpponentsOnly)		{ m_bFromOpponentsOnly = bOpponentsOnly; }	
		
	BOOL GetFromControllerOnly() const					{ return m_bFromControllerOnly; }	

	BOOL GetFromOpponentsOnly() const					{ return m_bFromOpponentsOnly; }	

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pFromCard, LPCTSTR name, int old, int n_value) const;

private:
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	BOOL m_bTriggerBefore;
	BOOL m_bTriggerAfter;

	EventCallback m_Callback;

	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;	// Listen to all players' zone changes
	
	CCardFilterHelper m_CardFilterHelper;

	BOOL	m_bFromControllerOnly;	
	BOOL	m_bFromOpponentsOnly;	

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenCardCycled
{
public:
	typedef FastDelegate< void ( CCard* , CPlayer*)  > EventCallback;

	CWhenCardCycled(CCard* pCard);
	virtual ~CWhenCardCycled() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetFromControllerOnly(BOOL bControllerOnly)	{ m_bFromControllerOnly = bControllerOnly; }	

	void SetFromOpponentsOnly(BOOL bOpponentsOnly)		{ m_bFromOpponentsOnly = bOpponentsOnly; }	
		
	BOOL GetFromControllerOnly() const					{ return m_bFromControllerOnly; }	

	BOOL GetFromOpponentsOnly() const					{ return m_bFromOpponentsOnly; }	

	void SetReportInPlayChanges(BOOL bReport)			{ m_bReportInPlayChanges = bReport; }	// Default:	FALSE
	BOOL GetReportInPlayChanges() const					{ return m_bReportInPlayChanges; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pFromCard, CPlayer* pByPlayer) const;

private:
	void OnCardCycled(CCard* pFromCard,  CPlayer* pByPlayer);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	BOOL m_bTriggerBefore;
	BOOL m_bTriggerAfter;

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	ListenerPtr<CardCycledEventSource::Listener>	m_cpAListener;	// Listen to all players' zone changes
	
	CCardFilterHelper m_CardFilterHelper;

	BOOL	m_bFromControllerOnly;	
	BOOL	m_bFromOpponentsOnly;	

	BOOL	m_bReportInPlayChanges;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenThisCardCycled
{
public:
	typedef FastDelegate< void ( CCard* , CPlayer*)  > EventCallback;

	CWhenThisCardCycled(CCard* pCard);
	virtual ~CWhenThisCardCycled() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetFromControllerOnly(BOOL bControllerOnly)	{ m_bFromControllerOnly = bControllerOnly; }	

	void SetFromOpponentsOnly(BOOL bOpponentsOnly)		{ m_bFromOpponentsOnly = bOpponentsOnly; }	
		
	BOOL GetFromControllerOnly() const					{ return m_bFromControllerOnly; }	

	BOOL GetFromOpponentsOnly() const					{ return m_bFromOpponentsOnly; }	

	void SetReportInPlayChanges(BOOL bReport)			{ m_bReportInPlayChanges = bReport; }	// Default:	FALSE
	BOOL GetReportInPlayChanges() const					{ return m_bReportInPlayChanges; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pFromCard, CPlayer* pByPlayer) const;

private:
	void OnCardCycled(CCard* pFromCard,  CPlayer* pByPlayer);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	BOOL m_bTriggerBefore;
	BOOL m_bTriggerAfter;

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	ListenerPtr<CardCycledEventSource::Listener>	m_cpAListener;	// Listen to all players' zone changes
	
	CCardFilterHelper m_CardFilterHelper;

	BOOL	m_bFromControllerOnly;	
	BOOL	m_bFromOpponentsOnly;	

	BOOL	m_bReportInPlayChanges;

	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSpecialTrigger
{
public:
	typedef FastDelegate< void ( CCard* , int)  > EventCallback;

	CSpecialTrigger(CCard* pCard);
	virtual ~CSpecialTrigger() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetFromControllerOnly(BOOL bControllerOnly)	{ m_bFromControllerOnly = bControllerOnly; }	

	void SetFromOpponentsOnly(BOOL bOpponentsOnly)		{ m_bFromOpponentsOnly = bOpponentsOnly; }	
		
	BOOL GetFromControllerOnly() const					{ return m_bFromControllerOnly; }	

	BOOL GetFromOpponentsOnly() const					{ return m_bFromOpponentsOnly; }	

	void SetReportInPlayChanges(BOOL bReport)			{ m_bReportInPlayChanges = bReport; }	// Default:	FALSE
	BOOL GetReportInPlayChanges() const					{ return m_bReportInPlayChanges; }

	void SetTriggerIndex(int pValue)                              {m_pValue = pValue;}

	void SetTriggerinZone(ZoneId pZoneId)                      { m_pInZone = pZoneId; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pCard, int n_value) const;

private:
	void OnSpecialTrigger(CCard* pCard,  int n_value);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	BOOL m_bTriggerBefore;
	BOOL m_bTriggerAfter;

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	ListenerPtr<SpecialTriggerEventSource::Listener>	m_cpAListener;	// Listen to all players' zone changes
	
	CCardFilterHelper m_CardFilterHelper;

	BOOL	m_bFromControllerOnly;	
	BOOL	m_bFromOpponentsOnly;	

	BOOL	m_bReportInPlayChanges;

	int     m_pValue;
	ZoneId  m_pInZone;
	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CSpecialChaosTrigger
{
public:
	typedef FastDelegate< void ( CCard* , int)  > EventCallback;

	CSpecialChaosTrigger(CCard* pCard);
	virtual ~CSpecialChaosTrigger() {}

	void SetEventCallback(EventCallback callback)
	{
		m_Callback = callback;
	}

	void SetFromControllerOnly(BOOL bControllerOnly)	{ m_bFromControllerOnly = bControllerOnly; }	

	void SetFromOpponentsOnly(BOOL bOpponentsOnly)		{ m_bFromOpponentsOnly = bOpponentsOnly; }	
		
	BOOL GetFromControllerOnly() const					{ return m_bFromControllerOnly; }	

	BOOL GetFromOpponentsOnly() const					{ return m_bFromOpponentsOnly; }	

	void SetReportInPlayChanges(BOOL bReport)			{ m_bReportInPlayChanges = bReport; }	// Default:	FALSE
	BOOL GetReportInPlayChanges() const					{ return m_bReportInPlayChanges; }

	void SetTriggerIndex(int pValue)                              {m_pValue = pValue;}
	void SetForceTriggerIndex(int pValue)                              {m_pValue1 = pValue;}

	void SetTriggerinZone(ZoneId pZoneId)                      { m_pInZone = pZoneId; }

	CCardFilterHelper& GetCardFilterHelper()				{ return m_CardFilterHelper; }
	const CCardFilterHelper& GetCardFilterHelper() const	{ return m_CardFilterHelper; }

	CString GetTriggeredHint(CCard* pCard, int n_value) const;

private:
	void OnSpecialTrigger(CCard* pCard,  int n_value);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	BOOL m_bTriggerBefore;
	BOOL m_bTriggerAfter;

	CWhenSelfInplay m_WhenInplay;

	EventCallback m_Callback;

	ListenerPtr<SpecialTriggerEventSource::Listener>	m_cpAListener;	// Listen to all players' zone changes
	
	CCardFilterHelper m_CardFilterHelper;

	BOOL	m_bFromControllerOnly;	
	BOOL	m_bFromOpponentsOnly;	

	BOOL	m_bReportInPlayChanges;

	int     m_pValue;
	int     m_pValue1;
	ZoneId  m_pInZone;
	CCard*	m_pCard;
};

//____________________________________________________________________________
//
class CORE_EXPORT CWhenAttackedBlockedAny
{
public:
	typedef FastDelegate< void ( CCreatureCard* ) > EventCallback;
	typedef FastDelegate< void ( CCreatureCard*, CCreatureCard* ) > BlockedByEventCallback;
	typedef FastDelegate< void ( CCreatureCard*, AttackSubject ) > PlayerEventCallback;

	CWhenAttackedBlockedAny(CCard* pCard);
	virtual ~CWhenAttackedBlockedAny() {}

	void SetAttackingEventCallback(PlayerEventCallback callback);
	void SetAttackingOrBlockingEventCallback(EventCallback callback);
	void SetBlockingEventCallback(EventCallback callback);
	void SetBlockedEventCallback(EventCallback callback);
	void SetBlockedEachTimeEventCallback(BlockedByEventCallback callback);
	void SetAttackingAloneEventCallback(PlayerEventCallback callback);

	bool GetWhenAttacking() const { return !m_AttackingCallback.empty() || !m_AttackingOrBlockingCallback.empty(); }
	bool GetWhenBlocking() const { return !m_BlockingCallback.empty() || !m_AttackingOrBlockingCallback.empty(); }
	bool GetWhenBlocked() const { return !m_BlockedCallback.empty(); }
	bool GetWhenBlockedEachTime() const { return !m_BlockedEachTimeCallback.empty(); }
	bool GetWhenAttackingAlone() const { return !m_AttackingAloneCallback.empty(); }

	void SetThisIsUntappedOnly(BOOL bUntappedOnly)		{ m_bThisIsUntappedOnly = bUntappedOnly; }
	void SetMonitorControllerOnly(BOOL bControllerOnly)	{ m_bMonitorControllerOnly = bControllerOnly; }
	void SetMonitorOpponentsOnly(BOOL bOpponentsOnly)	{ m_bMonitorOpponentsOnly = bOpponentsOnly; }

	void ForceStart();
	void SetTriggerinZone(ZoneId pZoneId)                      { m_pInZone = pZoneId; }

	CString GetTriggeredHint(CCreatureCard* pCreatureCard) const;
	CString GetTriggeredHint(CCreatureCard* pAttackingCreatureCard, CCreatureCard* pBlockedByCreatureCard) const;
	CString GetTriggeredHint(CCreatureCard* pCreatureCard, AttackSubject attacked) const;

	CCardFilterHelper& GetBlockedFilter()				{ return m_BlockedFilterHelper; }
	const CCardFilterHelper& GetBlockedFilter() const	{ return m_BlockedFilterHelper; }

private:
	void OnCreatureAttacked(CCreatureCard* pCreatureCard)	{ OnAttackedBlocked(pCreatureCard); }
	void OnCreatureBlocked(CCreatureCard* pCreatureCard)	{ OnAttackedBlocked(pCreatureCard); }	
	void OnCreatureBlocking(CCreatureCard* pCreatureCard)	{ OnAttackedBlocked(pCreatureCard); }	
	void OnAttackedBlocked(CCreatureCard* pCreatureCard);

	void OnEnterInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnLeaveInplay(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfInplay m_WhenInplay;

	PlayerEventCallback m_AttackingCallback;
	EventCallback m_AttackingOrBlockingCallback;
	EventCallback m_BlockingCallback;
	EventCallback m_BlockedCallback;
	BlockedByEventCallback m_BlockedEachTimeCallback;
	PlayerEventCallback m_AttackingAloneCallback;

	CCard*	m_pCard;

	BOOL	m_bMonitorControllerOnly;
	BOOL	m_bMonitorOpponentsOnly;
	BOOL	m_bThisIsUntappedOnly;

	ListenerPtr<CreatureAttackEventSource::Listener>	m_cpAListener;
	ListenerPtr<CreatureBlockedEventSource::Listener>	m_cpBListener;
	ListenerPtr<CreatureBlockingEventSource::Listener>	m_cpBListener2;

	CCardFilterHelper m_BlockedFilterHelper;
	ZoneId  m_pInZone;
};

//____________________________________________________________________________
//