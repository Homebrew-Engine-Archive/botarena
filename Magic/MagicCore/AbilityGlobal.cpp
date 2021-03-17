#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CGlobalSpell::CGlobalSpell(CCard* pCard, AbilityType abilityType,
						   LPCTSTR strManaCost,
						   CardComparer* pComparer,
						   BOOL bAffectPlayer,
						   ZoneId fromZoneId)
	: CSpell(pCard, abilityType, strManaCost, FALSE)
	, m_bAffectPlayer(bAffectPlayer)
	, m_bOpponentPlayerOnly(FALSE)
	, m_bControllerPlayerOnly(FALSE)
	, m_FromZoneId(fromZoneId)
{
	m_GlobalCardFilter.AddComparer(pComparer);
}

void CGlobalSpell::FlagSubjects(BOOL bFlagSubjects, BOOL bKeepFlagUntilEndOfTurn)
{
	m_CardFlagModifier.GetModifier().RemoveAll();

	if (bFlagSubjects)
	{
		m_CardFlagModifier.GetModifier().SetOneTurnOnly(bKeepFlagUntilEndOfTurn);
		m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier.GetModifier().SetAdditionData(GetInstanceID());
	}
}

void CGlobalSpell::SetAffectControllerCardsOnly()
{
	m_GlobalCardFilter.SetThisCardsControllerOnly(m_pCard);
}

void CGlobalSpell::SetAffectOpponentCardsOnly()
{
	m_GlobalCardFilter.SetNotThisCardsControllerOnly(m_pCard);
}

void CGlobalSpell::SetExceptParent()
{
	m_GlobalCardFilter.AddNegateComparer(new SpecificCardComparer(m_pCard));
}

void CGlobalSpell::SetTargetOpponentPlayerOnly()
{
	m_bOpponentPlayerOnly = TRUE;
	m_bControllerPlayerOnly = FALSE;
	m_bAffectPlayer = TRUE;
}

void CGlobalSpell::SetTargetControllerPlayerOnly()
{
	m_bOpponentPlayerOnly = FALSE;
	m_bControllerPlayerOnly = TRUE;
	m_bAffectPlayer = TRUE;
}

BOOL CGlobalSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks || m_bAffectPlayer)
		return TRUE;

	Characteristic characteristic = GetGlobalCharacteristic();
	CPlayer* pController = GetController();

	// Find any constructive usage

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);

		if (((characteristic < Characteristic::Neutral) && (pPlayer == pController)) ||
			((characteristic > Characteristic::Neutral) && (pPlayer != pController)))
			continue;

		if (!m_GlobalCardFilter.IsPlayersCardsIncluded(pPlayer))
			continue;

		CZone* pZone = pPlayer->GetZoneById(m_FromZoneId);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard = pZone->GetAt(k);

			if (IsCardAffected(pCard))
				return TRUE;
		}
	}

	return FALSE;
}

CActionContainer* CGlobalSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	BOOL bTrick = FALSE;

	if (!bIncludeTricks && !m_bAffectPlayer)
	{
		Characteristic characteristic = GetGlobalCharacteristic();
		CPlayer* pController = GetController();

		bTrick = TRUE;

		// Find any constructive usage

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);

			if (((characteristic < Characteristic::Neutral) && (pPlayer == pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer != pController)))
				continue;

			if (!m_GlobalCardFilter.IsPlayersCardsIncluded(pPlayer))
				continue;

			CZone* pZone = pPlayer->GetZoneById(m_FromZoneId);
			for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
			{
				CCard* pCard = pZone->GetAt(k);

				if (IsCardAffected(pCard))
				{
					bTrick = FALSE;
					break;
				}
			}

			if (!bTrick)
				break;
		}

		if (bTrick)
		{
			delete pActionContainer;
			return NULL;
		}
	}

	if (bTrick)
		for (int l = 0; l < pActionContainer->GetSize(); ++l)
		{
			CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(l).GetPointer();
			pAction->SetTrick();		// Global spell
		}

	return pActionContainer;
}

BOOL CGlobalSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CSpell::ResolveImpl(pAction))
		return FALSE;

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;

	ResolveImpl2(pAction1);

	return TRUE;
}

void CGlobalSpell::ResolveImpl2(const CManaConsumptionAbilityAction* pAction)
{
	const ContextValue& value = pAction->GetValue();

	vector<CCard*> enchantmentCards;
	vector<CCard*> nonEnchantmentCards;
	vector<CCard*> auraCards;

	// 1/31/2005: Cache all in-play cards because ResolveCard() may remove cards from in-play

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);

		if (!m_GlobalCardFilter.IsPlayersCardsIncluded(pPlayer))
			continue;

		CZone* pZone = pPlayer->GetZoneById(m_FromZoneId);

		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard = pZone->GetAt(k);

			if (!IsCardAffected(pCard))
				continue;

			if ((pCard->GetCardType() & CardType::GlobalEnchantment).Any())
				enchantmentCards.push_back(pCard);
			else
			if ((pCard->GetCardType() & CardType::_Aura).Any())
				auraCards.push_back(pCard); // this is to support Open the Vaults
			else
				nonEnchantmentCards.push_back(pCard);
		}
	}

	// ResolveImpl players

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);

		// 3/3/2001: Changed to use IsPlayerAffected() and IsCardAffected() to support these virtual functions
		//
		if (IsPlayerAffected(pPlayer))
			ResolvePlayer(pAction, pPlayer, value);
	}

	// 8/11/2002: Move Enchantments first

	for (unsigned k = 0; k < enchantmentCards.size(); ++k)
	{
		CCard* pCard = enchantmentCards[k];
		if (pCard->GetZoneId() == m_FromZoneId)
		{
			// Flag card
			if (!m_CardFlagModifier.GetModifier().IsNull())
				m_CardFlagModifier.ApplyTo(pCard);

			ResolveCard(pAction, pCard, value);
		}
	}

	for (unsigned k = 0; k < nonEnchantmentCards.size(); ++k)
	{
		CCard* pCard = nonEnchantmentCards[k];
		if (pCard->GetZoneId() == m_FromZoneId)
		{
			// Flag card
			if (!m_CardFlagModifier.GetModifier().IsNull())
				m_CardFlagModifier.ApplyTo(pCard);

			ResolveCard(pAction, pCard, value);
		}
	}

	for (unsigned k = 0; k < auraCards.size(); ++k)
	{
		CCard* pCard = auraCards[k];
		if (pCard->GetZoneId() == m_FromZoneId)
		{
			// Flag card
			if (!m_CardFlagModifier.GetModifier().IsNull())
				m_CardFlagModifier.ApplyTo(pCard);

			ResolveCard(pAction, pCard, value);
		}
	}
}

BOOL CGlobalSpell::IsCardAffected(const CCard* pCard) const
{
	if (pCard->GetZoneId() != m_FromZoneId)
		return FALSE;

	if (!m_GlobalCardFilter.IsCardIncluded(pCard))
		return FALSE;

	return TRUE;
}

BOOL CGlobalSpell::IsPlayerAffected(const CPlayer* pPlayer) const
{
	if (!m_bAffectPlayer)
		return FALSE;

	// 3/3/2001: Added to support "controller only"
	//
	CPlayer* pController = GetController();

	if (m_bOpponentPlayerOnly && (pPlayer == pController))
		return FALSE;

	if (m_bControllerPlayerOnly && (pPlayer != pController))
		return FALSE;

	return TRUE;
}

void CGlobalSpell::ResolveCard(const CAbilityAction* pAction, CCard* pCard, const ContextValue& value)
{
	m_SubjectModifier.CCardModifiers::ApplyTo(pCard);
	if (pCard->GetCardType().IsCreature())
		m_SubjectModifier.CCreatureModifiers::ApplyTo((CCreatureCard*)pCard);
}

void CGlobalSpell::ResolvePlayer(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	m_SubjectModifier.CPlayerModifiers::ApplyTo(pPlayer);
}

void CGlobalSpell::OnResolutionCompleted(const CAbilityAction* pAction, BOOL bResolutionResult)
{
	__super::OnResolutionCompleted(pAction, bResolutionResult);

	// Unflag all tokens flagged by this ability

	if (!m_CardFlagModifier.GetModifier().IsNull() &&
		!m_CardFlagModifier.GetModifier().GetOneTurnOnly())
	{
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier.GetModifier().GetAdditionData());
		CCardFilter cardFilter(pComparer);

		const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
		CZone* pBattlefield = pAction1->GetController()->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
			if (cardFilter.IsCardIncluded(pBattlefield->GetAt(i)))
				m_CardFlagModifier.RemoveFrom(pBattlefield->GetAt(i));
	}
}

//____________________________________________________________________________
//
CGlobalChgLifeSpell::CGlobalChgLifeSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 Life nLifeDelta,
										 CardComparer* pComparer,
										 BOOL bAffectPlayer,
										 PreventableType preventable,
										 DamageType damageType)
	: CGlobalSpell(pCard, abilityType, strManaCost, pComparer, bAffectPlayer)
	, m_bReverseLifeDeltaToController(FALSE)
	, m_LifeModifier(nLifeDelta, pCard, preventable, damageType)
{
	if (nLifeDelta > Life(0))
		AddAbilityTag(AbilityTag::LifeGain);
	else
		if (nLifeDelta < Life(0))
		{
			if (preventable == PreventableType::Preventable)
				AddAbilityTag(AbilityTag::DamageSource);
			else
				AddAbilityTag(AbilityTag::LifeLost);
		}
		// else call AddAbilityTag() manually

	SetActionValue(ContextValue(GET_INTEGER(nLifeDelta)));

	SetValidExtraActionValueVector(ContextValue(1));
}

Characteristic CGlobalChgLifeSpell::GetGlobalCharacteristic() const
{
	if (m_ActionValue.nValue1 < 0)
		return Characteristic::Negative;

	if (m_ActionValue.nValue1 > 0)
		return Characteristic::Positive;

	if (!m_ExtraActionValueVector.nValue1)
		return Characteristic::Neutral;

	return m_ExtraActionValueVector.nValue1 < 0 ? Characteristic::Negative : Characteristic::Positive;
}

void CGlobalChgLifeSpell::ResolveCard(const CAbilityAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	CLifeModifier modifier(m_LifeModifier);
	modifier.SetLifeDelta(Life(value.nValue1));
	modifier.ApplyTo(pCreatureCard);

	if (m_bReverseLifeDeltaToController)
	{
		CManaConsumptionAbilityAction* pAction1 = (CManaConsumptionAbilityAction*)pAction;

		modifier.SetLifeDelta(Life(-value.nValue1));
		modifier.ApplyTo(pAction1->GetController());
	}
}

void CGlobalChgLifeSpell::ResolvePlayer(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CLifeModifier modifier(m_LifeModifier);
	modifier.SetLifeDelta(Life(value.nValue1));
	modifier.ApplyTo(pPlayer);

	if (m_bReverseLifeDeltaToController)
	{
		CManaConsumptionAbilityAction* pAction1 = (CManaConsumptionAbilityAction*)pAction;

		modifier.SetLifeDelta(Life(-value.nValue1));
		modifier.ApplyTo(pAction1->GetController());
	}
}

//____________________________________________________________________________
//
CGlobalChgLifeSpell2::CGlobalChgLifeSpell2(CCard* pCard, AbilityType abilityType,
								 LPCTSTR strManaCost,
								 Life nLifeDelta,
								 CardComparer* pComparer,
								 PreventableType preventable,
								 DamageType damageType)
	: CGlobalChgLifeSpell(pCard, abilityType, strManaCost, nLifeDelta, pComparer, TRUE, preventable, damageType)
{
}

BOOL CGlobalChgLifeSpell2::IsPlayerAffected(const CPlayer* pPlayer) const
{
	if (!CGlobalChgLifeSpell::IsPlayerAffected(pPlayer))
		return FALSE;

	// Control any includedCardType creatures?

	const CZone* pZone = pPlayer->GetZoneById(m_FromZoneId);
	for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
	{
		const CCard* pCard = pZone->GetAt(k);
		if (IsCardAffected(pCard))
			return TRUE;
	}

	return FALSE;
}

//____________________________________________________________________________
//
CGlobalChgLifeSpell3::CGlobalChgLifeSpell3(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   Life nLifeDelta,
										   CardComparer* pComparer,
										   PreventableType preventable,
										   int nSacrificeCount,
										   CardComparer* pSacrificeComparer,
										   DamageType damageType)
	: CGlobalChgLifeSpell(pCard, abilityType, strManaCost, nLifeDelta, pComparer, FALSE, preventable, damageType)
	, m_nSacrificeCount(nSacrificeCount)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CGlobalChgLifeSpell3::OnSelectionDone))
{
	m_SacrificeCardFilter.AddComparer(pSacrificeComparer);
}

BOOL CGlobalChgLifeSpell3::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	return CSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana);
}

void CGlobalChgLifeSpell3::SetSacrificeControllerCardsOnly()
{
	m_SacrificeCardFilter.SetThisCardsControllerOnly(m_pCard);  
}

void CGlobalChgLifeSpell3::SetSacrificeOpponentCardsOnly()
{
  m_SacrificeCardFilter.SetNotThisCardsControllerOnly(m_pCard);
}

void CGlobalChgLifeSpell3::ResolveImpl2(const CManaConsumptionAbilityAction* pAction)
{
	__super::ResolveImpl2(pAction);	// 5/21/06: simplified to resolve base effect first

	CPlayer* pCaster = pAction->GetController();

  // TODO: Selection is done in APNAP order, but sacrifice occurs immediately
  // after each players selection. All sacrifices should occur at the same time
  // after all selections instead.
  // TODO: APNAP order is correct for 2 players. For multiplayer it is not exact,
  // the call to GetNextPlayer() below should be replaced by GetPrevPlayer()
  // if that function is ever implemented.
  // TODO: Damage should occur after all sacrifices are done.
  CPlayer* pNextPlayer = m_pGame->GetActivePlayer();
  do
  {
    pNextPlayer = m_pGame->GetNextPlayer(pNextPlayer);
    PromptForSelection(pNextPlayer, pCaster);
  } while (pNextPlayer != m_pGame->GetActivePlayer());
}

void CGlobalChgLifeSpell3::PromptForSelection(CPlayer* pPlayer, CPlayer* pCaster)
{
	vector<SelectionEntry> entries;

	CZone* pInplay = pPlayer->GetZoneById(m_FromZoneId);
	for (int k = 0; k < pInplay->GetSize(); ++k)
	{
		CCard* pCard = pInplay->GetAt(k);
		if (m_SacrificeCardFilter.IsCardIncluded(pCard))
		{
			SelectionEntry entry;
			entry.dwContext = (DWORD)pCard;

			CCreatureCard* pCreature = NULL;
			if ((pCard->GetCardType() & CardType::Creature).Any()) pCreature = dynamic_cast<CCreatureCard*>(pCard);
			if (pCreature)
				entry.strText.Format(_T("sacrifices %s"), pCreature->GetCreatureName(TRUE));
			else
				entry.strText.Format(_T("sacrifices %s"), pCard->GetCardName());

			entry.cpAssociatedCard = pCard;
			entries.push_back(entry);
		}
	}

	int nSacrificeCount;
	if (m_nSacrificeCount == SpecialNumber::Any)
		nSacrificeCount = entries.size();
	else
		nSacrificeCount = MIN(static_cast<unsigned>(m_nSacrificeCount), entries.size());

	//m_pGame->GetSelection()->GetSelectionEventSource()->AddListener(m_cpSelectionListener.GetPointer());
	m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries,
		nSacrificeCount, nSacrificeCount, GetCard(), pPlayer, (DWORD)pCaster, 0, 0, 0, 0,TRUE);
}

void CGlobalChgLifeSpell3::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pCard->GetController(), MoveType::Sacrifice);
		}
}

//____________________________________________________________________________
//
// Biorhythm: Each player's life total becomes the number of creatures he or she controls
// Stronghold Discipline: Each player loses 1 life for each creature he or she controls
//
CGlobalChgLifeBySurveySpell::CGlobalChgLifeBySurveySpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 CardComparer* pSurveyComparer,
										 PreventableType preventable)
	: CGlobalSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_LifeModifier(Life(0), pCard, preventable)
	, m_SurveyCardFilter(pSurveyComparer)
	, m_nMultiplier(0)
{
}

Life CGlobalChgLifeBySurveySpell::GetLifeDelta(const CPlayer* pPlayer) const
{
	Life nCount(Life(m_SurveyCardFilter.CountIncluded(*(pPlayer->GetZoneById(m_FromZoneId)))));

	switch(m_nMultiplier)
	{
	case 0: return nCount - pPlayer->GetLife();
	case +1: return nCount;
	case -1: return -nCount;
	}

	ATLASSERT(false);
	return Life(0);
}

void CGlobalChgLifeBySurveySpell::ResolvePlayer(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CLifeModifier modifier(m_LifeModifier);
	modifier.SetLifeDelta(GetLifeDelta(pPlayer));
	modifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
CGlobalChgPwrTghSpell::CGlobalChgPwrTghSpell(CCard* pCard, AbilityType abilityType,
											 LPCTSTR strManaCost,
											 Power nPowerDelta, Life nLifeDelta,
											 CardComparer* pComparer)
	: CGlobalSpell(pCard, abilityType, strManaCost, pComparer, FALSE)
	, m_LifeModifier(nLifeDelta, pCard, PreventableType::NotPreventable, DamageType::NotDealingDamage)
	, m_PowerModifier(nPowerDelta)
	, m_Replace(FALSE)
{
	AddAbilityTag(AbilityTag::CreatureChange);

	SetActionValue(ContextValue(GET_INTEGER(nLifeDelta), GET_INTEGER(nPowerDelta)));

	SetValidExtraActionValueVector(ContextValue(1, 1));
}

Characteristic CGlobalChgPwrTghSpell::GetGlobalCharacteristic() const
{
	if (((m_ActionValue.nValue1 < 0) && (m_ActionValue.nValue2 <= 0)) ||
		((m_ActionValue.nValue1 <= 0) && (m_ActionValue.nValue2 < 0)))
		return Characteristic::Negative;

	if (((m_ActionValue.nValue1 > 0) && (m_ActionValue.nValue2 >= 0)) ||
		((m_ActionValue.nValue1 >= 0) && (m_ActionValue.nValue2 > 0)))
		return Characteristic::Positive;

	if (!m_ActionValue.nValue1 && !m_ActionValue.nValue2 && m_ExtraActionValueVector.Any() && !m_Replace)
		return (m_ExtraActionValueVector.Sum() < 0 ? Characteristic::Negative : Characteristic::Positive);

	return Characteristic::Neutral;
}

void CGlobalChgPwrTghSpell::ResolveCard(const CAbilityAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;

	CPowerModifier powerModifier(m_PowerModifier);
	powerModifier.SetPowerDelta(Power(value.nValue2));
	if (m_Replace) { powerModifier.SetReplacement(TRUE); powerModifier.SetToBase(TRUE); }
	powerModifier.ApplyTo(pCreatureCard);

	CLifeModifier lifeModifier(m_LifeModifier);
	lifeModifier.SetLifeDelta(Life(value.nValue1));
	if (m_Replace) { lifeModifier.SetReplacement(TRUE); lifeModifier.SetToBase(TRUE); }
	lifeModifier.ApplyTo(pCreatureCard);
}

//____________________________________________________________________________
//
CGlobalMoveCardSpell::CGlobalMoveCardSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   ZoneId toZoneId, BOOL bToOwner, MoveType moveType,
										   ZoneId fromZoneId)
	: CGlobalSpell(pCard, abilityType, strManaCost, pComparer, FALSE, fromZoneId)
	, m_MoveCardModifier(fromZoneId, toZoneId, bToOwner, moveType)
{
	AddAbilityTag(AbilityTag(fromZoneId, toZoneId));

	//SetAffected(CAction::AFFECTED);
}

Characteristic CGlobalMoveCardSpell::GetGlobalCharacteristic() const
{
	if (CZone::IsBadCardMovement(m_MoveCardModifier.GetFromZone(), m_MoveCardModifier.GetToZoneId()))
		return Characteristic::Negative;

	return Characteristic::Positive;
}

void CGlobalMoveCardSpell::ResolveCard(const CAbilityAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CManaConsumptionAbilityAction* pAction1 = (CManaConsumptionAbilityAction*)pAction;

	if (m_MoveCardModifier.GetToZoneId() == ZoneId::Battlefield && (pCard->GetCardType() & CardType::_Aura).Any())
	{
		CEnchant* pEnchantAbility = NULL;
		for (int i = 0; i < pCard->GetAbilityCount(); ++i)
		{
			pEnchantAbility = dynamic_cast<CEnchant*>(pCard->GetAbility(i));
			if (pEnchantAbility)
				break;
		}

		if (!pEnchantAbility)
		{
			ATLASSERT(false);
			return;
		}

		if (!pEnchantAbility->HasEnchantTarget())
			return;
	}

	m_MoveCardModifier.SetByPlayer(pAction1->GetController());
	m_MoveCardModifier.ApplyTo(pCard);
}

//____________________________________________________________________________
//
CGlobalTapSpell::CGlobalTapSpell(CCard* pCard, AbilityType abilityType,
									 LPCTSTR strManaCost,
									 CardComparer* pComparer)
	: CGlobalSpell(pCard, abilityType, strManaCost, pComparer, FALSE)
{
	AddAbilityTag(AbilityTag::OrientationChange);

	m_GlobalCardFilter.AddComparer(new UntappedComparer());

	GetSubjectModifier().CCardModifiers::Add(
		new CCardOrientationModifier(TRUE));
}

Characteristic CGlobalTapSpell::GetGlobalCharacteristic() const
{
	return Characteristic::Negative;
}

//____________________________________________________________________________
//
CGlobalUntapSpell::CGlobalUntapSpell(CCard* pCard, AbilityType abilityType,
									 LPCTSTR strManaCost,
									 CardComparer* pComparer)
	: CGlobalSpell(pCard, abilityType, strManaCost, pComparer, FALSE)
{
	AddAbilityTag(AbilityTag::OrientationChange);

	//SetAffected(CAction::AFFECTED);
	m_GlobalCardFilter.AddComparer(new TappedComparer());

	GetSubjectModifier().CCardModifiers::Add(
		new CCardOrientationModifier(FALSE));
}

Characteristic CGlobalUntapSpell::GetGlobalCharacteristic() const
{
	return Characteristic::Positive;
}

//____________________________________________________________________________
//
CGlobalDrawCardSpell::CGlobalDrawCardSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   int nMinDrawCount,
										   int nMaxDrawCount)
	: CGlobalSpell(pCard, abilityType, strManaCost,FALSE_CARD_COMPARER, TRUE)
	, m_bMergeHand(FALSE)
	, m_bMergeGraveyard(FALSE)
	, m_bDiscardHand(FALSE)
	, m_nRemoveCount(0)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CGlobalDrawCardSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	SetActionValue(ContextValue(nMinDrawCount, nMaxDrawCount));

	SetValidExtraActionValueVector(ContextValue(1, 1));
}

Characteristic CGlobalDrawCardSpell::GetGlobalCharacteristic() const
{
	return Characteristic::Positive;
}

void CGlobalDrawCardSpell::ResolvePlayer(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CManaConsumptionAbilityAction* pAction1 = (CManaConsumptionAbilityAction*)pAction;

	CPlayer* pCaster = pAction1->GetController();

	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);
	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
	CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);

	if (m_bMergeHand)
	{
		CCountedCardContainer pHandContainer;
		CCardFilter::GetFilter(_T("cards"))->GetIncluded(*pHand, pHandContainer);
		for (int i = 0; i < pHandContainer.GetSize(); ++i)
			pHandContainer.GetAt(i)->Move(pLibrary, pAction1->GetController(), MoveType::Others);
	}
	else
		if (m_bDiscardHand)
		{
			CCountedCardContainer pHandContainer;
		CCardFilter::GetFilter(_T("cards"))->GetIncluded(*pHand, pHandContainer);
		for (int i = 0; i < pHandContainer.GetSize(); ++i)
		//	while (pHand->GetSize())
			//	pHand->GetTopCard()->Move(pGraveyard, pAction1->GetController(), MoveType::Discard);
			pHandContainer.GetAt(i)->Move(pGraveyard, pAction1->GetController(), MoveType::Discard);
		}
	if (m_bMergeGraveyard)
	{
		CZone* pGraveyard = pPlayer->GetZoneById(ZoneId::Graveyard);
		while (pGraveyard->GetSize())
			pGraveyard->GetTopCard()->Move(pLibrary, pAction1->GetController(), MoveType::Others);
	}

	if (m_bMergeHand || m_bMergeGraveyard)
		pLibrary->Shuffle();

	if (m_nRemoveCount && (pPlayer == pCaster))
		for (int i = 0; (i < m_nRemoveCount) && pLibrary->GetSize(); ++i)
		{
			CCard* pCard = pLibrary->GetTopCard();
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Exile), pCaster, MoveType::Others);
		}

	int nMinDrawCount = value.nValue1;
	int nMaxDrawCount = value.nValue2;

	if (nMinDrawCount == nMaxDrawCount)
		for (int i = 0; i < nMinDrawCount; ++i)
		{
			if (!pLibrary->GetSize())
			{
				pPlayer->SetDrawFailed();
				return;
			}

			CCard* pCard = pLibrary->GetTopCard();
			pCard->Move(pHand, pCaster, MoveType::Draw);
		}
	else
		if (pCaster == pPlayer)
		{
			PromptForSelection(pCaster, nMinDrawCount, nMaxDrawCount, pCaster);
		}
}

void CGlobalDrawCardSpell::PromptForSelection(CPlayer* pPlayer, int nMinDrawCount, int nMaxDrawCount, CPlayer* pCaster)
{
	vector<SelectionEntry> entries;

	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

	int nPlayerMinDrawCount = nMinDrawCount;
	int nPlayerMaxDrawCount = nMaxDrawCount;

	if (nPlayerMaxDrawCount > pLibrary->GetSize())
		nPlayerMaxDrawCount = pLibrary->GetSize();

	if (nPlayerMinDrawCount > nPlayerMaxDrawCount)
		nPlayerMinDrawCount = nPlayerMaxDrawCount;

	for (int k = nPlayerMaxDrawCount; k >= nPlayerMinDrawCount; --k)
	{
		SelectionEntry entry;
		entry.dwContext = k;
		if (k != 1)
			entry.strText.Format(_T("draws %d cards"), k);
		else
			entry.strText.Format(_T("draws 1 card"));

		entry.cpAssociatedCard = m_pCard;
		entries.push_back(entry);

		if (m_pGame->IsThinking())
			break;
	}

	//m_pGame->GetSelection()->GetSelectionEventSource()->AddListener(m_cpSelectionListener.GetPointer());
	m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries,
		1, 1, GetCard(), pPlayer, nMinDrawCount, nMaxDrawCount, (DWORD)pCaster);
}

void CGlobalDrawCardSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	CPlayer* pCaster = (CPlayer*)dwContext3;
	CZone* pLibrary = pSelectionPlayer->GetZoneById(ZoneId::Library);
	CZone* pHand = pSelectionPlayer->GetZoneById(ZoneId::Hand);

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nDrawCount = it->dwContext;

			for (int i = 0; i < nDrawCount; ++i)
			{
				if (!pLibrary->GetSize())
				{
					pSelectionPlayer->SetDrawFailed();
					break;
				}

				CCard* pCard = pLibrary->GetTopCard();
				pCard->Move(pHand, pCaster, MoveType::Draw);
			}

			break;
		}

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(pSelectionPlayer);
	if (pNextPlayer != pCaster)
	{
		PromptForSelection(pNextPlayer, dwContext1, dwContext2, pCaster);
	}
}

//____________________________________________________________________________
//
CGlobalDrawCardBySurveySpell::CGlobalDrawCardBySurveySpell(CCard* pCard, AbilityType abilityType,
														   LPCTSTR strManaCost,
														   ZoneId uCountInZone, BOOL bCountControllersZoneOnly,	// TRUE -> uCountInZone refers to controller's zone, FALSE -> uCountInZone refers to targeted player's zone or targeted cards' controllers' zone
														   CardComparer* pCountComparer)	// Count these cards
	: CGlobalSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_uCountInZone(uCountInZone)
	, m_bCountControllersZoneOnly(bCountControllersZoneOnly)
	, m_CountCardFilter(pCountComparer)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

Characteristic CGlobalDrawCardBySurveySpell::GetGlobalCharacteristic() const
{
	return Characteristic::Positive;
}

void CGlobalDrawCardBySurveySpell::ResolvePlayer(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CManaConsumptionAbilityAction* pAction1 = (CManaConsumptionAbilityAction*)pAction;
	CPlayer* pCaster = pAction1->GetController();

	CZone* pCountInZone;
	if (m_bCountControllersZoneOnly)
	{
		pCountInZone = pCaster->GetZoneById(m_uCountInZone);

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pRevealToPlayer = m_pGame->GetPlayer(i);
			if ((pCaster != pRevealToPlayer) &&
				!pCountInZone->IsVisibleTo(pRevealToPlayer))
				CDiscardCardCommon::ResolveRevealHand(pCaster, pRevealToPlayer, pCaster);
		}
	}
	else
	{
		pCountInZone = pPlayer->GetZoneById(m_uCountInZone);

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pRevealToPlayer = m_pGame->GetPlayer(i);
			if ((pRevealToPlayer != pPlayer) &&
				!pCountInZone->IsVisibleTo(pRevealToPlayer))
				CDiscardCardCommon::ResolveRevealHand(pPlayer, pRevealToPlayer, pCaster);
		}
	}

	int nCount = m_CountCardFilter.CountIncluded(pCountInZone->GetCardContainer());

	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);
	CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);
	for (int i = 0; i < nCount; ++i)
	{
		if (!pLibrary->GetSize())
		{
			pPlayer->SetDrawFailed();
			return;
		}
		pLibrary->GetTopCard()->Move(pHand, pCaster, MoveType::Draw);
	}
}

//____________________________________________________________________________
//
CGlobalSearchLibrarySpell::CGlobalSearchLibrarySpell(CCard* pCard, AbilityType abilityType,
						LPCTSTR strManaCost,
						const CCardFilter* pSearchCardFilter,
						int nMinSearchCount,
						int nMaxSearchCount,
						ZoneId toZoneId,
						BOOL bToOwnersZone, BOOL bToTop,
						BOOL bTapped)
	: CGlobalSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_pSearchCardFilter(pSearchCardFilter)
	, m_bRevealCards(TRUE)
	, m_ToZoneId(toZoneId)
	, m_bToOwnersZone(bToOwnersZone)
	, m_bToTop(bToTop)
	, m_bTapped(bTapped)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	SetActionValue(ContextValue(nMaxSearchCount, nMinSearchCount));

	SetValidExtraActionValueVector(ContextValue(1));
}

void CGlobalSearchLibrarySpell::ResolvePlayer(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	if (!CSearchCardCommon::ResolveSearchCards(
		pPlayer, MinimumValue(value.nValue2), MaximumValue(value.nValue1), pPlayer, ZoneId::Library,
											  m_pSearchCardFilter,
											  m_ToZoneId,
											  m_bToOwnersZone,
											  m_bToTop ? CardPlacement::Top : CardPlacement::Bottom,
											  m_bTapped,
											  m_bRevealCards))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}
}
//____________________________________________________________________________
//
CGlobalRevealLibrarySpell::CGlobalRevealLibrarySpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   int nRevealCount)
	: CGlobalSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_nRevealCount(nRevealCount)
	//, m_uMoveToZoneId(ZoneId::Null)
	//, m_uMoveToZoneId1(ZoneId::Null)
	, m_bRevealCardsToOthers(FALSE)
	, m_bRevealOnlySelected(FALSE)
	, m_bReorder(FALSE)
	, m_ReorderToZone(ZoneId::Library)
	, m_ReorderToZonePlacement(CardPlacement::Top)
	//, m_MoveType(MoveType::Others)
	, m_nMaxSelectionCount(0)
	, m_nMinSelectionCount(1)
	, m_SelectToZone(ZoneId::Hand)
	, m_SelectToZonePlacement(CardPlacement::NotApplicable)
	, m_pSelectionCardFilter(NULL)
{
}

CActionContainer* CGlobalRevealLibrarySpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaConsumptionAbilityAction* pAction = (CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		int nRevealCount = m_nRevealCount;
		if (m_Cost.GetExtraManaCost() != 0)
		{
			nRevealCount += m_Cost.GetExtraValue(pAction->GetCostConfigEntry());
		}

		pAction->SetValue(ContextValue(nRevealCount));

		if (bSetNames)
		{
			CString strFromZone(ZoneId::ToString(ZoneId::Library));
			CString strAppend;
			if (m_nRevealCount > 1)
				strAppend.Format(_T(", Each player reveals top %d cards from %s"), m_nRevealCount, strFromZone);
			else
				strAppend.Format(_T(", Each player reveals the top card in the %s"), strFromZone);
		
			pAction->AppendToActionName(strAppend);
		}
	}

	return pActionContainer;
}

void CGlobalRevealLibrarySpell::ResolvePlayer(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	int nRevealCount = pAction1->GetValue().nValue1;

	CDrawCardCommon::ResolveRevealZone(pPlayer,
		pPlayer,
		nRevealCount,
		m_bRevealCardsToOthers,
		m_bReorder,
		m_ReorderToZone,
		m_ReorderToZonePlacement,
		NULL,
		m_nMaxSelectionCount,
		m_nMinSelectionCount,
		ZoneId::Library,
		m_SelectToZone,
		m_SelectToZonePlacement,
		m_pSelectionCardFilter,
		m_bRevealOnlySelected);
}

//____________________________________________________________________________
//
CGlobalTokenProductionBySurveySpell::CGlobalTokenProductionBySurveySpell(CCard* pCard, AbilityType abilityType,
														   LPCTSTR strManaCost,
														   CardComparer* pSurveyComparer,
														   LPCTSTR strTokenName, UINT uID,
														   int nTokenMultipler)
	: CGlobalSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_strTokenName(strTokenName)
	, m_uID(uID)
	, m_nTokenMultipler(nTokenMultipler)
{
	AddAbilityTag(AbilityTag::TokenCreation);
	m_SurveyCardFilter.AddComparer(pSurveyComparer);
}

void CGlobalTokenProductionBySurveySpell::ResolvePlayer(const CAbilityAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	int nCount = m_SurveyCardFilter.CountIncluded(pPlayer->GetZoneById(ZoneId::Battlefield)->GetCardContainer());

	int nTokenCount = nCount * m_nTokenMultipler;
	CTokenCreationModifier modifier = CTokenCreationModifier(GetGame(), m_strTokenName, m_uID, nTokenCount);
	modifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
