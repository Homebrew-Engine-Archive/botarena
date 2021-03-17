#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CNonStackAbility::CNonStackAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType)
	: CAbility(pCard, strAbilityName, abilityType)
{
}

counted_ptr<CAbilityAction> CNonStackAbility::CreateAction() const
{
	counted_ptr<CNonStackAbilityAction> cpAction(::CreateObject<CNonStackAbilityAction>(m_pGame));
	ATLASSERT(cpAction);	

	cpAction->SetAbility(const_cast<CNonStackAbility*>(this));

	return cpAction.GetPointer();
}
