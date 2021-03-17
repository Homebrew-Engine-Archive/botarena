#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
CManaConsumptionAbility::CManaConsumptionAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType,
								   LPCTSTR strManaCost)
	: CStackAbility(pCard, strAbilityName, abilityType)
{
	m_Cost.SetManaCost(strManaCost);
}

counted_ptr<CAbilityAction> CManaConsumptionAbility::CreateAction() const
{
	counted_ptr<CManaConsumptionAbilityAction> cpAction = ::CreateObject<CManaConsumptionAbilityAction>(m_pGame);
	ATLASSERT(cpAction);
	
	cpAction->SetAbility(const_cast<CManaConsumptionAbility*>(this));
	cpAction->SetScore(ActionScore::ConsumeMana);

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
CSpell::CSpell(CCard* pCard, AbilityType abilityType,
			   LPCTSTR strManaCost,
			   BOOL bInPlayIfSuccess)
	: CManaConsumptionAbility(pCard, _T("Cast"), abilityType, strManaCost)
	, m_bRevertToAbility(FALSE)
	, m_ToZoneIfSuccess(bInPlayIfSuccess ? ZoneId::Battlefield : ZoneId::Graveyard)
	, m_bToOwnerZoneIfSuccess(bInPlayIfSuccess ? FALSE : TRUE)
	, m_ToZoneCardPlacement(CardPlacement::Top)
	, m_bShuffleToZone(FALSE)
	, m_ToZoneIfFailed(ZoneId::Graveyard)
	, m_bMainSpell(TRUE)
{
	SetAbilityText(_T("casts"));

	SetHandOnly();
}

void CSpell::SetToZoneIfSuccess(ZoneId toZone, BOOL bToOwner, 
								CardPlacement cardPlacement,
								BOOL bShuffle)
{
	m_ToZoneIfSuccess = toZone;
    m_bToOwnerZoneIfSuccess = bToOwner;

	ATLASSERT(cardPlacement != CardPlacement::TopOrBottom);
	m_ToZoneCardPlacement = cardPlacement;
	m_bShuffleToZone = bShuffle;
}

void CSpell::SetToZoneIfFailed(ZoneId toZone)
{
	m_ToZoneIfFailed = toZone;
}

void CSpell::SetMainSpell(BOOL bMainSpell)
{
	m_bMainSpell = bMainSpell;
}

BOOL CSpell::IsMainSpell() const
{
	return m_bMainSpell;
}

void CSpell::SetToActivatedAbility()
{
	m_bRevertToAbility = TRUE;

	SetAbilityName(_T("Activated Ability"));
	SetAbilityText(_T("activates"));

	SetInPlayOnly();
}

ZoneId CSpell::GetPlayableFrom() const
{
	ZoneId zoneId = __super::GetPlayableFrom();
	if (m_bRevertToAbility || (zoneId & ZoneId::Graveyard).Any())
		return zoneId;

	if ((zoneId & ZoneId::_Effects).Any())
		return zoneId;

	if ((zoneId & ZoneId::Library).Any())
		return zoneId;

	CPlayer* pController = GetController();
	
	if (pController)
	{
		std::set<const CCardFilter*> allowedCards;
		if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromGraveyard, allowedCards))
		{
			bool bFound = false;
			for (std::set<const CCardFilter*>::const_iterator i = allowedCards.begin(); i != allowedCards.end(); ++i)
				if ((*i)->IsCardIncluded(GetCard()))
				{
					bFound = true;
					break;
				}

			if (bFound)
				return zoneId | ZoneId::Graveyard;
		}
	}
	
	if (pController)
	{
		std::set<const CCardFilter*> allowedCards;
		if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayOneCardFromGraveyard, allowedCards))
		{
			bool bFound = false;
			for (std::set<const CCardFilter*>::const_iterator i = allowedCards.begin(); i != allowedCards.end(); ++i)
				if ((*i)->IsCardIncluded(GetCard()))
				{
					bFound = true;
					break;
				}

			if (bFound)
				return zoneId | ZoneId::Graveyard;
		}
	}

	if (pController)
	{
		std::set<const CCardFilter*> allowedCards;
		if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromLibraryTop, allowedCards))
		{
			bool bFound = false;
			for (std::set<const CCardFilter*>::const_iterator i = allowedCards.begin(); i != allowedCards.end(); ++i)
				if ((*i)->IsCardIncluded(GetCard()))
				{
					bFound = true;
					break;
				}

			if (bFound && pController->GetZoneById(ZoneId::Library)->GetTopCard() == GetCard())
				return zoneId | ZoneId::Library;
		}
	}

	if (m_pCard->GetReplacementKeyword()->HasFlashback())
		return zoneId | ZoneId::Graveyard;

	return zoneId;
}

CActionContainer* CSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CStackAbility::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (m_pCard->GetZoneId() == ZoneId::Graveyard && m_pCard->GetReplacementKeyword()->HasFlashback())
	{
		CActionContainer* pActionContainer1 = new CActionContainer;
		for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
		{
			CAbilityAction* pAction = (CAbilityAction*)pActionContainer->GetAt(l).GetPointer();
			pAction->SetFlashback();
			pAction->SetActionName(pAction->GetActionText() +(_T("[Flashback cast]")));
			pActionContainer1->Add(pAction);
		}

		std::set<const CCardFilter*> allowedCards;
		bool bFound = false;

		if (m_pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromGraveyard, allowedCards))
		{

			for (std::set<const CCardFilter*>::const_iterator i = allowedCards.begin(); i != allowedCards.end(); ++i)
				if ((*i)->IsCardIncluded(m_pCard))
				{
					bFound = true;

				}
		}

		if (!bFound)
			if (m_pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayOneCardFromGraveyard, allowedCards))
			{
				bool bFound = false;
				for (std::set<const CCardFilter*>::const_iterator i = allowedCards.begin(); i != allowedCards.end(); ++i)
					if ((*i)->IsCardIncluded(m_pCard))
					{
						bFound = true;						
						break;
					}
			}

		if (bFound)

			for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
			{
				CAbilityAction* pAction = (CAbilityAction*)pActionContainer->GetAt(l).GetPointer();			
				pActionContainer1->Add(pAction);
			}

		delete pActionContainer;
		return pActionContainer1;
	}

	return pActionContainer;
}

BOOL CSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (m_bRevertToAbility)
		return __super::IsPlayable(bIncludeTricks, bAssumeSufficientMana);

	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	CPlayer* pController = GetController();

	// 11/2/2003: To support Arcane Laboratory

	int nMaxParam = 0;
	int nMinParam = 0;
	if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellCastLimit, nMaxParam, nMinParam))
	{
		if (pController->GetTurnCastedSpellCount() >= nMinParam)
			return FALSE;
	}

	// Ref: Steel Golem

	std::set<const CCardFilter*> cardFilters;
	if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPlaySpells, cardFilters))
	{
		if (!cardFilters.size())
			return FALSE; // no card filter, prevent all spells

		for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
			if ((*i)->IsCardIncluded(m_pCard))
				return FALSE;
	}


	return TRUE;
}

/* Integrated into ResolveImpl()
BOOL CSpell::IsResolvable(CAction* pAction)
{
	if (m_bRevertToAbility)
		return CManaConsumptionAbility::IsResolvable(pAction); 

	if (!CManaConsumptionAbility::IsResolvable(pAction))
		return FALSE;

	CZone* pZone = m_pCard->GetZone();
	if (pZone->GetZoneId() != ZoneId::Stack)
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}
*/

BOOL CSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (m_bRevertToAbility)
		return CManaConsumptionAbility::ResolveImpl(pAction);

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();	

	// Moved to CStack::AddAction() to support Arcane Laboratory
	// const_cast<CPlayer*>(pCaster)->IncreaseTurnCastedSpellCount();		// 11/2/2003: To support Arcane Laboratory

	if (!CManaConsumptionAbility::ResolveImpl(pAction))
	{
		return FALSE;
	}

	CZone* pZone = m_pCard->GetZone();
	if (pZone->GetZoneId() != ZoneId::Stack)
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}

void CSpell::MoveSpellFromStack(const CAction* pAction, BOOL bResolutionResult)
{
	if (m_pCard->GetZoneId() == ZoneId::Stack)
	{
		ATLASSERT(!m_bRevertToAbility);

		if (bResolutionResult)
		{
			// Success

			const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
			const CPlayer* pCaster = pAction1->GetController();	

			CZone* pToZone = m_bToOwnerZoneIfSuccess ? 
					m_pCard->GetOwner()->GetZoneById(m_ToZoneIfSuccess) : const_cast<CZone*>(pCaster->GetZoneById(m_ToZoneIfSuccess));

			m_pCard->Move(
				pToZone,
				const_cast<CPlayer*>(pCaster), 
				MoveType::Cast,
				m_ToZoneCardPlacement);

			if (m_bShuffleToZone)
				pToZone->Shuffle();
		}
		else
		{
			// Failed

			m_pCard->Move(m_pCard->GetOwner()->GetZoneById(m_ToZoneIfFailed), NULL, MoveType::Others);
		}
	}
}

void CSpell::OnResolutionCompleted(const CAbilityAction* pAction, BOOL bResolutionResult)
{
	MoveSpellFromStack(pAction, bResolutionResult);

	__super::OnResolutionCompleted(pAction, bResolutionResult);
}
//____________________________________________________________________________
//
CMorphAbility1::CMorphAbility1(CCard* pCard, LPCTSTR strManaCost)
	: CMorphAbility(pCard)
{
	m_Cost.SetManaCost(strManaCost);
}

counted_ptr<CAbilityAction> CMorphAbility1::CreateAction() const
{
	counted_ptr<CNonStackManaConsumptionAbilityAction> cpAction = ::CreateObject<CNonStackManaConsumptionAbilityAction>(m_pGame);
	ATLASSERT(cpAction);
	
	cpAction->SetAbility(const_cast<CMorphAbility1*>(this));
	cpAction->SetScore(ActionScore::ConsumeMana);

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//