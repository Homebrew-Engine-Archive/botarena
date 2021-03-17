#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CBOTControllerTraitCombat::CBOTControllerTraitCombat(CAbility* pAbility)
	: CTrait(pAbility)
{}

BOOL CBOTControllerTraitCombat::IsPlayable(BOOL bIncludeTricks) const
{
	UNUSED(bIncludeTricks);

	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(GetAbility()->GetCard());
	if (!pCreatureCard) return FALSE;

	if (pCreatureCard->GetCreatureKeyword()->HasteCombat())	return TRUE;

	int nTurnInControl = pCreatureCard->GetControllerTurnChanged();
	if (nTurnInControl < 0)	return FALSE;
	return nTurnInControl < pCreatureCard->GetController()->GetPlayerTurnNumber();
	//return !m_bControllerChanged;
}

//____________________________________________________________________________
//
CBOTControllerTraitTap::CBOTControllerTraitTap(CAbility* pAbility)
	: CTrait(pAbility)
{}

BOOL CBOTControllerTraitTap::IsPlayable(BOOL bIncludeTricks) const
{
	UNUSED(bIncludeTricks);

	CCreatureCard* pCreatureCard = dynamic_cast<CCreatureCard*>(GetAbility()->GetCard());
	if (!pCreatureCard) return FALSE;

	if (pCreatureCard->GetCreatureKeyword()->HasteTap())	return TRUE;

	int nTurnInControl = pCreatureCard->GetControllerTurnChanged();
	if (nTurnInControl < 0)	return FALSE;
	return nTurnInControl < pCreatureCard->GetController()->GetPlayerTurnNumber();
	//return !m_bControllerChanged;
}

//____________________________________________________________________________
//
CCreateTempTriggeredAbilityTrait::CCreateTempTriggeredAbilityTrait(CAbility* pAbility,
																   CAbility* pRemoveAbility,
																   CTriggeredAction* pTriggeredActionToAdd)
	: CTrait(pAbility)
	, m_pRemoveAbility(pRemoveAbility)
	, m_cpTriggeredAction(pTriggeredActionToAdd)
{
}

BOOL CCreateTempTriggeredAbilityTrait::PayCost()
{
	GetAbility()->GetGame()->SetTriggeredResolutionPlayer(NULL);

	// Remove cleanup ability
	if (m_pRemoveAbility)
	{
		CCard* pCard = m_pRemoveAbility->GetCard();

		pCard->RemoveAbility(m_pRemoveAbility);
	}

	return TRUE;
}

BOOL CCreateTempTriggeredAbilityTrait::Resolve()
{
	int	nIndex = m_pAbility->GetCard()->FindAbility(m_pAbility);
	ATLASSERT(nIndex != -1);
	if (nIndex == -1)
		return FALSE;

	if (m_cpTriggeredAction.GetPointer())
		m_cpTriggeredAction->ResolveSelection();

	m_pAbility->GetCard()->RemoveAbility(m_pAbility);	// Will release this trait also
	return TRUE;
}

//____________________________________________________________________________
//
BOOL CPlaneswalkerTrait::IsPlayable(BOOL bIncludeTricks) const
{
	CPlaneswalkerCard* pCard = (CPlaneswalkerCard*)m_pAbility->GetCard();
	return ! pCard->m_bTurnAbilityUsed;
}

BOOL CPlaneswalkerTrait::PayCost()
{
	CPlaneswalkerCard* pCard = (CPlaneswalkerCard*)m_pAbility->GetCard();
	pCard->m_bTurnAbilityUsed = TRUE;
	return __super::PayCost();
}