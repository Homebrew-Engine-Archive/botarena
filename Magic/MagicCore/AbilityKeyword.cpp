#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CGraftKeyword::CGraftKeyword(CCard* pCard, int nValue)
	: m_pCard(pCard)
{
	pCard->GetCounterContainer()->ScheduleCounter(_T("+1/+1"), nValue, true, ZoneId::_AllZones, ZoneId::Battlefield);

	typedef TTriggeredAbility< CTriggeredModifyCardAbility, CWhenCardMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(
		::CreateObject<TriggeredAbility>(pCard, ZoneId::_AllZones, ZoneId::Battlefield));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGraftKeyword::SetTriggerContext));
	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Creature, false));
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new NegateCardComparer(new SpecificCardComparer(pCard)));

	cpAbility->GetCardModifiers().Add(new CCardCounterModifier(_T("+1/+1"), +1, false, pCard)); // move one counter from this card
	cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

	pCard->AddAbility(cpAbility.GetPointer());
}

bool CGraftKeyword::SetTriggerContext(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, 
									  CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	// Graft

	if (!pCard->GetCardType().IsCreature())
		return false;

	// Do we still have any counter left?
	if (m_pCard->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() == 0)
		return false;

	triggerContext.m_pCard = pCard;
	return true;
}

//____________________________________________________________________________
//
CVanishingKeyword::CVanishingKeyword(CCard* pCard, int nValue)
{
	if (nValue != 0) pCard->GetCounterContainer()->ScheduleCounter(TIME_COUNTER, nValue, true, ZoneId::_AllZones, ZoneId::Battlefield);

	{
		typedef	TTriggeredAbility< CTriggeredModifyCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(pCard, NodeId::UpkeepStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVanishingKeyword::SetTriggerContext1));

		cpAbility->GetResolutionModifier().CCardModifiers::Add(new CCardCounterModifier(TIME_COUNTER, -1)); // move one counter from this card
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);
		cpAbility->SetAbilityName(_T("Vanishing ability"));

		pCard->AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCounterMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard));

		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CVanishingKeyword::SetTriggerContext2));
		cpAbility->SetAbilityName(_T("Vanishing ability"));

		pCard->AddAbility(cpAbility.GetPointer());
	}
}

bool CVanishingKeyword::SetTriggerContext1(CTriggeredModifyCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	// Do we still have any counter left?
	return triggerContext.m_pCard->GetCounterContainer()->GetCounter(TIME_COUNTER)->GetCount() > 0;
}

bool CVanishingKeyword::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										CCard* pFromCard, LPCTSTR name, int old, int n_value) const
{
	return (triggerContext.m_pCard == pFromCard) && (old =! 0) && (n_value == 0) && ((CString)name == TIME_COUNTER);
	return true;
}

//____________________________________________________________________________
//
CMovementReplacementAbility::CMovementReplacementAbility(CCard* pCard, ZoneId nfromZone, ZoneId ntoZone, MoveType nMoveType, int nValue, LPCTSTR nTag, CCardFilter* nFilter)
	: CTriggeredAbility(pCard, _T("Movement Replacement"))
	, m_fromZone(nfromZone)
	, m_toZone(ntoZone)
	, m_MoveType(nMoveType)
	, m_Value(nValue)
	, m_Tag(nTag)
	, m_Filter(nFilter)
{
}

//____________________________________________________________________________
//
CTriggeredPersistAbility::CTriggeredPersistAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
	AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));
}

BOOL CTriggeredPersistAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	if (triggerContext.m_pCard->GetZoneId() != ZoneId::Graveyard || GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage))
		return FALSE;
	
	int nCounters = 1;

	int nMultiplier = 0;
	if (triggerContext.m_pCard->GetOwner()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;

	CCardCounterModifier modifier1(_T("-1/-1"), nCounters, true);
	CMoveCardModifier modifier2(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others);

	modifier1.ApplyTo(triggerContext.m_pCard);
	modifier2.ApplyTo(triggerContext.m_pCard);

	return TRUE;
}

CTriggeredPersistAbility::TriggerContextType CTriggeredPersistAbility::GetTriggerContext() const
{
	TriggerContextType triggerContext;
	triggerContext.m_pCard = GetCard();

	return triggerContext;
}

CPersistKeyword::CPersistKeyword(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredPersistAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPersistKeyword::SetTriggerContext));
	cpAbility->SetAbilityName(_T("Persist ability"));

	pCard->AddAbility(cpAbility.GetPointer());
}

bool CPersistKeyword::SetTriggerContext(CTriggeredPersistAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return triggerContext.m_pCard->GetLastKnownm11Counters() == 0;
}

//____________________________________________________________________________
//
CTriggeredUndyingAbility::CTriggeredUndyingAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
	AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Battlefield));
}

BOOL CTriggeredUndyingAbility::ResolveSelection(CPlayer* pTriggeredPlayer, CTriggeredAction* pAction)
{
	if (!__super::ResolveSelection(pTriggeredPlayer, pAction))
		return FALSE;

	const TTriggeredAction<TriggerContextType>* pAction1 = (const TTriggeredAction<TriggerContextType>*)pAction;
	const TriggerContextType& triggerContext( pAction1->GetTriggerContext() );

	if (triggerContext.m_pCard->GetZoneId() != ZoneId::Graveyard || GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage))
		return FALSE;
	
	int nCounters = 1;

	int nMultiplier = 0;
	if (triggerContext.m_pCard->GetOwner()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;
	if (triggerContext.m_pCard->GetOwner()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::Doublep11Counters, nMultiplier, FALSE))
		nCounters <<= nMultiplier;

	CCardCounterModifier modifier1(_T("+1/+1"), +nCounters, true);
	CMoveCardModifier modifier2(ZoneId::Graveyard, ZoneId::Battlefield, true, MoveType::Others);

	modifier1.ApplyTo(triggerContext.m_pCard);
	modifier2.ApplyTo(triggerContext.m_pCard);

	return TRUE;
}

CTriggeredUndyingAbility::TriggerContextType CTriggeredUndyingAbility::GetTriggerContext() const
{
	TriggerContextType triggerContext;
	triggerContext.m_pCard = GetCard();

	return triggerContext; 
}

CUndyingKeyword::CUndyingKeyword(CCard* pCard)
{
	typedef
		TTriggeredAbility< CTriggeredUndyingAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(pCard,
		ZoneId::Battlefield, ZoneId::Graveyard));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CUndyingKeyword::SetTriggerContext));
	cpAbility->SetAbilityName(_T("Undying ability"));

	pCard->AddAbility(cpAbility.GetPointer());
}

bool CUndyingKeyword::SetTriggerContext(CTriggeredUndyingAbility::TriggerContextType& triggerContext,
										CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return triggerContext.m_pCard->GetLastKnownp11Counters() == 0;
}

//____________________________________________________________________________
//