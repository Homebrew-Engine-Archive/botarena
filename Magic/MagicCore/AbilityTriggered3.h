#pragma once

//____________________________________________________________________________
//
/* class CORE_EXPORT CVanishingAbility 
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CVanishingAbility(CCard* pCard, int nVanishingValue);
	virtual ~CVanishingAbility() {}

	void OnUpkeep(CNode* pToNode);
	void OnEnterInplay(CZone* pFromZone, CZone* pInplay, CPlayer* pByPlayer, MoveType moveType4);
	void OnLeaveInplay(CZone* pInplay, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnCardKeywordChanged(CCard* pCard, CardKeyword fromCardKeyword, CardKeyword toCardKeyword);
	void StartMonitoring(int nVanishingValue);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	CWhenCardKeywordChanged m_WhenCardKeywordChanged;
	CWhenSelfInplay	m_WhenInplay;

	ListenerPtr<ChangeNodeEventSource::Listener>	m_cpNListener;
};
 */
//____________________________________________________________________________
//
// Storage Matrix: As long as <this> is untapped, each player chooses artifact, creature, or land during his or her untap step.
//                 That player can untap only permanents of the chosen type this step.
//
class CORE_EXPORT CTriggeredChgUntapCardTypeWhenNodeChangedAbility
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredChgUntapCardTypeWhenNodeChangedAbility(CCard* pCard);
	virtual ~CTriggeredChgUntapCardTypeWhenNodeChangedAbility() {}

public:
	void AddCardTypeSelection(CardType untapCardType, LPCTSTR strText) 
	{ m_CardTypeSelection.push_back(std::make_pair(untapCardType, strText)); }

	const CWhenNodeChanged& GetTrigger() const { return m_WhenNodeChanged; }
	CWhenNodeChanged& GetTrigger() { return m_WhenNodeChanged; }

protected:
	OVERRIDE(void, GetSelections)(CActionContainer& actions, CPlayer* pPlayer,
		const TriggerContextType& triggerContext,
		const TriggerInfo& info,
		BOOL bSetNames) const;
	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);

	void OnNodeChanged(CNode* pNode);

	CWhenNodeChanged m_WhenNodeChanged;

	std::vector<std::pair<CardType, CString>> m_CardTypeSelection;
};

//____________________________________________________________________________
//
// Treefolk Seedlings:		Treefolk Seedlings's toughness is equal to the number of forests you control.\n2/*
// Yavimaya Enchantress:	Yavimaya Enchantress gets +1/+1 for each enchantment in play.\n2/2
// Revenant:				Flying\rRevenant's power and toughness are each equal to the number of creature cards in your graveyard.\n*/*
// Beast of Burden:			Beast of Burden's power and toughness are each equal to the number of creatures in play.\n*/*
// Nightmare:				Flying\rNightmare's power and toughness are each equal to the number of swamps you control.\n*/*
// Maro:					nMaro's power and toughness are each equal to the number of cards in your hand.\n*/*
// Uktabi Wildcats:			Uktabi Wildcats's power and toughness are each equal to the number of forests you control.\r{G}, Sacrifice a forest: Regenerate Uktabi Wildcats.\n*/*
// Swarm of Rats
//
class CORE_EXPORT CTriggeredChgPwrTghWhenCardPlayedAbility 
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	CTriggeredChgPwrTghWhenCardPlayedAbility(CCard* pCard, ZoneId zoneId, CardComparer* pCardComparer, 
											 CCreatureCard* pCreatureCard = NULL); // If NULL, same as pCard
	virtual ~CTriggeredChgPwrTghWhenCardPlayedAbility();

public:
	void StartListening(CPlayer* pController);

	void ForceStart(BOOL addListener);

	void SetChangePowerOnly();
	void SetChangeToughnessOnly();

	void SetMaximumAddedPower(Power nMaxPower) { m_nMaxAddedPower = nMaxPower; }
	void SetMaximumAddedToughness(Life nMaxToughness) { m_nMaxAddedToughness = nMaxToughness; }

	void SetPowerMultiplier(Power nPowerMultiplier) { m_nPowerMultiplier = nPowerMultiplier; }
	void SetToughnessMultiplier(Life nToughnessMultiplier) { m_nToughnessMultiplier = nToughnessMultiplier; }

	void SetListenToAllPlayersZones();

	CCardFilter& GetSurveyCardFilter()				{ return m_SurveyCardFilter; }
	const CCardFilter& GetSurveyCardFilter() const	{ return m_SurveyCardFilter; }

protected:
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnEnchantZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	void OnCardsChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	void UpdateCardCount(CPlayer* pController = NULL);
	VIRTUAL(void, OnCardCountChanged)(int nNewCount);

	CWhenSelfMoved m_WhenSelfMoved;
	CWhenSelfMoved m_WhenEnchantSelfMoved;

	CCardFilter	m_SurveyCardFilter;

	ZoneId	m_ZoneId;
	BOOL	m_bChangePower;
	BOOL	m_bChangeToughness;
	BOOL	m_bListenToAllPlayersZones;

	CLifeModifier	m_LifeModifier;
	CPowerModifier	m_PowerModifier;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpNListener;	// Listen to card additions/deletions in current controller's m_ZoneId zone

	Life_	m_nAddedToughness;
	Power_	m_nAddedPower;

	Life	m_nMaxAddedToughness;
	Power	m_nMaxAddedPower;

	Life	m_nToughnessMultiplier;
	Power	m_nPowerMultiplier;

	CCreatureCard*	m_pCreatureCard;
};

//____________________________________________________________________________
//
// Avatar of Hope: If you have 3 life or less, Avatar of Hope costs 6 less to play.
//
class CORE_EXPORT CTriggeredReducedCostWhenPlayerLifeChangedAbility
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredReducedCostWhenPlayerLifeChangedAbility(
		CCard* pCard,
		Life nThresholdLife,
		int nReduceGenericCostBy);
	virtual ~CTriggeredReducedCostWhenPlayerLifeChangedAbility() {}

	void SetOptional(BOOL bOptional) {}

	void OnPlayerLifeChanged(const CPlayer* pPlayer, Life nFromLife, Life nToLife);
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenPlayerLifeChanged m_WhenPlayerLifeChanged;
	CWhenSelfMoved m_WhenSelfMoved;

	Life	m_nThresholdLife;
	int		m_nReduceGenericCostBy;
	BOOL_	m_bReduced;
};

//____________________________________________________________________________
//
class CORE_EXPORT CDredgeAbility 
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	int GetDredgeCount() const				{ return m_DredgeValue; }

protected:
	CDredgeAbility(CCard* pCard, int nDredgeValue);
	virtual ~CDredgeAbility() {}

	int m_DredgeValue;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredAffinityAbility
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredAffinityAbility(
		CCard* pCard,
		CCardFilter* AffinityFilter);
	virtual ~CTriggeredAffinityAbility() {}

	void SetOptional(BOOL bOptional) {}

	void OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);

	ListenerPtr<CardMovementEventSource::Listener>	m_cpCardZoneListener;
	ListenerPtr<CardTypeEventSource::Listener>		m_cpCardTypeListener;
	CWhenSelfMoved m_WhenSelfMoved;

	BOOL_	m_bReduced;
	CCardFilter*	m_AffinityFilter;
	int_ CurrentAffinity;
	CManaCostBase::Color m_Color;
	ZoneId counting_Zone;

public:
	void SetManaReductionColor(CManaCostBase::Color pColor) {m_Color = pColor;}
	void SetCountingZone(ZoneId pZone)  {counting_Zone = pZone;}


};

//____________________________________________________________________________
/*//
class CORE_EXPORT CTriggeredDelveAbility
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredDelveAbility(
		CCard* pCard);
	virtual ~CTriggeredDelveAbility() {}

	void SetOptional(BOOL bOptional) {}

	void OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);	

	ListenerPtr<CardMovementEventSource::Listener>	m_cpCardZoneListener;	
	CWhenSelfMoved m_WhenSelfMoved;

	BOOL_	m_bReduced;	
	int_ CurrentAffinity;
};

//____________________________________________________________________________
*/
class CORE_EXPORT CTriggeredCounterAffinityAbility
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredCounterAffinityAbility(
		CCard* pCard,
		CardComparer* pComparer, LPCTSTR counter_name);
	virtual ~CTriggeredCounterAffinityAbility() {}
	
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);	

	CWhenSelfMoved m_WhenSelfMoved;

	CardComparer*	m_AffinityComparer;
	int_ CurrentAffinity;
	counted_ptr<CConsLessManaEnchantment> m_pAbility;
	LPCTSTR m_counter_name;

	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;	// Listen to all players' zone changes
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredCounterPwrTghEnchantAbility
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredCounterPwrTghEnchantAbility(
		CCard* pCard,
		LPCTSTR counter_name);
	virtual ~CTriggeredCounterPwrTghEnchantAbility() {}
	
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);	

	CWhenSelfMoved m_WhenSelfMoved;

	int_ CurrentAffinity;
	counted_ptr<CPwrTghAttrEnchantment> m_pAbility;
	counted_ptr<CPwrTghAttrEnchantment> m_pAbility1;
	LPCTSTR m_counter_name;

	ListenerPtr<CounterMovedEventSource::Listener>	m_cpAListener;	// Listen to all players' zone changes
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	ListenerPtr<CardEquippedEventSource::Listener>	m_cpListener;
	void OnEquipped(CCard* pEquipCard, CCard* pFromCard, CCard* pToCard);

	BOOL m_pEquipment;
	int_ m_PowerMultiplier;
	int_ m_LifeMultiplier;

public:
	counted_ptr<CPwrTghAttrEnchantment> GetEnchantment()  {return m_pAbility;}
	counted_ptr<CPwrTghAttrEnchantment> GetEnchantment1()  {return m_pAbility1;}
	void SetEquipment()   {m_pEquipment = TRUE;}
	void SetPowerMultiplier(int k)  {m_PowerMultiplier = k;}
	void SetLifeMultiplier(int k)  {m_LifeMultiplier = k;}

};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredCounterExternalPwrTghAbility 
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	CTriggeredCounterExternalPwrTghAbility(CCard* pCard, LPCTSTR counterName, CCreatureCard* pCreatureCard = NULL); // 
	virtual ~CTriggeredCounterExternalPwrTghAbility() {}

public:
	void SetListenTo(CCard* pCard) {m_listen = pCard;}
	void ForceStart(BOOL addListener); 

protected:
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);

	CWhenSelfMoved m_WhenSelfMoved;

	ListenerPtr<CounterMovedEventSource::Listener> m_cpAListener;
	void OnCounterMoved(CCard* pFromCard, LPCTSTR name, int old, int n_value);

	CCreatureCard* m_pCreatureCard;
	LPCTSTR m_pCounterName;
	CCard* m_listen;
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredTopCardEnchantAbility
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredTopCardEnchantAbility(
		CCard* pCard,
		CCardFilter* pConditionFilter);
	virtual ~CTriggeredTopCardEnchantAbility() {}
	
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);	
	void OnCardZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);

	CWhenSelfMoved m_WhenSelfMoved;

	counted_ptr<CPwrTghAttrEnchantment> m_pAbility;
	ListenerPtr<CardMovementEventSource::Listener>	m_cpCardZoneListener;	// Listen to all card's zone changes
	ListenerPtr<CardTypeEventSource::Listener>		m_cpCardTypeListener;
	CCardFilter*	m_pConditionFilter;

public:
	counted_ptr<CPwrTghAttrEnchantment> GetEnchantment()  {return m_pAbility;}
};

//____________________________________________________________________________
//
class CORE_EXPORT CTriggeredLostLifeAffinityAbility
	: public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredLostLifeAffinityAbility(
		CCard* pCard,
		CardComparer* pComparer);
	virtual ~CTriggeredLostLifeAffinityAbility() {}
	
	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);	

	CWhenSelfMoved m_WhenSelfMoved;

	CardComparer*	m_AffinityComparer;
	int_ CurrentAffinity;
	counted_ptr<CConsLessManaEnchantment> m_pAbility;

	CWhenNodeChanged m_WhenNodeChanged;
	void OnNodeChanged(CNode* pToNode);

	ListenerPtr<ChangeLifeEventSource::Listener>	m_cpPListener;
	void OnLifeChanged(CPlayer* pPlayer, Life nFromLife, Life nToLife);
};

//____________________________________________________________________________
//
struct _CTriggeredSoulbondAbility_TriggerContextType
{
	_CTriggeredSoulbondAbility_TriggerContextType()
		: m_pCard(NULL)
	{}

	bool operator==(const _CTriggeredSoulbondAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard;
	}

	CCreatureModifiers m_CreatureModifiers;
	CCardModifiers m_CardModifiers;
	CCard* m_pCard;
};

class CORE_EXPORT CTriggeredSoulbondAbility
	: public CTriggeredAbility<_CTriggeredSoulbondAbility_TriggerContextType>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

protected:
	CTriggeredSoulbondAbility(
		CCard* pCard);
	virtual ~CTriggeredSoulbondAbility() {}

public:
	CCreatureModifiers& GetCreatureModifiers() { return m_CreatureModifiers; }
	const CCreatureModifiers& GetCreatureModifiers() const { return m_CreatureModifiers; }
	
	CCardModifiers& GetCardModifiers() { return m_CardModifiers; }
	const CCardModifiers& GetCardModifiers() const { return m_CardModifiers; }

	void StartSoulbond(CCreatureCard* pCard);
	void StopSoulbond(CCard* pCard);

	CCreatureCard* GetPairedCreature()  {return m_pPairedCreature;}

protected:
	OVERRIDE(TriggerContextType, GetTriggerContext)() const 
	{ 
		TriggerContextType triggerContext;
		triggerContext.m_pCard = m_pToCard;

		return triggerContext; 
	}

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);


	void OnZoneChanged(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnThisCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);
	
	void OnPairedCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType);
	void OnPairedCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType);

	CWhenSelfMoved m_WhenSelfMoved;
	CWhenSelfCardTypeChanged	m_WhenThisCardTypeChanged;

	ListenerPtr<CardMovementEventSource::Listener>	m_cpPairedCardMoveListener;
	ListenerPtr<CardTypeEventSource::Listener>	m_cpPairedCardTypeListener;

	CStateSupportPtrType<CCreatureCard>			m_pPairedCreature;

	CCreatureModifiers m_CreatureModifiers;
	CCardModifiers m_CardModifiers;
	CCard* m_pToCard;
};

//____________________________________________________________________________
//