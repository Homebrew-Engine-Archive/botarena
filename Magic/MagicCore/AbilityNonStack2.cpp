#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CManaFilterAbility::CManaFilterAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType,
									   LPCTSTR strManaPool, LPCTSTR strManaCost)
	: CManaProductionAbility(pCard, strAbilityName, abilityType, strManaPool)
{
	VERIFY(_tcslen(strManaCost));	// Should use mana producing ability instead if no cost

	m_AbilityType = m_AbilityType | AbilityType::_FilterMana
		| AbilityType::ManaSource;					// 2/28/2005
	m_AbilityType &= ~AbilityType::_ProduceMana;

	m_Cost.SetManaCost(strManaCost);
}

CActionContainer* CManaFilterAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	// Find actions converting from and to the same mana pool type

	for (int i = pActionContainer->GetSize() - 1; i >= 0; --i)
	{
		CManaFilterAbilityAction* pAction = (CManaFilterAbilityAction*)pActionContainer->GetAt(i).GetPointer();	

		if (pAction->GetCostManaPool() == pAction->GetManaPool())
			if (bIncludeTricks)
				pAction->SetTrick();
			else
				pActionContainer->RemoveAt(i);
	}

	return pActionContainer;
}

counted_ptr<CAbilityAction> CManaFilterAbility::CreateAction() const
{
	counted_ptr<CManaFilterAbilityAction> cpAction = ::CreateObject<CManaFilterAbilityAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CManaFilterAbility*>(this));
	cpAction->SetScore(ActionScore::FilterMana);

	if (m_Cost.HasOnlyTapCost() && !m_pCard->GetManaProductionHint()->HasHint() && 
		!m_pCard->IsModified() &&
		!m_pCard->IsEnchanted())
		cpAction->SetBasicNonStackAction();

	cpAction->SetHideInConcise();

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
CManaProductionBySacificeAbility::CManaProductionBySacificeAbility(CCard* pCard, LPCTSTR strManaPool)
	: CManaProductionAbility(pCard, _T("Sacrifice"), AbilityType::Activated, strManaPool)
{
	AddSacrificeCost();
}

//____________________________________________________________________________
//
CManaProductionAbility2::CManaProductionAbility2(CCard* pCard, LPCTSTR strManaPool, LPCTSTR strAbilityName, AbilityType abilityType,
									 LPCTSTR strBonusManaPool,
									 LPCTSTR strBonusCardName1,
									 LPCTSTR strBonusCardName2)
	: CManaProductionAbility(pCard, strAbilityName, abilityType, strManaPool)
	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(
					this, &CManaProductionAbility2::OnZoneChanged))
	, m_bAddedBonusManaPool(FALSE)
	, m_strBonusManaPool(strBonusManaPool)
	, m_strBonusCardName1(strBonusCardName1)
	, m_strBonusCardName2(strBonusCardName2)
{
	if (m_pGame)
		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield)
				->GetCardMovedEventSource()->AddListener(m_cpAListener.GetPointer());
		}

	ATLASSERT(m_strBonusCardName1.CompareNoCase(m_strBonusCardName2));
}

void CManaProductionAbility2::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (m_pCard->GetZoneId() != ZoneId::Battlefield)
		return;

	CZone* pInplayZone = GetController()->GetZoneById(ZoneId::Battlefield);

	if (pToZone != pInplayZone && pFromZone != pInplayZone)
		return;

	BOOL bBonusCard1Found = FALSE;
	BOOL bBonusCard2Found = FALSE;

	int nCardCount = pInplayZone->GetSize();
	for (int i = 0; (i < nCardCount) && (!bBonusCard1Found || !bBonusCard2Found); ++i)
	{
		CCard* pCard = pInplayZone->GetAt(i);
		if (!bBonusCard1Found &&
			!pCard->GetPrintedCardName().CompareNoCase(m_strBonusCardName1))
			bBonusCard1Found = TRUE;

		if (!bBonusCard2Found &&
			!pCard->GetPrintedCardName().CompareNoCase(m_strBonusCardName2))
			bBonusCard2Found = TRUE;		
	}

	if (bBonusCard1Found && bBonusCard2Found)
	{
		if (m_bAddedBonusManaPool)
			return;

		m_bAddedBonusManaPool = TRUE;

		GetManaPool().AddMana(m_strBonusManaPool);

		m_pCard->UpdateManaProductionHint();
	}
	else
		if (m_bAddedBonusManaPool)
		{
			m_bAddedBonusManaPool = FALSE;

			GetManaPool().RemoveMana(m_strBonusManaPool, true);

			m_pCard->UpdateManaProductionHint();
		}
}

//____________________________________________________________________________
//
CManaProductionAbility3::CManaProductionAbility3(CCard* pCard, LPCTSTR strAbilityName, 
									 AbilityType abilityType, CardComparer* pComparer,
									 CManaPool::Color manaColor)
	: CManaProductionAbility(pCard, strAbilityName, abilityType, _T(""))
	, m_WhenSelfInPlay(pCard)
	, m_WhenCardAdded(pCard, ZoneId::_AllZones, ZoneId::Battlefield)
	, m_WhenCardRemoved(pCard, ZoneId::Battlefield, ZoneId::_AllZones)
	, m_MonitoredCardType(pComparer)
	, m_ManaColor(manaColor)
	, m_WhenCardTypeChanged(pCard)
	, m_WhenEnchantCountChanged(pCard)
{
	m_WhenSelfInPlay.SetEnterEventCallback(
		CWhenSelfInplay::EventCallback(this, &CManaProductionAbility3::OnEnteredInPlay));

	m_WhenSelfInPlay.SetLeaveEventCallback(
		CWhenSelfInplay::EventCallback(this, &CManaProductionAbility3::OnLeftInPlay));

	m_WhenCardAdded.GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	m_WhenCardAdded.SetEventCallback(
		CWhenCardMoved::EventCallback(this, &CManaProductionAbility3::OnCardMoved));
	
	m_WhenCardAdded.SetReportInPlayChanges(TRUE);

	m_WhenCardRemoved.GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("lands")));

	m_WhenCardRemoved.SetEventCallback(
		CWhenCardMoved::EventCallback(this, &CManaProductionAbility3::OnCardMoved));
	
	m_WhenCardRemoved.SetReportInPlayChanges(TRUE);

	m_WhenCardTypeChanged.SetEventCallback(CWhenCardTypeChanged::EventCallback(this, &CManaProductionAbility3::OnCardTypeChanged));

	m_WhenEnchantCountChanged.SetCountEventCallback(CWhenEnchantCountChanged::CountEventCallback(this, &CManaProductionAbility3::OnEnchantCountChanged));
}

BOOL CManaProductionAbility3::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!m_ManaPool.GetTotal())
		return FALSE;

	return __super::IsPlayable(bIncludeTricks, bAssumeSufficientMana);
}

void CManaProductionAbility3::OnEnteredInPlay(CZone* pFromZone, CZone* pInplay, CPlayer* pByPlayer, MoveType moveType)
{
	CheckCards();
}

void CManaProductionAbility3::OnLeftInPlay(CZone* pInplay, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	m_ManaPool.Clear();
}

void CManaProductionAbility3::OnCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	CheckCards();
}

void CManaProductionAbility3::OnCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	CheckCards();
}

void CManaProductionAbility3::OnEnchantCountChanged(CCard* pCard, int nFromCount, int nToCount)
{
	CheckCards();
}

void CManaProductionAbility3::CheckCards()
{
	m_ManaPool.Clear();

	BOOL bFound = FALSE;       // Found mana ability in searched player's lands?
	BOOL bOtherFound = FALSE;  // Found mana ability in other player's lands?
	BOOL bExoFound = FALSE;    // Found Exotic Orchard like land among searched player's lands?

	for (int i = 0; i < m_pGame->GetPlayerCount() && !bFound; ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		BOOL bSearchedPlayer = m_MonitoredCardType.IsPlayersCardsIncluded(pPlayer);

		// If mana ability is found among searched player's lands, or if it is found
		// among other players lands and this is an "other" player, no need to search further
		for (int i = 0; i < pInplay->GetSize() &&
			!(bSearchedPlayer && bFound) &&	(bSearchedPlayer || !bOtherFound); ++i)
		{
			CCard* pCard = pInplay->GetAt(i);

			if (!m_MonitoredCardType.IsCardIncludedIgnoreController(pCard))
				continue;

			for (int i = 0; i < pCard->GetAbilityCount() && !bFound; ++i)
			{
				CManaProductionAbility* pManaProductionAbility =
					dynamic_cast<CManaProductionAbility*>(pCard->GetAbility(i));
				if (!pManaProductionAbility || !pManaProductionAbility->GetEnabled())
					continue;

				CManaProductionAbility3* pManaProductionAbility3 =
					dynamic_cast<CManaProductionAbility3*>(pManaProductionAbility);
				// If this is not an original mana production ability, check for Exotic Orchard ability
				if (pManaProductionAbility3)
				{
					if (pManaProductionAbility3->IsMonitoringOpponents() &&
						m_MonitoredCardType.IsPlayersCardsIncluded(pPlayer))
						bExoFound = TRUE;
					continue;
				}

				const CManaPool& manaPool(pManaProductionAbility->GetManaPool());

				if (manaPool.GetMana(m_ManaColor))
				{
					if (m_MonitoredCardType.IsPlayersCardsIncluded(pPlayer))
						bFound = TRUE;
					else
						bOtherFound = TRUE;
				}
      }
    }
  }

	if (bFound || (bOtherFound && bExoFound))
		m_ManaPool.AddMana(m_ManaColor, 1);

	CAbility::m_pCard->UpdateManaProductionHint();
}
//____________________________________________________________________________
//

CSpecialProtectionAbility::CSpecialProtectionAbility(CCard* pCard, LPCTSTR strAbilityName, const CCardFilter* pCardFilter)

	: CNonStackAbility(pCard, strAbilityName, AbilityType::Instant)
	, m_pCardFilter(pCardFilter)
	, m_pSpellsOnly(FALSE)
{

	SetAbilityText(_T("activates"));

	m_AbilityType = m_AbilityType | AbilityType::_ProduceMana
		| AbilityType::ManaSource; // 9/27/2003

	SetInPlayOnly();
}

counted_ptr<CAbilityAction> CSpecialProtectionAbility::CreateAction() const
{
	return NULL;
}

CActionContainer* CSpecialProtectionAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	return NULL;
}

BOOL CSpecialProtectionAbility::ResolveImpl(const CAbilityAction* pAction)
{ 
	return NULL;
}

//____________________________________________________________________________
//
CSuspendAbility::CSuspendAbility(CCard* pCard, LPCTSTR strManaCost, int nValue)
	: CNonStackAbility(pCard, _T("Suspend"), AbilityType::Suspend)
	, m_nCounterCount(nValue)
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

	SetAbilityText(_T("suspends"));
	SetHandOnly();
	m_Cost.SetManaCost(strManaCost);
}

BOOL CSuspendAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	CPlayer* pPlayer = GetController();

	int nMaxParam = 0;
	int nMinParam = 0;
	if (pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SpellCastLimit, nMaxParam, nMinParam))
	{
		if (pPlayer->GetTurnCastedSpellCount() >= nMinParam)
			return FALSE;
	}

	std::set<const CCardFilter*> cardFilters;
	if (pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPlaySpells, cardFilters))
	{
		if (!cardFilters.size())
			return FALSE; // no card filter, prevent all spells

		for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
			if ((*i)->IsCardIncluded(m_pCard))
				return FALSE;
	}

	if ((m_pCard->GetCardKeyword()->HasFlash() || m_pCard->GetCardKeyword()->HasPflash()) && m_pGame->GetStack().IsValidAbilityType(AbilityType::Instant, true))
		if (m_Cost.IsPlayable(pPlayer, bIncludeTricks, bAssumeSufficientMana) && (!pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::TeferiEffect))) return TRUE;

	if (m_pGame->GetPriorityPlayer() != pPlayer)
		return FALSE;

	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	CNode* pNode = pPlayer->GetGraph()->GetCurrentNode();

	if (!pNode || ((pNode->GetNodeId() != NodeId::MainPhaseStep || pPlayer != m_pGame->GetActivePlayer()) && !(m_pCard->GetCardKeyword()->HasFlash() || m_pCard->GetCardKeyword()->HasPflash())))
		return FALSE;

	if (pPlayer->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::TeferiEffect) && 
			(m_pGame->GetStack().GetStackSize() || !(m_pGame->GetActivePlayer() == pPlayer && m_pGame->GetCurrentNode()->GetNodeId() == NodeId::MainPhaseStep)))
		return FALSE;

	if (!m_Cost.IsPlayable(pPlayer, bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	return TRUE;
}

CActionContainer* CSuspendAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(l).GetPointer();

		int nActualCounterCount = m_nCounterCount + m_Cost.GetExtraValue(pAction->GetCostConfigEntry());

		if (!nActualCounterCount)
		{
			if (!bIncludeTricks)
				continue;

			pAction->SetTrick();
		}

		pAction->SetValue(ContextValue(nActualCounterCount));

		if (bSetNames)
		{
			CString strActionName;

			if (nActualCounterCount != 1)
				strActionName.Format(_T(" with %d time counters"), nActualCounterCount);
			else
				strActionName.Format(_T(" with 1 time counter"));

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CSuspendAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	//int nCounterCount = pAction1->GetValue().nValue1;
	int nActualCounterCount = m_nCounterCount + m_Cost.GetExtraValue(pAction->GetCostConfigEntry());
	const CPlayer* pCaster = pAction1->GetController();

	m_pCard->Move(const_cast<CZone*>(pCaster->GetZoneById(ZoneId::Exile)), const_cast<CPlayer*>(pCaster), MoveType::Suspend);
		CCardCounterModifier pModifier = CCardCounterModifier(TIME_COUNTER, +nActualCounterCount, TRUE);
		pModifier.ApplyTo(m_pCard);

	return CNonStackAbility::ResolveImpl(pAction);
}

counted_ptr<CAbilityAction> CSuspendAbility::CreateAction() const
{
	counted_ptr<CAbilityAction> cpAction = CNonStackAbility::CreateAction();

	cpAction->SetBasicNonStackAction();

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
CSelfUntapNonstackAbility::CSelfUntapNonstackAbility(CCard* pCard, LPCTSTR strManaCost)
	:  CNonStackAbility(pCard, _T("Untap"), AbilityType::Untap)
{	
	SetAbilityText(_T("untaps"));
	AddAbilityTag(AbilityTag::OrientationChange);
	m_Cost.SetManaCost(strManaCost);
	SetInPlayOnly();
}
BOOL CSelfUntapNonstackAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	CPlayer* pPlayer = GetController();

	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;	

	if (!m_Cost.IsPlayable(pPlayer, bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	COrientation* pOrientation = m_pCard->GetOrientation();
	if (!pOrientation->IsTapped())
		return FALSE;

	return TRUE;
}

CActionContainer* CSelfUntapNonstackAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = pActionContainer->GetSize() - 1; i >= 0; --i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		if (m_pCard->GetOrientation()->IsUntapped())
			if (!bIncludeTricks)
				pActionContainer->RemoveAt(i);
			else
				pAction->SetTrick(TRUE);
	}

	return pActionContainer;
}

BOOL CSelfUntapNonstackAbility::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	m_pCard->GetOrientation()->Untap();

	return TRUE;
}

//____________________________________________________________________________
//