#pragma once

//____________________________________________________________________________
//
/*
Ref: 
	Simic Initiate Green (1)
	Creature — Human Mutant (0/0)
	Graft 1 (This creature enters the battlefield with a +1/+1 counter on it. 
	Whenever another creature enters the battlefield, you may move a +1/+1 counter from this creature onto it.)	
*/
class CORE_EXPORT CGraftKeyword
{
public:
	CGraftKeyword(CCard* pCard, int nValue);

protected:
	typedef TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	bool SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
						   CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;

	CCard* m_pCard;
};

//____________________________________________________________________________
//
/*
Ref: 
	Waning Wurm 3B
	Creature — Zombie Wurm (7/6)
	Vanishing 2 (This permanent enters the battlefield with two time counters on it. At the beginning 
	of your upkeep, remove a time counter from it. When the last is removed, sacrifice it.)
*/
class CORE_EXPORT CVanishingKeyword
{
public:
	CVanishingKeyword(CCard* pCard, int nValue);

protected:
	bool SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const;
	bool SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pFromCard, LPCTSTR name, int old, int n_value) const;
};

//____________________________________________________________________________
//
/*
Ref: 
	Godless Shrine
	Land — Plains Swamp:
	(Tap: Add White or Black to your mana pool.)
	As Godless Shrine enters the battlefield, you may pay 2 life. If you don't, 
	Godless Shrine enters the battlefield tapped.
*/
class CORE_EXPORT CMovementReplacementAbility : public CTriggeredAbility<>
{
	DEFINE_CREATE_TO_CPTR_ONLY;

public:
	ZoneId GetFromZone() const							{return m_fromZone;}
	ZoneId GetToZone() const							{return m_toZone;}
	MoveType GetMoveType() const						{return m_MoveType;}
	int GetValue() const								{return m_Value;}
	LPCTSTR GetTag() const								{return m_Tag;}
	CCardFilter* GetCardFilter() const					{return m_Filter;}

protected:
	CMovementReplacementAbility(CCard* pCard, ZoneId nfromZone, ZoneId ntoZone, MoveType nMoveType=MoveType::Others, int nValue = 0, LPCTSTR nTag = _T("normal"), CCardFilter* nFilter = (CCardFilter*)NULL);
	virtual ~CMovementReplacementAbility() {}

	ZoneId m_fromZone;
	ZoneId m_toZone;
	MoveType m_MoveType;
	int m_Value;
	LPCTSTR m_Tag;
	CCardFilter* m_Filter;
};

//____________________________________________________________________________
//
/*
Ref: 
	Safehold Elite {1}{G/W}
	Creature — Elf Scout (2/2)
	Persist (When this creature dies, if it had no -1/-1 counters on it, return it to the 
	battlefield under its owner's control with a -1/-1 counter on it.)
*/

struct _CPersistAbility_TriggerContextType
{
	_CPersistAbility_TriggerContextType()
		: m_pCard(NULL)
	{}
	
	CCard* m_pCard;

	bool operator==(const _CPersistAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard;
	}
};

class CORE_EXPORT CTriggeredPersistAbility : public CTriggeredAbility<_CPersistAbility_TriggerContextType>
{
protected:
	CTriggeredPersistAbility(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	OVERRIDE(TriggerContextType, GetTriggerContext)() const;
};

class CORE_EXPORT CPersistKeyword
{
public:
	CPersistKeyword(CCard* pCard);

protected:
	bool SetTriggerContext(CTriggeredPersistAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//
/*
Ref: 
	Butcher Ghoul 1B
	Creature — Zombie (1/1)
	Undying (When this creature dies, if it had no +1/+1 counters on it, return it to the 
	battlefield under its owner's control with a +1/+1 counter on it.)
*/
struct _CUndyingAbility_TriggerContextType
{
	_CUndyingAbility_TriggerContextType()
		: m_pCard(NULL)
	{}
	
	CCard* m_pCard;

	bool operator==(const _CUndyingAbility_TriggerContextType& rhs) const
	{
		return m_pCard == rhs.m_pCard;
	}
};

class CORE_EXPORT CTriggeredUndyingAbility : public CTriggeredAbility<_CUndyingAbility_TriggerContextType>
{
protected:
	CTriggeredUndyingAbility(CCard* pCard);

	OVERRIDE(BOOL, ResolveSelection)(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction);
	OVERRIDE(TriggerContextType, GetTriggerContext)() const;
};

class CORE_EXPORT CUndyingKeyword
{
public:
	CUndyingKeyword(CCard* pCard);

protected:
	bool SetTriggerContext(CTriggeredUndyingAbility::TriggerContextType& triggerContext,
							CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const;
};

//____________________________________________________________________________
//