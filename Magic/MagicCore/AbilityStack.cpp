#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
CStackAbility::CStackAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType)
	: CAbility(pCard, strAbilityName, abilityType)
	, m_bCanBeDenied(FALSE)
	, m_DenialCost(pCard->GetGame())
	, m_bSpecialDenialCost(FALSE)
{
}

void CStackAbility::SetCanBeDenied()
{
	m_bCanBeDenied = TRUE;
}
void CStackAbility::SetSpecialDenialCost()
{
	m_bSpecialDenialCost = TRUE;
}

BOOL CStackAbility::CanBeDenied() const
{
	return m_bCanBeDenied;
}

const CCost& CStackAbility::GetDenialCost() const
{
	return m_DenialCost;
}

CCost& CStackAbility::GetDenialCost()
{
	return m_DenialCost;
}

BOOL CStackAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (!m_pGame->IsThinking())
		return TRUE;

	// Optimization

	const CStack& stack(m_pGame->GetStack());
	if (!stack.GetStackSize())
		return TRUE;

	const CStackAbilityAction* pTopAction(stack.GetTopAction());

	if (pTopAction->IsTriggered())
		return TRUE;

	CPlayer* pController = GetController();
	if (pTopAction->GetController() != pController)
		return TRUE;

	if (m_pCard->GetCardKeyword()->HasFreecast()) return TRUE;

	return FALSE;
}

CActionContainer* CStackAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CAbility::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;
	
	if (m_bCanBeDenied)
		for (int i = 0; i < pActionContainer->GetSize(); ++i)
		{
			CStackAbilityAction* pAction = (CStackAbilityAction*)pActionContainer->GetAt(i).GetPointer();
			pAction->SetCanBeDenied(TRUE);
			pAction->GetDenialCost() = m_DenialCost;
		}

	return pActionContainer;
}

counted_ptr<CAbilityAction> CStackAbility::CreateAction() const
{
	counted_ptr<CStackAbilityAction> cpAction = ::CreateObject<CStackAbilityAction>(m_pGame);
	ATLASSERT(cpAction);	

	cpAction->SetAbility(const_cast<CStackAbility*>(this));

	return cpAction.GetPointer();
}