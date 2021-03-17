#pragma once

//____________________________________________________________________________
//
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