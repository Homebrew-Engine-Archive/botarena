#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CTriggeredCreateTemporaryAbilityAbility::CTriggeredCreateTemporaryAbilityAbility(CCard* pCard)
	: CTriggeredAbility(pCard)
{
	SetOptionalType(OptionalType::Required);
}

void CTriggeredCreateTemporaryAbilityAbility::GetSelections(CActionContainer& actions,
																   CPlayer* pPlayer,
																   const TriggerContextType& triggerContext,
																   const TriggerInfo& info,
																   BOOL bSetNames) const
{
	if (!m_CreateAbilityCallback.empty())
		CCreateTempTriggeredAbilityAbility::Create(GetCard(), m_CreateAbilityCallback, pPlayer, m_PreRemoveAbilityCallback);
	else
		if (!m_CreateAbilityCallback2.empty() && (m_pCard->GetZoneId()== ZoneId::Battlefield || m_pCard->GetZoneId()== ZoneId::_Effects))
		CCreateTempTriggeredAbilityAbility::Create(GetCard(), m_CreateAbilityCallback2, pPlayer, m_strManaCost, m_PreRemoveAbilityCallback);
	else
	{
		ATLASSERT(false);
		return;
	}
}
