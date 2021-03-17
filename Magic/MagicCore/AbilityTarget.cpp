#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//

void CTargetSpell::FlagTargets(BOOL bFlagTargets, BOOL bKeepFlagUntilEndOfTurn)
{
	m_CardFlagModifier.GetModifier().RemoveAll();

	if (bFlagTargets)
	{
		m_CardFlagModifier.GetModifier().SetOneTurnOnly(bKeepFlagUntilEndOfTurn);
		m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier.GetModifier().SetAdditionData(GetInstanceID());
	}
}

CActionContainer* CTargetSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		/*
		AdjustTargetCountWithExtraCostValue() is used to implement cards which have the attribute where paying the 
		'base' casting cost does NOT pay for any target. 
		Example 
			Gridlock {XU} Instant Tap X target nonland permanents.  
		In the case of Gridlock {U} casts the spell and DOES NOT pay for the first target and {X} is paid each target 
		(so X = target count) so AdjustTargetCountWithExtraCostValue() is used for this card. 
		*/
		if (m_bAdjustTargetCountWithExtraCostValue)
		{
			int nExtraValue = GetCost().GetExtraValue(pAction->GetCostConfigEntry());
			if (nExtraValue <= 0)
				continue;

			GetTargeting()->SetSubjectCount(nExtraValue, nExtraValue, FALSE);
		}
		/*
		AdjustTargetCountWithExtraCostValueAddOne() is used to implement cards which have the attribute where paying the 
		'base' casting cost pays for exactly one target as in the case of the 'Strive' mechanic.  The 'AddOne' in this flag's
		title indicates that one has been added to the target count for the 'base' casting cost paying for the first target.
		Example 
			Ajani's Presence {W} Instant
			Strive - Ajani's Presence costs {2W} more to cast for each target beyond the first.
			Any number of target creatures each get +1/+1 and gain indestructible until end of turn. 

		In the case of Ajani's Presence {W} casts the spell and pays for the first target and {2W} is paid for each subsequent
		target so AdjustTargetCountWithExtraCostValueAddOne() is used for this card.
		*/
		if (m_bAdjustTargetCountWithExtraCostValueAddOne)	// for strive ability
		{
			int nExtraValue = GetCost().GetExtraValue(pAction->GetCostConfigEntry()) + 1; // additional target(s) + first target (paid for in casting cost)
			if (nExtraValue <= 0) // nExtraValue will always be greater than one so code will always continue
				continue;

			GetTargeting()->SetSubjectCount(nExtraValue, nExtraValue, FALSE);
		} 

		if (m_bFreeAdjustTargetCountWithExtraCostValue)
		{
			int nExtraValue = GetCost().GetExtraValue(pAction->GetCostConfigEntry());
			if (nExtraValue <= 0)
				continue;

			GetTargeting()->SetSubjectCount(1, nExtraValue, FALSE);
		}

		CSubjectGroupContainer targetGroups;
		std::vector<BOOL> tricks;
		GetTargeting()->GetSubjects(bIncludeTricks, targetGroups, tricks, pAction->GetValue());

		for (int i = 0; i < targetGroups.GetSize(); ++i)
		{
			counted_ptr<CTargetSpellAction> cpAction1 = (CTargetSpellAction*)CreateAction().GetPointer();
			cpAction1->Copy(pAction);

			cpAction1->GetTargetGroup() = targetGroups.GetAt(i);
			if (tricks[i])
				cpAction1->SetTrick();

			pActionContainer1->Add(cpAction1.GetPointer());
		}
	}

	if (m_bAdjustTargetCountWithExtraCostValue || m_bAdjustTargetCountWithExtraCostValueAddOne || m_bFreeAdjustTargetCountWithExtraCostValue)
		GetTargeting()->SetSubjectCount(1, 1, FALSE); // reset subject count for IsPlayable()

	delete pActionContainer;

	if (bSetNames)
		// Standard targeting move names
		for (int l = 0; l < pActionContainer1->GetSize(); ++l)
		{
			CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer1->GetAt(l).GetPointer();
			CSubjectGroup& targetGroup = pAction->GetTargetGroup();

			CString strActionName;

			for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
				it != targetGroup.CardSubjectEnd(); ++it)
			{
				CString strActionName1;
				if ((*it)->GetCardType().IsCreature())
				{
					const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
					strActionName1.Format(_T(" and targets %s"), pCard->GetCreatureName(TRUE));
				}
				else
					strActionName1.Format(_T(" and targets %s"), (*it)->GetCardName());

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
				it != targetGroup.PlayerSubjectEnd(); ++it)
			{
				const CPlayer* pPlayer = *it;

				CString strActionName1;
				strActionName1.Format(_T(" and targets %s"), pPlayer->GetPlayerName());
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			pAction->AppendToActionName(strActionName);
		}

	return pActionContainer1;
}

counted_ptr<CAbilityAction> CTargetSpell::CreateAction() const
{
	counted_ptr<CTargetSpellAction> cpAction = ::CreateObject<CTargetSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CTargetSpell*>(this));
	cpAction->SetScore(ActionScore::Spell);

	return cpAction.GetPointer();
}

/*
counted_ptr<CAction> CTargetSpell::TransformResolutionAction(const CAction* pAction, BOOL& bCountered)
{
	bCountered = FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	const CSubjectGroup& targetGroup(pAction1->GetTargetGroup());
	BOOL bTrick;

	CCardSubjectContainer illegalCardTargets;

	for (CSubjectGroup::CardSubjectIterator i = targetGroup.CardSubjectBegin();
		i != targetGroup.CardSubjectEnd(); ++i)
		if (!m_apTargeting->IsSubjectIncluded(*i, TRUE, bTrick))
			illegalCardTargets.Set(*i);

	CPlayerSubjectContainer illegalPlayerTargets;

	for (CSubjectGroup::PlayerSubjectIterator i = targetGroup.PlayerSubjectBegin();
		i != targetGroup.PlayerSubjectEnd(); ++i)
		if (!m_apTargeting->IsSubjectIncluded(*i, TRUE, bTrick))
			illegalPlayerTargets.Set(*i);

	if (!illegalCardTargets.GetSize() && !illegalPlayerTargets.GetSize())
		return NULL;

	counted_ptr<CTargetSpellAction> cpAction((CTargetSpellAction*)pAction->Clone().GetPointer());
	CSubjectGroup& targetGroup2(cpAction->GetTargetGroup());
	CPlayer* pCaster = pAction1->GetController();

	for (CCardSubjectContainer::Iterator i = illegalCardTargets.Begin();
		i != illegalCardTargets.End(); ++i)
	{
		if (!m_pGame->IsThinking())
		{
			CString strMessage;
			strMessage.Format(_T("Ignored illegal target %s"), (*i)->GetCardName());
			m_pGame->Message(
				strMessage,
				pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		targetGroup2.RemoveSubject(*i);
	}

	for (CPlayerSubjectContainer::Iterator i = illegalPlayerTargets.Begin();
		i != illegalPlayerTargets.End(); ++i)
	{
		if (!m_pGame->IsThinking())
		{
			CString strMessage;
			strMessage.Format(_T("Ignored illegal target %s"), (*i)->GetPlayerName());
			m_pGame->Message(
				strMessage,
				pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		targetGroup2.RemoveSubject(*i);
	}

	if (!targetGroup2.GetSubjectCount())
		bCountered = TRUE;

	return cpAction.GetPointer();
}
*/

BOOL CTargetSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	BOOL bSuccess = FALSE;

	for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
		it != targetGroup.CardSubjectEnd(); ++it)
	{
		BOOL bTrick;
		if (!m_apTargeting->IsSubjectIncluded(it->GetPointer(), TRUE, bTrick) ||
			(*it)->GetZoneMoveNumber() != targetGroup.GetZoneMoveNumber(it->GetPointer()))
		{
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s skipped illegal target %s"), GetCard()->GetCardName(), (*it)->GetCardName());
				m_pGame->Message(
					strMessage,
					pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			continue;
		}

		// Flag card
		if (!m_CardFlagModifier.GetModifier().IsNull())
			m_CardFlagModifier.ApplyTo((CCard*)it->GetPointer());

		const ContextValue& value = targetGroup.GetValue(it->GetPointer());

		ResolveCard(pAction1, (CCard*)it->GetPointer(), value);

		bSuccess = TRUE;
	}

	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
		it != targetGroup.PlayerSubjectEnd(); ++it)
	{
		BOOL bTrick;
		if (!m_apTargeting->IsSubjectIncluded(*it, TRUE, bTrick))
		{
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s skipped illegal target %s"), GetCard()->GetCardName(), (*it)->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			continue;
		}

		const ContextValue& value = targetGroup.GetValue(*it);

		ResolvePlayer(pAction1, (CPlayer*)(*it), value);

		bSuccess = TRUE;
	}

	return bSuccess; // need to have at least one target, otherwise the spell is considered to fail
}

void CTargetSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	m_TargetModifier.CCardModifiers::ApplyTo(pCard);
	if (pCard->GetCardType().IsCreature())
		m_TargetModifier.CCreatureModifiers::ApplyTo((CCreatureCard*)pCard);
}

void CTargetSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	m_TargetModifier.CPlayerModifiers::ApplyTo(pPlayer);
}

void CTargetSpell::OnResolutionCompleted(const CAbilityAction* pAction, BOOL bResolutionResult)
{
	__super::OnResolutionCompleted(pAction, bResolutionResult);

	// Unflag all tokens flagged by this ability

	if (!m_CardFlagModifier.GetModifier().IsNull() &&
		!m_CardFlagModifier.GetModifier().GetOneTurnOnly())
	{
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier.GetModifier().GetAdditionData());
		CCardFilter cardFilter(pComparer);

		const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
		const CPlayer* pCaster = pAction1->GetController();

		CZone* pBattlefield = pCaster->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
			if (cardFilter.IsCardIncluded(pBattlefield->GetAt(i)))
				m_CardFlagModifier.RemoveFrom(pBattlefield->GetAt(i));
	}
}

//____________________________________________________________________________
//
/*
	Ref:
	Rod of Ruin 4
	Artifact
	3, Tap: Rod of Ruin deals 1 damage to target creature or player.
*/
CTargetChgLifeSpell::CTargetChgLifeSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 CardComparer* pComparer,
										 BOOL bTargetPlayers,
										 Life nLifeDelta,
										 PreventableType preventable)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers, new CMyTargeting)
	, m_bReverseLifeDeltaToController(FALSE)
	, m_bPropagateToTargetedPlayersCreatures(FALSE)
	, m_LifeModifier(Life(0), pCard, preventable, DamageType::NonCombatDamage)
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

CActionContainer* CTargetChgLifeSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;
	CString strFormat;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			const ContextValue& value = targetGroup.GetValue(pCard);

			Life nLifeDelta = Life(value.nValue1);
			if (nLifeDelta < Life(0))
			{
				if (bSetNames)
					if (m_LifeModifier.GetPreventable() == PreventableType::Preventable)
						strFormat = _T(" to deal %d damage");
					else if (nLifeDelta == Life(SpecialNumber::DivideBy2RoundUp) || nLifeDelta == Life(SpecialNumber::DivideBy2RoundDown))
						strFormat = _T(" to lose half the life");
					else
						strFormat = _T(" to lose %d life");

				// 5/6/2001
				if (m_Cost.HasExtraCost() &&							// Set to 'trick' if we can pay extra cost and we are overkilling
					GetExtraActionValueVector().nValue1 &&
					(-nLifeDelta > pCard->GetLife()) &&
					(nLifeDelta != Life(GetActionValue().nValue1)))
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					pAction->SetTrick();	// Overkill
				}

				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);
			}
			else
				if (nLifeDelta > Life(0))
				{
					if (bSetNames)
						strFormat = _T(" to gain %d life");

					if (!pAction->IsTrick())
						nBonusScore += GET_INTEGER(nLifeDelta);
				}
				else
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					if (bSetNames)
						strFormat = _T("");

					pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
				}

			if (bSetNames && !strFormat.IsEmpty())
			{
				strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			const ContextValue& value = targetGroup.GetValue(pPlayer);

			Life nLifeDelta(value.nValue1);
			if (nLifeDelta < Life(0))
			{
				if (bSetNames)
					if (m_LifeModifier.GetPreventable() == PreventableType::Preventable)
						strFormat = _T(" to deal %d damage");
					else if (nLifeDelta == Life(SpecialNumber::DivideBy2RoundUp) || nLifeDelta == Life(SpecialNumber::DivideBy2RoundDown))
						strFormat = _T(" to lose half the life");
					else
						strFormat = _T(" to lose %d life");

				if (m_Cost.HasExtraCost() &&								// Set to 'trick' if we can pay extra cost and we are overkilling
					GetExtraActionValueVector().nValue1 &&
					(-nLifeDelta > pPlayer->GetLife()) &&
					(nLifeDelta != Life(GetActionValue().nValue1)))	// 5/6/2001
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					pAction->SetTrick();	// Overkill
				}

				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);
			}
			else
				if (nLifeDelta > Life(0))
				{
					if (bSetNames)
						strFormat = _T(" to gain %d life");

					if (!pAction->IsTrick())
						nBonusScore += GET_INTEGER(nLifeDelta);
				}
				else
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					if (bSetNames)
						strFormat = _T("");

					pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
				}

			if (bSetNames && !strFormat.IsEmpty())
			{
				strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetChgLifeSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	Life previousLife(pCreature->GetLife());

	Life nLifeDelta(value.nValue1);

	//if (m_LifeModifier.GetPreventable() == PreventableType::NotPreventable && nLifeDelta<Life(0)) m_LifeModifier.SetDamageType(DamageType::NonCombatDamage);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pCreature);

	if (m_bReverseLifeDeltaToController)
	{
		m_LifeModifier.SetLifeDelta(-nLifeDelta);

		m_LifeModifier.ApplyTo(pAction->GetController());
	}
}

void CTargetChgLifeSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	Life previousLife(pPlayer->GetLife());

	Life nLifeDelta(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pPlayer);

	if (m_bReverseLifeDeltaToController)
	{
		m_LifeModifier.SetLifeDelta(-nLifeDelta);

		m_LifeModifier.ApplyTo(pAction->GetController());
	}

	if (m_bPropagateToTargetedPlayersCreatures)
	{
		m_LifeModifier.SetLifeDelta(nLifeDelta);

		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			if (pInplay->GetAt(i)->GetCardType().IsCreature())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pInplay->GetAt(i);

				m_LifeModifier.ApplyTo(pCreatureCard);
			}
		}
	}
}

//____________________________________________________________________________
//
/*
	Ref:
	Bloodshot Cyclops 5R
	Creature — Cyclops Giant (4/4)
	Tap, Sacrifice a creature: Bloodshot Cyclops deals damage equal to the sacrificed creature's 
	power to target creature or player.

*/
CTargetChgLifeSpell2::CTargetChgLifeSpell2(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   BOOL bTargetPlayers,
										   const CCardFilter* pSacrificeCardFilter,
										   PreventableType preventable,
										   DamageType damageType)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers)
	, m_LifeModifier(Life(0), pCard, preventable, damageType)
{
	if (preventable == PreventableType::Preventable)
		AddAbilityTag(AbilityTag::DamageSource);
	else
		AddAbilityTag(AbilityTag::LifeLost);

	m_Cost.AddSacrificeCardCost(1, pSacrificeCardFilter);

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CTargetChgLifeSpell2::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		ATLASSERT(pAction->GetCostConfigEntry().GetSacrificeCards()&&pAction->GetCostConfigEntry().GetSacrificeCards()->GetSize() == 1);
		ATLASSERT((pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0)->GetCardType() & CardType::Creature).Any());

		// Deduction equals to sacrificed creature's power

		Life nLifeDelta(GET_INTEGER
			(-((CCreatureCard*)pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0))->GetPower()));

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			targetGroup.SetValue(pCard, ContextValue(GET_INTEGER(nLifeDelta)));

			if (nLifeDelta != Life(0))
			{
				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);

				if (bSetNames)
				{
					strActionName1.Format(_T(" to deal %d damage"),
						abs(GET_INTEGER(nLifeDelta)));
					if (!strActionName.IsEmpty())
						strActionName += _T(",") + strActionName1;
					else
						strActionName += strActionName1;
				}
			}
			else
			{
				if (!bIncludeTricks)
				{
					pActionContainer->RemoveAt(l);
					pAction = NULL;
					break;
				}

				pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			targetGroup.SetValue(pPlayer, ContextValue(GET_INTEGER(nLifeDelta)));

			if (nLifeDelta != Life(0))
			{
				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);

				if (bSetNames)
				{
					strActionName1.Format(_T(" to deal %d damage"),
						abs(GET_INTEGER(nLifeDelta)));

					if (!strActionName.IsEmpty())
						strActionName += _T(",") + strActionName1;
					else
						strActionName += strActionName1;
				}
			}
			else
			{
				if (!bIncludeTricks)
				{
					pActionContainer->RemoveAt(l);
					pAction = NULL;
					break;
				}

				pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetChgLifeSpell2::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	Life nLifeDelta(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pCreature);
}

void CTargetChgLifeSpell2::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	Life nLifeDelta(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
/*
	Ref:
	Ghitu Fire-Eater 2R
    Creature — Human Nomad (2/2)
	Tap, Sacrifice Ghitu Fire-Eater: Ghitu Fire-Eater deals damage equal to its power to target 
	creature or player.

	Abyssal Hunter 3B
	Creature — Human Assassin (1/1)
	B, Tap: Tap target creature. Abyssal Hunter deals damage equal to Abyssal Hunter's power to 
	that creature.
	 
	Karplusan Yeti 3RR
	Creature — Yeti (3/3)
	Tap: Karplusan Yeti deals damage equal to its power to target creature. That creature deals 
	damage equal to its power to Karplusan Yeti.
*/
CTargetChgLifeSpell3::CTargetChgLifeSpell3(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   BOOL bTargetPlayers,
										   PreventableType preventable,
										   DamageType damageType)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers)
	, m_bReceiveDamageFromTargetedCreature(FALSE)
	, m_bIsFightAbility(FALSE)
	, m_LifeModifier(Life(0), pCard, preventable, damageType)
{
	if (preventable == PreventableType::Preventable)
		AddAbilityTag(AbilityTag::DamageSource);
	else
		AddAbilityTag(AbilityTag::LifeLost);

	ATLASSERT((m_pCard->GetCardType() & CardType::Creature).Any());

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CTargetChgLifeSpell3::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		// Deduction equals to this creature's power (will be updated again during resolution)

		Life nLifeDelta(GET_INTEGER(-((CCreatureCard*)m_pCard)->GetPower()));

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			targetGroup.SetValue(pCard, ContextValue(GET_INTEGER(nLifeDelta))); // still need to save life delta to support Ghitu fire-eater

			if (nLifeDelta != Life(0))
			{
				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);

				if (bSetNames)
				{
					strActionName1.Format(_T(" to deal %d damage"),
						abs(GET_INTEGER(nLifeDelta)));
					if (!strActionName.IsEmpty())
						strActionName += _T(",") + strActionName1;
					else
						strActionName += strActionName1;
				}
			}
			else
			{
				if (!bIncludeTricks)
				{
					pActionContainer->RemoveAt(l);
					pAction = NULL;
					break;
				}

				pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			targetGroup.SetValue(pPlayer, ContextValue(GET_INTEGER(nLifeDelta))); // still need to save life delta to support Ghitu fire-eater

			if (nLifeDelta != Life(0))
			{
				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);

				if (bSetNames)
				{
					strActionName1.Format(_T(" to deal %d damage"),
						abs(GET_INTEGER(nLifeDelta)));
					if (!strActionName.IsEmpty())
						strActionName += _T(",") + strActionName1;
					else
						strActionName += strActionName1;
				}
			}
			else
			{
				if (!bIncludeTricks)
				{
					pActionContainer->RemoveAt(l);
					pAction = NULL;
					break;
				}

				pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetChgLifeSpell3::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pTargetedCreature = (CCreatureCard*)pCard;

	Life nLifeDelta;
	if (m_pCard->IsInplay())
		nLifeDelta = Life(GET_INTEGER(-((CCreatureCard*)m_pCard)->GetPower()));
	else
		nLifeDelta = Life(value.nValue1);

	Life nLifeDelta3(GET_INTEGER(-pTargetedCreature->GetPower()));

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pTargetedCreature);

	Life nLifeDelta2(GET_INTEGER(-pTargetedCreature->GetPower()));

	if (m_bReceiveDamageFromTargetedCreature)
	{
		m_LifeModifier.SetLifeDelta(nLifeDelta2);
		m_LifeModifier.SetSourceCard(pTargetedCreature);
		m_LifeModifier.ApplyTo((CCreatureCard*)m_pCard);
	}

	if (m_bIsFightAbility)
	{
		m_LifeModifier.SetLifeDelta(nLifeDelta3);
		m_LifeModifier.SetSourceCard(pTargetedCreature);
		m_LifeModifier.ApplyTo((CCreatureCard*)m_pCard);
	}
}

void CTargetChgLifeSpell3::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	Life nLifeDelta;
	if (m_pCard->IsInplay())
		nLifeDelta = Life(GET_INTEGER(-((CCreatureCard*)m_pCard)->GetPower()));
	else
		nLifeDelta = Life(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
/*
	Planewalker version of CTargetChgLifeSpell3
    Ref: 
	Ghitu Fire Eater, Abyssal Hunter, Karplusan Yeti
	Specific Ref:
	Garruk, the Veil-Cursed
	Planeswalker — Garruk
	relevant ability
		-3: Creatures you control gain trample and get +X/+X until end of turn, where X is the
	number of creature cards in your graveyard.
*/
CTargetPlaneswalkerChgLifeSpell3::CTargetPlaneswalkerChgLifeSpell3(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   BOOL bTargetPlayers,
										   PreventableType preventable, Life nLife,
										   DamageType damageType)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers)
	, m_bReceiveDamageFromTargetedCreature(FALSE)
	, m_bIsFightAbility(FALSE)
	, m_LifeModifier(nLife, pCard, preventable, damageType)
{
	if (preventable == PreventableType::Preventable)
		AddAbilityTag(AbilityTag::DamageSource);
	else
		AddAbilityTag(AbilityTag::LifeLost);

	//ATLASSERT((m_pCard->GetCardType() & CardType::Creature).Any());

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CTargetPlaneswalkerChgLifeSpell3::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();
		

		Life nLifeDelta(m_LifeModifier.GetLifeDelta());

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			targetGroup.SetValue(pCard, ContextValue(GET_INTEGER(nLifeDelta))); // still need to save life delta to support Ghitu fire-eater

			if (nLifeDelta != Life(0))
			{
				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);

				if (bSetNames)
				{
					strActionName1.Format(_T(" to deal %d damage"),
						abs(GET_INTEGER(nLifeDelta)));
					if (!strActionName.IsEmpty())
						strActionName += _T(",") + strActionName1;
					else
						strActionName += strActionName1;
				}
			}
			else
			{
				if (!bIncludeTricks)
				{
					pActionContainer->RemoveAt(l);
					pAction = NULL;
					break;
				}

				pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			targetGroup.SetValue(pPlayer, ContextValue(GET_INTEGER(nLifeDelta))); // still need to save life delta to support Ghitu fire-eater

			if (nLifeDelta != Life(0))
			{
				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);

				if (bSetNames)
				{
					strActionName1.Format(_T(" to deal %d damage"),
						abs(GET_INTEGER(nLifeDelta)));
					if (!strActionName.IsEmpty())
						strActionName += _T(",") + strActionName1;
					else
						strActionName += strActionName1;
				}
			}
			else
			{
				if (!bIncludeTricks)
				{
					pActionContainer->RemoveAt(l);
					pAction = NULL;
					break;
				}

				pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetPlaneswalkerChgLifeSpell3::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pTargetedCreature = (CCreatureCard*)pCard;

	Life nLifeDelta;
	if (m_pCard->IsInplay())
		nLifeDelta = m_LifeModifier.GetLifeDelta();
	else
		nLifeDelta = Life(value.nValue1);

	Life nLifeDelta3(GET_INTEGER(-pTargetedCreature->GetPower()));

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pTargetedCreature);

	Life nLifeDelta2(GET_INTEGER(-pTargetedCreature->GetPower()));

	if (m_bReceiveDamageFromTargetedCreature)
	{
		CCardCounterModifier m_Counter = CCardCounterModifier(LOYALTY_COUNTER, GET_INTEGER(nLifeDelta2));
		//m_LifeModifier.SetLifeDelta(nLifeDelta2);
		//m_LifeModifier.SetSourceCard(pTargetedCreature);
		m_Counter.ApplyTo(m_pCard);
	}

	if (m_bIsFightAbility)
	{
		CCardCounterModifier m_Counter = CCardCounterModifier(LOYALTY_COUNTER, GET_INTEGER(nLifeDelta3));
		//m_LifeModifier.SetLifeDelta(nLifeDelta2);
		//m_LifeModifier.SetSourceCard(pTargetedCreature);
		m_Counter.ApplyTo(m_pCard);
	}
}

void CTargetPlaneswalkerChgLifeSpell3::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	Life nLifeDelta;
	if (m_pCard->IsInplay())
		nLifeDelta = m_LifeModifier.GetLifeDelta();
	else
		nLifeDelta = Life(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
/*
	Ref:
	Corrupt 5B
	Sorcery
	Corrupt deals damage equal to the number of Swamps you control to target creature or player.
	You gain life equal to the damage dealt this way.
*/
CTargetChgLifeBySurveySpell::CTargetChgLifeBySurveySpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   BOOL bTargetPlayers,
										   ZoneId uCountCardsInZone,
										   BOOL bControllerZone,		// TRUE -> uCountInZone refers to controller's zone, FALSE -> uCountInZone refers to targeted player's zone or targeted cards' controllers' zone
										   CardComparer* pComparer2,	// Count these cards
										   PreventableType preventable)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers)
	, m_uCountCardsInZone(uCountCardsInZone)
	, m_bControllerZone(bControllerZone)
	, m_bControllerGainLife(FALSE)
	, m_LifeModifier(Life(0), pCard, preventable)
{
	if (preventable == PreventableType::Preventable)
		AddAbilityTag(AbilityTag::DamageSource);
	else
		AddAbilityTag(AbilityTag::LifeLost);

	m_CountCardFilter.AddComparer(pComparer2);

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CTargetChgLifeBySurveySpell::SetControllerGainLife(BOOL bControllerGainLife)	// Ref: Corrupt
{
	m_bControllerGainLife = bControllerGainLife;
}

Life CTargetChgLifeBySurveySpell::GetLifeDelta(const CPlayer* pAltPlayer) const
{
	const CZone* pCountInZone = NULL;
	if (m_bControllerZone)
		pCountInZone = GetController()->GetZoneById(m_uCountCardsInZone);
	else
		pCountInZone = pAltPlayer->GetZoneById(m_uCountCardsInZone);

	int nCount = 0;
	for (int i = 0; i < pCountInZone->GetSize(); ++i)
		if (m_CountCardFilter.IsCardIncluded(pCountInZone->GetAt(i)))
			++nCount;

	return Life(-nCount);
}

void CTargetChgLifeBySurveySpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	Life nLifeDelta(GetLifeDelta(pCard->GetController()));

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pCreature);

	if (m_bControllerGainLife)
	{
		m_LifeModifier.SetLifeDelta(-nLifeDelta);

		m_LifeModifier.ApplyTo(pAction->GetController());
	}
}

void CTargetChgLifeBySurveySpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	Life nLifeDelta(GetLifeDelta(pPlayer));

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pPlayer);

	if (m_bControllerGainLife)
	{
		m_LifeModifier.SetLifeDelta(-nLifeDelta);

		m_LifeModifier.ApplyTo(pAction->GetController());
	}
}

/*
int CTargetChgLifeBySurveySpell::ResolveDamage(CCreatureCard* pCard)
{
	if (pCard->GetZoneId() != ZoneId::Battlefield)
		return 0;

	Life nLifeDelta(GetLifeDelta(pCard->GetController()));

	CLifeModifier(nLifeDelta, m_pCard, m_Preventable).ApplyTo(pCard);

	return GET_INTEGER(-nLifeDelta);
}

int CTargetChgLifeBySurveySpell::ResolveDamage(CPlayer* pPlayer)
{
	Life nLifeDelta(GetLifeDelta(pPlayer));

	CLifeModifier(nLifeDelta, m_pCard, m_Preventable).ApplyTo(pPlayer);

	return GET_INTEGER(-nLifeDelta);
}

BOOL CTargetChgLifeBySurveySpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CTargetSpell::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	int nCount = 0;

	for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
		it != targetGroup.CardSubjectEnd(); ++it)
	{
		CCreatureCard* pCard = const_cast<CCreatureCard*>((const CCreatureCard*)*it);
		nCount += ResolveDamage(pCard);
	}

	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
		it != targetGroup.PlayerSubjectEnd(); ++it)
	{
		CPlayer* pPlayer = const_cast<CPlayer*>(*it);
		nCount += ResolveDamage(pPlayer);
	}

	if (m_bControllerGainLife)
	{
		CLifeModifier(Life(nCount), m_pCard, PreventableType::NotPreventable).ApplyTo(m_pCard->GetController());
	}

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Mana Clash R
	Sorcery
	You and target opponent each flip a coin. Mana Clash deals 1 damage to each player whose
	coin comes up tails. Repeat this process until both players' coins come up heads on the
	same flip.
*/
CTargetRandomChgLifeSpell::CTargetRandomChgLifeSpell(CCard* pCard, AbilityType abilityType,
													 LPCTSTR strManaCost,
													 CardComparer* pComparer,
 													 Life nLifeDelta,
													 PreventableType preventable)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, TRUE, new CMyTargeting)
	, m_LifeModifier(nLifeDelta, pCard, preventable)
{
	if (preventable == PreventableType::Preventable)
		AddAbilityTag(AbilityTag::DamageSource);
	else
		AddAbilityTag(AbilityTag::LifeLost);
}

void CTargetRandomChgLifeSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();

	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());

	if (m_pGame->IsThinking())
	{
		// Approximation for the thinking process because we cannot call GetRand() during thinkings.
		// That will mess up the synchronization in online cases.

		for (int i = 0; i < 3; ++i)
		{
			m_LifeModifier.ApplyTo(pCaster);
			m_LifeModifier.ApplyTo(pPlayer);
		}

		return;
	}

	int nRandom;

	while (nRandom = pCaster->GetRand() % 4)
	{
		CString strMessage;
		strMessage.Format(_T("%s's coin: %s; %s's coin: %s"),
			pCaster->GetPlayerName(),
			nRandom & 0x1 ? _T("tail") : _T("head"),
			pPlayer->GetPlayerName(),
			nRandom & 0x2 ? _T("tail") : _T("head"));
		m_pGame->Message(
			strMessage,
			pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		if (nRandom & 0x1)
			m_LifeModifier.ApplyTo(pCaster);

		if (nRandom & 0x2)
			m_LifeModifier.ApplyTo(pPlayer);
	}

	CString strMessage;
	strMessage.Format(_T("%s's coin: head; %s's coin: head"),
		pCaster->GetPlayerName(),
		pPlayer->GetPlayerName());
	m_pGame->Message(
		strMessage,
		pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
		MessageImportance::High
		);
}

/*
BOOL CTargetRandomChgLifeSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	CPlayer* pCaster = pAction1->GetController();
	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	ATLASSERT(targetGroup.GetPlayerSubjectCount() == 1);

	CPlayer* pTargetPlayer = const_cast<CPlayer*>(targetGroup.GetFirstPlayerSubject());

	if (m_pGame->IsThinking())
	{
		// Approximation for the thinking process because we cannot call GetRand() during thinkings.
		// That will mess up the synchronization in online cases.

		for (int i = 0; i < 3; ++i)
		{
			m_LifeModifier.ApplyTo(pCaster);
			m_LifeModifier.ApplyTo(pTargetPlayer);
		}

		return TRUE;
	}

	int nRandom;

	while (nRandom = m_pGame->GetRand() % 4)
	{
		CString strMessage;
		strMessage.Format(_T("%s's coin: %s; %s's coin: %s"),
			pCaster->GetPlayerName(),
			nRandom & 0x1 ? _T("tail") : _T("head"),
			pTargetPlayer->GetPlayerName(),
			nRandom & 0x2 ? _T("tail") : _T("head"));
		m_pGame->Message(
			strMessage,
			pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);

		if (nRandom & 0x1)
			m_LifeModifier.ApplyTo(pCaster);

		if (nRandom & 0x2)
			m_LifeModifier.ApplyTo(pTargetPlayer);
	}

	CString strMessage;
	strMessage.Format(_T("%s's coin: head; %s's coin: head"),
		pCaster->GetPlayerName(),
		pTargetPlayer->GetPlayerName());
	m_pGame->Message(
		strMessage,
		pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
		MessageImportance::High
		);

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Dwarven Warriors 2R
	Creature — Dwarf Warrior (1/1)
	Tap: Target creature with power 2 or less can't be blocked this turn.

	Fit of Rage 1R
	Sorcery
	Target creature gets +3/+3 and gains first strike until end of turn.
*/
CTargetChgPwrTghAttrSpell::CTargetChgPwrTghAttrSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 Power nPowerDelta, Life nLifeDelta,
										 CreatureKeyword creatureKeywordToAdd,
										 CreatureKeyword creatureKeywordToRemove,
										 BOOL bThisTurnOnly,
										 PreventableType preventable,
										 CardComparer* pComparer)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, new CMyTargeting)
	, m_PowerModifier(Power(0), bThisTurnOnly)
	, m_LifeModifier(Life(0), pCard, preventable, DamageType::NotDealingDamage, bThisTurnOnly)
{
	AddAbilityTag(AbilityTag::CreatureChange);

	m_CreatureKeywordModifier.GetModifier().SetOneTurnOnly(bThisTurnOnly);
	m_CreatureKeywordModifier.GetModifier().SetToAdd(creatureKeywordToAdd);
	m_CreatureKeywordModifier.GetModifier().SetToRemove(creatureKeywordToRemove);

	m_CardKeywordModifier.GetModifier().SetOneTurnOnly(bThisTurnOnly);

	SetActionValue(ContextValue(GET_INTEGER(nLifeDelta), GET_INTEGER(nPowerDelta)));
	SetValidExtraActionValueVector(ContextValue(1, 1));
}

CActionContainer* CTargetChgPwrTghAttrSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();
	Characteristic characteristic = GetTargeting()->GetCharacteristic();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		int nBonusScore = 0;

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			const ContextValue& value = targetGroup.GetValue(pCard);

			Power nPowerDelta(value.nValue2);
			Life nLifeDelta(value.nValue1);

			BOOL bTrick = FALSE;

			// 5/6/2001
			if (m_Cost.HasExtraCost() &&
				GetExtraActionValueVector().nValue1 &&
				(-nLifeDelta > pCard->GetLife()) &&
				(nLifeDelta != Life(GetActionValue().nValue1)))					// Set to trick if overkilling
				bTrick = TRUE;
			else
				if (m_Cost.HasExtraCost() && (nPowerDelta == Power(0)) && (nLifeDelta == Life(0)))	// 5/6/2001, set to trick if targeting without dealing/giving damages/lifes
					bTrick = TRUE;

			if (!bIncludeTricks && bTrick)
			{
				pActionContainer->RemoveAt(l);
				pAction = NULL;
				break;
			}

			if (bTrick)
				pAction->SetTrick();		// Overkilling or targeting without dealing damage

			if (!pAction->IsTrick())
				if (characteristic < Characteristic::Neutral)
					nBonusScore += GET_INTEGER(-nLifeDelta) + GET_INTEGER(-nPowerDelta);
				else
					if (characteristic > Characteristic::Neutral)
						nBonusScore += GET_INTEGER(nLifeDelta) + GET_INTEGER(nPowerDelta);

			if (bSetNames)
			{
				m_LifeModifier.SetLifeDelta(nLifeDelta);
				m_PowerModifier.SetPowerDelta(nPowerDelta);

				CString strActionName1(
					GetCreatureGainString(pCard, &m_PowerModifier, &m_LifeModifier, &m_CreatureKeywordModifier, &m_CardKeywordModifier));

				if (!strActionName1.IsEmpty())
					strActionName.AppendFormat(_T(" (%s)"), strActionName1);
			}
		}

		if (!pAction)			// Action removed
			continue;

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetChgPwrTghAttrSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	m_LifeModifier.SetLifeDelta(Life(value.nValue1));
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pCreature);

	m_PowerModifier.SetPowerDelta(Power(value.nValue2));
	m_PowerModifier.ApplyTo(pCreature);

	m_CreatureKeywordModifier.ApplyTo(pCreature);
	m_CardKeywordModifier.ApplyTo(pCreature);
}

/*
BOOL CTargetChgPwrTghAttrSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CTargetSpell::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();
	CSubjectGatherer::ResolvePowerToughness(targetGroup, m_bThisTurnOnly);

	for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
		it != targetGroup.CardSubjectEnd(); ++it)
	{
		CCreatureCard* pCard = (CCreatureCard*)*it;

		if (pCard->GetZoneId() != ZoneId::Battlefield)
			continue;

		m_CreatureKeywordModifier.ApplyTo(pCard);
		m_CardKeywordModifier.ApplyTo(pCard);

		if (m_bUntapTargetedCreature)
			if (pCard->GetOrientation()->IsTapped())
				pCard->GetOrientation()->Untap();
	}

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Samite Healer 1W
	Creature — Human Cleric (1/1)
	Tap: Prevent the next 1 damage that would be dealt to target creature or player this turn.
*/
CTargetDamagePreventionSpell::CTargetDamagePreventionSpell(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer,
											   BOOL bTargetPlayers,
											   Life nLifeDelta,
											   SourceColor sourceColor)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers, new CMyTargeting)
	, m_SourceColor(sourceColor)
{
	AddAbilityTag(AbilityTag::DamagePrevention);

	if (m_SourceColor == SourceColor::Null)
		m_SourceColor = SourceColor::_AllSources;

	SetActionValue(ContextValue(GET_INTEGER(nLifeDelta), 0));

	if (nLifeDelta >= Life(0))
		SetValidExtraActionValueVector(ContextValue(1));

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
}

BOOL CTargetDamagePreventionSpell::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CTargetDamagePreventionSpell* pAbility = (CTargetDamagePreventionSpell*)GetAbility();

	// Player can be targeted if there are valid prevention sources

	Characteristic characteristic = GetCharacteristic();
	CPlayer* pController = pAbility->GetController();

	for (int i = 0; i < pAbility->GetGame()->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pAbility->GetGame()->GetPlayer(i);

		// Trick if preventing from controller's own sources
		if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
			((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
		{
			if (!bIncludeTricks)
				continue;
		}

		CZone* pZone = pAbility->GetGame()->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard = pZone->GetAt(k);

			// Check to see if this card has the source color

			if (!(pCard->GetSourceColor() & pAbility->m_SourceColor).Any())
				continue;

			// See if this card is a (preventable) damage source

			if (bIncludeTricks)
				return TRUE;

			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
				if (pCreature->IsAttacking() || pCreature->CanAttackInGeneral())
					return TRUE;
			}

			for (int j = 0; j < pCard->GetAbilityCount(); ++j)
				if ((pCard->GetAbility(j)->GetAbilityTag() & AbilityTag::DamageSource).Any())
					return TRUE;
		}
	}

	const CStack& stack = pAbility->GetGame()->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & pAbility->m_SourceColor).Any())
		{
			if (bIncludeTricks)
				return TRUE;

			CPlayer* pPlayer = pAction2->GetController();

			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				continue;

			if ((pAction2->GetStackAbility()->GetAbilityTag() & AbilityTag::DamageSource).Any())
				return TRUE;
		}
	}

	return FALSE;
}

BOOL CTargetDamagePreventionSpell::CMyTargeting::SubjectAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	CTargetDamagePreventionSpell* pAbility = (CTargetDamagePreventionSpell*)GetAbility();

	// Player can be targeted if there are valid prevention sources

	Characteristic characteristic = GetCharacteristic();
	CPlayer* pController = pAbility->GetController();

	for (int i = 0; i < pAbility->GetGame()->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pAbility->GetGame()->GetPlayer(i);

		// Trick if preventing from controller's own sources
		if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
			((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
		{
			if (!bIncludeTricks)
				continue;
		}

		CZone* pZone = pAbility->GetGame()->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard = pZone->GetAt(k);

			// Check to see if this card has the source color

			if (!(pCard->GetSourceColor() & pAbility->m_SourceColor).Any())
				continue;

			// See if this card is a (preventable) damage source

			if (bIncludeTricks)
				return TRUE;

			if (pCard->GetCardType().IsCreature())
			{
				CCreatureCard* pCreature = (CCreatureCard*)pCard;
				if (pCreature->IsAttacking() || pCreature->CanAttackInGeneral())
					return TRUE;
			}

			for (int j = 0; j < pCard->GetAbilityCount(); ++j)
				if ((pCard->GetAbility(j)->GetAbilityTag() & AbilityTag::DamageSource).Any())
					return TRUE;
		}
	}

	const CStack& stack = pAbility->GetGame()->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & pAbility->m_SourceColor).Any())
		{
			if (bIncludeTricks)
				return TRUE;

			CPlayer* pPlayer = pAction2->GetController();

			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				continue;

			if ((pAction2->GetStackAbility()->GetAbilityTag() & AbilityTag::DamageSource).Any())
				return TRUE;
		}
	}

	return FALSE;
}

counted_ptr<CAbilityAction> CTargetDamagePreventionSpell::CreateAction() const
{
	counted_ptr<CTargetDamagePreventionSpellAction> cpAction = ::CreateObject<CTargetDamagePreventionSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CTargetDamagePreventionSpell*>(this));

	cpAction->SetScore(ActionScore::Spell);

	return cpAction.GetPointer();
}

CActionContainer* CTargetDamagePreventionSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;
	ATLASSERT(pActionContainer1);

	CString strActionName1;
	CPlayer* pController = GetController();

	Characteristic characteristic = GetTargeting()->GetCharacteristic();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		const CTargetDamagePreventionSpellAction* pAction = (const CTargetDamagePreventionSpellAction*)pActionContainer->GetAt(l).GetPointer();

		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			int nPreventValue = targetGroup.GetValue(pCard).nValue1;

			if (bSetNames)
			{
				if (nPreventValue == PreventionType::PreventNextDamage)
					strActionName1 = _T(" and prevents next damage this turn");
				else
					if (nPreventValue == PreventionType::PreventAllDamage)
						strActionName1 = _T(" and prevents all damage this turn");
				else
					if (nPreventValue == PreventionType::ReverseNextDamage)
						strActionName1 = _T(" and prevents next damage and gains that much life this turn");
				else
					strActionName1.Format(_T(" and prevents %d damage this turn"),
						nPreventValue);

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
				nBonusScore += (nPreventValue < 0) ? 5 : nPreventValue;
		}

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			int nPreventValue = targetGroup.GetValue(pPlayer).nValue1;

			if (bSetNames)
			{
				if (nPreventValue == PreventionType::PreventNextDamage)
					strActionName1 = _T(" and prevents next damage this turn");
				else
					if (nPreventValue == PreventionType::PreventAllDamage)
						strActionName1 = _T(" and prevents all damage this turn");
				else
					if (nPreventValue == PreventionType::ReverseNextDamage)
						strActionName1 = _T(" and prevents next damage and gains that much life this turn");
				else
					strActionName1.Format(_T(" and prevents %d damage this turn"),
						nPreventValue);

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
				nBonusScore += (nPreventValue < 0) ? 5 : nPreventValue;
		}

		if (m_SourceColor == SourceColor::_AllSources)
		{
			BOOL bTrick = pAction->IsTrick();
			if (!bTrick)
			{
				bTrick = TRUE;
				for (int i = 0; i < m_pGame->GetPlayerCount() && bTrick; ++i)
				{
					CPlayer* pPlayer = m_pGame->GetPlayer(i);
					if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
						((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
						continue;

					CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
					for (int k = 0; k < pZone->GetSize() && bTrick; ++k)
					{
						CCard* pCard = pZone->GetAt(k);

						// A damage source?

						if (pCard->GetCardType().IsCreature())
						{
							CCreatureCard* pCreature = (CCreatureCard*)pCard;
							if (pCreature->IsAttacking() || pCreature->CanAttackInGeneral())
							{
								bTrick = FALSE;
								break;
							}
						}

						for (int j = 0; j < pCard->GetAbilityCount(); ++j)
							if ((pCard->GetAbility(j)->GetAbilityTag() & AbilityTag::DamageSource).Any())
							{
								bTrick = FALSE;
								break;
							}
					}
				}

				if (bTrick)
				{
					const CStack& stack = m_pGame->GetStack();
					for (int i = 0; i < stack.GetStackSize(); ++i)
					{
						const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();

						CPlayer* pPlayer = pAction2->GetController();

						// Trick if preventing from player's own sources

						if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
							((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
							continue;

						// A damage source?

						if ((pAction2->GetStackAbility()->GetAbilityTag() & AbilityTag::DamageSource).Any())
						{
							bTrick = FALSE;
							break;
						}
					}
				}
			}

			if (bTrick)
			{
				if (!bIncludeTricks)
					continue;			// Not copying pAction from pActionContainer to pActionContainer1
			}

			counted_ptr<CTargetDamagePreventionSpellAction> cpAction1 =
				(CTargetDamagePreventionSpellAction*)(CreateAction().GetPointer());
			cpAction1->Copy(pAction);
			cpAction1->SetTrick(bTrick);

			if (!bTrick)
				cpAction1->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));

			pActionContainer1->Add(cpAction1.GetPointer());

			if (bSetNames)
				cpAction1->AppendToActionName(strActionName);
		}
		else
		{
			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			{
				CPlayer* pPlayer = m_pGame->GetPlayer(i);
				CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
				for (int k = 0; k < pZone->GetSize(); ++k)
				{
					CCard* pCard = pZone->GetAt(k);
					if ((pCard->GetSourceColor() & m_SourceColor).Any())
					{
						BOOL bTrick = pAction->IsTrick();
						if (!bTrick)
						{
							// Trick if preventing from player's own sources
							if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
								((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
							{
								if (!bIncludeTricks)
									continue;			// Not copying pAction from pActionContainer to pActionContainer1

								bTrick = TRUE;
							}
							else
							{
								// A damage source?

								bool bDamageSource = false;
								if (pCard->GetCardType().IsCreature())
								{
									CCreatureCard* pCreature = (CCreatureCard*)pCard;
									if (pCreature->IsAttacking() || pCreature->CanAttackInGeneral())
										bDamageSource = true;
								}

								if (!bDamageSource)
									for (int j = 0; j < pCard->GetAbilityCount(); ++j)
										if ((pCard->GetAbility(j)->GetAbilityTag() & AbilityTag::DamageSource).Any())
										{
											bDamageSource = true;
											break;
										}

								if (!bDamageSource)
								{
									if (!bIncludeTricks)
										continue;

									bTrick = TRUE;
								}
							}
						}

						counted_ptr<CTargetDamagePreventionSpellAction> cpAction1 =
							(CTargetDamagePreventionSpellAction*)(CreateAction().GetPointer());
						cpAction1->Copy(pAction);
						cpAction1->SetSourceCard(pCard);
						cpAction1->SetTrick(bTrick);

						if (!bTrick)
							cpAction1->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));

						pActionContainer1->Add(cpAction1.GetPointer());

						if (bSetNames)
						{
							cpAction1->AppendToActionName(strActionName);

							CString strActionName2;
							strActionName2.Format(_T(" from %s"), pCard->GetCardName());
							cpAction1->AppendToActionName(strActionName2);
						}
					}
				}
			}

			const CStack& stack = m_pGame->GetStack();
			for (int i = 0; i < stack.GetStackSize(); ++i)
			{
				const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
				if ((pAction2->GetStackAbility()->GetSourceColor() & m_SourceColor).Any())
				{
					CCard* pCard = pAction2->GetStackAbility()->GetCard();
					CPlayer* pPlayer = pAction2->GetController();

					// Trick if preventing from player's own sources
					BOOL bTrick = pAction->IsTrick();

					if (!bTrick)
					{
						if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
							((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
						{
							if (!bIncludeTricks)
								continue;			// Not copying pAction from pActionContainer to pActionContainer1

							bTrick = TRUE;
						}
						else
						{
							// A damage source?

							if (!(pAction2->GetStackAbility()->GetAbilityTag() & AbilityTag::DamageSource).Any())
							{
								if (!bIncludeTricks)
									continue;

								bTrick = TRUE;
							}
						}
					}

					counted_ptr<CTargetDamagePreventionSpellAction> cpAction1 =
						(CTargetDamagePreventionSpellAction*)(CreateAction().GetPointer());
					cpAction1->Copy(pAction);
					cpAction1->SetSourceCard(pCard);
					cpAction1->SetTrick(bTrick);

					if (!bTrick)
						cpAction1->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));

					pActionContainer1->Add(cpAction1.GetPointer());

					if (bSetNames)
					{
						cpAction1->AppendToActionName(strActionName);

						CString strActionName2;
						strActionName2.Format(_T(" from %s"), pCard->GetCardName());
						cpAction1->AppendToActionName(strActionName2);
					}
				}
			}
		}
	}

	delete pActionContainer;

	return pActionContainer1;
}

void CTargetDamagePreventionSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	const CTargetDamagePreventionSpellAction* pAction1 = (const CTargetDamagePreventionSpellAction*)pAction;

	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	Life nPreventionValue(value.nValue1);
	ATLASSERT(nPreventionValue == Life(PreventionType::PreventNextDamage)
		|| nPreventionValue == Life(PreventionType::PreventAllDamage)
		|| nPreventionValue == Life(PreventionType::ReverseNextDamage)
		|| nPreventionValue >= Life(0));
	pCreature->GetDamagePrevention().AddDamagePreventionEntry(CDamagePreventionEntry(nPreventionValue),
		pAction1->GetSourceCard());
}

void CTargetDamagePreventionSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	const CTargetDamagePreventionSpellAction* pAction1 = (const CTargetDamagePreventionSpellAction*)pAction;

	Life nPreventionValue(value.nValue1);
	ATLASSERT(nPreventionValue == Life(PreventionType::PreventNextDamage)
		|| nPreventionValue == Life(PreventionType::PreventAllDamage)
		|| nPreventionValue == Life(PreventionType::ReverseNextDamage)
		|| nPreventionValue >= Life(0));
	pPlayer->GetDamagePrevention().AddDamagePreventionEntry(CDamagePreventionEntry(nPreventionValue),
		pAction1->GetSourceCard());
}

/*
BOOL CTargetDamagePreventionSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CTargetSpell::ResolveImpl(pAction))
		return FALSE;

	const CTargetDamagePreventionSpellAction* pAction1 = (const CTargetDamagePreventionSpellAction*)pAction;

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	if (!m_SourceColor.Any())
		CSubjectGatherer::ResolveDamagePrevention(targetGroup);
	else
		CSubjectGatherer::ResolveDamageSourcePrevention(targetGroup, const_cast<CCard*>(pAction1->GetSourceCard()));

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Ashen Powder 2BB
	Sorcery
	Put target creature card from an opponent’s graveyard onto the battlefield under your control.

	Threaten 2R
	Sorcery
	Untap target creature and gain control of it until end of turn. That creature gains haste until
	end of turn. (It can attack and Tap this turn.)
*/
CTargetMoveCardSpell::CTargetMoveCardSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   ZoneId fromZoneId, ZoneId toZoneId, BOOL bToOwner, MoveType moveType,
							   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
	, m_bToOwner(bToOwner)
	, m_ToZoneId(toZoneId)
	, m_ReturnNodeId(NodeId::Null)
	, m_MoveType(moveType)
	, m_Placement(CardPlacement::Top)
{
	AddAbilityTag(AbilityTag(fromZoneId, toZoneId));

	GetTargeting()->SetSubjectZoneId(fromZoneId);
}

BOOL CTargetMoveCardSpell::CMyTargeting::SubjectAllowed(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (GetAbility()->GetGame()->HasTarget(pCard))
		return TRUE;

	CTargetMoveCardSpell* pAbility = (CTargetMoveCardSpell*)GetAbility();

	CPlayer* pController = pAbility->GetController();
	CZone* pMoveFromZone = pCard->GetZone();


	CZone* pMoveToZone = NULL;
	if (pAbility->m_bToOwner)
		pMoveToZone = pCard->GetOwner()->GetZoneById(pAbility->m_ToZoneId);
	else
		pMoveToZone = pController->GetZoneById(pAbility->m_ToZoneId);

	if (CZone::IsBadCardMovement(pController, pMoveFromZone, pMoveToZone))
	{
		bTrick = TRUE;

		if (!bIncludeTricks)
			return FALSE;
	}

	return TRUE;
}

/*
BOOL CTargetMoveCardSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CTargetSpell::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (!bIncludeTricks)
	{
		CPlayer* pController = m_pCard->GetController();

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);

			CZone* pZone = pPlayer->GetZoneById(GetTargeting()->GetSubjectZoneId());
			for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
			{
				CCard* pCard = pZone->GetAt(k).GetPointer();
				BOOL bTrick;
				if (GetTargeting()->IsSubjectIncluded(pCard, bIncludeTricks, bTrick))
				{
					CZone* pMoveFromZone = pCard->GetZone();

					CZone* pMoveToZone = NULL;
					if (m_bToOwner)
						pMoveToZone = pCard->GetOwner()->GetZoneById(m_ToZoneId);
					else
						pMoveToZone = pController->GetZoneById(m_ToZoneId);

					if (m_pGame->GetStack().HasTarget(pCard))
						return TRUE;

					if (pMoveFromZone->GetPlayer() == pController)		// From controller's...
					{
						if (((pMoveFromZone->GetZoneId() == ZoneId::Hand) && (pMoveToZone->GetPlayer() == pController) && (pMoveToZone->GetZoneId() != ZoneId::Battlefield)) ||
							(pMoveFromZone->GetZoneId() == ZoneId::Battlefield) ||
							((pMoveFromZone->GetZoneId() == ZoneId::Graveyard) && (pMoveToZone->GetPlayer() != pController)) ||
							((pMoveFromZone->GetZoneId() == ZoneId::Library) && (pMoveToZone->GetPlayer() == pController) && (pMoveToZone->GetZoneId() == ZoneId::Graveyard)) ||
							((pMoveFromZone->GetZoneId() == ZoneId::Library) && (pMoveToZone->GetPlayer() != pController)))
						{
							continue;	// Trick
						}
					}
					else												// From opponent's...
					{
						if (((pMoveFromZone->GetZoneId() == ZoneId::Hand) && (pMoveToZone->GetPlayer() != pController) && (pMoveToZone->GetZoneId() == ZoneId::Battlefield)) ||
							((pMoveFromZone->GetZoneId() == ZoneId::Graveyard) && (pMoveToZone->GetPlayer() != pController)) ||
							((pMoveFromZone->GetZoneId() == ZoneId::Library) && (pMoveToZone->GetPlayer() != pController) && (pMoveToZone->GetZoneId() != ZoneId::Graveyard)))
						{
							continue;	// Trick
						}
					}

					return TRUE;
				}
			}
		}

		return FALSE;
	}

	return TRUE;
}
*/

CActionContainer* CTargetMoveCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCard* pCard = it->GetPointer();
			const CZone* pMoveFromZone = pCard->GetZone();

			CZone* pMoveToZone = NULL;
			if (m_bToOwner)
				pMoveToZone = pCard->GetOwner()->GetZoneById(m_ToZoneId);
			else
				pMoveToZone = pController->GetZoneById(m_ToZoneId);

			targetGroup.SetValue(pCard, ContextValue((int)pMoveFromZone, (int)pMoveToZone));

			if (bSetNames)
			{
				CString strActionName1;

				if (m_ToZoneId != ZoneId::Battlefield)
					strActionName1 = _T(" and moves ") + pCard->GetCardName();
				else
					strActionName1 = _T(" and gains control of ") + pCard->GetCardName();

				if (GetTargeting()->GetSubjectZoneId() != ZoneId::Battlefield)
					strActionName1 += _T(" in ") + pMoveFromZone->GetZoneName();

				if (m_ToZoneId != ZoneId::Battlefield)
					strActionName1 += _T(" to ") + m_ToZoneId.ToString();

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);
	}

	return pActionContainer;
}

/*
void CTargetMoveCardSpell::CMyTargeting::DeflectTargetToCard(CTargetSpellAction* pAction, CCard* pCard)
{
	CSubjectGroup& targetGroup = pAction->GetTargetGroup();

	CTargetMoveCardSpell* pAbility = (CTargetMoveCardSpell*)GetAbility();

	CZone* pMoveToZone;
	if (pAbility->m_bToOwner)
		pMoveToZone = pCard->GetOwner()->GetZoneById(pAbility->m_ToZoneId);
	else
		pMoveToZone = pAbility->m_pCard->GetController()->GetZoneById(pAbility->m_ToZoneId);

	CZone* pMoveFromZone = pCard->GetZone();

	targetGroup.RemoveAll();
	targetGroup.AddSubject(pCard);
	targetGroup.SetValue(pCard, ContextValue((int)pMoveToZone, (int)pMoveFromZone));
}
*/

void CTargetMoveCardSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CZone* pMoveFromZone = (CZone*)value.nValue1;	// From zone can be outside of in-play
	CZone* pMoveToZone = (CZone*)value.nValue2;
	CCard* pControlCard = pAction->GetOriginatingCard();

	if (CZone::IsSamePhysicalZone(pCard->GetZone(), pMoveFromZone))
	{
		if (m_ReturnNodeId.Any() && pCard->GetController() != pAction->GetController())
		{
			CGainControlModifier* pModifier = new CGainControlModifier(m_pGame,pControlCard,true);

			m_pGame->GetScheduler()->ScheduleTask(
				new CCardModifierTask(pCard, std::auto_ptr<CCardModifier>(pModifier)),
				m_ReturnNodeId,
				TurnNumberDelta(-1));
		}

		CPlayer* pPreviousController = pCard->GetController();

		if (pMoveFromZone->GetZoneId() == ZoneId::Battlefield && pMoveToZone->GetZoneId() == ZoneId::Battlefield)
		{
			CGainControlModifier* pModifier = new CGainControlModifier(m_pGame, pControlCard);
			pModifier->ApplyTo(pCard);
		}
		else
			if (pMoveFromZone != pMoveToZone)
				pCard->Move(pMoveToZone, pAction->GetController(), m_MoveType, m_Placement);
		
		m_CardControllerModifier.ApplyTo(pPreviousController);
	}
}

/*
BOOL CTargetMoveCardSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CTargetSpell::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	CSubjectGatherer::ResolveMoveCard(pAction1->GetTargetGroup(), pAction1->GetController());

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
CTargetControlSpell::CTargetControlSpell(CCard* pCard, AbilityType abilityType,
							 LPCTSTR strManaCost,
							 CardComparer* pComparer,
							 ZoneId fromZoneId)
	: CTargetMoveCardSpell(pCard, abilityType, strManaCost, pComparer,
					 fromZoneId,
					 ZoneId::Battlefield, FALSE)	// These are not used
{
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

BOOL CTargetControlSpell::ResolveImpl(const CAbilityAction* pAction)	// Ref: CControlEnchant
{
	if (!CTargetSpell::ResolveImpl(pAction))		// Base class' ResolveImpl() skipped
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	CPlayer* pCaster = pAction1->GetController();

	CZone* pZone = pCaster->GetZoneById(ZoneId::Battlefield);
	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
		it != targetGroup.CardSubjectEnd(); ++it)
	{
		CCard* pCard = const_cast<CCard*>(*it);

		if (pCard->GetZoneId() != ZoneId::Battlefield)
			continue;

		pCard->Move(pZone, pCaster);		// Important to move to a different zone because this will also reset the combat status of a creature

		//	7/24/2002	Already doing it in CZone
		//if (pCard->GetZone() == pZone)	// Move succeeded
	//		pCard->SetController(pController);
		}

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Dregs of Sorrow 4B
	Sorcery
	Destroy X target nonblack creatures. Draw X cards.
*/
CTargetMoveCardSpell2::CTargetMoveCardSpell2(CCard* pCard, AbilityType abilityType,
											 LPCTSTR strManaCost,
											 CardComparer* pComparer,
											 ZoneId fromZoneId,
											 ZoneId toZoneId, BOOL bToOwner, MoveType moveType)
	: CTargetMoveCardSpell(pCard, abilityType, strManaCost, pComparer, fromZoneId, toZoneId, bToOwner, moveType)
{
}

BOOL CTargetMoveCardSpell2::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	if (!GetController()->GetZoneById(ZoneId::Library)->GetSize())
		return FALSE;

	return TRUE;
}

CActionContainer* CTargetMoveCardSpell2::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();

		int nDrawCount = pAction->GetTargetGroup().GetCardSubjectCount();
		if (pController->GetZoneById(ZoneId::Library)->GetSize() < nDrawCount)
			pAction->SetTrick();

		if (bSetNames)
		{
			CString strActionName;
			if (nDrawCount == 1)
				strActionName = _T(" to draw 1 card");
			else
				strActionName.Format(_T(" to draw %d cards"), nDrawCount);
			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

void CTargetMoveCardSpell2::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CPlayer* pCaster = pAction->GetController();

	if (!CDrawCardCommon::ResolveDrawCards(
								const_cast<CPlayer*>(pCaster),
								pCaster,
								1))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}
}

/*
BOOL CTargetMoveCardSpell2::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;

	CPlayer* pCaster = pAction1->GetController();

	if (!CDrawCardCommon::ResolveDrawCards(
								const_cast<CPlayer*>(pCaster),
								pCaster,
								pAction1->GetTargetGroup().GetCardSubjectCount()))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Exile 2W
	Instant
	Exile target nonwhite attacking creature. You gain life equal to its toughness.
*/
CTargetMoveCardSpell3::CTargetMoveCardSpell3(CCard* pCard, AbilityType abilityType,
											 LPCTSTR strManaCost,
											 CardComparer* pComparer,
											 ZoneId fromZoneId,
											 ZoneId toZoneId, BOOL bToOwner, MoveType moveType,
											 BOOL bGainPower, BOOL bGainToughness)
	: CTargetMoveCardSpell(pCard, abilityType, strManaCost, pComparer, fromZoneId, toZoneId, bToOwner, moveType)
	, m_bGainPower(bGainPower)
	, m_bGainToughness(bGainToughness)
	, m_LifeModifier(Life(0), pCard, PreventableType::NotPreventable)
	, m_bCreatureControllerGainLife(FALSE)
{
}

void CTargetMoveCardSpell3::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	Life nTotalToughness(0);
	Power nTotalPower(0);

	if ((pCard->GetCardType() & CardType::Creature).Any())
	{
		if (m_bGainToughness)
			nTotalToughness += ((CCreatureCard*)pCard)->GetToughness();

		if (m_bGainPower)
			nTotalPower += ((CCreatureCard*)pCard)->GetPower();
	}

	CPlayer* pPlayer = m_bCreatureControllerGainLife ? pCard->GetController() : pAction->GetController();

	__super::ResolveCard(pAction, pCard, value);

	if (nTotalToughness + Life(GET_INTEGER(nTotalPower)) > Life(0))
	{
		m_LifeModifier.SetLifeDelta(nTotalToughness + Life(GET_INTEGER(nTotalPower)));
		m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
		m_LifeModifier.ApplyTo(pPlayer);
	}
}

/*
BOOL CTargetMoveCardSpell3::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	CPlayer* pCaster = pAction1->GetController();

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	ATLASSERT(targetGroup.GetCardSubjectCount());

	Life nTotalToughness(0);
	Power nTotalPower(0);

	for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
		it != targetGroup.CardSubjectEnd(); ++it)
	{
		CCard* pCard = const_cast<CCard*>(*it);

		if (pCard->GetZoneId() != ZoneId::Battlefield)
			continue;

		if ((pCard->GetCardType() & CardType::Creature).Any())
		{
			if (m_bGainToughness)
				nTotalToughness += ((CCreatureCard*)pCard)->GetPermanentLife();

			if (m_bGainPower)
				nTotalPower += ((CCreatureCard*)pCard)->GetPower();
		}
	}

	CLifeModifier(nTotalToughness + Life(GET_INTEGER(nTotalPower)), m_pCard, PreventableType::NotPreventable).ApplyTo(pCaster);

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Polymorph 3U
	Sorcery
	Destroy target creature. It can't be regenerated. Its controller reveals cards from the top of his or her 
	library until he or she reveals a creature card. The player puts that card onto the battlefield, then 
	shuffles all other cards revealed this way into his or her library.
*/
CTargetMoveCardSpell4::CTargetMoveCardSpell4(CCard* pCard, AbilityType abilityType,
											 LPCTSTR strManaCost,
											 CardComparer* pComparer,
											 ZoneId fromZoneId,
											 ZoneId toZoneId, BOOL bToOwner, MoveType moveType,
											 CardComparer* pRevealComparer)
	: CTargetMoveCardSpell(pCard, abilityType, strManaCost, pComparer, fromZoneId, toZoneId, bToOwner, moveType)
{
	m_RevealCardFilter.AddComparer(pRevealComparer);
}

void CTargetMoveCardSpell4::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	CPlayer* pTargetedController = pCard->GetController();	// Get the controller first before the move

	__super::ResolveCard(pAction, pCard, value);

	if (m_pGame->IsThinking())
	{
		pTargetedController->AddInPlayBonus(pTargetedController->GetDeck().GetReferenceScore());	// Reviewed: 5/19/06
		return;
	}

	CPlayer* pCaster = pAction->GetController();

	CZone* pLibrary = pTargetedController->GetZoneById(ZoneId::Library);

	if (!pLibrary->GetSize())
	{
		return;
	}

	for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pLibrary->GetAt(i);

		CString strMessage;
		strMessage.Format(_T("%s reveals %s"),
			pTargetedController->GetPlayerName(), pCard->GetCardName());
		m_pGame->Message(
			strMessage,
			pTargetedController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High);

		if (m_RevealCardFilter.IsCardIncluded(pCard))
		{
			pCard->Move(pTargetedController->GetZoneById(ZoneId::Battlefield), pCaster, MoveType::Others);
			break;
		}
	}

	pLibrary->Shuffle();
}

/*
BOOL CTargetMoveCardSpell4::ResolveImpl(const CAbilityAction* pAction)
{
	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();
	ATLASSERT(targetGroup.GetCardSubjectCount() == 1);
	CPlayer* pTargetedController = targetGroup.GetFirstCardSubject()->GetController();	// Get the controller first before the move

	if (!__super::ResolveImpl(pAction))
		return FALSE;

	if (m_pGame->IsThinking())
	{
		pTargetedController->AddInPlayBonus(pTargetedController->GetDeckReferenceScore());	// Reviewed: 5/19/06
		return TRUE;
	}

	CPlayer* pCaster = pAction1->GetController();

	// Ref: Polymorph: Destroy targetGroup creature. It can't be regenerated.
	//                 Its controller reveals cards from the top of his or her library until a creature card is revealed.
	//                 The player puts that card into play and shuffles all other cards revealed this way into his or her library.

	CZone* pLibrary = pTargetedController->GetZoneById(ZoneId::Library);

	if (!pLibrary->GetSize())
	{
		return TRUE;
	}

	for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
	{
		CCard* pCard = pLibrary->GetAt(i).GetPointer();

		CString strMessage;
		strMessage.Format(_T("%s reveals %s"),
			pTargetedController->GetPlayerName(), pCard->GetCardName());
		m_pGame->Message(
			strMessage,
			pTargetedController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High);

		if (m_RevealCardFilter.IsCardIncluded(pCard))
		{
			pCard->Move(pTargetedController->GetZoneById(ZoneId::Battlefield), pCaster);
			break;
		}
	}

	pLibrary->Shuffle();

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Twiddle U
	Instant
	You may tap or untap target artifact, creature, or land.
	
	Elder Druid 3G (2/2)
	Creature — Elf Cleric Druid
	3G, Tap: You may tap or untap target artifact, creature, or land.
*/
CTargetTapUntapCardSpell::CTargetTapUntapCardSpell(CCard* pCard, AbilityType abilityType,
												   LPCTSTR strManaCost,
												   BOOL bTap,
												   BOOL bUntap,
												   CardComparer* pComparer)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, new CMyTargeting)
	, m_bTap(bTap)
	, m_bUntap(bUntap)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CTargetTapUntapCardSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag::OrientationChange);

	if (bTap)
	{
		if (!bUntap)
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
	}

	if (bUntap)
	{
		if (!bTap)
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	}
}

BOOL CTargetTapUntapCardSpell::CMyTargeting::SubjectAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	CTargetTapUntapCardSpell* pAbility = (CTargetTapUntapCardSpell*)GetAbility();

	if (pAbility->m_bUntap && pAbility->m_bTap)
	{
		if (pCard == pAbility->GetCard() && pAbility->GetCost().HasTapThisCardCost(const_cast<CCard*>(pCard)))
		{
			bTrick = TRUE;
			if (!bIncludeTricks)
				return FALSE;
		}

		return TRUE;
	}

	if (pAbility->m_bUntap && pCard->GetOrientation()->IsTapped())
	{
		if (pCard->GetController() != pAbility->GetController())
		{
			bTrick = TRUE;
			if (!bIncludeTricks)
				return FALSE;
		}

		return TRUE;
	}

	if (pAbility->m_bTap && !pCard->GetOrientation()->IsTapped())
	{
		if (pCard->GetController() == pAbility->GetController())
		{
			bTrick = TRUE;
			if (!bIncludeTricks)
				return FALSE;
		}

		return TRUE;
	}

	bTrick = TRUE;

	return bIncludeTricks;
}

CActionContainer* CTargetTapUntapCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		CCountedCardContainer cardContainer;

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
			cardContainer.AddCard(const_cast<CCard*>(it->GetPointer()), CardPlacement::Top);

		for (int i = cardContainer.GetSize() - 1; i >= 0; --i)
		{
			CCard* pCard = cardContainer.GetAt(i);

			CString strActionName1;

			if (m_bUntap && m_bTap)
			{
				targetGroup.SetValue(pCard, ContextValue(2));	// 1->Untap, 0->Tap, 2->Select at resolution
			}
			else
			if (m_bUntap)
			{
				if (bSetNames)
					strActionName1 = _T(" and untaps ") + pCard->GetCardName();
				targetGroup.SetValue(pCard, ContextValue(1));	// 1->Untap, 0->Tap, 2->Select at resolution
			}
			else
			if (m_bTap)
			{
				if (bSetNames)
					strActionName1 = _T(" and taps ") + pCard->GetCardName();
				targetGroup.SetValue(pCard, ContextValue(0));	// 1->Untap, 0->Tap, 2->Select at resolution
			}

			if (bSetNames)
			{
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);
	}

	return pActionContainer;
}

void CTargetTapUntapCardSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	switch(value.nValue1)
	{
	case 0: pCard->GetOrientation()->Tap(); break;
	case 1: pCard->GetOrientation()->Untap(); break;
	case 2:
		ATLASSERT(m_bTap && m_bUntap);

		std::vector<SelectionEntry> entries;

		SelectionEntry entry1;
		entry1.dwContext = 0; // 0 -> tap
		if (pCard->GetOrientation()->IsTapped())
		{
		entry1.strText.Format(_T("Leaves %s tapped"), pCard->GetCardName());
		}
		else
		{
		entry1.strText.Format(_T("taps %s"), pCard->GetCardName());
		}
		entry1.cpAssociatedCard = pCard;
		//entry1.bTrick = pCard->GetOrientation()->IsTapped();
		entries.push_back(entry1);

		SelectionEntry entry2;
		entry2.dwContext = 1; // 1 -> untap
		if (!pCard->GetOrientation()->IsTapped())
		{
		entry2.strText.Format(_T("Leaves %s untapped"), pCard->GetCardName());
		}
		else
		{
		entry2.strText.Format(_T("untaps %s"), pCard->GetCardName());
		}
		entry2.cpAssociatedCard = pCard;
		//entry2.bTrick = !pCard->GetOrientation()->IsTapped();
		entries.push_back(entry2);

		m_SelectionSupport.AddSelectionRequest(entries, 1, 1, GetCard(), pAction->GetController());

		break;
	}
}

void CTargetTapUntapCardSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
											   DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			switch(it->dwContext)
			{
			case 0:
				if (!it->cpAssociatedCard->GetOrientation()->IsTapped())
					it->cpAssociatedCard->GetOrientation()->Tap();
				break;
			case 1:
				if (it->cpAssociatedCard->GetOrientation()->IsTapped())
					it->cpAssociatedCard->GetOrientation()->Untap();
				break;
			}
		}
}

//____________________________________________________________________________
//
/*
	This class is used for spells which are targeting a player and in resolution
	affects a certain type of cards controlled by that player.
Ref:
	Mana Short 2U
	Instant
	Tap all lands target player controls and empty his or her mana pool.
*/
CTargetPlayerCardsSpell::CTargetPlayerCardsSpell(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   ZoneId fromZone,
											   const CCardFilter* pCardFilter,
											   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_pPlayerCardFilter(pCardFilter)
	, m_FromZone(fromZone)
	, m_bAllPlayers(FALSE)
{
}

void CTargetPlayerCardsSpell::GetCards(CPlayer* pPlayer, CCountedCardContainer& cards) const
{
	if (!m_bAllPlayers)
	{
		CZone* pZone = pPlayer->GetZoneById(m_FromZone);

		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);

			if (!m_pPlayerCardFilter->IsCardIncluded(pCard))
				continue;

			cards.AddCard(pCard, CardPlacement::Top);
		}
	}
	else
	{
		int nPlayerCount = m_pGame->GetPlayerCount();
		for (int i = 0; i < nPlayerCount; ++i)
		{
			CPlayer* pPlayer2 = m_pGame->GetPlayer(i);
			CZone* pZone = pPlayer2->GetZoneById(m_FromZone);

			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k);

				if (!m_pPlayerCardFilter->IsCardIncluded(pCard))
					continue;

				cards.AddCard(pCard, CardPlacement::Top);
			}
		}
	}
}

void CTargetPlayerCardsSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	CCountedCardContainer cards;
	GetCards(pPlayer,  cards);

	ResolvePlayerCards(pAction, pPlayer, cards, value);
}

void CTargetPlayerCardsSpell::ResolvePlayerCards(const CTargetSpellAction* pAction, CPlayer* pPlayer, const CCountedCardContainer& cards, const ContextValue& value)
{
	for (int k = 0; k < cards.GetSize(); ++k)
		m_CardModifiers.ApplyTo(cards.GetAt(k));
}

//____________________________________________________________________________
//
/*
Ref:
	Ancestral Recall U
	Instant
	Target player draws three cards.
*/
CTargetDrawCardSpell::CTargetDrawCardSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   int nDrawCount)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_nDiscardCount(0)
	, m_bFromDrawsOnly(FALSE)
	, m_DiscardToZone(ZoneId::Null)
	, m_bDiscardToTop(FALSE)
	, m_DiscardMoveType(MoveType::Discard)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	ATLASSERT(nDrawCount >= 0);

	SetActionValue(ContextValue(nDrawCount, 0));
	SetValidExtraActionValueVector(ContextValue(1));

	UpdateTargetCharacteristic();
}

void CTargetDrawCardSpell::SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
									  ZoneId discardToZone, BOOL bDiscardToTop)
{
	m_nDiscardCount = nDiscardCount;
	m_bFromDrawsOnly = bFromDrawsOnly;
	m_DiscardToZone = discardToZone;
	m_bDiscardToTop = bDiscardToTop;
	m_DiscardMoveType = discardMoveType;

	UpdateTargetCharacteristic();
}

void CTargetDrawCardSpell::UpdateTargetCharacteristic()
{
	if (m_nDiscardCount > GetActionValue().nValue1)
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	else
		if (m_nDiscardCount)
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
		else
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
}

CActionContainer* CTargetDrawCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);

			int nDrawCount = targetGroup.GetValue(pPlayer).nValue1;

			if (bSetNames)
			{
				if (nDrawCount == 1)
					strActionName1 = _T(" to draw 1 card");
				else
					strActionName1.Format(_T(" to draw %d cards"),
						nDrawCount);

				if (m_nDiscardCount)
				{
					CString strTemp;
					strTemp.Format(_T(" to %s %d cards"),
						m_DiscardMoveType == MoveType::Discard ? _T("discard") : _T("move"),
						m_nDiscardCount);
					strActionName1 += strTemp;
				}

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
				nBonusScore += nDrawCount;
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetDrawCardSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	int nDrawCount = value.nValue1;
	ATLASSERT(nDrawCount >= 0);

	if (!CDrawCardCommon::ResolveDrawCards(pPlayer,
										   pPlayer,
										   nDrawCount,
										   m_DiscardMoveType,
										   m_nDiscardCount,
										   m_bFromDrawsOnly,
										   m_DiscardToZone,
										   TRUE, // to owner's zone
										   m_bDiscardToTop ? CardPlacement::Top : CardPlacement::Bottom))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}
}

/*
// Reviewed and added support for discards 8/15/2002
BOOL CTargetDrawCardSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CTargetSpell::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
		it != targetGroup.PlayerSubjectEnd(); ++it)
	{
		CPlayer* pTargetedPlayer = const_cast<CPlayer*>(*it);

		int nDrawCount = targetGroup.GetValue(pTargetedPlayer).nValue1;
		ATLASSERT(nDrawCount >= 0);

		if (!CDrawCardCommon::ResolveDrawCards(const_cast<CPlayer*>(pTargetedPlayer),
											   const_cast<CPlayer*>(pAction1->GetController()),
											   nDrawCount,
											   m_nDiscardCount,
											   m_bFromDrawsOnly,
											   m_DiscardToZone,
											   m_bDiscardToTop ? CardPlacement::Top : CardPlacement::Bottom))
		{
			LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
			return FALSE;
		}
	}

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
   Mind Twist XB
   Sorcery
   Target player discards X cards at random.
*/
CTargetPlayerDiscardCardSpell::CTargetPlayerDiscardCardSpell(CCard* pCard, AbilityType abilityType,
															 LPCTSTR strManaCost,
															 int nDiscardCount,
															 MoveType discardMoveType,
															 ZoneId toZoneId,
															 BOOL bToOwnersZone,
															 BOOL bTargetedPlayerChooses,
															 const CCardFilter* pCardFilter)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_pCardFilter(pCardFilter)
	, m_bTargetedPlayerChooses(bTargetedPlayerChooses)
	, m_bAtRandom(FALSE)
	, m_bShowHandBeforeDiscards(FALSE)
	, m_ToZoneId(toZoneId)
	, m_bToOwnersZone(bToOwnersZone)
	, m_bHasSecondaryAction(FALSE)
	, m_bTargetedPlayerChooses2(FALSE)
	, m_bShowHandBeforeDiscards2(FALSE)
	, m_bAtRandom2(FALSE)
	, m_ToZoneId2(ZoneId::Null)
	, m_bToOwnersZone2(FALSE)
	, m_nDrawCount(0)
	, m_Placement(CardPlacement::Top)
	, m_Placement2(CardPlacement::Top)
	, m_bFromPrimaryDiscards(FALSE)
	, m_DiscardMoveType(discardMoveType)
	, m_DiscardMoveType2(MoveType::Discard)
	, m_bDiscarderOrder(TRUE)
	, m_bControllerDraw(false)
{
	if (nDiscardCount)
		AddAbilityTag(AbilityTag(ZoneId::Hand, toZoneId));

	SetActionValue(ContextValue(nDiscardCount));					// Note: Do not use SetExtraManaCost() when nDiscardCount is SpecialNumber::Any
	SetValidExtraActionValueVector(ContextValue(1));

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CTargetPlayerDiscardCardSpell::SetSecondaryAction(int nDiscardCount,			// 0 - Reveal hand only, SpecialNumber::Any - Discard all matching the filter, X - Discard this number of cards
													   MoveType discardMoveType,
													   ZoneId toZoneId,
													   BOOL bToOwnersZone,
													   BOOL bTargetedPlayerChooses,
													   CardComparer* pComparer,
													   BOOL bShowHandBeforeDiscards,
													   BOOL bAtRandom,
													   CardPlacement placement,
													   BOOL bFromPrimaryDiscards)
{
	m_bHasSecondaryAction = TRUE;

	m_bTargetedPlayerChooses2 = bTargetedPlayerChooses;
	m_bShowHandBeforeDiscards2 = bShowHandBeforeDiscards;
	m_bAtRandom2 = bAtRandom;
	m_ToZoneId2 = toZoneId;
	m_bToOwnersZone2 = bToOwnersZone;

	SetActionValue(ContextValue(GetActionValue().nValue1, nDiscardCount));			// Value 2 is fixed

	m_SecondaryCardFilter.AddComparer(pComparer);
	m_Placement2 = placement;
	m_bFromPrimaryDiscards = bFromPrimaryDiscards;
	m_DiscardMoveType2 = discardMoveType;

	if (m_bFromPrimaryDiscards)
		m_Placement = CardPlacement::NotApplicable;	// do not move cards
}

CActionContainer* CTargetPlayerDiscardCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);

			int nDiscardCount = targetGroup.GetValue(pPlayer).nValue1;

			if (bSetNames)
			{
				if (nDiscardCount != 0)
				{
					CString strVerb;
					if (m_Placement != CardPlacement::NotApplicable)
						strVerb = _T("discard");
					else
						strVerb = _T("select");

					if (nDiscardCount == 1)
						strActionName1.Format(_T(" to %s 1 card"), strVerb);
					else
						if (!SpecialNumber::IsSpecialNumber(nDiscardCount))
							strActionName1.Format(_T(" to %s %d cards"),
								strVerb, nDiscardCount);
						else
							strActionName1.Format(_T(" to %s cards"), strVerb);
				}
				else
					if (!m_bAtRandom)
						strActionName1 = _T(" to look at the player's hand");

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;

				if (m_bHasSecondaryAction)
				{
					if (GetActionValue().nValue2 != 0)
					{
						if (GetActionValue().nValue2 == 1)
							strActionName1 = _T(" to discard 1 card");
						else
							if (GetActionValue().nValue2 != SpecialNumber::Any)
								strActionName1.Format(_T(" to discard %d cards"),
									GetActionValue().nValue2);
							else
								strActionName1 = _T(" to discard cards");
					}
					else
						if (!m_bAtRandom2)
							strActionName1 = _T(" to look at the player's hand");

					if (!strActionName.IsEmpty())
						strActionName += _T(",") + strActionName1;
					else
						strActionName += strActionName1;
				}
			}

			if (!pAction->IsTrick())
			{
				if (nDiscardCount != SpecialNumber::Any)
					nBonusScore += nDiscardCount;
				else
					nBonusScore += pPlayer->GetZoneById(ZoneId::Hand)->GetSize() / 2;	// Pure guess
			}
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetPlayerDiscardCardSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();

	if (m_bAtRandom && m_bShowHandBeforeDiscards)
		CDiscardCardCommon::ResolveRevealHand(pPlayer, pCaster, pCaster);

	int nDiscardCount = value.nValue1;

	CCountedCardContainer discardedCards;

	if (!CDiscardCardCommon::ResolveDiscardCards(
			pPlayer,																// Discarder
			m_bAtRandom ? NULL : (m_bTargetedPlayerChooses ? pPlayer : pCaster),	// Picker
			pCaster,																		// Caster
			nDiscardCount,
			m_DiscardMoveType,
			ZoneId::Hand,
			m_bShowHandBeforeDiscards,
			m_pCardFilter,
			m_ToZoneId, m_bToOwnersZone, m_Placement, m_bDiscarderOrder, FALSE,
			&discardedCards))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return;
	}

	CCountedCardContainer discardedCards2;

	if (m_bHasSecondaryAction)
	{
		int nDiscardCount = GetActionValue().nValue2;

		if (m_bFromPrimaryDiscards)
		{
			if (!CDiscardCardCommon::ResolveDiscardCards(
					pPlayer,																// Discarder
					m_bAtRandom2 ? NULL : (m_bTargetedPlayerChooses2 ? pPlayer : pCaster),	// Picker
					pCaster,																		// Caster
					nDiscardCount,
					m_DiscardMoveType2,
					discardedCards,
					m_bShowHandBeforeDiscards2,
					&m_SecondaryCardFilter,
					m_ToZoneId2, m_bToOwnersZone2, m_Placement2, TRUE, FALSE,
					&discardedCards2))
			{
				LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
				return;
			}
		}
		else
		if (!CDiscardCardCommon::ResolveDiscardCards(
				pPlayer,																// Discarder
				m_bAtRandom2 ? NULL : (m_bTargetedPlayerChooses2 ? pPlayer : pCaster),	// Picker
				pCaster,																		// Caster
				nDiscardCount,
				m_DiscardMoveType2,
				ZoneId::Hand,
				m_bShowHandBeforeDiscards2,
				&m_SecondaryCardFilter,
				m_ToZoneId2, m_bToOwnersZone2, m_Placement2, TRUE, FALSE,
				&discardedCards2))
		{
			LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
			return;
		}
	}

	if (m_nDrawCount)
	{
		int nDrawCount;

		if (m_nDrawCount == SpecialNumber::Any)
			nDrawCount = discardedCards.GetSize() + discardedCards2.GetSize();
		else
			nDrawCount = m_nDrawCount;

		if (!CDrawCardCommon::ResolveDrawCards(m_bControllerDraw ? pCaster : pPlayer,
											m_bControllerDraw ? pCaster : pPlayer,
											nDrawCount))
		{
			LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
			return;
		}
	}
}

//____________________________________________________________________________
//
/*
Ref:
	Mind Sludge 4B
	Sorcery
	Target player discards a card for each Swamp you control.
*/
CTargetPlayerDiscardCardSpell3::CTargetPlayerDiscardCardSpell3(CCard* pCard, AbilityType abilityType,
															 LPCTSTR strManaCost,
															 MoveType discardMoveType,
															 ZoneId toZoneId,
															 BOOL bToOwnersZone,
															 BOOL bTargetedPlayerChooses,
															 const CCardFilter* pCardFilter,
															 ZoneId uSurveyZoneId)
	: CTargetPlayerDiscardCardSpell(pCard, abilityType, strManaCost,
								SpecialNumber::Any,
								discardMoveType,
								toZoneId,
								bToOwnersZone,
								bTargetedPlayerChooses,
								pCardFilter)
	, m_uSurveyZoneId(uSurveyZoneId)
{
}

void CTargetPlayerDiscardCardSpell3::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	int nDiscardCount = 0;

	CPlayer* pCaster = pAction->GetController();
	CZone* pSurveyZone = pCaster->GetZoneById(m_uSurveyZoneId);
	for (int i = 0; i < pSurveyZone->GetSize(); ++i)
		if (m_SurveyCardFilter.IsCardIncluded(pSurveyZone->GetAt(i)))
			++nDiscardCount;

	if (!nDiscardCount)
		return;

	ContextValue value2(value);
	value2.nValue1 = nDiscardCount;

	__super::ResolvePlayer(pAction, pPlayer, value2);
}

//____________________________________________________________________________
//
/*
Ref: 
	Persecute 2BB
	Sorcery
	Choose a color. Target player reveals his or her hand and discards all cards of that color.
*/
CTargetPlayerDiscardCardSpell2::CTargetPlayerDiscardCardSpell2(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost,
															   ZoneId toZoneId,
															   BOOL bToOwnersZone,
															   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_ToZoneId(toZoneId)
	, m_bToOwnersZone(bToOwnersZone)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTargetPlayerDiscardCardSpell2::OnSelectionDone))
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, toZoneId));

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CTargetPlayerDiscardCardSpell2::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);
			int nDiscardCount = targetGroup.GetValue(pPlayer).nValue1;

			if (bSetNames)
			{
				strActionName1 = _T(" to discard cards");

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
				nBonusScore += pPlayer->GetZoneById(ZoneId::Hand)->GetSize() / 2;	// Pure guess
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetPlayerDiscardCardSpell2::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();

	if (m_pGame->IsThinking())
	{
		CZone* pDiscardZone = pPlayer->GetZoneById(ZoneId::Hand);						// Cards in targeted player's zone

		CManaPool::Color prominentColor;

		if (pPlayer == m_pGame->GetThinkingPlayer())
		{
			// Assume worst case scenario
			std::map<CManaPool::Color, int> summary;
			pDiscardZone->GetCardColorSummary(summary, prominentColor, false);
		}
		else
		{
			prominentColor = pPlayer->GetDeck().GetProminentManaColorByCard();
		}

		switch(prominentColor.Get())
		{
		case CManaPool::Color::Blue:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("blue cards"))); break;
		case CManaPool::Color::Black:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("black cards"))); break;
		case CManaPool::Color::Green:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("green cards"))); break;
		case CManaPool::Color::Red:		DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("red cards"))); break;
		case CManaPool::Color::White:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("white cards"))); break;
		default:
			ATLASSERT(false);
			DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("blue cards")));
		}

		return;
	}

	if (pCaster->IsComputer())
	{
		CManaPool::Color prominentColor = pPlayer->GetDeck().GetProminentManaColorByCard();

		CString strMessage;
		strMessage.Format(_T("%s selects %s"),
			pCaster->GetPlayerName(), CManaPool::Color::ToString(prominentColor));
		m_pGame->Message(
			strMessage,
			m_pGame->GetComputerImage(),
			MessageImportance::High
			);

		switch(prominentColor.Get())
		{
		case CManaPool::Color::Blue:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("blue cards"))); break;
		case CManaPool::Color::Black:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("black cards"))); break;
		case CManaPool::Color::Green:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("green cards"))); break;
		case CManaPool::Color::Red:		DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("red cards"))); break;
		case CManaPool::Color::White:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("white cards"))); break;
		default:
			ATLASSERT(false);
			DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("blue cards")));
		}

		return;
	}

	vector<SelectionEntry> entries;

	SelectionEntry entry;
	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("black cards"));
	entry.strText = _T("selects black");
	entries.push_back(entry);

	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("blue cards"));
	entry.strText = _T("selects blue");
	entries.push_back(entry);

	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("green cards"));
	entry.strText = _T("selects green");
	entries.push_back(entry);

	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("red cards"));
	entry.strText = _T("selects red");
	entries.push_back(entry);

	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("white cards"));
	entry.strText = _T("selects white");
	entries.push_back(entry);

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(),
		entries, 1, 1, GetCard(), pCaster,
		(DWORD)pCaster,				// Context 1
		(DWORD)pPlayer);	// Context 2
}

void CTargetPlayerDiscardCardSpell2::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);

	const CCardFilter* pDiscardFilter = NULL;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			pDiscardFilter = (const CCardFilter*)(it->dwContext);
			break;
		}

	CPlayer* pCaster = (CPlayer*)dwContext1;
	CPlayer* pDiscarder = (CPlayer*)dwContext2;

	DiscardCards(pCaster, pDiscarder, pDiscardFilter);
}

void CTargetPlayerDiscardCardSpell2::DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter)
{
	if (!CDiscardCardCommon::ResolveDiscardCards(
			pDiscarder,							// Discarder
			pCaster,							// Picker
			pCaster,							// Caster
			SpecialNumber::Any,
			MoveType::Discard,
			ZoneId::Hand,
			TRUE,
			pDiscardFilter,
			m_ToZoneId, m_bToOwnersZone, CardPlacement::Top))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}
}

//____________________________________________________________________________
//
/*
Ref:
	Jester's Cap 4
	Artifact
	2, Tap, Sacrifice Jester's Cap: Search target player's library for three cards and exile them. 
	Then that player shuffles his or her library.
*/
CTargetPlayerSearchLibraryCardSpell::CTargetPlayerSearchLibraryCardSpell(CCard* pCard, AbilityType abilityType,
															LPCTSTR strManaCost,
															MinimumValue nMinSearchCount,
															MaximumValue nMaxSearchCount,
															const CCardFilter* pCardFilter,
															CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_nMinSearchCount(nMinSearchCount)
	, m_nMaxSearchCount(nMaxSearchCount)
	, m_ToZoneId(ZoneId::Hand)
	, m_bToOwnersZone(FALSE)
	, m_bToTop(TRUE)
	, m_bTapped(FALSE)
	, m_bRevealCardsToOthers(TRUE)
	, m_pCardFilter(pCardFilter)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	SetActionValue(ContextValue(GET_INTEGER(nMaxSearchCount), GET_INTEGER(nMinSearchCount)));					// Note: Do not use SetExtraManaCost() when nDiscardCount is unlimited
	SetValidExtraActionValueVector(ContextValue(1));

	UpdateTargetCharacteristic();
}

void CTargetPlayerSearchLibraryCardSpell::UpdateTargetCharacteristic()
{
	if (m_ToZoneId == ZoneId::Graveyard ||
		m_ToZoneId == ZoneId::Exile)
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	else
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
}

CActionContainer* CTargetPlayerSearchLibraryCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);
			int nMaxSearchCount = targetGroup.GetValue(pPlayer).nValue1;
			int nMinSearchCount = targetGroup.GetValue(pPlayer).nValue2;

			if (bSetNames)
			{
				ATLASSERT(nMaxSearchCount != 0);

				if (nMaxSearchCount == 1)
					strActionName1.Format(_T(" to search for %s"), m_pCardFilter->GetFilterName());
				else
					if (nMaxSearchCount != SpecialNumber::Any)
						strActionName1.Format(_T(" to search for %s%d %s"),
							nMinSearchCount < nMaxSearchCount ? _T("up to ") : _T(""), nMaxSearchCount, m_pCardFilter->GetFilterNamePlural());
					else
						strActionName1.Format(_T(" to search %s"), m_pCardFilter->GetFilterNamePlural());

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			/* REVIEW
			if (!pAction->IsTrick())
			{
				if (nSearchCount != SpecialNumber::Any)
					nBonusScore += nSearchCount;
				else
					nBonusScore += pPlayer->GetZoneById(ZoneId::Library)->GetSize() / 2;	// Pure guess
			}
			*/
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetPlayerSearchLibraryCardSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();

	MaximumValue nMaxSearchCount(value.nValue1);
	MinimumValue nMinSearchCount(value.nValue2);

	if (!CSearchCardCommon::ResolveSearchCards(
			pPlayer,
			nMinSearchCount,
			nMaxSearchCount,
			pCaster,
			ZoneId::Library,
			m_pCardFilter,
			m_ToZoneId,
			m_bToOwnersZone,
			m_bToTop ? CardPlacement::Top : CardPlacement::Bottom,
			m_bTapped,
			m_bRevealCardsToOthers))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}
}

//____________________________________________________________________________
//
/*
Ref: 
	Baleful Stare 2U
	Sorcery
	Target opponent reveals his or her hand. You draw a card for each Mountain and red card in it.
*/
CTargetPlayerRevealHandSpell2::CTargetPlayerRevealHandSpell2(CCard* pCard, AbilityType abilityType,
															 LPCTSTR strManaCost,
															 const CCardFilter* pCardFilter,
															 CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_pCardFilter(pCardFilter)
{
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CTargetPlayerRevealHandSpell2::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (!bSetNames)
		return pActionContainer;

	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);

			if (!strActionName.IsEmpty())
				strActionName.AppendFormat(_T(", and looks at %s's hand"), pPlayer->GetPlayerName());
			else
				strActionName.AppendFormat(_T(" and looks at %s's hand"), pPlayer->GetPlayerName());
		}

		pAction->AppendToActionName(strActionName);
	}

	return pActionContainer;
}

void CTargetPlayerRevealHandSpell2::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();

	CDiscardCardCommon::ResolveRevealHand(pPlayer, pCaster, pCaster);

	CZone* pHand = pPlayer->GetZoneById(ZoneId::Hand);

	int nDrawCount = 0;

	if (m_pGame->IsThinking())
	{
		// Optimistic

		nDrawCount = pHand->GetSize();
	}
	else
	{
		for (int j = 0; j < pHand->GetSize(); ++j)
		{
			if (m_pCardFilter->IsCardIncluded(pHand->GetAt(j)))
				++nDrawCount;
		}
	}

	if (!CDrawCardCommon::ResolveDrawCards(pCaster, pCaster, nDrawCount))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}
}

//____________________________________________________________________________
//
// Psychic Transfer
//
/* 
Ref:
	Psychic Transfer 4U
	Sorcery
	If the difference between your life total and target player's life total is 5 or less, 
	exchange life totals with that player.
*/
CExchangeLifeSpell::CExchangeLifeSpell(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   int nAbsLifeDiff)
											   : CTargetSpell(pCard, abilityType, strManaCost,FALSE_CARD_COMPARER, TRUE, new CMyTargeting)
	, m_nAbsLifeDiff(nAbsLifeDiff)
{
	ATLASSERT(nAbsLifeDiff >= 0);

	GetTargeting()->SetIncludeOpponentPlayersOnly();
}

BOOL CExchangeLifeSpell::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CExchangeLifeSpell* pAbility = (CExchangeLifeSpell*)GetAbility();

	CPlayer* pController = pAbility->GetController();
	Life nLife = pController->GetLife();

	if ((nLife > Life(0)) &&
		(pPlayer->GetLife() > nLife) &&
		(pPlayer->GetLife() - nLife <= Life(pAbility->m_nAbsLifeDiff)))
	{
		return TRUE;
	}

	bTrick = TRUE;

	if (!bIncludeTricks)
		return FALSE;

	return TRUE;
}

/*
BOOL CExchangeLifeSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (bIncludeTricks)
		return TRUE;

	CPlayer* pController = m_pCard->GetController();
	Life nLife = pController->GetLife();
	BOOL bFound = FALSE;

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);
		BOOL bTrick;
		if (GetTargeting()->IsSubjectIncluded(pPlayer, bIncludeTricks, bTrick) &&
			(pPlayer->GetLife() > nLife) &&
			(pPlayer->GetLife() - nLife <= Life(m_nAbsLifeDiff)))
		{
			bFound = TRUE;
			break;
		}
	}

	return bFound;
}
*/

void CExchangeLifeSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();
	Life nLife = pCaster->GetLife();

	if (abs(GET_INTEGER(pPlayer->GetLife() - nLife)) <= m_nAbsLifeDiff)
	{
		pCaster->SetLife(pPlayer->GetLife());
		pPlayer->SetLife(nLife);
	}
}

/*
BOOL CExchangeLifeSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CTargetSpell::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;

	CPlayer* pCaster = pAction1->GetController();
	Life nLife = pCaster->GetLife();

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
		it != targetGroup.PlayerSubjectEnd(); ++it)
	{
		CPlayer* pPlayer = const_cast<CPlayer*>(*it);

		if (abs(GET_INTEGER(pPlayer->GetLife() - nLife)) <= m_nAbsLifeDiff)
		{
			pCaster->SetLife(pPlayer->GetLife());
			pPlayer->SetLife(nLife);
		}
	}

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Orcish Spy R (1/1)
	Creature — Orc Rogue
	Tap: Look at the top three cards of target player's library.
*/
CTargetRevealLibraryCardSpell::CTargetRevealLibraryCardSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   int nRevealCount)
	: CTargetSpell(pCard, abilityType, strManaCost,FALSE_CARD_COMPARER, TRUE)
	, m_bRevealCardsToOthers(FALSE)
	, m_bReorder(FALSE)
	, m_ReorderToZone(ZoneId::Library)
	, m_ReorderToZonePlacement(CardPlacement::Top)
	, m_nMaxSelectionCount(0)
	, m_nMinSelectionCount(1)
	, m_SelectToZone(ZoneId::Hand)
	, m_SelectToZonePlacement(CardPlacement::NotApplicable)
	, m_pSelectionCardFilter(NULL)
{
	ATLASSERT(SpecialNumber::IsSpecialNumber(nRevealCount) || nRevealCount >= 0);

	SetActionValue(ContextValue(nRevealCount, 0));
	SetValidExtraActionValueVector(ContextValue(1));

	UpdateTargetCharacteristic();
}

void CTargetRevealLibraryCardSpell::UpdateTargetCharacteristic()
{
#if 1
	if (GET_INTEGER(m_nMaxSelectionCount))
	{
		if (CZone::IsBadCardMovement(ZoneId::Library, m_ReorderToZone) &&
			CZone::IsBadCardMovement(ZoneId::Library, m_SelectToZone))
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		else
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
	}
	else
		if (CZone::IsBadCardMovement(ZoneId::Library, m_ReorderToZone))
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		else
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
#else
/*
	if (m_SelectToZone == ZoneId::Null && !m_bRevealCardsToOthers)
	{
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
		return;
	}

	if (m_SelectToZone == ZoneId::Battlefield ||
		m_SelectToZone == ZoneId::Hand)
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
	else
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
*/
#endif
}

CActionContainer* CTargetRevealLibraryCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (!bSetNames)
		return pActionContainer;

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			int nCardCount = targetGroup.GetValue(pPlayer).nValue1;

			CString strActionName1;
			if (nCardCount == SpecialNumber::DivideBy2RoundUp)
				strActionName1 = _T(" to reveal the top half of the player's library, rounded up");
			else
			if (nCardCount == SpecialNumber::DivideBy2RoundDown)
				strActionName1 = _T(" to reveal the top half of the player's library, rounded down");
			else
			if (nCardCount != 1)
				strActionName1.Format(_T(" to reveal the top %d cards from library"),
					nCardCount);
			else
				strActionName1 = _T(" to reveal the top card from library");

			if (!strActionName.IsEmpty())
				strActionName += _T(",") + strActionName1;
			else
				strActionName += strActionName1;
		}

		pAction->AppendToActionName(strActionName);
	}

	return pActionContainer;
}

void CTargetRevealLibraryCardSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	const CPlayer* pCaster = pAction->GetController();

	int nRevealCount = value.nValue1;
	if (nRevealCount == SpecialNumber::DivideBy2RoundDown)
		nRevealCount = pPlayer->GetZoneById(ZoneId::Library)->GetSize() / 2;
	else
		if (nRevealCount == SpecialNumber::DivideBy2RoundUp)
			nRevealCount = (pPlayer->GetZoneById(ZoneId::Library)->GetSize() + 1) / 2;

	CDrawCardCommon::ResolveRevealZone(
		const_cast<CPlayer*>(pPlayer), const_cast<CPlayer*>(pCaster), nRevealCount, m_bRevealCardsToOthers,
		m_bReorder,
		m_ReorderToZone,
		m_ReorderToZonePlacement,
		NULL,
		m_nMaxSelectionCount,
		m_nMinSelectionCount,
		ZoneId::Library,
		m_SelectToZone,
		m_SelectToZonePlacement,
		m_pSelectionCardFilter);
}

/*
BOOL CTargetRevealLibraryCardSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();
	const CPlayer* pCaster = pAction1->GetController();

	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
		it != targetGroup.PlayerSubjectEnd(); ++it)
	{
		const CPlayer* pPlayer = *it;
		int nRevealCount = targetGroup.GetValue(pPlayer).nValue1;
		if (nRevealCount == SpecialNumber::DivideBy2RoundDown)
			nRevealCount = pPlayer->GetZoneById(ZoneId::Library)->GetSize() / 2;
		else
			if (nRevealCount == SpecialNumber::DivideBy2RoundUp)
				nRevealCount = (pPlayer->GetZoneById(ZoneId::Library)->GetSize() + 1) / 2;

		CCountedCardContainer revealedCards;
		CDrawCardCommon::ResolveRevealLibrary(
			const_cast<CPlayer*>(pPlayer), const_cast<CPlayer*>(pCaster), nRevealCount, m_bRevealCardsToOthers,
			m_bReorder,
			&revealedCards);

		if (m_uMoveToZoneId == ZoneId::Null)
			continue;	// Just revealing, continue

		for (int j = revealedCards.GetSize() - 1; j >= 0; --j)
		{
			CCard* pCard = revealedCards.GetAt(j);

			CZone* pToZone = NULL;

			if (!m_pGame->IsThinking() ||
				m_pGame->IsCardVisible(pCard))
			{
				if (m_MoveCardFilter.IsCardIncluded(pCard))
					pToZone = pPlayer->GetZoneById(m_uMoveToZoneId);
				else
					if (m_uMoveToZoneId1 != ZoneId::Null)
						pToZone = pPlayer->GetZoneById(m_uMoveToZoneId1);
			}
			else
				pToZone = pPlayer->GetZoneById(m_uMoveToZoneId);	// assume going to the first zone

			if (pToZone)
			{
				if (!m_pGame->IsThinking() && revealedCards.GetSize() <= 5)
				{
					CString strMessage;
					strMessage.Format(_T("%s moves %s to %s"),
						pCaster->GetPlayerName(), pCard->GetCardName(), pToZone->GetZoneName());
					m_pGame->Message(
						strMessage,
						pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				pCard->Move(pToZone, const_cast<CPlayer*>(pCaster));
			}
		}
	}

	return TRUE;
}
*/

//____________________________________________________________________________
//
/*
Ref:
	Deathlace B
	Instant
	Target spell or permanent becomes black. (Mana symbols on that permanent remain unchanged.)
*/
CTargetChangeCardTypeSpell::CTargetChangeCardTypeSpell(
		CCard* pCard, AbilityType abilityType,
		LPCTSTR strManaCost,
		CardComparer* pTargetComparer)
	: CTargetSpell(pCard, abilityType, strManaCost, pTargetComparer, FALSE)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTargetChangeCardTypeSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag::CardChange);
}

void CTargetChangeCardTypeSpell::AddCardTypeToSelection(CardType cardTypeToAdd, CardType additionMask,
														BOOL bThisTurnOnly,
														LPCTSTR strCardTypeText)
{
	CardTypeSelectionEntry entry;
	entry.cardTypeToAdd = cardTypeToAdd;
	entry.additionMask = additionMask;
	entry.bThisTurnOnly = bThisTurnOnly;
	entry.strCardTypeText = strCardTypeText;

	m_Selection.push_back(entry);
}

void CTargetChangeCardTypeSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	vector<SelectionEntry> entries;
	for (unsigned i = 0; i < m_Selection.size(); ++i)
	{
		SelectionEntry entry;
		entry.dwContext = i;
		entry.strText.Format(_T("changes %s to a %s"), pCard->GetCardName(), m_Selection[i].strCardTypeText);
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)pCard);
}

/*
BOOL CTargetChangeCardTypeSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;

	ATLASSERT(pAction1->GetTargetGroup().GetCardSubjectCount() == 1);	// Only support single target for now

	const CCard* pCard = pAction1->GetTargetGroup().GetFirstCardSubject();

	vector<SelectionEntry> entries;
	for (unsigned i = 0; i < m_Selection.size(); ++i)
	{
		SelectionEntry entry;
		entry.dwContext = i;
		entry.strText.Format(_T("changes %s to a %s"), pCard->GetCardName(), m_Selection[i].strCardTypeText);
		entry.pAssociatedCard = pCard;
		entries.push_back(entry);
	}

	//m_pGame->GetSelection()->GetSelectionEventSource()->AddListener(m_cpSelectionListener.GetPointer());
	m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, pAction1->GetController(), (DWORD)pCard);

	return TRUE;
}
*/

void CTargetChangeCardTypeSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	CCard* pCard = (CCard*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;

			pCard->AddCardType(
				m_Selection[nSelectedIndex].cardTypeToAdd,
				m_Selection[nSelectedIndex].additionMask,
				m_Selection[nSelectedIndex].bThisTurnOnly ? CardTypeEntry::UntilEOT : CardTypeEntry::Temporary);

			break;
		}
}

//____________________________________________________________________________
//
/*
Ref:
	Juxtapose 3U
	Sorcery
	You and target player exchange control of the creature you each control with the highest converted mana cost. 
	Then exchange control of artifacts the same way. If two or more permanents a player controls are tied for 
	highest cost, their controller chooses one of them.
*/
CExchangeControlSpell::CExchangeControlSpell(CCard* pCard, AbilityType abilityType,
											 LPCTSTR strManaCost)
	: CTargetSpell(pCard, abilityType, strManaCost,FALSE_CARD_COMPARER, TRUE, new CMyTargeting)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CExchangeControlSpell::OnSelectionDone))
{
	GetTargeting()->SetIncludeOpponentPlayersOnly();

	m_FirstExchangeCardFilter.AddComparer(new AnyCreatureComparer);
	m_SecondExchangeCardFilter.AddComparer(new CardTypeComparer(CardType::Artifact, false));

	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Battlefield));
}

void CExchangeControlSpell::GetCardsFromPlayer(const CPlayer* pPlayer, CCountedCardContainer& maxCards, const CCardFilter* pCardFilter,
											   const CCard* pExcludeCard1, const CCard* pExcludeCard2) const
{
	maxCards.RemoveAll();

	CCountedCardContainer cards;

	CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int i = 0; i < pInplay->GetSize(); ++i)
	{
		CCard* pCard = pInplay->GetAt(i);
		if (pCardFilter->IsCardIncluded(pCard) &&
			(pCard != pExcludeCard1) &&
			(pCard != pExcludeCard2))
			cards.AddCard(pCard, CardPlacement::Top);
	}

	if (cards.GetSize() < 2)
	{
		if (cards.GetSize())
			maxCards.AddCards(cards, CardPlacement::Top);
		return;
	}

	int nMaxCost = cards.GetAt(0)->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal();
	maxCards.AddCard(cards.GetAt(0), CardPlacement::Top);
	for (int i = 1; i < cards.GetSize(); ++i)
	{
		int nCost = cards.GetAt(i)->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal();
		if (nCost > nMaxCost)
		{
			maxCards.RemoveAll();
			nMaxCost = nCost;
			maxCards.AddCard(cards.GetAt(i), CardPlacement::Top);
		}
		else
			if (nCost == nMaxCost)
			{
				maxCards.AddCard(cards.GetAt(i), CardPlacement::Top);
			}
	}
}

BOOL CExchangeControlSpell::PlayerHasCardsToExchange(const CPlayer* pPlayer, const CCardFilter* pCardFilter) const
{
	CCountedCardContainer cards1;
	GetCardsFromPlayer(GetController(), cards1, pCardFilter, NULL, NULL);
	if (!cards1.GetSize())
		return FALSE;

	CCountedCardContainer cards2;
	GetCardsFromPlayer(pPlayer, cards2, pCardFilter, NULL, NULL);
	return cards2.GetSize() > 0;
}

BOOL CExchangeControlSpell::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CExchangeControlSpell* pAbility = (CExchangeControlSpell*)GetAbility();

	if (pAbility->PlayerHasCardsToExchange(pPlayer, &pAbility->m_FirstExchangeCardFilter) ||
		pAbility->PlayerHasCardsToExchange(pPlayer, &pAbility->m_SecondExchangeCardFilter))
		return TRUE;

	bTrick = TRUE;

	if (!bIncludeTricks)
		return FALSE;

	return TRUE;
}

void CExchangeControlSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();

	// Context1 - Caster
	// Context2 - Target
	// Context3 - 0=Caster chooses first card to exchange, 1=Caster chooses second card to exchange
	//            2=Target chooses first card to exchange, 3=Target chooses second card to exchange
	// Context4 - Caster's first selected card (can be null)
	// Context5 - Caster's second selected card (can be null)

	PromptForSelection(pCaster, pPlayer, 0);
}

void CExchangeControlSpell::GainControl(CCard* pCard, CPlayer* pNewController, CPlayer* pCaster)
{
	ATLASSERT(pNewController != pCard->GetController());

	CZone* pInplay = pNewController->GetZoneById(ZoneId::Battlefield);
	pCard->Move(pInplay, pCaster, MoveType::Others);
}

void CExchangeControlSpell::PromptForSelection(CPlayer* pCaster, CPlayer* pTarget, DWORD dwContext, CCard* pCasterCard1, CCard* pCasterCard2)
{
	vector<SelectionEntry> entries;

	CPlayer* pPlayer = dwContext < 2 ? pCaster : pTarget;
	CPlayer* pNewController = dwContext < 2 ? pTarget : pCaster;
	CCardFilter* pCardFilter = IS_ODD(dwContext) ? &m_SecondExchangeCardFilter : &m_FirstExchangeCardFilter;

	CCountedCardContainer cards;
	GetCardsFromPlayer(pPlayer, cards, pCardFilter, pCasterCard1, pCasterCard2);

	if (!cards.GetSize() || (dwContext == 2 && !pCasterCard1) || (dwContext == 3 && !pCasterCard2))
	{
		if (dwContext != 3)
			PromptForSelection(pCaster, pTarget, dwContext + 1, pCasterCard1, pCasterCard2);

		return;
	}

	if (dwContext < 2)
	{
		CCountedCardContainer cards2;
		GetCardsFromPlayer(pTarget, cards2, pCardFilter, pCasterCard1, pCasterCard2);
		if (!cards2.GetSize())
		{
			PromptForSelection(pCaster, pTarget, dwContext + 1, pCasterCard1, pCasterCard2);
			return;
		}
	}

	if (cards.GetSize() == 1)
	{
		if (dwContext == 0)
			pCasterCard1 = cards.GetAt(0);
		else
			if (dwContext == 1)
				pCasterCard2 = cards.GetAt(0);

		GainControl(cards.GetAt(0), pNewController, pCaster);
	}

	if (cards.GetSize() < 2)
	{
		if (dwContext < 3)
			PromptForSelection(pCaster, pTarget, dwContext + 1, pCasterCard1, pCasterCard2);

		return;
	}

	// Ask pPlayer to select card to exchange

	for (int i = 0; i < cards.GetSize(); ++i)
	{
		CCard* pCard = cards.GetAt(i);

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		if ((pCard->GetCardType() & CardType::Creature).Any())
			entry.strText.Format(_T("Selects %s"),  ((CCreatureCard*)pCard)->GetCreatureName(TRUE));
		else
			entry.strText.Format(_T("Selects %s"), pCard->GetCardName());

		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}

	//m_pGame->GetSelection()->GetSelectionEventSource()->AddListener(m_cpSelectionListener.GetPointer());
	m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pPlayer, (DWORD)pCaster, (DWORD)pTarget, dwContext,
		(DWORD)pCasterCard1, (DWORD)pCasterCard2);
}

void CExchangeControlSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	CPlayer* pCaster = (CPlayer*)dwContext1;
	CPlayer* pTarget = (CPlayer*)dwContext2;
	DWORD dwContext = dwContext3;
	CCard* pCasterCard1 = (CCard*)dwContext4;
	CCard* pCasterCard2 = (CCard*)dwContext5;

	CPlayer* pPlayer = dwContext < 2 ? pCaster : pTarget;
	CPlayer* pNewController = dwContext < 2 ? pTarget : pCaster;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);

			if (dwContext == 0)
				pCasterCard1 = pCard;
			else
				if (dwContext == 1)
					pCasterCard2 = pCard;

			GainControl(pCard, pNewController, pCaster);
			break;
		}

	if (dwContext < 3)
		PromptForSelection(pCaster, pTarget, dwContext + 1, pCasterCard1, pCasterCard2);
}

//____________________________________________________________________________
//
/*
Ref: 
	Balance of Power 3UU
	Sorcery
	If target opponent has more cards in hand than you, draw cards equal to the difference.
*/
CTargetPlayerSurveyDrawCardSpell::CTargetPlayerSurveyDrawCardSpell(CCard* pCard, AbilityType abilityType,
																   LPCTSTR strManaCost,
																   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}

BOOL CTargetPlayerSurveyDrawCardSpell::CMyTargeting::SubjectAllowed(
	const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	if (bTrick)
		return TRUE;

	int nTargetPlayerCardCount = pPlayer->GetZoneById(ZoneId::Hand)->GetSize();

	CTargetPlayerSurveyDrawCardSpell* pAbility = (CTargetPlayerSurveyDrawCardSpell*)GetAbility();
	int nCasterCardCount = pAbility->GetController()->GetZoneById(ZoneId::Hand)->GetSize();

	if (nTargetPlayerCardCount <= nCasterCardCount)
	{
		bTrick = TRUE;
		if (!bIncludeTricks)
			return FALSE;
	}
	else
		bTrick = FALSE;

	return TRUE;
}

CActionContainer* CTargetPlayerSurveyDrawCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pCaster = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		ATLASSERT(targetGroup.GetPlayerSubjectCount() == 1);

		if (targetGroup.GetPlayerSubjectCount() < 1)
		{
			pActionContainer->RemoveAt(l);
			continue;
		}

		const CPlayer* pTargetedPlayer = targetGroup.GetFirstPlayerSubject();
		int nTargetPlayerCardCount = pTargetedPlayer->GetZoneById(ZoneId::Hand)->GetSize();
		int nCasterCardCount = pCaster->GetZoneById(ZoneId::Hand)->GetSize();

		if (nTargetPlayerCardCount <= nCasterCardCount)
			if (bIncludeTricks)
				pAction->SetTrick(TRUE);
			else
				pActionContainer->RemoveAt(l);
	}

	return pActionContainer;
}

void CTargetPlayerSurveyDrawCardSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();

	int nTargetPlayerCardCount = pPlayer->GetZoneById(ZoneId::Hand)->GetSize();

	int nCasterCardCount = pCaster->GetZoneById(ZoneId::Hand)->GetSize();

	if (nTargetPlayerCardCount > nCasterCardCount)
		if (!CDrawCardCommon::ResolveDrawCards(pCaster, pCaster, nTargetPlayerCardCount - nCasterCardCount))
		{
			LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		}
}

//____________________________________________________________________________
//
/*
Ref:
	Death Ward W
	Instant
	Regenerate target creature.
*/
CTargetRegenerationSpell::CTargetRegenerationSpell(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE)
{
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddAbilityTag(AbilityTag::Regeneration);
}

void CTargetRegenerationSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pCreatureCard = (CCreatureCard*)pCard;
	pCreatureCard->AddRegenerationShield();
}

//____________________________________________________________________________
//
/*
Ref:
	Final Punishment 3BB
	Sorcery
	Target player loses life equal to the damage already dealt to him or her this turn.
*/
CTargetChgLifeSpell4::CTargetChgLifeSpell4(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 PreventableType preventable)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, new CMyTargeting)
	, m_LifeModifier(Life(0), pCard, preventable, preventable == PreventableType::Preventable ? DamageType::NonCombatDamage : DamageType::NotDealingDamage)
{
	if (preventable == PreventableType::Preventable)
		AddAbilityTag(AbilityTag::DamageSource);
	else
		AddAbilityTag(AbilityTag::LifeLost);

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CTargetChgLifeSpell4::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	Life nLifeDelta(pPlayer->GetDamageTakenThisTurn());
	if (nLifeDelta > Life(0))
	{
		m_LifeModifier.SetLifeDelta(-nLifeDelta);
		m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
		m_LifeModifier.ApplyTo(pPlayer);
	}
}

/*
BOOL CTargetChgLifeSpell4::ResolveImpl(const CAbilityAction* pAction)
{
	if (!CTargetSpell::ResolveImpl(pAction))
		return FALSE;

	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
		it != targetGroup.PlayerSubjectEnd(); ++it)
	{
		const CPlayer* pPlayer = *it;

		Life nLifeDelta(pPlayer->GetLife() - pPlayer->GetLifeAtBeginningOfTurn());
		if (nLifeDelta < Life(0))
		{
			m_LifeModifier.SetLifeDelta(nLifeDelta);
			m_LifeModifier.ApplyTo(const_cast<CPlayer*>(pPlayer));
		}
	}

	return TRUE;
}
*/

BOOL CTargetChgLifeSpell4::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	Life nLifeDelta(pPlayer->GetDamageTakenThisTurn());
	if (nLifeDelta <= Life(0))
	{
		bTrick = TRUE;

		if (!bIncludeTricks)
			return FALSE;
	}
	else
		bTrick = FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
/* 
Ref:
	Cruel Edict 1B
	Sorcery
	Target opponent sacrifices a creature.
*/
CTargetPlayerSacrificeSpell::CTargetPlayerSacrificeSpell(CCard* pCard, AbilityType abilityType,
														 LPCTSTR strManaCost,
														 const CCardFilter* pCardFilter,
														 CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CTargetPlayerSacrificeSpell::OnSelectionDone))
	, m_pCardFilter(pCardFilter)
{
	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CTargetPlayerSacrificeSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	std::vector<SelectionEntry> entries;

	GetSelectionEntries(pAction, pPlayer, value, entries);

	if (entries.size())
		m_SelectionSupport.AddSelectionRequest(entries, 1, 1, GetCard(), pPlayer);
}

void CTargetPlayerSacrificeSpell::GetSelectionEntries(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries)
{
	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		if (!m_pCardFilter->IsCardIncluded(pCard))
			continue;

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		entry.strText.Format(_T("selects %s"), pCard->GetCardName());
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}
}

void CTargetPlayerSacrificeSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pSelectionPlayer, MoveType::Sacrifice);

			break;
		}
}

BOOL CTargetPlayerSacrificeSpell::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CTargetPlayerSacrificeSpell* pThisAbility = (CTargetPlayerSacrificeSpell*)GetAbility();

	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		if (pThisAbility->m_pCardFilter->IsCardIncluded(pCard))
			return TRUE;
	}

	bTrick = TRUE;

	if (!bIncludeTricks)
		return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
/*
Ref:  
   Give and Take 6
   Artifact
   2 Tap, sacrifice a permanent: Target opponent sacrifices a permanent with the same card type.
*/
CTargetPlayerSacrificeSpell2::CTargetPlayerSacrificeSpell2(CCard* pCard, AbilityType abilityType,
														   LPCTSTR strManaCost,
														   const CCardFilter* pSacrificeCardFilter)
	: CTargetPlayerSacrificeSpell(pCard, abilityType, strManaCost,
								  CCardFilter::GetFilter(_T("cards")), // not used
								  new CTargeting)
{
	m_Cost.AddSacrificeCardCost(1, pSacrificeCardFilter);
}

void CTargetPlayerSacrificeSpell2::GetSelectionEntries(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries)
{
	const CCountedCardContainer* pSacrificedCards = pAction->GetSacrificeCards();
	ATLASSERT(pSacrificedCards && pSacrificedCards->GetSize() == 1);
	if (!pSacrificedCards || pSacrificedCards->GetSize() != 1)
		return;

	const CCard* pSacrificedCard = pSacrificedCards->GetAt(0);
	bool bCreature = pSacrificedCard->GetCardType().IsCreature();
	bool bLand = pSacrificedCard->GetCardType().IsLand();
	bool bEnchantment = pSacrificedCard->GetCardType().IsEnchantment();
	bool bArtifact = pSacrificedCard->GetCardType().IsArtifact();
	bool bPlaneswalker=pSacrificedCard->GetCardType().IsPlaneswalker();

	ATLASSERT(bCreature || bLand || bEnchantment || bArtifact || bPlaneswalker);
	if (!bCreature && !bLand && !bEnchantment && !bArtifact && !bPlaneswalker)
		return;

	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		if (bCreature)
		{
			if (!pCard->GetCardType().IsCreature())
				continue;
		}
		else
		if (bLand)
		{
			if (!pCard->GetCardType().IsLand())
				continue;
		}
		else
		if (bEnchantment)
		{
			if (!pCard->GetCardType().IsEnchantment())
				continue;
		}
		else
		if (bArtifact)
		{
			if (!pCard->GetCardType().IsArtifact())
				continue;
		}
		else
		if (bPlaneswalker)
		{
			if (!pCard->GetCardType().IsPlaneswalker())
				continue;
		}

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		entry.strText.Format(_T("selects %s"), pCard->GetCardName());
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}
}

//____________________________________________________________________________
//
/* 
Ref:  
	Jade Monolith 1
	Artifact
	The next time a source of your choice would deal damage to target creature this turn, 
	that source deals that damage to you instead. 
*/
CTargetCreatureDamageRedirectionSpell::CTargetCreatureDamageRedirectionSpell(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer,
											   SourceColor sourceColor,
											   BOOL bThisTurnOnly)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, new CMyTargeting)
	, m_SourceColor(sourceColor)
	, m_bThisTurnOnly(bThisTurnOnly)
	, m_nRedirect(Life(RedirectionType::RedirectAllDamage))
	, m_DamageType(DamageType::_AllDamage)
{
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddAbilityTag(AbilityTag::DamageRedirection);
}

BOOL CTargetCreatureDamageRedirectionSpell::CMyTargeting::SubjectAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	CTargetCreatureDamageRedirectionSpell* pAbility = (CTargetCreatureDamageRedirectionSpell*)GetAbility();

	CPlayer* pController = pAbility->GetController();

	if (!pAbility->m_SourceColor.Any())
	{
		if (((CCreatureCard*)pCard)->GetDamageRedirection().HasRedirection(
			CDamageRedirectionEntry(
				pController, pAbility->m_nRedirect, pAbility->m_DamageType, NULL, pAbility->m_bThisTurnOnly)))
		{
			bTrick = TRUE;

			return bIncludeTricks;
		}

		return TRUE;
	}

	// Card can be targeted if there are valid redirection sources

	BOOL bFound = FALSE;

	Characteristic characteristic = GetCharacteristic();

	for (int i = 0; i < pAbility->GetGame()->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pAbility->GetGame()->GetPlayer(i);

		CZone* pZone = pAbility->GetGame()->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard2 = pZone->GetAt(k);
			if ((pCard2->GetSourceColor() & pAbility->m_SourceColor).Any())	// HACK: Assuming only in-play cards (or pseudo spells on stack, see below) can be damage sources
			{
				// Trick if preventing from controller's own sources
				if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
					((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				{
					bFound = TRUE;
					continue;	// continue to search
				}

				if (((CCreatureCard*)pCard)->GetDamageRedirection().HasRedirection(
					CDamageRedirectionEntry(
						pController, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
				{
					bFound = TRUE;
					continue;
				}

				return TRUE;
			}
		}
	}

	const CStack& stack = pAbility->GetGame()->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & pAbility->m_SourceColor).Any())
		{
			CCard* pCard2 = pAction2->GetStackAbility()->GetCard();
			CPlayer* pPlayer = pCard2->GetController();

			// Trick if preventing from player's own sources
			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
			{
				bFound = TRUE;
				continue;
			}

			if (((CCreatureCard*)pCard)->GetDamageRedirection().HasRedirection(
				CDamageRedirectionEntry(
					pController, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
			{
				bFound = TRUE;
				continue;
			}

			return TRUE;
		}
	}

	if (!bFound)
		return FALSE;

	bTrick = TRUE;

	return bIncludeTricks;
}

/*
BOOL CTargetCreatureDamageRedirectionSpell::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (!m_SourceColor.Any())
		return TRUE;

	// Card can be targeted if there are valid redirection sources

	Characteristic characteristic = GetTargeting()->GetCharacteristic();
	CPlayer* pController = m_pCard->GetController();

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);

		CZone* pZone = m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard2 = pZone->GetAt(k).GetPointer();
			if ((pCard2->GetSourceColor() & m_SourceColor).Any())	// HACK: Assuming only in-play cards (or pseudo spells on stack, see below) can be damage sources
			{
				// Trick if preventing from controller's own sources
				if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
					((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				{
					if (bIncludeTricks)
						return TRUE;

					continue;	// continue to search
				}

				return TRUE;
			}
		}
	}

	const CStack& stack = m_pGame->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & m_SourceColor).Any())
		{
			CCard* pCard2 = pAction2->GetStackAbility()->GetCard();
			CPlayer* pPlayer = pCard2->GetController();

			// Trick if preventing from player's own sources
			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
			{
				if (bIncludeTricks)
					return TRUE;

				continue;
			}

			return TRUE;
		}
	}

	return FALSE;
}
*/

CActionContainer* CTargetCreatureDamageRedirectionSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = NULL;
	if (m_SourceColor.Any())
	{
		pActionContainer1 = new CActionContainer;
		ATLASSERT(pActionContainer1);
	}

	CString strActionName1;
	CPlayer* pController = GetController();

	Characteristic characteristic = GetTargeting()->GetCharacteristic();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CTargetCreatureDamageRedirectionSpellAction* pAction = (CTargetCreatureDamageRedirectionSpellAction*)pActionContainer->GetAt(l).GetPointer();

		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		ATLASSERT(!targetGroup.GetPlayerSubjectCount());

		if (bSetNames)
		{
			CString strActionName;
			if (m_nRedirect == Life(RedirectionType::RedirectAllDamage))
				strActionName = _T(" and redirects all damage to you");
			else
			if (m_nRedirect == Life(RedirectionType::RedirectNextDamage))
				strActionName = _T(" and redirects next damage to you");
			else
				strActionName.Format(_T(" and redirects %d damage to you"), GET_INTEGER(m_nRedirect));

			if (m_bThisTurnOnly)
				strActionName += _T(" this turn");

			pAction->AppendToActionName(strActionName);
		}

		if (m_SourceColor.Any())		// For the current move, see if there is a valid redirection source if dwSourceType is specified
		{
			for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
			{
				CPlayer* pPlayer = m_pGame->GetPlayer(i);
				CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
				for (int k = 0; k < pZone->GetSize(); ++k)
				{
					CCard* pSourceCard = pZone->GetAt(k);
					if ((pSourceCard->GetSourceColor() & m_SourceColor).Any())
					{
						BOOL bTrick = pAction->IsTrick();

						if (!bTrick)
						{
							// Trick if redirecting from player's own sources

							if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
								((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
							{
								if (!bIncludeTricks)
									continue;			// Not copying pAction from pActionContainer to pActionContainer1

								bTrick = TRUE;
							}
						}

						if (!bTrick)
						{
							bTrick = TRUE;

							for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
								it != targetGroup.CardSubjectEnd(); ++it)
							{
								const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
								if (!pCard->GetDamageRedirection().HasRedirection(
									CDamageRedirectionEntry(
									pController, m_nRedirect, m_DamageType, pSourceCard, m_bThisTurnOnly)))
								{
									bTrick = FALSE;
									break;
								}
							}

							if (bTrick && !bIncludeTricks)
								continue;
						}

						counted_ptr<CTargetCreatureDamageRedirectionSpellAction> cpAction1 =
							(CTargetCreatureDamageRedirectionSpellAction*)(CreateAction().GetPointer());
						cpAction1->Copy(pAction);
						cpAction1->SetSourceCard(pSourceCard);
						cpAction1->SetTrick(bTrick);

						pActionContainer1->Add(cpAction1.GetPointer());

						if (bSetNames)
						{
							CString strActionName;
							strActionName.Format(_T(" from %s"), pSourceCard->GetCardName());
							cpAction1->AppendToActionName(strActionName);
						}
					}
				}
			}

			const CStack& stack = m_pGame->GetStack();
			for (int i = 0; i < stack.GetStackSize(); ++i)
			{
				const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
				if ((pAction2->GetStackAbility()->GetSourceColor() & m_SourceColor).Any())
				{
					CCard* pSourceCard = pAction2->GetStackAbility()->GetCard();
					CPlayer* pPlayer = pSourceCard->GetController();

					BOOL bTrick = pAction->IsTrick();

					if (!bTrick)
					{
						// Trick if redirecting from player's own sources
						if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
							((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
						{
							if (!bIncludeTricks)
								continue;			// Not copying pAction from pActionContainer to pActionContainer1

							bTrick = TRUE;
						}
					}

					if (!bTrick)
					{
						bTrick = TRUE;
						for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
							it != targetGroup.CardSubjectEnd(); ++it)
						{
							const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
							if (!pCard->GetDamageRedirection().HasRedirection(
								CDamageRedirectionEntry(
									pController, m_nRedirect, m_DamageType,
									pSourceCard, m_bThisTurnOnly)))
							{
								bTrick = FALSE;
								break;
							}
						}

						if (bTrick && !bIncludeTricks)
							continue;
					}

					counted_ptr<CTargetCreatureDamageRedirectionSpellAction> cpAction1 =
						(CTargetCreatureDamageRedirectionSpellAction*)(CreateAction().GetPointer());
					cpAction1->Copy(pAction);
					cpAction1->SetSourceCard(pSourceCard);
					cpAction1->SetTrick(bTrick);

					pActionContainer1->Add(cpAction1.GetPointer());

					if (bSetNames)
					{
						CString strActionName;
						strActionName.Format(_T(" from %s"), pSourceCard->GetCardName());
						cpAction1->AppendToActionName(strActionName);
					}
				}
			}
		}
	}

	if (m_SourceColor.Any())
	{
		delete pActionContainer;

		return pActionContainer1;
	}

	return pActionContainer;
}

void CTargetCreatureDamageRedirectionSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	const CTargetCreatureDamageRedirectionSpellAction* pAction1 = (const CTargetCreatureDamageRedirectionSpellAction*)pAction;

	CCreatureCard* pCreature = (CCreatureCard*)pCard;

	pCreature->GetDamageRedirection().AddRedirection(CDamageRedirectionEntry(
		pAction1->GetController(),
		m_nRedirect,
		m_DamageType,
		pAction1->GetSourceCard(),
		m_bThisTurnOnly));
}

/*
BOOL CTargetCreatureDamageRedirectionSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetCreatureDamageRedirectionSpellAction* pAction1 = (const CTargetCreatureDamageRedirectionSpellAction*)pAction;

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
		it != targetGroup.CardSubjectEnd(); ++it)
	{
		const CCreatureCard* pCard = (const CCreatureCard*)*it;

		if (pCard->GetZoneId() != ZoneId::Battlefield)
			continue;

		const_cast<CCreatureCard*>(pCard)->GetDamageRedirection().AddRedirection(CDamageRedirectionEntry(
			pAction1->GetController(),
			m_nRedirect,
			m_DamageType,
			pAction1->GetSourceCard(),
			m_bThisTurnOnly));
	}

	return TRUE;
}
*/

counted_ptr<CAbilityAction> CTargetCreatureDamageRedirectionSpell::CreateAction() const
{
	counted_ptr<CTargetCreatureDamageRedirectionSpellAction> cpAction = ::CreateObject<CTargetCreatureDamageRedirectionSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CTargetCreatureDamageRedirectionSpell*>(this));

	cpAction->SetScore(ActionScore::Spell);

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
/*
Ref:	
	Zealous Inquisitor 1W
	Creature - Human Cleric (2/2)
	The next 1 damage that would be dealt to <this> this turn is dealt to target creature instead.
*/
CTargetCreatureDamageRedirectionSpell2::CTargetCreatureDamageRedirectionSpell2(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer,
											   BOOL bTargetPlayers,
											   SourceColor sourceColor,
											   BOOL bThisTurnOnly)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers, new CMyTargeting)
	, m_SourceColor(sourceColor)
	, m_bThisTurnOnly(bThisTurnOnly)
	, m_nRedirect(Life(RedirectionType::RedirectAllDamage))
	, m_DamageType(DamageType::_AllDamage)
{
	ATLASSERT(pCard->GetCardType().IsCreature());

	//GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	AddAbilityTag(AbilityTag::DamageRedirection);
}

BOOL CTargetCreatureDamageRedirectionSpell2::CMyTargeting::SubjectAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	CTargetCreatureDamageRedirectionSpell2* pAbility = (CTargetCreatureDamageRedirectionSpell2*)GetAbility();

	CCreatureCard* pThisCreature = (CCreatureCard*)pAbility->GetCard();

	if (pThisCreature == pCard)
		return FALSE;	// Redirect to itself

	CPlayer* pController = pAbility->GetController();

	if (!pAbility->m_SourceColor.Any())
	{
		/* Not true because someone may use multiple redirections to redirect all damage
		if (pThisCreature->GetDamageRedirection().HasRedirection(
			CDamageRedirectionEntry(
				(CCreatureCard*)pCard, pAbility->m_nRedirect, pAbility->m_DamageType, NULL, pAbility->m_bThisTurnOnly)))
		{
			bTrick = TRUE;

			return bIncludeTricks;
		}
		*/

		return TRUE;
	}

	// Card can be targeted if there are valid redirection sources

	BOOL bFound = FALSE;

	Characteristic characteristic = GetCharacteristic();

	for (int i = 0; i < pAbility->GetGame()->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pAbility->GetGame()->GetPlayer(i);

		CZone* pZone = pAbility->GetGame()->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard2 = pZone->GetAt(k);
			if ((pCard2->GetSourceColor() & pAbility->m_SourceColor).Any())	// HACK: Assuming only in-play cards (or pseudo spells on stack, see below) can be damage sources
			{
				// Trick if preventing from controller's own sources
				if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
					((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				{
					bFound = TRUE;
					continue;	// continue to search
				}

				/* Not true because someone may use multiple redirections to redirect all damage
				if (pThisCreature->GetDamageRedirection().HasRedirection(
					CDamageRedirectionEntry(
						(CCreatureCard*)pCard, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
				{
					bFound = TRUE;
					continue;
				}
				*/

				bTrick = FALSE;
				return TRUE;
			}
		}
	}

	const CStack& stack = pAbility->GetGame()->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & pAbility->m_SourceColor).Any())
		{
			CPlayer* pPlayer = pAction2->GetController();

			// Trick if preventing from player's own sources
			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
			{
				bFound = TRUE;
				continue;
			}

			/* Not true because someone may use multiple redirections to redirect all damage
			if (pThisCreature->GetDamageRedirection().HasRedirection(
				CDamageRedirectionEntry(
					(CCreatureCard*)pCard, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
			{
				bFound = TRUE;
				continue;
			}
			*/

			bTrick = FALSE;
			return TRUE;
		}
	}

	if (!bFound)
		return FALSE;

	bTrick = TRUE;

	return bIncludeTricks;
}

BOOL CTargetCreatureDamageRedirectionSpell2::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CTargetCreatureDamageRedirectionSpell2* pAbility = (CTargetCreatureDamageRedirectionSpell2*)GetAbility();

	CCreatureCard* pThisCreature = (CCreatureCard*)pAbility->GetCard();

	CPlayer* pController = pAbility->GetController();

	if (!pAbility->m_SourceColor.Any())
	{
		/* Not true because someone may use multiple redirections to redirect all damage
		if (pThisCreature->GetDamageRedirection().HasRedirection(
			CDamageRedirectionEntry(
				const_cast<CPlayer*>(pPlayer), pAbility->m_nRedirect, pAbility->m_DamageType, NULL, pAbility->m_bThisTurnOnly)))
		{
			bTrick = TRUE;

			return bIncludeTricks;
		}
		*/

		return TRUE;
	}

	// Card can be targeted if there are valid redirection sources

	BOOL bFound = FALSE;

	Characteristic characteristic = GetCharacteristic();

	for (int i = 0; i < pAbility->GetGame()->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pAbility->GetGame()->GetPlayer(i);

		CZone* pZone = pAbility->GetGame()->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard2 = pZone->GetAt(k);
			if ((pCard2->GetSourceColor() & pAbility->m_SourceColor).Any())	// HACK: Assuming only in-play cards (or pseudo spells on stack, see below) can be damage sources
			{
				// Trick if preventing from controller's own sources
				if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
					((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				{
					bFound = TRUE;
					continue;	// continue to search
				}

				/* Not true because someone may use multiple redirections to redirect all damage
				if (pThisCreature->GetDamageRedirection().HasRedirection(
					CDamageRedirectionEntry(
						pPlayer, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
				{
					bFound = TRUE;
					continue;
				}
				*/

				return TRUE;
			}
		}
	}

	const CStack& stack = pAbility->GetGame()->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & pAbility->m_SourceColor).Any())
		{
			CPlayer* pPlayer = pAction2->GetController();

			// Trick if preventing from player's own sources
			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
			{
				bFound = TRUE;
				continue;
			}

			/* Not true because someone may use multiple redirections to redirect all damage
			if (pThisCreature->GetDamageRedirection().HasRedirection(
				CDamageRedirectionEntry(
					pPlayer, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
			{
				bFound = TRUE;
				continue;
			}
			*/

			return TRUE;
		}
	}

	if (!bFound)
		return FALSE;

	bTrick = TRUE;

	return bIncludeTricks;
}

/*
BOOL CTargetCreatureDamageRedirectionSpell2::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (!m_SourceColor.Any())
		return TRUE;

	// Card can be targeted if there are valid redirection sources

	Characteristic characteristic = GetTargeting()->GetCharacteristic();
	CPlayer* pController = m_pCard->GetController();

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);

		CZone* pZone = m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard2 = pZone->GetAt(k).GetPointer();
			if ((pCard2->GetSourceColor() & m_SourceColor).Any())	// HACK: Assuming only in-play cards (or pseudo spells on stack, see below) can be damage sources
			{
				// Trick if preventing from controller's own sources
				if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
					((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				{
					if (bIncludeTricks)
						return TRUE;

					continue;	// continue to search
				}

				return TRUE;
			}
		}
	}

	const CStack& stack = m_pGame->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & m_SourceColor).Any())
		{
			CCard* pCard2 = pAction2->GetStackAbility()->GetCard();
			CPlayer* pPlayer = pCard2->GetController();

			// Trick if preventing from player's own sources
			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
			{
				if (bIncludeTricks)
					return TRUE;

				continue;
			}

			return TRUE;
		}
	}

	return FALSE;
}
*/

CActionContainer* CTargetCreatureDamageRedirectionSpell2::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = NULL;
	if (m_SourceColor.Any())
	{
		pActionContainer1 = new CActionContainer;
		ATLASSERT(pActionContainer1);
	}

	CString strActionName1;
	CPlayer* pController = GetController();

	Characteristic characteristic = GetTargeting()->GetCharacteristic();

	const CCreatureCard* pThisCreature = (const CCreatureCard*)GetCard();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CTargetCreatureDamageRedirectionSpellAction* pAction = (CTargetCreatureDamageRedirectionSpellAction*)pActionContainer->GetAt(l).GetPointer();

		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		ATLASSERT(targetGroup.GetSubjectCount() == 1);
		CPlayer* pRedirectToPlayer = NULL;
		CCreatureCard* pRedirectToCreature = NULL;

		if (targetGroup.GetCardSubjectCount())
			pRedirectToCreature = (CCreatureCard*)targetGroup.GetFirstCardSubject();
		else
		if (targetGroup.GetPlayerSubjectCount())
			pRedirectToPlayer = const_cast<CPlayer*>(targetGroup.GetFirstPlayerSubject());

		if (bSetNames)
		{
			CString strActionName;
			if (m_nRedirect == Life(RedirectionType::RedirectAllDamage))
				strActionName = _T(" and redirects all damage to ");
			else
			if (m_nRedirect == Life(RedirectionType::RedirectNextDamage))
				strActionName = _T(" and redirects next damage to ");
			else
				strActionName.Format(_T(" and redirects %d damage to "), GET_INTEGER(m_nRedirect));

			if (pRedirectToCreature)
				strActionName += _T("it");
			else
				strActionName += _T("him/her");

			if (m_bThisTurnOnly)
				strActionName += _T(" this turn");

			pAction->AppendToActionName(strActionName);
		}

		if (!m_SourceColor.Any())
			continue;

		// For the current move, see if there is a valid redirection source if dwSourceType is specified

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);
			CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pSourceCard = pZone->GetAt(k);
				if ((pSourceCard->GetSourceColor() & m_SourceColor).Any())
				{
					BOOL bTrick = pAction->IsTrick();

					if (!bTrick)
					{
						// Trick if redirecting from player's own sources

						if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
							((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
						{
							if (!bIncludeTricks)
								continue;			// Not copying pAction from pActionContainer to pActionContainer1

							bTrick = TRUE;
						}

					}

					if (!bTrick)
					{
						if (pRedirectToCreature)
						{
							if (pThisCreature->GetDamageRedirection().HasRedirection(
									CDamageRedirectionEntry(
										pRedirectToCreature, m_nRedirect, m_DamageType, pSourceCard, m_bThisTurnOnly)))
							{
								if (!bIncludeTricks)
									continue;

								bTrick = TRUE;
							}
						}
						else
						if (pRedirectToPlayer)
						{
							if (pThisCreature->GetDamageRedirection().HasRedirection(
									CDamageRedirectionEntry(
										pRedirectToPlayer, m_nRedirect, m_DamageType, pSourceCard, m_bThisTurnOnly)))
							{
								if (!bIncludeTricks)
									continue;

								bTrick = TRUE;
							}
						}
					}

					counted_ptr<CTargetCreatureDamageRedirectionSpellAction> cpAction1 =
						(CTargetCreatureDamageRedirectionSpellAction*)(CreateAction().GetPointer());
					cpAction1->Copy(pAction);
					cpAction1->SetSourceCard(pSourceCard);
					cpAction1->SetTrick(bTrick);

					pActionContainer1->Add(cpAction1.GetPointer());

					if (bSetNames)
					{
						CString strActionName;
						strActionName.Format(_T(" from %s"), pSourceCard->GetCardName());
						cpAction1->AppendToActionName(strActionName);
					}
				}
			}
		}

		const CStack& stack = m_pGame->GetStack();
		for (int i = 0; i < stack.GetStackSize(); ++i)
		{
			const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
			if ((pAction2->GetStackAbility()->GetSourceColor() & m_SourceColor).Any())
			{
				CCard* pSourceCard = pAction2->GetStackAbility()->GetCard();
				CPlayer* pPlayer = pAction2->GetController();

				BOOL bTrick = pAction->IsTrick();

				if (!bTrick)
				{
					// Trick if redirecting from player's own sources
					if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
						((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
					{
						if (!bIncludeTricks)
							continue;			// Not copying pAction from pActionContainer to pActionContainer1

						bTrick = TRUE;
					}
				}

				if (!bTrick)
				{
					if (pRedirectToCreature)
					{
						if (pThisCreature->GetDamageRedirection().HasRedirection(
								CDamageRedirectionEntry(
									pRedirectToCreature, m_nRedirect, m_DamageType, pSourceCard, m_bThisTurnOnly)))
						{
							if (!bIncludeTricks)
								continue;

							bTrick = TRUE;
						}
					}
					else
					if (pRedirectToPlayer)
					{
						if (pThisCreature->GetDamageRedirection().HasRedirection(
								CDamageRedirectionEntry(
									pRedirectToPlayer, m_nRedirect, m_DamageType, pSourceCard, m_bThisTurnOnly)))
						{
							if (!bIncludeTricks)
								continue;

							bTrick = TRUE;
						}
					}
				}

				counted_ptr<CTargetCreatureDamageRedirectionSpellAction> cpAction1 =
					(CTargetCreatureDamageRedirectionSpellAction*)(CreateAction().GetPointer());
				cpAction1->Copy(pAction);
				cpAction1->SetSourceCard(pSourceCard);
				cpAction1->SetTrick(bTrick);

				pActionContainer1->Add(cpAction1.GetPointer());

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T(" from %s"), pSourceCard->GetCardName());
					cpAction1->AppendToActionName(strActionName);
				}
			}
		}
	}

	if (m_SourceColor.Any())
	{
		delete pActionContainer;

		return pActionContainer1;
	}

	return pActionContainer;
}

void CTargetCreatureDamageRedirectionSpell2::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	const CTargetCreatureDamageRedirectionSpellAction* pAction1 = (const CTargetCreatureDamageRedirectionSpellAction*)pAction;

	CCreatureCard* pThisCreature = (CCreatureCard*)GetCard();

	pThisCreature->GetDamageRedirection().AddRedirection(CDamageRedirectionEntry(
		(CCreatureCard*)pCard,
		m_nRedirect,
		m_DamageType,
		pAction1->GetSourceCard(),
		m_bThisTurnOnly));
}

void CTargetCreatureDamageRedirectionSpell2::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	const CTargetCreatureDamageRedirectionSpellAction* pAction1 = (const CTargetCreatureDamageRedirectionSpellAction*)pAction;

	CCreatureCard* pThisCreature = (CCreatureCard*)GetCard();

	pThisCreature->GetDamageRedirection().AddRedirection(CDamageRedirectionEntry(
		pPlayer,
		m_nRedirect,
		m_DamageType,
		pAction1->GetSourceCard(),
		m_bThisTurnOnly));
}

/*
BOOL CTargetCreatureDamageRedirectionSpell2::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetCreatureDamageRedirectionSpellAction* pAction1 = (const CTargetCreatureDamageRedirectionSpellAction*)pAction;

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	CCreatureCard* pThisCreature = (CCreatureCard*)GetCard();

	ATLASSERT(targetGroup.GetSubjectCount() == 1);

	if (targetGroup.GetCardSubjectCount())
	{
		CCreatureCard* pRedirectToCreature = (CCreatureCard*)targetGroup.GetFirstCardSubject();

		pThisCreature->GetDamageRedirection().AddRedirection(CDamageRedirectionEntry(
			pRedirectToCreature,
			m_nRedirect,
			m_DamageType,
			pAction1->GetSourceCard(),
			m_bThisTurnOnly));
	}
	else
	if (targetGroup.GetPlayerSubjectCount())
	{
		CPlayer* pRedirectToPlayer = const_cast<CPlayer*>(targetGroup.GetFirstPlayerSubject());

		pThisCreature->GetDamageRedirection().AddRedirection(CDamageRedirectionEntry(
			pRedirectToPlayer,
			m_nRedirect,
			m_DamageType,
			pAction1->GetSourceCard(),
			m_bThisTurnOnly));
	}

	return TRUE;
}
*/

counted_ptr<CAbilityAction> CTargetCreatureDamageRedirectionSpell2::CreateAction() const
{
	counted_ptr<CTargetCreatureDamageRedirectionSpellAction> cpAction = ::CreateObject<CTargetCreatureDamageRedirectionSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CTargetCreatureDamageRedirectionSpell2*>(this));

	cpAction->SetScore(ActionScore::Spell);

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
/* 
Ref:
	Oracle's Attandents 3W
	Creature - Human Soldier (1/5)
	Tap: All damage that would be dealt to target creature this turn by a source of your 
	choice is dealt to Oracle's Attendants <this> instead.
*/
CTargetCreatureDamageRedirectionSpell3::CTargetCreatureDamageRedirectionSpell3(CCard* pCard, AbilityType abilityType,
											   LPCTSTR strManaCost,
											   CardComparer* pComparer,
											   BOOL bTargetPlayers,
											   SourceColor sourceColor,
											   BOOL bThisTurnOnly)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers, new CMyTargeting)
	, m_SourceColor(sourceColor)
	, m_bThisTurnOnly(bThisTurnOnly)
	, m_nRedirect(Life(RedirectionType::RedirectAllDamage))
	, m_DamageType(DamageType::_AllDamage)
{
	ATLASSERT(pCard->GetCardType().IsCreature());

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);

	AddAbilityTag(AbilityTag::DamageRedirection);
}

BOOL CTargetCreatureDamageRedirectionSpell3::CMyTargeting::SubjectAllowed(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	CTargetCreatureDamageRedirectionSpell3* pAbility = (CTargetCreatureDamageRedirectionSpell3*)GetAbility();

	CCreatureCard* pThisCreature = (CCreatureCard*)pAbility->GetCard();

	if (pThisCreature == pCard)
		return FALSE;	// Redirect to itself

	CPlayer* pController = pAbility->GetController();

	if (!pAbility->m_SourceColor.Any())
	{
		if (((CCreatureCard*)pCard)->GetDamageRedirection().HasRedirection(
			CDamageRedirectionEntry(
				pThisCreature, pAbility->m_nRedirect, pAbility->m_DamageType, NULL, pAbility->m_bThisTurnOnly)))
		{
			bTrick = TRUE;

			return bIncludeTricks;
		}

		return TRUE;
	}

	// Card can be targeted if there are valid redirection sources

	BOOL bFound = FALSE;

	Characteristic characteristic = GetCharacteristic();

	for (int i = 0; i < pAbility->GetGame()->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pAbility->GetGame()->GetPlayer(i);

		CZone* pZone = pAbility->GetGame()->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard2 = pZone->GetAt(k);
			if ((pCard2->GetSourceColor() & pAbility->m_SourceColor).Any())	// HACK: Assuming only in-play cards (or pseudo spells on stack, see below) can be damage sources
			{
				// Trick if preventing from controller's own sources
				if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
					((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				{
					bFound = TRUE;
					continue;	// continue to search
				}

				if (((CCreatureCard*)pCard)->GetDamageRedirection().HasRedirection(
					CDamageRedirectionEntry(
						pThisCreature, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
				{
					bFound = TRUE;
					continue;
				}
				return TRUE;
			}
		}
	}

	const CStack& stack = pAbility->GetGame()->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & pAbility->m_SourceColor).Any())
		{
			CCard* pCard2 = pAction2->GetStackAbility()->GetCard();
			CPlayer* pPlayer = pAction2->GetController();

			// Trick if preventing from player's own sources
			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
			{
				bFound = TRUE;
				continue;
			}

			if (((CCreatureCard*)pCard)->GetDamageRedirection().HasRedirection(
				CDamageRedirectionEntry(
					pThisCreature, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
			{
				bFound = TRUE;
				continue;
			}
			return TRUE;
		}
	}

	if (!bFound)
		return FALSE;

	bTrick = TRUE;

	return bIncludeTricks;
}

BOOL CTargetCreatureDamageRedirectionSpell3::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CTargetCreatureDamageRedirectionSpell3* pAbility = (CTargetCreatureDamageRedirectionSpell3*)GetAbility();

	CCreatureCard* pThisCreature = (CCreatureCard*)pAbility->GetCard();

	CPlayer* pController = pAbility->GetController();

	if (!pAbility->m_SourceColor.Any())
	{
		if (pPlayer->GetDamageRedirection().HasRedirection(
			CDamageRedirectionEntry(
				pThisCreature, pAbility->m_nRedirect, pAbility->m_DamageType, NULL, pAbility->m_bThisTurnOnly)))
		{
			bTrick = TRUE;

			return bIncludeTricks;
		}

		return TRUE;
	}

	// Card can be targeted if there are valid redirection sources

	BOOL bFound = FALSE;

	Characteristic characteristic = GetCharacteristic();

	for (int i = 0; i < pAbility->GetGame()->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pAbility->GetGame()->GetPlayer(i);

		CZone* pZone = pAbility->GetGame()->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard2 = pZone->GetAt(k);
			if ((pCard2->GetSourceColor() & pAbility->m_SourceColor).Any())	// HACK: Assuming only in-play cards (or pseudo spells on stack, see below) can be damage sources
			{
				// Trick if preventing from controller's own sources
				if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
					((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				{
					bFound = TRUE;
					continue;	// continue to search
				}

				if (pPlayer->GetDamageRedirection().HasRedirection(
					CDamageRedirectionEntry(
						pThisCreature, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
				{
					bFound = TRUE;
					continue;
				}

				return TRUE;
			}
		}
	}

	const CStack& stack = pAbility->GetGame()->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & pAbility->m_SourceColor).Any())
		{
			CCard* pCard2 = pAction2->GetStackAbility()->GetCard();
			CPlayer* pPlayer = pAction2->GetController();

			// Trick if preventing from player's own sources
			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
			{
				bFound = TRUE;
				continue;
			}

			if (pPlayer->GetDamageRedirection().HasRedirection(
				CDamageRedirectionEntry(
					pThisCreature, pAbility->m_nRedirect, pAbility->m_DamageType, pCard2, pAbility->m_bThisTurnOnly)))
			{
				bFound = TRUE;
				continue;
			}

			return TRUE;
		}
	}

	if (!bFound)
		return FALSE;

	bTrick = TRUE;

	return bIncludeTricks;
}

/*
BOOL CTargetCreatureDamageRedirectionSpell3::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!__super::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (!m_SourceColor.Any())
		return TRUE;

	// Card can be targeted if there are valid redirection sources

	Characteristic characteristic = GetTargeting()->GetCharacteristic();
	CPlayer* pController = m_pCard->GetController();

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = m_pGame->GetPlayer(i);

		CZone* pZone = m_pGame->GetPlayer(i)->GetZoneById(ZoneId::Battlefield);
		for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
		{
			CCard* pCard2 = pZone->GetAt(k).GetPointer();
			if ((pCard2->GetSourceColor() & m_SourceColor).Any())	// HACK: Assuming only in-play cards (or pseudo spells on stack, see below) can be damage sources
			{
				// Trick if preventing from controller's own sources
				if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
					((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
				{
					if (bIncludeTricks)
						return TRUE;

					continue;	// continue to search
				}

				return TRUE;
			}
		}
	}

	const CStack& stack = m_pGame->GetStack();
	for (int i = 0; i < stack.GetStackSize(); ++i)
	{
		const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
		if ((pAction2->GetStackAbility()->GetSourceColor() & m_SourceColor).Any())
		{
			CCard* pCard2 = pAction2->GetStackAbility()->GetCard();
			CPlayer* pPlayer = pCard2->GetController();

			// Trick if preventing from player's own sources
			if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
				((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
			{
				if (bIncludeTricks)
					return TRUE;

				continue;
			}

			return TRUE;
		}
	}

	return FALSE;
}
*/

// Oracle's Attandents: {T}: All damage that would be dealt to target creature this turn by a source of your choice is dealt to <this> instead.
CActionContainer* CTargetCreatureDamageRedirectionSpell3::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = NULL;
	if (m_SourceColor.Any())
	{
		pActionContainer1 = new CActionContainer;
		ATLASSERT(pActionContainer1);
	}

	CString strActionName1;
	CPlayer* pController = GetController();

	Characteristic characteristic = GetTargeting()->GetCharacteristic();

	CCreatureCard* pThisCreature = (CCreatureCard*)GetCard();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CTargetCreatureDamageRedirectionSpellAction* pAction = (CTargetCreatureDamageRedirectionSpellAction*)pActionContainer->GetAt(l).GetPointer();

		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		if (bSetNames)
		{
			CString strActionName;
			if (m_nRedirect == Life(RedirectionType::RedirectAllDamage))
				strActionName.Format(_T(" and redirects all damage to %s"), pThisCreature->GetCreatureName(TRUE));
			else
			if (m_nRedirect == Life(RedirectionType::RedirectNextDamage))
				strActionName.Format(_T(" and redirects next damage to %s"), pThisCreature->GetCreatureName(TRUE));
			else
				strActionName.Format(_T(" and redirects %d damage to %s"), GET_INTEGER(m_nRedirect), pThisCreature->GetCreatureName(TRUE));

			if (m_bThisTurnOnly)
				strActionName += _T(" this turn");

			pAction->AppendToActionName(strActionName);
		}

		if (!m_SourceColor.Any())
			continue;

		// For the current move, see if there is a valid redirection source if dwSourceType is specified

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);
			CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pSourceCard = pZone->GetAt(k);
				if ((pSourceCard->GetSourceColor() & m_SourceColor).Any())
				{
					BOOL bTrick = pAction->IsTrick();

					if (!bTrick)
					{
						// Trick if redirecting from player's own sources

						if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
							((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
						{
							if (!bIncludeTricks)
								continue;			// Not copying pAction from pActionContainer to pActionContainer1

							bTrick = TRUE;
						}
					}

					if (!bTrick)
					{
						bTrick = TRUE;

						for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
							it != targetGroup.CardSubjectEnd(); ++it)
						{
							const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
							if (!pCard->GetDamageRedirection().HasRedirection(
								CDamageRedirectionEntry(
								pThisCreature, m_nRedirect, m_DamageType, pSourceCard, m_bThisTurnOnly)))
							{
								bTrick = FALSE;
								break;
							}
						}

						if (bTrick)
							for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
								it != targetGroup.PlayerSubjectEnd(); ++it)
							{
								const CPlayer* pPlayer = *it;
								if (!pPlayer->GetDamageRedirection().HasRedirection(
									CDamageRedirectionEntry(
									pThisCreature, m_nRedirect, m_DamageType, pSourceCard, m_bThisTurnOnly)))
								{
									bTrick = FALSE;
									break;
								}
							}

						if (bTrick && !bIncludeTricks)
							continue;
					}

					counted_ptr<CTargetCreatureDamageRedirectionSpellAction> cpAction1 =
						(CTargetCreatureDamageRedirectionSpellAction*)(CreateAction().GetPointer());
					cpAction1->Copy(pAction);
					cpAction1->SetSourceCard(pSourceCard);
					cpAction1->SetTrick(bTrick);

					pActionContainer1->Add(cpAction1.GetPointer());

					if (bSetNames)
					{
						CString strActionName;
						strActionName.Format(_T(" from %s"), pSourceCard->GetCardName());
						cpAction1->AppendToActionName(strActionName);
					}
				}
			}
		}

		const CStack& stack = m_pGame->GetStack();
		for (int i = 0; i < stack.GetStackSize(); ++i)
		{
			const CStackAbilityAction* pAction2 = stack.GetStackAction(i).GetPointer();
			if ((pAction2->GetStackAbility()->GetSourceColor() & m_SourceColor).Any())
			{
				CCard* pSourceCard = pAction2->GetStackAbility()->GetCard();
				CPlayer* pPlayer = pAction2->GetController();

				BOOL bTrick = pAction->IsTrick();

				if (!bTrick)
				{
					// Trick if redirecting from player's own sources
					if (((characteristic < Characteristic::Neutral) && (pPlayer != pController)) ||
						((characteristic > Characteristic::Neutral) && (pPlayer == pController)))
					{
						if (!bIncludeTricks)
							continue;			// Not copying pAction from pActionContainer to pActionContainer1

						bTrick = TRUE;
					}
				}

				if (!bTrick)
				{
					bTrick = TRUE;

					for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
						it != targetGroup.CardSubjectEnd(); ++it)
					{
						const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
						if (!pCard->GetDamageRedirection().HasRedirection(
							CDamageRedirectionEntry(
							pThisCreature, m_nRedirect, m_DamageType, pSourceCard, m_bThisTurnOnly)))
						{
							bTrick = FALSE;
							break;
						}
					}

					if (bTrick)
						for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
							it != targetGroup.PlayerSubjectEnd(); ++it)
						{
							const CPlayer* pPlayer = *it;
							if (!pPlayer->GetDamageRedirection().HasRedirection(
								CDamageRedirectionEntry(
								pThisCreature, m_nRedirect, m_DamageType, pSourceCard, m_bThisTurnOnly)))
							{
								bTrick = FALSE;
								break;
							}
						}

					if (bTrick && !bIncludeTricks)
						continue;
				}

				counted_ptr<CTargetCreatureDamageRedirectionSpellAction> cpAction1 =
					(CTargetCreatureDamageRedirectionSpellAction*)(CreateAction().GetPointer());
				cpAction1->Copy(pAction);
				cpAction1->SetSourceCard(pSourceCard);
				cpAction1->SetTrick(bTrick);

				pActionContainer1->Add(cpAction1.GetPointer());

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T(" from %s"), pSourceCard->GetCardName());
					cpAction1->AppendToActionName(strActionName);
				}
			}
		}
	}

	if (m_SourceColor.Any())
	{
		delete pActionContainer;

		return pActionContainer1;
	}

	return pActionContainer;
}

void CTargetCreatureDamageRedirectionSpell3::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	const CTargetCreatureDamageRedirectionSpellAction* pAction1 = (const CTargetCreatureDamageRedirectionSpellAction*)pAction;

	CCreatureCard* pThisCreature = (CCreatureCard*)GetCard();

	((CCreatureCard*)pCard)->GetDamageRedirection().AddRedirection(
		CDamageRedirectionEntry(
			pThisCreature, m_nRedirect, m_DamageType, pAction1->GetSourceCard(), m_bThisTurnOnly));
}

void CTargetCreatureDamageRedirectionSpell3::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	const CTargetCreatureDamageRedirectionSpellAction* pAction1 = (const CTargetCreatureDamageRedirectionSpellAction*)pAction;

	CCreatureCard* pThisCreature = (CCreatureCard*)GetCard();

	pPlayer->GetDamageRedirection().AddRedirection(
		CDamageRedirectionEntry(
			pThisCreature, m_nRedirect, m_DamageType, pAction1->GetSourceCard(), m_bThisTurnOnly));
}

/*
BOOL CTargetCreatureDamageRedirectionSpell3::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CTargetCreatureDamageRedirectionSpellAction* pAction1 = (const CTargetCreatureDamageRedirectionSpellAction*)pAction;

	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	CCreatureCard* pThisCreature = (CCreatureCard*)GetCard();

	for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
		it != targetGroup.CardSubjectEnd(); ++it)
	{
		CCreatureCard* pCard = (CCreatureCard*)*it;
		pCard->GetDamageRedirection().AddRedirection(
			CDamageRedirectionEntry(
				pThisCreature, m_nRedirect, m_DamageType, pAction1->GetSourceCard(), m_bThisTurnOnly));
	}

	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
		it != targetGroup.PlayerSubjectEnd(); ++it)
	{
		CPlayer* pPlayer = const_cast<CPlayer*>(*it);
		pPlayer->GetDamageRedirection().AddRedirection(
			CDamageRedirectionEntry(
				pThisCreature, m_nRedirect, m_DamageType, pAction1->GetSourceCard(), m_bThisTurnOnly));
	}

	return TRUE;
}
*/

counted_ptr<CAbilityAction> CTargetCreatureDamageRedirectionSpell3::CreateAction() const
{
	counted_ptr<CTargetCreatureDamageRedirectionSpellAction> cpAction = ::CreateObject<CTargetCreatureDamageRedirectionSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CTargetCreatureDamageRedirectionSpell3*>(this));

	cpAction->SetScore(ActionScore::Spell);

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
/*
Ref: 
	Exhaustion 2U
	Sorcery
	Creatures and lands target opponent controls don't untap during his or her next untap step.
*/
CTargetChgUntapCardTypeSpell::CTargetChgUntapCardTypeSpell(CCard* pCard, AbilityType abilityType,
														   LPCTSTR strManaCost,
														   CardType untapCardTypeToRemove)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_UntapCardTypeToRemove(untapCardTypeToRemove)
{
	ATLASSERT(m_UntapCardTypeToRemove.Any());

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CTargetChgUntapCardTypeSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	std::auto_ptr<CPlayerModifier> apModifier(new CPlayerUntapCardTypeModifier(m_UntapCardTypeToRemove, m_UntapCardTypeToRemove, CPlayerUntapCardTypeModifier::ResetCantUntapCardType));
	apModifier->ApplyTo(pPlayer);

	// Schedule a task to undo the untap card type at the beginning of next upkeep

	CPlayerModifierTask* pTask = new CPlayerModifierTask(pPlayer, apModifier,
		false); // use RemoveFrom

	m_pGame->GetScheduler()->ScheduleTask(pTask, pPlayer, NodeId::UpkeepStep, TurnNumberDelta(-1));
}

//____________________________________________________________________________
//
/*
Ref:	
	Vulshok Morningstar 2
	Artifact — Equipment
	Equipped creature gets +2/+2.
	Equip 2 (2: Attach to target creature you control. Equip only as a sorcery.)

502.33 - Equip

	502.33a - Equip is an activated ability of artifact Equipment cards.
				"Equip [cost]" means "[Cost]: Attach this Equipment to target
				creature you control. Play this ability only any time you could
				play a sorcery." [CompRules 2005/10/01]

	502.33b - For more information about Equipment, see Rule 212.2,
				"Artifacts." [CompRules 2003/10/01]

	502.33c - If an artifact has multiple instances of equip, any of its equip
				abilities may be used. [CompRules 2003/10/01]

	502.33.Ruling.1 - If you play the equip ability and target the creature it
						is already equipping, then it does nothing when it
						resolves. It stays where it is. It also does not get a
						new timestamp for effects ordering. [Barclay 2003/10/21]

	Note - Also see Rule 212.2g through Rule 212.2k for additional rules on Equipment.

G5.15 - Equipment

	G5.15a - Some artifacts have the subtype "Equipment." These artifacts can
				be attached to (can "equip") creatures. They can't equip objects
				that aren't creatures. An Equipment is played and comes into play
				just like any other artifact. Equipment doesn't come into play
				equipping a creature. The equip keyword ability moves the Equipment
				onto a creature you control. (See Rule 502.33, "Equip.") The
				creature an Equipment is attached to is called "equipped." The
				Equipment is attached to, or "equips," that creature.
				[CompRules 2003/12/01]

	G5.15b - An Equipment that's also a creature or an Equipment that loses the
				subtype "Equipment" can't equip a creature. An Equipment can't
				equip itself. An Equipment that equips an illegal or nonexistent
				permanent becomes unattached from that permanent, but remains in
				play. (This is a state-based effect.") See Rule 420. [CompRules 2005/08/01]

	Note - Also see Rule 212.2g through Rule 212.2k for additional rules on Equipment.
*/
CEquipAbility::CEquipAbility(CCard* pCard, LPCTSTR strManaCost, CardComparer* pComparer)
	: CTargetSpell(pCard, AbilityType::Equipment | AbilityType::AsSorcery, strManaCost, pComparer, FALSE,
					new CMyTargeting)
	, m_WhenThisCardTypeChanged(pCard)
	, m_WhenThisCardMoved(pCard, ZoneId::Battlefield, ZoneId::_AllZones, FALSE, TRUE, FALSE)	// from in-play to any zone
	, m_WhenThisCardAlsoAChanged(pCard)
	, p_Comparer(pComparer)
	, m_cpEquippedCardMoveListener(VAR_NAME(m_cpEquippedCardMoveListener), CardMovementEventSource::Listener::EventCallback(this,
								   &CEquipAbility::OnEquippedCardMoved))
	, m_cpEquippedCardTypeListener(VAR_NAME(m_cpEquippedCardTypeListener), CardTypeEventSource::Listener::EventCallback(this,
								   &CEquipAbility::OnEquippedCardTypeChanged))
	, m_cpEquippedCardKeywordListener(VAR_NAME(m_cpEquippedCardKeywordListener), CCardKeyword::Listener::EventCallback(this,
								      &CEquipAbility::OnEquippedCardKeywordChanged))
	, m_cpEquippedCreatureKeywordListener(VAR_NAME(m_cpEquippedCreatureKeywordListener), CCreatureKeyword::Listener::EventCallback(this,
								          &CEquipAbility::OnEquippedCreatureKeywordChanged))
    , m_cpPhaseListener(VAR_NAME(m_cpPhaseListener), CardMovementEventSource::Listener::EventCallback(this, &CEquipAbility::OnZoneChanged))
{
	SetToActivatedAbility();

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting()->SetIncludeControllerCardsOnly();

	m_WhenThisCardTypeChanged.SetEventCallback(CWhenSelfCardTypeChanged::EventCallback(this, &CEquipAbility::OnThisCardTypeChanged));

	m_WhenThisCardAlsoAChanged.SetEventCallback(CWhenIsAlsoAChanged::EventCallback(this, &CEquipAbility::OnThisCardAlsoAChanged));

	m_WhenThisCardMoved.SetEventCallback(CWhenSelfMoved::EventCallback(this, &CEquipAbility::OnThisCardMoved));

	// This seems to be wrong and gaining control to an equippment will not detach the equipment (weird in common sense)
	//m_WhenThisCardMoved.SetReportInPlayChanges(TRUE);	// Unequip if this card is controlled by a different controller
}

void CEquipAbility::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	if (!IsLegalEquipment())
	{
		Unequip();

		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return;
	}

	Equip((CCreatureCard*)pCard);
}

BOOL CEquipAbility::IsLegalEquipment() const
{
	CCard* pThisCard = GetCard();
	if (pThisCard->GetCardType().IsCreature())
		return FALSE;

	if (!(pThisCard->GetCardType() & CardType::Equipment).Any())
		return FALSE;

	CCard* pIsAlso = pThisCard->GetIsAlsoA();
	if (pIsAlso && pIsAlso->GetCardType().IsCreature())
		return FALSE;

	return pThisCard->GetZoneId() == ZoneId::Battlefield;
}

void CEquipAbility::OnThisCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	if (!(GetCard()->GetCardType() & CardType::Equipment).Any() ||
		GetCard()->GetCardType().IsCreature())
		Unequip();

	OnEquippedCardChanged();
}

void CEquipAbility::OnThisCardAlsoAChanged(CCard* pCard, CCard* pFromCard, CCard* pToCard)
{
	if (pToCard && pToCard->GetCardType().IsCreature())
		Unequip();
}
void CEquipAbility::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
		if (moveType == MoveType::Phasing)
	{
		if ((m_pCard->GetCardFlag()->Get() & CardFlag::PhaseFlag).Any())
		{
		//	if (!m_pEquippedCreature) return;

			if (pToZone->GetZoneId() == ZoneId::Battlefield)
			{
				CCountedCardContainer toEnchantEquip;
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new CardFlagComparer(CardFlag::EquippedEnchantedOnPhaseFlag, false, m_pCard->GetInstanceID()));
				
				m_CardFilter.GetIncluded(*GetController()->GetZoneById(GetTargeting()->GetSubjectZoneId()), toEnchantEquip);
				m_CardFilter.GetIncluded(*m_pGame->GetNextPlayer(GetController())->GetZoneById(GetTargeting()->GetSubjectZoneId()), toEnchantEquip);


				if (toEnchantEquip.GetSize())
				{
					if (GetTargeting()->GetSubjectCardFilter().IsCardIncludedIgnoreController(toEnchantEquip.GetAt(0)))
						Equip((CCreatureCard*)toEnchantEquip.GetAt(0));	

					CCardFlagModifier m_CardFlagModifier = CCardFlagModifier();
					m_CardFlagModifier.GetModifier().SetToRemove(CardFlag::EquippedEnchantedOnPhaseFlag);
					m_CardFlagModifier.GetModifier().SetOneTurnOnly(FALSE);
					m_CardFlagModifier.GetModifier().SetRemovalData(m_pCard->GetInstanceID());
					m_CardFlagModifier.ApplyTo(toEnchantEquip.GetAt(0));
				}			

				m_cpPhaseListener->RemoveAllEventSources();

				return;
			}			
			else
			{
				// marking the card for enchanting it on phasing in

				if (!m_pEquippedCreature)
					return;

				CCardFlagModifier m_CardFlagModifier = CCardFlagModifier();
				m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::EquippedEnchantedOnPhaseFlag);
				m_CardFlagModifier.GetModifier().SetOneTurnOnly(FALSE);
				m_CardFlagModifier.GetModifier().SetAdditionData(m_pCard->GetInstanceID());
				m_CardFlagModifier.ApplyTo(m_pEquippedCreature);
				m_pCard->GetMovedEventSource()->AddListener(m_cpPhaseListener.GetPointer());

				Unequip(true);
				return;
			}
		}
		else
			return;	
	}
	
//	if (pFromZone->GetZoneId() == ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
//		return;
//	else
		Unequip();
}
void CEquipAbility::OnThisCardMoved(CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (moveType == MoveType::Phasing)
	{
		if ((m_pCard->GetCardFlag()->Get() & CardFlag::PhaseFlag).Any())
		{
//			if (!m_pEquippedCreature) return;

			if (pToZone->GetZoneId() == ZoneId::Battlefield)
			{
				CCountedCardContainer toEnchantEquip;
				CCardFilter m_CardFilter;
				m_CardFilter.AddComparer(new CardFlagComparer(CardFlag::EquippedEnchantedOnPhaseFlag, false, m_pCard->GetInstanceID()));
				
				m_CardFilter.GetIncluded(*GetController()->GetZoneById(GetTargeting()->GetSubjectZoneId()), toEnchantEquip);
				m_CardFilter.GetIncluded(*m_pGame->GetNextPlayer(GetController())->GetZoneById(GetTargeting()->GetSubjectZoneId()), toEnchantEquip);


				if (toEnchantEquip.GetSize())
				{
					if (GetTargeting()->GetSubjectCardFilter().IsCardIncludedIgnoreController(toEnchantEquip.GetAt(0)))
						Equip((CCreatureCard*)toEnchantEquip.GetAt(0));
					
					CCardFlagModifier m_CardFlagModifier = CCardFlagModifier();
					m_CardFlagModifier.GetModifier().SetToRemove(CardFlag::EquippedEnchantedOnPhaseFlag);
					m_CardFlagModifier.GetModifier().SetOneTurnOnly(FALSE);
					m_CardFlagModifier.GetModifier().SetRemovalData(m_pCard->GetInstanceID());
					m_CardFlagModifier.ApplyTo(toEnchantEquip.GetAt(0));
				}			

				m_cpPhaseListener->RemoveAllEventSources();

				return;
			}			
			else
			{
				// marking the card for enchanting it on phasing in

				if (!m_pEquippedCreature)
					return;

				CCardFlagModifier m_CardFlagModifier = CCardFlagModifier();
				m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::EquippedEnchantedOnPhaseFlag);
				m_CardFlagModifier.GetModifier().SetOneTurnOnly(FALSE);
				m_CardFlagModifier.GetModifier().SetAdditionData(m_pCard->GetInstanceID());
				m_CardFlagModifier.ApplyTo(m_pEquippedCreature);
				m_pCard->GetMovedEventSource()->AddListener(m_cpPhaseListener.GetPointer());

				Unequip(true);
				return;
			}
		}
		else
			return;	
	}
	
	if (pFromZone->GetZoneId() == ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
		return;
	else
		Unequip();
}

void CEquipAbility::OnEquippedCardMoved(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	ATLASSERT(m_pEquippedCreature != NULL);

	if (moveType == MoveType::Phasing)
	{
		CMoveCardModifier pModifier = CMoveCardModifier(pFromZone->GetZoneId(), pToZone->GetZoneId(), FALSE, MoveType::Phasing);
		pModifier.SetToPlayer(m_pCard->GetController());
		pModifier.ApplyTo(m_pCard);
		return;
	}

	if (pFromZone->GetZoneId() == ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield)
	return;
	else

	Unequip();
}

void CEquipAbility::OnEquippedCardChanged()
{
	ATLASSERT(m_pEquippedCreature != NULL);

	if (!m_pEquippedCreature) return;

	BOOL bTrick;
	if (!GetTargeting()->SubjectAllowed(m_pEquippedCreature, TRUE, bTrick) && !(m_pEquippedCreature->GetCardFlag()->Get() & CardFlag::PhaseFlag).Any())
		Unequip();
}

void CEquipAbility::OnEquippedCardTypeChanged(CCard* pCard, CardType fromCardType, CardType toCardType)
{
	OnEquippedCardChanged();
}

void CEquipAbility::OnEquippedCardKeywordChanged(CCardKeyword* pCardKeyword, CardKeyword fromCardKeyword, CardKeyword toCardKeyword)
{
	OnEquippedCardChanged();
}

void CEquipAbility::OnEquippedCreatureKeywordChanged(CCreatureKeyword* pCreatureKeyword, CreatureKeyword fromCreatureKeyword, CreatureKeyword toCreatureKeyword)
{
	OnEquippedCardChanged();
}

void CEquipAbility::Unequip(bool phase_out)
{
	if (m_pEquippedCreature && (m_pCard->GetZoneId() != ZoneId::_PhasedOut || phase_out))
	{
		//CCreatureCard* pOldEquippedCreature=m_pEquippedCreature;

		CCard* tempCard = m_pEquippedCreature;

		tempCard->GetZone()->GetCardEquippedEventSource()->FireEvent(const_cast<CCard*>(m_pCard),const_cast<CCard*>(tempCard), const_cast<CCard*>(m_pCard));

		CCreatureCard* pEquippedCreature = m_pEquippedCreature;
		m_pEquippedCreature = NULL;

		m_cpEquippedCardMoveListener->RemoveAllEventSources();
		m_cpEquippedCardTypeListener->RemoveAllEventSources();
		m_cpEquippedCardKeywordListener->RemoveAllEventSources();
		m_cpEquippedCreatureKeywordListener->RemoveAllEventSources();

		m_CreatureModifiers.RemoveFrom(pEquippedCreature);
		m_CardModifiers.RemoveFrom(pEquippedCreature);
	}
}

void CEquipAbility::Equip(CCreatureCard* pCreature)
{
	if ((pCreature == m_pEquippedCreature) || pCreature->GetCreatureKeyword()->CantBeEquipped())
		return;	// No-op

	Unequip();

	m_pEquippedCreature = pCreature;

	m_pEquippedCreature->GetZone()->GetCardEquippedEventSource()->FireEvent(m_pCard, m_pCard, m_pEquippedCreature);

	pCreature->GetMovedEventSource()->AddListener(m_cpEquippedCardMoveListener.GetPointer());
	pCreature->GetCardTypeEventSource()->AddListener(m_cpEquippedCardTypeListener.GetPointer());
	pCreature->GetCardKeyword()->AddListener(m_cpEquippedCardKeywordListener.GetPointer());
	pCreature->GetCreatureKeyword()->AddListener(m_cpEquippedCreatureKeywordListener.GetPointer());

	m_CardModifiers.ApplyTo(pCreature);
	m_CreatureModifiers.ApplyTo(pCreature);
}

CActionContainer* CEquipAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		ATLASSERT(targetGroup.GetCardSubjectCount() == 1);

		const CCreatureCard* pCreatureCard = (const CCreatureCard*)targetGroup.GetFirstCardSubject();
		if (pCreatureCard == m_pEquippedCreature)
		{
			if (bIncludeTricks)
				pAction->SetTrick();
			else
			{
				pActionContainer->RemoveAt(l);
				continue;
			}
		}

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T(" and equips %s"), pCreatureCard->GetCreatureName(TRUE));

			pAction->AppendToActionName(strActionName);
		}
	}

	return pActionContainer;
}

BOOL CEquipAbility::CMyTargeting::SubjectAllowed(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	const CEquipAbility* pThisAbility = (const CEquipAbility*)GetAbility();
	if (pCard == pThisAbility->m_pEquippedCreature)
	{
		if (bIncludeTricks)
			bTrick = TRUE;
		else
			return FALSE;
	}

	return TRUE;
}

//____________________________________________________________________________
//
/* 
Ref:
	Starlight 1W
	Sorcery
	You gain 3 life for each black creature target opponent controls.
*/
CTargetChgLifeBySurveySpell2::CTargetChgLifeBySurveySpell2(CCard* pCard, AbilityType abilityType,
															LPCTSTR strManaCost,
															const CCardFilter* pCardFilter,
															int nMultiplier)
	: CTargetPlayerCardsSpell(pCard, abilityType, strManaCost, ZoneId::Battlefield, pCardFilter, new CMyTargeting)
	, m_nMultiplier(nMultiplier)
	, m_LifeModifier(Life(0), pCard, PreventableType::NotPreventable)
{
	if (nMultiplier > 0)
		AddAbilityTag(AbilityTag::LifeGain);
	else
	{
		ATLASSERT(nMultiplier < 0);
		AddAbilityTag(AbilityTag::LifeLost);
	}
}

void CTargetChgLifeBySurveySpell2::ResolvePlayerCards(const CTargetSpellAction* pAction, CPlayer* pPlayer, const CCountedCardContainer& cards, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	int nCount = cards.GetSize() * m_nMultiplier;

	m_LifeModifier.SetLifeDelta(Life(nCount));
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pAction->GetController());
}

BOOL CTargetChgLifeBySurveySpell2::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CTargetChgLifeBySurveySpell2* pAbility = (CTargetChgLifeBySurveySpell2*)GetAbility();

	CCountedCardContainer cards;
	pAbility->GetCards(const_cast<CPlayer*>(pPlayer), cards);
	if (cards.GetSize() == 0)
	{
		bTrick = TRUE;

		if (!bIncludeTricks)
			return FALSE;
	}

	return TRUE;
}

//____________________________________________________________________________
//
/*
Ref: 
	Plague of Damnation XBG (custom card)
	Sorcery
	Destroy each artifact, creature, and enchantment with converted mana cost X. Then target opponent reveals 
	his or her hand and discards each artifact, creature, and enchantment with converted mana cost X.
*/
CTargetPlayerDiscardCardSpell4::CTargetPlayerDiscardCardSpell4(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost,
															   const CCardFilter* pCardFilter,
															   MoveType discardMoveType,
															   ZoneId toZoneId,
															   BOOL bToOwnersZone,
															   CardPlacement placement,
															   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_ToZoneId(toZoneId)
	, m_bToOwnersZone(bToOwnersZone)
	, m_Placement(placement)
	, m_DiscardMoveType(discardMoveType)
	, m_pCardFilter(pCardFilter)
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, toZoneId));

	SetValidExtraActionValueVector(ContextValue(1));
	SetExtraActionValueVector(ContextValue(1));
	m_Cost.SetExtraManaCost();

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CTargetPlayerDiscardCardSpell4::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);

			if (bSetNames)
			{
				strActionName1.Format(_T(" to discard %s"), m_pCardFilter->GetFilterNamePlural());

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
			{
				nBonusScore += pPlayer->GetZoneById(ZoneId::Hand)->GetSize() / 2;	// Pure guess
			}
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetPlayerDiscardCardSpell4::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();
	int nConvertedManaCost = value.nValue1;

	std::auto_ptr<CCardFilter> apFilter(m_pCardFilter->Clone());
	apFilter->AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nConvertedManaCost)); // ... and with converted mana cost equal to X

	if (!CDiscardCardCommon::ResolveDiscardCards(
			pPlayer,	// Discarder
			pCaster,	// Picker
			pCaster,	// Caster
			SpecialNumber::Any,
			m_DiscardMoveType,
			ZoneId::Hand,
			TRUE,		// reveal cards
			apFilter.get(),
			m_ToZoneId, m_bToOwnersZone, m_Placement))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return;
	}
}

//____________________________________________________________________________
//
/*
Ref: 
	Plague of Damnation XBG (custom card)
	Sorcery
	Destroy each artifact, creature, and enchantment with converted mana cost X. Then target opponent reveals 
	his or her hand and discards each artifact, creature, and enchantment with converted mana cost X.
*/
CTargetPlayerDiscardCardSpell5::CTargetPlayerDiscardCardSpell5(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost,
															   const CCardFilter* pCardFilter,
															   MoveType discardMoveType,
															   ZoneId toZoneId,
															   BOOL bToOwnersZone,
															   CardPlacement placement,
															   CTargeting* pTargeting)
	: CTargetPlayerDiscardCardSpell4(pCard, abilityType, strManaCost, pCardFilter, discardMoveType, toZoneId, bToOwnersZone, placement, pTargeting)
	, m_Modifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy)
{
}

BOOL CTargetPlayerDiscardCardSpell5::ResolveImpl(const CAbilityAction* pAction)
{
	const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
	CPlayer* pCaster = pAction1->GetController();
	const CSubjectGroup& targetGroup = pAction1->GetTargetGroup();

	CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
	if (it != targetGroup.PlayerSubjectEnd())
	{
		const ContextValue& value = targetGroup.GetValue(*it);
		int nConvertedManaCost = value.nValue1;

		std::auto_ptr<CCardFilter> apFilter(m_pCardFilter->Clone());
		apFilter->AddComparer(new ConvertedManaCostComparer<std::equal_to<int>>(nConvertedManaCost)); // ... and with converted mana cost equal to X

		m_Modifier.SetByPlayer(pCaster);

		for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = m_pGame->GetPlayer(i);
			CZone* pZone = pPlayer->GetZoneById(m_Modifier.GetFromZone());

			CCountedCardContainer cards;

			for (int k = pZone->GetSize() - 1; k >= 0 ; --k)
			{
				CCard* pCard = pZone->GetAt(k);
				if (apFilter->IsCardIncluded(pCard))
					cards.AddCard(pCard, CardPlacement::Top);
			}

			for (int k = 0; k < cards.GetSize(); ++k)
				m_Modifier.ApplyTo(cards.GetAt(k));
		}
	}

	return __super::ResolveImpl(pAction);
}
//____________________________________________________________________________
//
/*
Ref:
	Imperial Edict 1B
	Sorcery
	Target opponent chooses a creature he or she controls. Destroy it.
*/
CImperialEdictSpell::CImperialEdictSpell(CCard* pCard, AbilityType abilityType,
														 LPCTSTR strManaCost,
														 const CCardFilter* pCardFilter,
														 CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CImperialEdictSpell::OnSelectionDone))
	, m_pCardFilter(pCardFilter)
{
	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CImperialEdictSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	std::vector<SelectionEntry> entries;

	GetSelectionEntries(pAction, pPlayer, value, entries);

	if (entries.size())
		m_SelectionSupport.AddSelectionRequest(entries, 1, 1, GetCard(), pPlayer, (DWORD)pAction->GetController());
}

void CImperialEdictSpell::GetSelectionEntries(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries)
{
	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		if (!m_pCardFilter->IsCardIncluded(pCard))
			continue;

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		entry.strText.Format(_T("selects %s"), pCard->GetCardName());
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}
}

void CImperialEdictSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	const CPlayer* pByPlayer = (const CPlayer*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), GetGame()->GetNextPlayer(pByPlayer), MoveType::Destroy);

			break;
		}
}

BOOL CImperialEdictSpell::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CImperialEdictSpell* pThisAbility = (CImperialEdictSpell*)GetAbility();

	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		if (pThisAbility->m_pCardFilter->IsCardIncluded(pCard))
			return TRUE;
	}

	bTrick = TRUE;

	if (!bIncludeTricks)
		return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
/*
	Target opponent sacrifices a creature + some effect.
Ref:
	Warren Weirding 1B
	Tribal Sorcery — Goblin
	Target player sacrifices a creature. If a Goblin is sacrificed this way, that player puts two 1/1 black 
	Goblin Rogue creature tokens onto the battlefield, and those tokens gain haste until end of turn.
*/
CTargetSacrificePlusSpell::CTargetSacrificePlusSpell(CCard* pCard, AbilityType abilityType,
														 LPCTSTR strManaCost,
														 const CCardFilter* pCardFilter,
														 CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CTargetSacrificePlusSpell::OnSelectionDone))
	, m_pCardFilter(pCardFilter)
	, m_CreateGoblins(FALSE)
	, m_GainLife(FALSE)
	, m_DrawCards(FALSE)
{
	AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CTargetSacrificePlusSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	std::vector<SelectionEntry> entries;

	GetSelectionEntries(pAction, pPlayer, value, entries);

	if (entries.size())
		m_SelectionSupport.AddSelectionRequest(entries, 1, 1, GetCard(), pPlayer, (DWORD)pAction->GetController());
}

void CTargetSacrificePlusSpell::GetSelectionEntries(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries)
{
	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);

	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		if (!m_pCardFilter->IsCardIncluded(pCard))
			continue;

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		entry.strText.Format(_T("selects %s"), pCard->GetCardName());
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}
}

void CTargetSacrificePlusSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	const CPlayer* pByPlayer = (const CPlayer*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCardFilter m_CardFilter_temp;
			m_CardFilter_temp.SetComparer(new CreatureTypeComparer(CREATURE_TYPE(Goblin), false));

			CCard* pCard = (CCard*)(it->dwContext);
			if ( m_CreateGoblins == TRUE && m_CardFilter_temp.IsCardIncluded(pCard))
			{
				CTokenCreationModifier	pModifier = CTokenCreationModifier(GetGame(), _T("Goblin Rogue"), TOKEN_ID_BY_NAME, 2);
				pModifier.ApplyTo(pCard->GetController());
			}
			if ( m_GainLife == TRUE)
			{
				CCard* pCard = (CCard*)(it->dwContext);
				CLifeModifier pModifier = CLifeModifier(Life(((CCreatureCard*)pCard)->GetToughness()), m_pCard);
				pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pSelectionPlayer, MoveType::Sacrifice);
				pModifier.ApplyTo(const_cast<CPlayer*>(pByPlayer));
				break;
			}

			if (m_DrawCards == TRUE)
			{
				CCard* pCard = (CCard*)(it->dwContext);
				CDrawCardModifier pModifier = CDrawCardModifier(m_pGame, MinimumValue(GET_INTEGER(((CCreatureCard*)pCard)->GetPower())), MaximumValue(GET_INTEGER(((CCreatureCard*)pCard)->GetPower())));
				pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pByPlayer, MoveType::Sacrifice);
				pModifier.ApplyTo(const_cast<CPlayer*>(pByPlayer));
				break;
			}
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), pByPlayer, MoveType::Sacrifice);

			break;
		}
}

BOOL CTargetSacrificePlusSpell::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CTargetSacrificePlusSpell* pThisAbility = (CTargetSacrificePlusSpell*)GetAbility();

	CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		if (pThisAbility->m_pCardFilter->IsCardIncluded(pCard))
			return TRUE;
	}

	bTrick = TRUE;

	if (!bIncludeTricks)
		return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
/*
	Specific to Oona, Queen of the Fae
Ref:
	Oona, Queen of the Fae 3 U/B U/B U/B
	Legendary Creature — Faerie Wizard (5/5)
	Flying
	X U/B: Choose a color. Target opponent exiles the top X cards of his or her library. 
	For each card of the chosen color exiled this way, put a 1/1 blue and black 
	Faerie Rogue creature token with flying onto the battlefield.
*/
COonaQueenoftheFaeSpell::COonaQueenoftheFaeSpell(CCard* pCard, AbilityType abilityType,
								   LPCTSTR strManaCost,
								   int nRevealCount)
	: CTargetSpell(pCard, abilityType, strManaCost,FALSE_CARD_COMPARER, TRUE)
	, m_bRevealCardsToOthers(FALSE)
	, m_bReorder(FALSE)
	, m_ReorderToZone(ZoneId::Library)
	, m_ReorderToZonePlacement(CardPlacement::Top)
	, m_nMaxSelectionCount(0)
	, m_nMinSelectionCount(1)
	, m_SelectToZone(ZoneId::Hand)
	, m_SelectToZonePlacement(CardPlacement::NotApplicable)
	, m_pSelectionCardFilter(NULL)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &COonaQueenoftheFaeSpell::OnSelectionDone))
{
	ATLASSERT(SpecialNumber::IsSpecialNumber(nRevealCount) || nRevealCount >= 0);

	SetActionValue(ContextValue(nRevealCount, 0));
	SetValidExtraActionValueVector(ContextValue(1));

	UpdateTargetCharacteristic();
}

void COonaQueenoftheFaeSpell::UpdateTargetCharacteristic()
{
#if 1
	if (GET_INTEGER(m_nMaxSelectionCount))
	{
		if (CZone::IsBadCardMovement(ZoneId::Library, m_ReorderToZone) &&
			CZone::IsBadCardMovement(ZoneId::Library, m_SelectToZone))
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		else
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
	}
	else
		if (CZone::IsBadCardMovement(ZoneId::Library, m_ReorderToZone))
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
		else
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
#else
/*
	if (m_SelectToZone == ZoneId::Null && !m_bRevealCardsToOthers)
	{
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
		return;
	}

	if (m_SelectToZone == ZoneId::Battlefield ||
		m_SelectToZone == ZoneId::Hand)
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
	else
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
*/
#endif
}

CActionContainer* COonaQueenoftheFaeSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	if (!bSetNames)
		return pActionContainer;

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			int nCardCount = targetGroup.GetValue(pPlayer).nValue1;

			CString strActionName1;
			if (nCardCount == SpecialNumber::DivideBy2RoundUp)
				strActionName1 = _T(" to reveal the top half of the player's library, rounded up");
			else
			if (nCardCount == SpecialNumber::DivideBy2RoundDown)
				strActionName1 = _T(" to reveal the top half of the player's library, rounded down");
			else
			if (nCardCount != 1)
				strActionName1.Format(_T(" to reveal the top %d cards from library"),
					nCardCount);
			else
				strActionName1 = _T(" to reveal the top card from library");

			if (!strActionName.IsEmpty())
				strActionName += _T(",") + strActionName1;
			else
				strActionName += strActionName1;
		}

		pAction->AppendToActionName(strActionName);
	}

	return pActionContainer;
}

void COonaQueenoftheFaeSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();

	int nRevealCount = value.nValue1;
	if (nRevealCount == SpecialNumber::DivideBy2RoundDown)
		nRevealCount = pPlayer->GetZoneById(ZoneId::Library)->GetSize() / 2;
	else
		if (nRevealCount == SpecialNumber::DivideBy2RoundUp)
			nRevealCount = (pPlayer->GetZoneById(ZoneId::Library)->GetSize() + 1) / 2;
	//----------------------------------------------------------------------------------------------------------------

	if (m_pGame->IsThinking())
	{
		CZone* pDiscardZone = pPlayer->GetZoneById(ZoneId::Library);						// Cards in targeted player's zone

		CManaPool::Color prominentColor;

		if (pPlayer == m_pGame->GetThinkingPlayer())
		{
			// Assume worst case scenario
			std::map<CManaPool::Color, int> summary;
			pDiscardZone->GetCardColorSummary(summary, prominentColor, false);
		}
		else
		{
			prominentColor = pPlayer->GetDeck().GetProminentManaColorByCard();
		}

		switch(prominentColor.Get())
		{
		case CManaPool::Color::Blue:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("blue cards")), nRevealCount); break;
		case CManaPool::Color::Black:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("black cards")), nRevealCount); break;
		case CManaPool::Color::Green:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("green cards")), nRevealCount); break;
		case CManaPool::Color::Red:		DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("red cards")), nRevealCount); break;
		case CManaPool::Color::White:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("white cards")), nRevealCount); break;
		default:
			ATLASSERT(false);
			DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("blue cards")), nRevealCount);
		}

		return;
	}

	if (pCaster->IsComputer())
	{
		CManaPool::Color prominentColor = pPlayer->GetDeck().GetProminentManaColorByCard();

		CString strMessage;
		strMessage.Format(_T("%s selects %s"),
			pCaster->GetPlayerName(), CManaPool::Color::ToString(prominentColor));
		m_pGame->Message(
			strMessage,
			m_pGame->GetComputerImage(),
			MessageImportance::High
			);

		switch(prominentColor.Get())
		{
		case CManaPool::Color::Blue:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("blue cards")), nRevealCount); break;
		case CManaPool::Color::Black:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("black cards")), nRevealCount); break;
		case CManaPool::Color::Green:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("green cards")), nRevealCount); break;
		case CManaPool::Color::Red:		DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("red cards")), nRevealCount); break;
		case CManaPool::Color::White:	DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("white cards")), nRevealCount); break;
		default:
			ATLASSERT(false);
			DiscardCards(pCaster, pPlayer, CCardFilter::GetFilter(_T("blue cards")), nRevealCount);
		}

		return;
	}

	vector<SelectionEntry> entries;

	SelectionEntry entry;
	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("black cards"));
	entry.strText = _T("selects black");
	entries.push_back(entry);

	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("blue cards"));
	entry.strText = _T("selects blue");
	entries.push_back(entry);

	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("green cards"));
	entry.strText = _T("selects green");
	entries.push_back(entry);

	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("red cards"));
	entry.strText = _T("selects red");
	entries.push_back(entry);

	entry.dwContext = (DWORD)CCardFilter::GetFilter(_T("white cards"));
	entry.strText = _T("selects white");
	entries.push_back(entry);

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(),
		entries, 1, 1, GetCard(), pCaster,
		(DWORD)pCaster,				// Context 1
		(DWORD)pPlayer, (DWORD)nRevealCount);	// Context 2


	//------------------------------------------------------------------------------------------------------------------
	/*CDrawCardCommon::ResolveRevealLibrary(
		const_cast<CPlayer*>(pPlayer), const_cast<CPlayer*>(pCaster), nRevealCount, m_bRevealCardsToOthers,
		m_bReorder,
		m_ReorderToZone,
		m_ReorderToZonePlacement,
		NULL,
		m_nMaxSelectionCount,
		m_nMinSelectionCount,
		m_SelectToZone,
		m_SelectToZonePlacement,
		m_pSelectionCardFilter);*/
}
void COonaQueenoftheFaeSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);

	const CCardFilter* pDiscardFilter = NULL;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			pDiscardFilter = (const CCardFilter*)(it->dwContext);
			break;
		}

	CPlayer* pCaster = (CPlayer*)dwContext1;
	CPlayer* pDiscarder = (CPlayer*)dwContext2;
	int nRevealCount = (int)dwContext3;

	DiscardCards(pCaster, pDiscarder, pDiscardFilter, nRevealCount);
}
void COonaQueenoftheFaeSpell::DiscardCards(CPlayer* pCaster, CPlayer* pPlayer, const CCardFilter* pDiscardFilter, int nRevealCount)
{
	/*if (!CDiscardCardCommon::ResolveDiscardCards(
			pDiscarder,							// Discarder
			pCaster,							// Picker
			pCaster,							// Caster
			SpecialNumber::Any,
			MoveType::Discard,
			ZoneId::Hand,
			TRUE,
			pDiscardFilter,
			m_ToZoneId, m_bToOwnersZone, CardPlacement::Top))*/

	CZone* pLib = pPlayer->GetZoneById(ZoneId::Library);
	int tokencount = 0;

	for (int i = pLib->GetSize()-1; i > pLib->GetSize()-nRevealCount-1; --i)
	{
		CCard* pCard = pLib->GetAt(i);
		if (pDiscardFilter->IsCardIncluded(pCard)) tokencount=tokencount+1;
	}

	CTokenCreationModifier	pModifier = CTokenCreationModifier(GetGame(), _T("Faerie Rogue A"), 2862, tokencount);

	pModifier.ApplyTo(pCaster);

	CDrawCardCommon::ResolveRevealZone(
		const_cast<CPlayer*>(pPlayer), const_cast<CPlayer*>(pCaster), nRevealCount, m_bRevealCardsToOthers,
		m_bReorder,
		m_ReorderToZone,
		m_ReorderToZonePlacement,
		NULL,
		m_nMaxSelectionCount,
		m_nMinSelectionCount,
		ZoneId::Library,
		m_SelectToZone,
		m_SelectToZonePlacement,
		NULL);

	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}
}
//____________________________________________________________________________
//
/*
	Specific to Banfire card.
Ref:
	Banefire XR
	Sorcery
	Banefire deals X damage to target creature or player.
	If X is 5 or more, Banefire can't be countered by spells or abilities and the damage can't be prevented.
*/
CBanefireSpell::CBanefireSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 CardComparer* pComparer,
										 BOOL bTargetPlayers,
										 Life nLifeDelta,
										 PreventableType preventable)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers, new CMyTargeting)
	, m_bReverseLifeDeltaToController(FALSE)
	, m_bPropagateToTargetedPlayersCreatures(FALSE)
	, m_LifeModifier(Life(0), pCard, preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
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

CActionContainer* CBanefireSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;
	CString strFormat;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			const ContextValue& value = targetGroup.GetValue(pCard);

			Life nLifeDelta = Life(value.nValue1);
			if (nLifeDelta < Life(0))
			{
				if (bSetNames)
					if (m_LifeModifier.GetPreventable() == PreventableType::Preventable)
						strFormat = _T(" to deal %d damage");
					else
						strFormat = _T(" to lose %d life");

				// 5/6/2001
				if (m_Cost.HasExtraCost() &&							// Set to 'trick' if we can pay extra cost and we are overkilling
					GetExtraActionValueVector().nValue1 &&
					(-nLifeDelta > pCard->GetLife()) &&
					(nLifeDelta != Life(GetActionValue().nValue1)))
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					pAction->SetTrick();	// Overkill
				}

				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);
			}
			else
				if (nLifeDelta > Life(0))
				{
					if (bSetNames)
						strFormat = _T(" to gain %d life");

					if (!pAction->IsTrick())
						nBonusScore += GET_INTEGER(nLifeDelta);
				}
				else
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					if (bSetNames)
						strFormat = _T("");

					pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
				}

			if (bSetNames && !strFormat.IsEmpty())
			{
				strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			const ContextValue& value = targetGroup.GetValue(pPlayer);

			Life nLifeDelta(value.nValue1);
			if (nLifeDelta < Life(0))
			{
				if (bSetNames)
					if (m_LifeModifier.GetPreventable() == PreventableType::Preventable)
						strFormat = _T(" to deal %d damage");
					else
						strFormat = _T(" to lose %d life");

				if (m_Cost.HasExtraCost() &&								// Set to 'trick' if we can pay extra cost and we are overkilling
					GetExtraActionValueVector().nValue1 &&
					(-nLifeDelta > pPlayer->GetLife()) &&
					(nLifeDelta != Life(GetActionValue().nValue1)))	// 5/6/2001
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					pAction->SetTrick();	// Overkill
				}

				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);
			}
			else
				if (nLifeDelta > Life(0))
				{
					if (bSetNames)
						strFormat = _T(" to gain %d life");

					if (!pAction->IsTrick())
						nBonusScore += GET_INTEGER(nLifeDelta);
				}
				else
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					if (bSetNames)
						strFormat = _T("");

					pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
				}

			if (bSetNames && !strFormat.IsEmpty())
			{
				strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CBanefireSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	Life previousLife(pCreature->GetLife());

	Life nLifeDelta(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetDamageType(DamageType::SpellDamage | DamageType::NonCombatDamage);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	if (nLifeDelta>-Life(4)) m_LifeModifier.SetPreventable(PreventableType::Preventable);
	m_LifeModifier.ApplyTo(pCreature);

	if (m_bReverseLifeDeltaToController)
	{
		m_LifeModifier.SetLifeDelta(-nLifeDelta);
		m_LifeModifier.ApplyTo(pAction->GetController());
	}
}

void CBanefireSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	Life previousLife(pPlayer->GetLife());

	Life nLifeDelta(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	if (nLifeDelta<-Life(4)) m_LifeModifier.SetPreventable(PreventableType::NotPreventable);
	m_LifeModifier.ApplyTo(pPlayer);

	if (m_bReverseLifeDeltaToController)
	{
		m_LifeModifier.SetLifeDelta(-nLifeDelta);

		m_LifeModifier.ApplyTo(pAction->GetController());
	}

	if (m_bPropagateToTargetedPlayersCreatures)
	{
		m_LifeModifier.SetLifeDelta(nLifeDelta);

		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			if (pInplay->GetAt(i)->GetCardType().IsCreature())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pInplay->GetAt(i);

				m_LifeModifier.ApplyTo(pCreatureCard);
			}
		}
	}
}

//____________________________________________________________________________
//
/* 
Ref:
	Path to Exile W	
	Instant
	Exile target creature. Its controller may search his or her library for a basic land card, 
	put that card onto the battlefield tapped, then shuffle his or her library.

	Ghost Quarter
	Land
	Tap: Add 1 to your mana pool.
	Tap, Sacrifice Ghost Quarter: Destroy target land. Its controller may search his or her 
	library for a basic land card, put it onto the battlefield, then shuffle his or her library.

*/
CTargetMoveCardSearchSpell::CTargetMoveCardSearchSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   ZoneId fromZoneId, ZoneId toZoneId, BOOL bToOwner, MoveType moveType,
							    MinimumValue nMinSearchCount, MaximumValue nMaxSearchCount,
								const CCardFilter* pCardFilter, CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
	, m_bToOwner(bToOwner)
	, m_ToZoneId(toZoneId)
	, m_ReturnNodeId(NodeId::Null)
	, m_MoveType(moveType)
	, m_Placement(CardPlacement::Top)
	, m_nMinSearchCount(nMinSearchCount)
	, m_nMaxSearchCount(nMaxSearchCount)
	, m_SearchToZoneId(ZoneId::Battlefield)
	, m_bToOwnersZone(TRUE)
	, m_bToTop(TRUE)
	, m_bRevealCardsToOthers(TRUE)
	, m_pCardFilter(pCardFilter)
	, m_SearchSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CTargetMoveCardSearchSpell::OnSearchSelected))
	, m_bTapped(FALSE)
{
	AddAbilityTag(AbilityTag(fromZoneId, toZoneId));

	GetTargeting()->SetSubjectZoneId(fromZoneId);
}

BOOL CTargetMoveCardSearchSpell::CMyTargeting::SubjectAllowed(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (GetAbility()->GetGame()->HasTarget(pCard))
		return TRUE;

	CTargetMoveCardSearchSpell* pAbility = (CTargetMoveCardSearchSpell*)GetAbility();

	CPlayer* pController = pAbility->GetController();
	CZone* pMoveFromZone = pCard->GetZone();


	CZone* pMoveToZone = NULL;
	if (pAbility->m_bToOwner)
		pMoveToZone = pCard->GetOwner()->GetZoneById(pAbility->m_ToZoneId);
	else
		pMoveToZone = pController->GetZoneById(pAbility->m_ToZoneId);

	if (CZone::IsBadCardMovement(pController, pMoveFromZone, pMoveToZone))
	{
		bTrick = TRUE;

		if (!bIncludeTricks)
			return FALSE;
	}

	return TRUE;
}

CActionContainer* CTargetMoveCardSearchSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCard* pCard = it->GetPointer();
			const CZone* pMoveFromZone = pCard->GetZone();

			targetGroup.SetValue(pCard, ContextValue(/*(int)pMoveToZone,*/ (int)pMoveFromZone));

			if (bSetNames)
			{
				CString strActionName1;

				if (m_ToZoneId != ZoneId::Battlefield)
					strActionName1 = _T(" and moves ") + pCard->GetCardName();
				else
					strActionName1 = _T(" and gains control of ") + pCard->GetCardName();

				if (GetTargeting()->GetSubjectZoneId() != ZoneId::Battlefield)
					strActionName1 += _T(" in ") + pMoveFromZone->GetZoneName();

				if (m_ToZoneId != ZoneId::Battlefield)
					strActionName1 += _T(" to ") + m_ToZoneId.ToString();

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);
	}

	return pActionContainer;
}

void CTargetMoveCardSearchSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CZone* pMoveFromZone = (CZone*)value.nValue1;	// From zone can be outside of in-play
	CZone* pMoveToZone;
	CCard* pControlCard = pAction->GetOriginatingCard();

	m_pController = pCard->GetController();

	if (m_bToOwner)
		pMoveToZone = pCard->GetOwner()->GetZoneById(m_ToZoneId);
	else
		pMoveToZone = pAction->GetController()->GetZoneById(m_ToZoneId);

	if (CZone::IsSamePhysicalZone(pCard->GetZone(), pMoveFromZone))
	{
		if (m_ReturnNodeId.Any() &&
			pCard->GetController() != pAction->GetController())
		{
			CGainControlModifier* pModifier = new CGainControlModifier(m_pGame,pControlCard,true);

			m_pGame->GetScheduler()->ScheduleTask(
				new CCardModifierTask(pCard, std::auto_ptr<CCardModifier>(pModifier)),
				m_ReturnNodeId,
				TurnNumberDelta(-1));
		}

		CPlayer* pPreviousController = pCard->GetController();

		if (pMoveFromZone->GetZoneId() == ZoneId::Battlefield &&
			pMoveToZone->GetZoneId() == ZoneId::Battlefield)
		{
			CGainControlModifier* pModifier = new CGainControlModifier(m_pGame, pControlCard);
			pModifier->ApplyTo(pCard);
		}
		else
			if (pMoveFromZone != pMoveToZone)
				pCard->Move(pMoveToZone, pAction->GetController(), m_MoveType, m_Placement);

		m_CardControllerModifier.ApplyTo(pPreviousController);
	}

	std::vector<SelectionEntry> entries;
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Search your library"));

		entries.push_back(selectionEntry);
		}
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Don't search your library"));

		entries.push_back(selectionEntry);
		}

	m_SearchSelection.AddSelectionRequest(
			entries, 1, 1, NULL, m_pController);
}
void CTargetMoveCardSearchSpell::OnSearchSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				if (!CSearchCardCommon::ResolveSearchCards(
					m_pController,
					m_nMinSearchCount,
					m_nMaxSearchCount,
					m_pController,
					ZoneId::Library,
					m_pCardFilter,
					m_SearchToZoneId,
					m_bToOwnersZone,
					m_bToTop ? CardPlacement::Top : CardPlacement::Bottom,
					m_bTapped,
					m_bRevealCardsToOthers))
			{
					LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
			}

				return;
			}
			return;
		}
}
//____________________________________________________________________________
//
/*
Ref:
	Cabal Therapy B
	Sorcery
	Name a nonland card. Target player reveals his or her hand and discards all cards with that name.
	Flashback—Sacrifice a creature. (You may cast this card from your graveyard for its flashback cost. 
	Then exile it.)

	Cranial Extraction 3B
	Sorcery — Arcane
	Name a nonland card. Search target player's graveyard, hand, and library for all cards with that name 
	and exile them. Then that player shuffles his or her library.

	Thought Hemorrhage 2BR
	Sorcery
	Name a nonland card. Target player reveals his or her hand. Thought Hemorrhage deals 3 damage to that 
	player for each card with that name revealed this way. Search that player's graveyard, hand, and library 
	for all cards with that name and exile them. Then that player shuffles his or her library.
*/
CTargetPlayerDiscardCardNameSpell::CTargetPlayerDiscardCardNameSpell(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost,
															   ZoneId toZoneId,
															   BOOL bToOwnersZone, 
															   const CCardFilter* pCardFilter,
															   BOOL bExileAll, BOOL bDamage,
															   CTargeting* pTargeting ) 
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_ToZoneId(toZoneId)
	, m_bToOwnersZone(bToOwnersZone)
	, m_pCardFilter(pCardFilter)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTargetPlayerDiscardCardNameSpell::OnSelectionDone))
	, m_bExileAll(bExileAll)
	, m_bDamage(bDamage)
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, toZoneId));

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CTargetPlayerDiscardCardNameSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);
			int nDiscardCount = targetGroup.GetValue(pPlayer).nValue1;

			if (bSetNames)
			{
				strActionName1 = _T(" to discard cards");

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
				nBonusScore += pPlayer->GetZoneById(ZoneId::Hand)->GetSize() / 2;	// Pure guess
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetPlayerDiscardCardNameSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();
	int nZoneCount = pPlayer->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pPlayer->GetZone(nZone);
		int nZoneSize = pZone->GetSize();

		for (int i = 0; i < nZoneSize; ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (!pCard->GetCardType().IsToken() &&  
				m_pCardFilter->IsCardIncluded(pCard)) // list valid items in action list
			{
				bool bIncluded = false;
				for (int j = 0; j < nCardListSize; ++j)
					if (pCardList.GetAt(j)->GetPrintedCardName() == pCard->GetPrintedCardName())
					{
						bIncluded = true;
						break;
					}

				if (!bIncluded)
				{
					pCardList.AddCard(pCard, CardPlacement::Top);
					nCardListSize++;
				}
			}
		}
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("No card name"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pCardList.GetSize(); ++i)
		{
			const CCard* pCard = pCardList.GetAt(i);

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Search for %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(),
		entries, 1, 1, GetCard(), pCaster,
		(DWORD)pCaster,				// Context 1
		(DWORD)pPlayer);	// Context 2
}

void CTargetPlayerDiscardCardNameSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);

	CCard* pDiscardCard = NULL;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{

				return;
			}

			CCard* pCard = (CCard*)(it->dwContext);
			pDiscardCard = pCard;
			break;
		}

	CPlayer* pCaster = (CPlayer*)dwContext1;
	CPlayer* pDiscarder = (CPlayer*)dwContext2;

	CCardFilter* pDiscardFilter;
	CCardFilter pDiscardFilter_temp;

	pDiscardFilter = NULL;

	if (pDiscardCard)
		pDiscardFilter_temp.SetComparer(new CardNameComparer(pDiscardCard->GetPrintedCardName()));

	pDiscardFilter = &pDiscardFilter_temp;

	DiscardCards(pCaster, pDiscarder, pDiscardFilter);
}

void CTargetPlayerDiscardCardNameSpell::DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter)
{
	if (m_bDamage)
	{
		CZone* pHand = pDiscarder->GetZoneById(ZoneId::Hand);

		int n = pDiscardFilter->CountIncluded(pHand->GetCardContainer());

		CLifeModifier pModifier(Life(-n*3), this->GetCard(), PreventableType::Preventable, DamageType::SpellDamage | DamageType::NonCombatDamage);
		pModifier.ApplyTo(pDiscarder);
	}

	if (m_bExileAll != TRUE)
	{
		if (!CDiscardCardCommon::ResolveDiscardCards(
			pDiscarder,							// Discarder
			pCaster,							// Picker
			pCaster,							// Caster
			SpecialNumber::Any,
			MoveType::Discard,
			ZoneId::Hand,
			TRUE,
			pDiscardFilter,
			m_ToZoneId, m_bToOwnersZone, CardPlacement::Top))
		{
			LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		}
	}
	else
	{
		if (!CSearchCardCommon::ResolveSearchCards(
			pDiscarder,
			MinimumValue(SpecialNumber::Any),
			MaximumValue(SpecialNumber::Any),
			pCaster,
			ZoneId::Library,
			pDiscardFilter,
			ZoneId::Exile,
			TRUE,
			CardPlacement::Top, FALSE, TRUE))
		{
			LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		}

		if (!CDiscardCardCommon::ResolveDiscardCards(
				pDiscarder,							// Discarder
				pCaster,							// Picker
				pCaster,							// Caster
				SpecialNumber::Any,
				MoveType::Others,
				ZoneId::Hand,
				TRUE,
				pDiscardFilter,
				m_ToZoneId, m_bToOwnersZone, CardPlacement::Top))
			{
				LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
			}
		if (!CSearchCardCommon::ResolveSearchCards(
				pDiscarder,
				MinimumValue(SpecialNumber::All),
				MaximumValue(SpecialNumber::All),
				pCaster,
				ZoneId::Graveyard,
				pDiscardFilter,
				ZoneId::Exile,
				TRUE,
				CardPlacement::Top, FALSE, TRUE))
			{
				LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
			}
		CZoneModifier pmodifier2 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All, CZoneModifier::RoleType::PrimaryPlayer,
													CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
		pmodifier2.ApplyTo(pDiscarder);
		}
	}

//____________________________________________________________________________
//
/*
	Specific to Lammastide Weave card.
Ref:
	Lammastide Weave 1G
	Instant
	Name a card, then target player puts the top card of his or her library into his or her graveyard. 
	If that card is the named card, you gain life equal to its converted mana cost.
	Draw a card.
*/
CLammastideWeaveSpell::CLammastideWeaveSpell(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost,
															   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CLammastideWeaveSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag::LifeGain);

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CLammastideWeaveSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);
			int nDiscardCount = targetGroup.GetValue(pPlayer).nValue1;

			if (bSetNames)
			{
				strActionName1 = _T(" to put the top card of his or her library into his or her graveyard");

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
				nBonusScore += pPlayer->GetZoneById(ZoneId::Hand)->GetSize() / 2;	// Pure guess
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CLammastideWeaveSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();
	int nZoneCount = pPlayer->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pPlayer->GetZone(nZone);
		int nZoneSize = pZone->GetSize();

		for (int i = 0; i < nZoneSize; ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (!pCard->GetCardType().IsToken())
			{
				bool bIncluded = false;
				for (int j = 0; j < nCardListSize; ++j)
					if (pCardList.GetAt(j)->GetPrintedCardName() == pCard->GetPrintedCardName())
					{
						bIncluded = true;
						break;
					}

				if (!bIncluded)
				{
					pCardList.AddCard(pCard, CardPlacement::Top);
					nCardListSize++;
				}
			}
		}
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("No card name"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pCardList.GetSize(); ++i)
		{
			const CCard* pCard = pCardList.GetAt(i);

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Search for %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(),
		entries, 1, 1, GetCard(), pCaster,
		(DWORD)pCaster,				// Context 1
		(DWORD)pPlayer);	// Context 2
}

void CLammastideWeaveSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);

	CCard* pDiscardCard = NULL;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{

				return;
			}

			CCard* pCard = (CCard*)(it->dwContext);
			pDiscardCard = pCard;
			break;
		}

	CPlayer* pCaster = (CPlayer*)dwContext1;
	CPlayer* pDiscarder = (CPlayer*)dwContext2;

	CCardFilter* pDiscardFilter;
	CCardFilter pDiscardFilter_temp;

	pDiscardFilter = NULL;

	if (pDiscardCard)
		pDiscardFilter_temp.SetComparer(new CardNameComparer(pDiscardCard->GetPrintedCardName()));

	pDiscardFilter = &pDiscardFilter_temp;

	DiscardCards(pCaster, pDiscarder, pDiscardFilter);
}

void CLammastideWeaveSpell::DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter)
{
	CCard* pNextDraw = pDiscarder->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (!pNextDraw->GetCardType().IsLand())
	{
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal();
	}

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pDiscarder);

	pModifier.ApplyTo(pNextDraw);

	if (pDiscardFilter->IsCardIncluded(pNextDraw))
	{
		CLifeModifier pModifier1 = CLifeModifier(Life(+nCost), NULL, PreventableType::NotPreventable);
		pModifier1.ApplyTo(pCaster);
	}

	CDrawCardModifier pModifier2 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	pModifier2.ApplyTo(pCaster);
}
//____________________________________________________________________________
//
// If you have time please convert from CTargetDrawCard spell via __super (only last selection need to be added)
/*
	Specific to Compulsive Research card.
Ref:
	Compulsive Research 2U
	Sorcery
	Target player draws three cards. Then that player discards two cards unless he or she 
	discards a land card.
*/
CCompulsiveResearchSpell::CCompulsiveResearchSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   int nDrawCount)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_nDiscardCount(0)
	, m_bFromDrawsOnly(FALSE)
	, m_DiscardToZone(ZoneId::Null)
	, m_bDiscardToTop(FALSE)
	, m_DiscardMoveType(MoveType::Discard)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CCompulsiveResearchSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	ATLASSERT(nDrawCount >= 0);

	SetActionValue(ContextValue(nDrawCount, 0));
	SetValidExtraActionValueVector(ContextValue(1));

	UpdateTargetCharacteristic();
}

void CCompulsiveResearchSpell::SetDiscard(int nDiscardCount, BOOL bFromDrawsOnly, MoveType discardMoveType,
									  ZoneId discardToZone, BOOL bDiscardToTop)
{
	m_nDiscardCount = nDiscardCount;
	m_bFromDrawsOnly = bFromDrawsOnly;
	m_DiscardToZone = discardToZone;
	m_bDiscardToTop = bDiscardToTop;
	m_DiscardMoveType = discardMoveType;

	UpdateTargetCharacteristic();
}

void CCompulsiveResearchSpell::UpdateTargetCharacteristic()
{
	if (m_nDiscardCount > GetActionValue().nValue1)
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	else
		if (m_nDiscardCount)
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
		else
			GetTargeting()->SetDefaultCharacteristic(Characteristic::Positive);
}

CActionContainer* CCompulsiveResearchSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);

			int nDrawCount = targetGroup.GetValue(pPlayer).nValue1;

			if (bSetNames)
			{
				if (nDrawCount == 1)
					strActionName1 = _T(" to draw 1 card");
				else
					strActionName1.Format(_T(" to draw %d cards"),
						nDrawCount);

				if (m_nDiscardCount)
				{
					CString strTemp;
					strTemp.Format(_T(" to %s %d cards"),
						m_DiscardMoveType == MoveType::Discard ? _T("discard") : _T("move"),
						m_nDiscardCount);
					strActionName1 += strTemp;
				}

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
				nBonusScore += nDrawCount;
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CCompulsiveResearchSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	int nDrawCount = value.nValue1;
	ATLASSERT(nDrawCount >= 0);

	if (!CDrawCardCommon::ResolveDrawCards(pPlayer,
										   pPlayer,
										   nDrawCount,
										   m_DiscardMoveType,
										   m_nDiscardCount,
										   m_bFromDrawsOnly,
										   m_DiscardToZone,
										   TRUE, // to owner's zone
										   m_bDiscardToTop ? CardPlacement::Top : CardPlacement::Bottom))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}

	CCardFilter temp;
	temp.SetComparer(new CardTypeComparer(CardType::_Land,false));
	std::vector<SelectionEntry> entries;

	if (temp.CountIncluded(GetController()->GetZoneById(ZoneId::Hand)->GetCardContainer())>0)
		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("Discard a land"));

		entries.push_back(selectionEntry);
		}

		{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("Discard two cards"));

		entries.push_back(selectionEntry);
		}


	m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, 1, 1,
		GetCard(), const_cast<CPlayer*>(pPlayer));
}
void CCompulsiveResearchSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
			if (!CDiscardCardCommon::ResolveDiscardCards(
			pSelectionPlayer,	// Discarder
			pSelectionPlayer,	// Picker
			pSelectionPlayer,	// Caster
			1,
			MoveType::Discard,
			ZoneId::Hand,
			FALSE,
			CCardFilter::GetFilter(_T("lands")),
			ZoneId::Graveyard, TRUE, CardPlacement::Top, TRUE, FALSE))
				return;
			}
			else
				if (!CDiscardCardCommon::ResolveDiscardCards(
			pSelectionPlayer,	// Discarder
			pSelectionPlayer,	// Picker
			pSelectionPlayer,	// Caster
			2,
			MoveType::Discard,
			ZoneId::Hand,
			FALSE,
			CCardFilter::GetFilter(_T("cards")),
			ZoneId::Graveyard, TRUE, CardPlacement::Top, TRUE, FALSE))
			return;
		}
}

//____________________________________________________________________________
//
/*
	Specific to Intuition card.
Ref:
	Intuition 2U
	Instant
	Search your library for three cards and reveal them. Target opponent chooses one. 
	Put that card into your hand and the rest into your graveyard. 
	Then shuffle your library.
*/
CIntuitionSpell::CIntuitionSpell(CCard* pCard, AbilityType abilityType,
															LPCTSTR strManaCost,
															MinimumValue nMinSearchCount,
															MaximumValue nMaxSearchCount,
															const CCardFilter* pCardFilter,
															CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_nMinSearchCount(nMinSearchCount)
	, m_nMaxSearchCount(nMaxSearchCount)
	, m_ToZoneId(ZoneId::Library)
	, m_bToOwnersZone(FALSE)
	, m_bToTop(TRUE)
	, m_bTapped(FALSE)
	, m_bRevealCardsToOthers(TRUE)
	, m_pCardFilter(pCardFilter)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CIntuitionSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));

	SetActionValue(ContextValue(GET_INTEGER(nMaxSearchCount), GET_INTEGER(nMinSearchCount)));					// Note: Do not use SetExtraManaCost() when nDiscardCount is unlimited
	SetValidExtraActionValueVector(ContextValue(1));

	UpdateTargetCharacteristic();
}

void CIntuitionSpell::UpdateTargetCharacteristic()
{
	if (m_ToZoneId == ZoneId::Graveyard ||
		m_ToZoneId == ZoneId::Exile)
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
	else
		GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
}

CActionContainer* CIntuitionSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);
			int nMaxSearchCount = targetGroup.GetValue(pPlayer).nValue1;
			int nMinSearchCount = targetGroup.GetValue(pPlayer).nValue2;

			if (bSetNames)
			{
				ATLASSERT(nMaxSearchCount != 0);

				if (nMaxSearchCount == 1)
					strActionName1.Format(_T(" to search for %s"), m_pCardFilter->GetFilterName());
				else
					if (nMaxSearchCount != SpecialNumber::Any)
						strActionName1.Format(_T(" to search for %s%d %s"),
							nMinSearchCount < nMaxSearchCount ? _T("up to ") : _T(""), nMaxSearchCount, m_pCardFilter->GetFilterNamePlural());
					else
						strActionName1.Format(_T(" to search %s"), m_pCardFilter->GetFilterNamePlural());

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			/* REVIEW
			if (!pAction->IsTrick())
			{
				if (nSearchCount != SpecialNumber::Any)
					nBonusScore += nSearchCount;
				else
					nBonusScore += pPlayer->GetZoneById(ZoneId::Library)->GetSize() / 2;	// Pure guess
			}
			*/
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CIntuitionSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();

	MaximumValue nMaxSearchCount(value.nValue1);
	MinimumValue nMinSearchCount(value.nValue2);

	CCountedCardContainer SearchedCards;

	if (!CSearchCardCommon::ResolveSearchCards(
			pCaster,
			nMinSearchCount,
			nMaxSearchCount,
			pCaster,
			ZoneId::Library,
			m_pCardFilter,
			m_ToZoneId,
			m_bToOwnersZone,
			m_bToTop ? CardPlacement::Top : CardPlacement::Bottom,
			m_bTapped,
			m_bRevealCardsToOthers, 0, &SearchedCards))
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
	}

	std::vector<SelectionEntry> entries;

	for (int i = 0; i < SearchedCards.GetSize(); ++i)
		{
			CCard* pCard = SearchedCards.GetAt(i);

			{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("choose %s"), pCard->GetCardName(TRUE));

			entries.push_back(selectionEntry);
			}

		}

	 m_SelectionSupport.AddSelectionRequest(
			entries, 1, 1, NULL, pPlayer);

}
void CIntuitionSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer,
											   DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{

			CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE);
			CMoveCardModifier pModifier3 = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE);
			CZoneModifier pModifier2 = CZoneModifier(GetGame(), ZoneId::Library,2, CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
			pModifier2.AddSelection(MinimumValue(2), MaximumValue(2), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by
			CZoneModifier::RoleType::PrimaryPlayer, // reveal to
			NULL, // what cards
			ZoneId::Graveyard, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

			CCard* pCard = (CCard*)it->dwContext;

			pModifier1.ApplyTo(pCard);

			if (m_pGame->GetNextPlayer(pSelectionPlayer)->GetZoneById(ZoneId::Library)->GetSize()>1)
			pModifier2.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer));
			else
			if (m_pGame->GetNextPlayer(pSelectionPlayer)->GetZoneById(ZoneId::Library)->GetSize() == 1)
				pModifier3.ApplyTo(m_pGame->GetNextPlayer(pSelectionPlayer)->GetZoneById(ZoneId::Library)->GetAt(0));

			//m_SearchedCards.RemoveAll();

		return;
		}
		return;
}
//____________________________________________________________________________
//
/*
Ref:
	Stave Off W
	Instant
	Target creature gains protection from the color of your choice until end of turn. (It can't be 
	blocked, targeted, dealt damage, or enchanted by anything of that color.)
*/
CTargetGainKeywordSpell::CTargetGainKeywordSpell(
		CCard* pCard, AbilityType abilityType,
		LPCTSTR strManaCost,
		CardComparer* pTargetComparer)
	: CTargetSpell(pCard, abilityType, strManaCost, pTargetComparer, FALSE)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTargetGainKeywordSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag::CardChange);
}

void CTargetGainKeywordSpell::AddCardKeywordToSelection(CardKeyword cardKeywordToAdd, BOOL bThisTurnOnly,
														LPCTSTR strCardKeywordText)
{
	CardKeywordSelectionEntry entry;
	entry.cardKeywordToAdd = cardKeywordToAdd;
	entry.bThisTurnOnly = bThisTurnOnly;
	entry.strCardKeywordText = strCardKeywordText;

	m_Selection.push_back(entry);
}

void CTargetGainKeywordSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	vector<SelectionEntry> entries;
	for (unsigned i = 0; i < m_Selection.size(); ++i)
	{
		SelectionEntry entry;
		entry.dwContext = i;
		entry.strText.Format(_T("gives %s protection from %s"), pCard->GetCardName(), m_Selection[i].strCardKeywordText);
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)pCard);
}
void CTargetGainKeywordSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	CCard* pCard = (CCard*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			int nSelectedIndex = it->dwContext;

			CCardKeywordModifier pModifier;
			pModifier.GetModifier().SetToAdd(m_Selection[nSelectedIndex].cardKeywordToAdd);
			pModifier.GetModifier().SetOneTurnOnly(m_Selection[nSelectedIndex].bThisTurnOnly);
			pModifier.ApplyTo(pCard);

			break;
		}
}

//____________________________________________________________________________
//
/*
Ref:
	Detonate XR
	Sorcery
	Destroy target artifact with converted mana cost X. It can't be regenerated. Detonate deals 
	X damage to that artifact's controller.
*/
CTargetExtraMoveCardSpell::CTargetExtraMoveCardSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   ZoneId fromZoneId, ZoneId toZoneId, BOOL bToOwner, MoveType moveType, BOOL pOrLess,
							   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
	, m_bToOwner(bToOwner)
	, m_ToZoneId(toZoneId)
	, m_ReturnNodeId(NodeId::Null)
	, m_MoveType(moveType)
	, m_Placement(CardPlacement::Top)
	, m_pOrLess(pOrLess)
{
	AddAbilityTag(AbilityTag(fromZoneId, toZoneId));

	GetTargeting()->SetSubjectZoneId(fromZoneId);
}

BOOL CTargetExtraMoveCardSpell::CMyTargeting::SubjectAllowed(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (GetAbility()->GetGame()->HasTarget(pCard))
		return TRUE;

	CTargetExtraMoveCardSpell* pAbility = (CTargetExtraMoveCardSpell*)GetAbility();

	CPlayer* pController = pAbility->GetController();
	CZone* pMoveFromZone = pCard->GetZone();


	CZone* pMoveToZone = NULL;
	if (pAbility->m_bToOwner)
		pMoveToZone = pCard->GetOwner()->GetZoneById(pAbility->m_ToZoneId);
	else
		pMoveToZone = pController->GetZoneById(pAbility->m_ToZoneId);

	if (CZone::IsBadCardMovement(pController, pMoveFromZone, pMoveToZone))
	{
		bTrick = TRUE;

		if (!bIncludeTricks)
			return FALSE;
	}

	return TRUE;
}
CActionContainer* CTargetExtraMoveCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;

	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();
		BOOL bFound = FALSE;

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCard* pCard = it->GetPointer();
			const CZone* pMoveFromZone = pCard->GetZone();

			int nExtraCost = pAction->GetCostConfigEntry().GetExtraValue();
			if ((pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal() == nExtraCost) || 
				(m_pOrLess == TRUE && (nExtraCost >= (int)pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal())))
				bFound = TRUE;
			else
			break;

			targetGroup.SetValue(pCard, ContextValue(/*(int)pMoveToZone,*/ (int)pMoveFromZone));

			if (bSetNames)
			{
				CString strActionName1;

				if (m_ToZoneId != ZoneId::Battlefield)
					strActionName1 = _T(" and moves ") + pCard->GetCardName();
				else
					strActionName1 = _T(" and gains control of ") + pCard->GetCardName();

				if (GetTargeting()->GetSubjectZoneId() != ZoneId::Battlefield)
					strActionName1 += _T(" in ") + pMoveFromZone->GetZoneName();

				if (m_ToZoneId != ZoneId::Battlefield)
					strActionName1 += _T(" to ") + m_ToZoneId.ToString();

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

	//	counted_ptr<CTargetExtraMoveCardSpell> cpAction1 = (CTargetExtraMoveCardSpell*)pAction;//.GetPointer();

		if (bFound)
			pActionContainer1->Add(pAction);

	}
	delete pActionContainer;

	return pActionContainer1;
}
void CTargetExtraMoveCardSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CZone* pMoveFromZone = (CZone*)value.nValue1;	// From zone can be outside of in-play
	CZone* pMoveToZone;
	CCard* pControlCard = pAction->GetOriginatingCard();

	if (m_bToOwner)
		pMoveToZone = pCard->GetOwner()->GetZoneById(m_ToZoneId);
	else
		pMoveToZone = pAction->GetController()->GetZoneById(m_ToZoneId);

	if (CZone::IsSamePhysicalZone(pCard->GetZone(), pMoveFromZone))
	{
		if (m_ReturnNodeId.Any() &&
			pCard->GetController() != pAction->GetController())
		{
			CGainControlModifier* pModifier = new CGainControlModifier(m_pGame,pControlCard,true);

			m_pGame->GetScheduler()->ScheduleTask(
				new CCardModifierTask(pCard, std::auto_ptr<CCardModifier>(pModifier)),
				m_ReturnNodeId,
				TurnNumberDelta(-1));
		}

		CPlayer* pPreviousController = pCard->GetController();

		if (pMoveFromZone->GetZoneId() == ZoneId::Battlefield &&
			pMoveToZone->GetZoneId() == ZoneId::Battlefield)
		{
			CGainControlModifier* pModifier = new CGainControlModifier(m_pGame, pControlCard);
			pModifier->ApplyTo(pCard);
		}
		else
			if (pMoveFromZone != pMoveToZone)
				pCard->Move(pMoveToZone, pAction->GetController(), m_MoveType, m_Placement);

		m_CardControllerModifier.ApplyTo(pPreviousController);
	}
}
//____________________________________________________________________________
//
/*
Specific to Gifts Ungiven card.
Ref:
	Gifts Ungiven 3U
	Instant
	Search your library for up to four cards with different names and reveal them. 
	Target opponent chooses two of those cards. Put the chosen cards into your graveyard and 
	the rest into your hand. Then shuffle your library.
*/
CGiftsUngivenSpell::CGiftsUngivenSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer, CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CGiftsUngivenSpell::OnSelectionDone))
	, m_pComparer(pComparer)
	, m_pAmount(0)
{
	AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
}
CActionContainer* CGiftsUngivenSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);
			int nMaxSearchCount = targetGroup.GetValue(pPlayer).nValue1;
			int nMinSearchCount = targetGroup.GetValue(pPlayer).nValue2;

			if (bSetNames)
			{
				ATLASSERT(nMaxSearchCount != 0);

				strActionName1.Format(_T(" to search your library for four cards with different names and reveal them"));
			}
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void  CGiftsUngivenSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	const CManaConsumptionAbilityAction* pAction1 = (const CManaConsumptionAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	m_FoundCards.RemoveAll();
	CCardFilter* CardFilterTemp = new CCardFilter(new TrueCardComparer);
	CardFilterTemp->AddComparer(m_pComparer);
	// The player has the option of selecting up to 4 cards (i.e. 0,1,2,3,4 cards), in this implementation these
	// selected cards are 'stored' on top of the player's library during the selection process and while the opponent is choosing 
	// which cards the player must put into the graveyard.
	for (int i = 0; i < 4; ++i)
	{
		CPlayerSearchModifier modifier = CPlayerSearchModifier(const_cast<CPlayer*>(pCaster), MinimumValue(0), MaximumValue(1), const_cast<CPlayer*>(pCaster),
															 ZoneId::Library, CardFilterTemp, ZoneId::Library, TRUE, CardPlacement::Top,
															 FALSE, FALSE, FALSE, &m_FoundCards,FALSE);
		modifier.ApplyTo(const_cast<CPlayer*>(pCaster));
		if (m_FoundCards.GetSize() == i) 
			break;
		else 
			CardFilterTemp->AddNegateComparer(new CardNameComparer(m_FoundCards.GetAt(i)->GetPrintedCardName())); // ensure two cards with the same name can be
																												  // choosen.  When the player chooses a card all
																												  // cards with the same name are removed from the 
																												  // 'cards available that can be chosen' list.
	}

	m_pAmount = m_FoundCards.GetSize();

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Library, ZoneId::Library, TRUE);

	for (int i = 0; i < m_FoundCards.GetSize(); ++i)
		modifier.ApplyTo( m_FoundCards.GetAt(i));

	std::vector<SelectionEntry> entries;

	for (int i = 0; i < m_FoundCards.GetSize(); ++i)
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)m_FoundCards.GetAt(i);
		selectionEntry.strText.Format(_T("choose %s"), m_FoundCards.GetAt(i)->GetCardName(TRUE));

		entries.push_back(selectionEntry);

		const_cast<CPlayer*>(pCaster)->MemorizeCard(m_FoundCards.GetAt(i));
		pAction->GetAssociatedPlayer()->MemorizeCard(m_FoundCards.GetAt(i));
	}
	int iToGraveyardCardCnt;         // store the number of cards out of the player selection that opponent will choose to send to the graveyard 
	if (m_pAmount > 2)				 // player chose 3 or 4 cards so opponent will choose 2 cards to send to the graveyard
		iToGraveyardCardCnt = 2;
	else							 // player chose 0, 1 or 2 cards so opponent will send all chosen cards to the graveyard
		iToGraveyardCardCnt = m_pAmount;
	m_pGame->GetSelection().AddSelectionRequest(m_cpSelectionListener.GetPointer(), entries, iToGraveyardCardCnt, iToGraveyardCardCnt,	 
		GetCard(), pAction->GetAssociatedPlayer());
}

void CGiftsUngivenSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();
	
	CZone* pLib =  m_pGame->GetNextPlayer(pSelectionPlayer)->GetZoneById(ZoneId::Library);
	// which cards to move to the graveyard are always chosen by the opponent, even in the case where the player chose 
	// to search for 0,1 or 2 cards and the selection of these cards to move to the graveyard is compulsary.  
	CCard* pCard;
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			pCard = (CCard*)it->dwContext;
			CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE);
			modifier.ApplyTo(pCard);
			m_FoundCards.RemoveCard(pCard);
			m_pAmount--;
		}

	CMoveCardModifier modifier = CMoveCardModifier(ZoneId::Library, ZoneId::Hand, TRUE);

	for (int i = 0; i <  m_pAmount; ++i)
		modifier.ApplyTo(pLib->GetTopCard());

	m_pGame->GetNextPlayer(pSelectionPlayer)->GetZoneById(ZoneId::Library)->Shuffle();
	m_pGame->GetNextPlayer(pSelectionPlayer)->SetSearchedLibraryThisTurn(TRUE);
}

//____________________________________________________________________________
//
/*
Specific to Searing Blaze card.
Ref:
	Searing Blaze RR
	Instant	
	Searing Blaze deals 1 damage to target player and 1 damage to target creature that player controls.
	Landfall — If you had a land enter the battlefield under your control this turn, Searing Blaze deals 
	3 damage to that player and 3 damage to that creature instead.
*/
CSearingBlazeSpell::CSearingBlazeSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 CardComparer* pComparer,
										 BOOL bTargetPlayers,
										 Life nLifeDelta,
										 PreventableType preventable)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers, new CMyTargeting)
	, m_bReverseLifeDeltaToController(FALSE)
	, m_bPropagateToTargetedPlayersCreatures(FALSE)
	, m_LifeModifier(Life(0), pCard, preventable, DamageType::SpellDamage | DamageType::NonCombatDamage)
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
	GetTargeting()->SetSubjectCount(2,2, FALSE);
}

CActionContainer* CSearingBlazeSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;
	CPlayer* c_controller;
	BOOL pTargeted = FALSE;
	BOOL cTargeted = FALSE;


	CPlayer* pController = GetController();

	CString strActionName1;
	CString strFormat;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		pTargeted = FALSE; cTargeted = FALSE; c_controller = NULL;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			const ContextValue& value = targetGroup.GetValue(pCard);
			if (pCard) {cTargeted = TRUE; c_controller = pCard->GetController();}

			Life nLifeDelta = Life(value.nValue1);
			if (nLifeDelta < Life(0))
			{
				if (bSetNames)
					if (m_LifeModifier.GetPreventable() == PreventableType::Preventable)
						strFormat = _T(" to deal %d damage");
					else
						strFormat = _T(" to lose %d life");

				// 5/6/2001
				if (m_Cost.HasExtraCost() &&							// Set to 'trick' if we can pay extra cost and we are overkilling
					GetExtraActionValueVector().nValue1 &&
					(-nLifeDelta > pCard->GetLife()) &&
					(nLifeDelta != Life(GetActionValue().nValue1)))
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					pAction->SetTrick();	// Overkill
				}

				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);
			}
			else
				if (nLifeDelta > Life(0))
				{
					if (bSetNames)
						strFormat = _T(" to gain %d life");

					if (!pAction->IsTrick())
						nBonusScore += GET_INTEGER(nLifeDelta);
				}
				else
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					if (bSetNames)
						strFormat = _T("");

					pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
				}

			if (bSetNames && !strFormat.IsEmpty())
			{
				strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			const ContextValue& value = targetGroup.GetValue(pPlayer);

			if (pPlayer && pPlayer == c_controller) pTargeted = TRUE;

			Life nLifeDelta(value.nValue1);
			if (nLifeDelta < Life(0))
			{
				if (bSetNames)
					if (m_LifeModifier.GetPreventable() == PreventableType::Preventable)
						strFormat = _T(" to deal %d damage");
					else
						strFormat = _T(" to lose %d life");

				if (m_Cost.HasExtraCost() &&								// Set to 'trick' if we can pay extra cost and we are overkilling
					GetExtraActionValueVector().nValue1 &&
					(-nLifeDelta > pPlayer->GetLife()) &&
					(nLifeDelta != Life(GetActionValue().nValue1)))	// 5/6/2001
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					pAction->SetTrick();	// Overkill
				}

				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);
			}
			else
				if (nLifeDelta > Life(0))
				{
					if (bSetNames)
						strFormat = _T(" to gain %d life");

					if (!pAction->IsTrick())
						nBonusScore += GET_INTEGER(nLifeDelta);
				}
				else
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					if (bSetNames)
						strFormat = _T("");

					pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
				}

			if (bSetNames && !strFormat.IsEmpty())
			{
				strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));

		if (pTargeted && cTargeted) pActionContainer1->Add(pAction);
	}



	delete pActionContainer;

	return pActionContainer1;
}

void CSearingBlazeSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pCreature = (CCreatureCard*)pCard;
	Life previousLife(pCreature->GetLife());

	Life nLifeDelta(value.nValue1);

	//if (m_LifeModifier.GetPreventable() == PreventableType::NotPreventable && nLifeDelta<Life(0)) m_LifeModifier.SetDamageType(DamageType::NonCombatDamage);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pCreature);

	if (m_bReverseLifeDeltaToController)
	{
		m_LifeModifier.SetLifeDelta(-nLifeDelta);

		m_LifeModifier.ApplyTo(pAction->GetController());
	}
}

void CSearingBlazeSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	Life previousLife(pPlayer->GetLife());

	Life nLifeDelta(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pPlayer);

	if (m_bReverseLifeDeltaToController)
	{
		m_LifeModifier.SetLifeDelta(-nLifeDelta);

		m_LifeModifier.ApplyTo(pAction->GetController());
	}

	if (m_bPropagateToTargetedPlayersCreatures)
	{
		m_LifeModifier.SetLifeDelta(nLifeDelta);

		CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pInplay->GetSize(); ++i)
		{
			if (pInplay->GetAt(i)->GetCardType().IsCreature())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)pInplay->GetAt(i);

				m_LifeModifier.ApplyTo(pCreatureCard);
			}
		}
	}
}

//____________________________________________________________________________
//
/*
Ref:
	Horde of Notions
	WUBRG
	Legendary Creature — Elemental
	Vigilance, trample, haste
	WUBRG: You may play target Elemental card from your graveyard without paying its mana cost.
*/
CTargetFreeCastSpell::CTargetFreeCastSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   ZoneId fromZoneId, CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTargetFreeCastSpell::OnSelectionDone))
{
	GetTargeting()->SetSubjectZoneId(fromZoneId);
}


void CTargetFreeCastSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCard* toCast;

	toCast = pCard;

	m_Selection.clear();
	int n=0;

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	entry.dwContext = 99999;
	entry.strText.Format(_T("don't cast/play"));

	entries.push_back(entry);

	if (!toCast->GetCardType().IsLand())
	{
		if (toCast->GetController() != pAction->GetController()) toCast->SetController(pAction->GetController());

		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

			if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				sel_entry.ActionIndex = j;

				m_Selection.push_back(sel_entry);

				SelectionEntry entry;

				entry.dwContext = n;
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				n=n+1;

				entries.push_back(entry);
			}
		}
	}
	else
	{
		toCast->GetCardKeyword()->AddFreecast(TRUE);

		if (((CBasicLandCard*)toCast)->GetLandAbility()->IsPlayable(TRUE, TRUE))
		{
			SelectionEntry entry;

			entry.dwContext = 99998;
			entry.strText.Format(_T("play %s"), toCast->GetCardName());

			entries.push_back(entry);
		}
		else
			toCast->GetCardKeyword()->RemoveFreecast(TRUE);
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)toCast);
}

void CTargetFreeCastSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;
			int j = (int)it->dwContext;

			if (j == 99999) break;
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
				}
				else
				{
					m_Selection[j].PerformAction(toCast);
//					toCast->SetController(pSelectionPlayer);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
				}

		}
}
//____________________________________________________________________________
//
/*
Ref: 
	Cursed Scroll 1
	Artifact
	3, Tap: Name a card. Reveal a card at random from your hand. If it's the named card, 
	Cursed Scroll deals 2 damage to target creature or player.
*/
CCursedScrollSpell::CCursedScrollSpell(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost,
															   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, new AnyCreatureComparer, TRUE, pTargeting)
	, m_cpSelectionListener1(VAR_NAME(m_cpSelectionListener1), SelectionEventSource::Listener::EventCallback(this, &CCursedScrollSpell::OnSelectionDone1))
	, m_cpSelectionListener2(VAR_NAME(m_cpSelectionListener2), SelectionEventSource::Listener::EventCallback(this, &CCursedScrollSpell::OnSelectionDone2))
	, m_LifeModifier(Life (-2), m_pCard)
{
	AddAbilityTag(AbilityTag::LifeLost);

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);

	SetActionValue(ContextValue(GET_INTEGER(m_LifeModifier.GetLifeDelta())));
	SetValidExtraActionValueVector(ContextValue(1));
}

CActionContainer* CCursedScrollSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;
	CString strFormat;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			const ContextValue& value = targetGroup.GetValue(pCard);

			Life nLifeDelta = Life(value.nValue1);
			if (nLifeDelta < Life(0))
			{
				if (bSetNames)
					if (m_LifeModifier.GetPreventable() == PreventableType::Preventable)
						strFormat = _T(" to deal %d damage");
					else
						strFormat = _T(" to lose %d life");

				// 5/6/2001
				if (m_Cost.HasExtraCost() &&							// Set to 'trick' if we can pay extra cost and we are overkilling
					GetExtraActionValueVector().nValue1 &&
					(-nLifeDelta > pCard->GetLife()) &&
					(nLifeDelta != Life(GetActionValue().nValue1)))
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					pAction->SetTrick();	// Overkill
				}

				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);
			}
			else
				if (nLifeDelta > Life(0))
				{
					if (bSetNames)
						strFormat = _T(" to gain %d life");

					if (!pAction->IsTrick())
						nBonusScore += GET_INTEGER(nLifeDelta);
				}
				else
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					if (bSetNames)
						strFormat = _T("");

					pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
				}

			if (bSetNames && !strFormat.IsEmpty())
			{
				strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			const ContextValue& value = targetGroup.GetValue(pPlayer);

			Life nLifeDelta(value.nValue1);
			if (nLifeDelta < Life(0))
			{
				if (bSetNames)
					if (m_LifeModifier.GetPreventable() == PreventableType::Preventable)
						strFormat = _T(" to deal %d damage");
					else
						strFormat = _T(" to lose %d life");

				if (m_Cost.HasExtraCost() &&								// Set to 'trick' if we can pay extra cost and we are overkilling
					GetExtraActionValueVector().nValue1 &&
					(-nLifeDelta > pPlayer->GetLife()) &&
					(nLifeDelta != Life(GetActionValue().nValue1)))	// 5/6/2001
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					pAction->SetTrick();	// Overkill
				}

				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);
			}
			else
				if (nLifeDelta > Life(0))
				{
					if (bSetNames)
						strFormat = _T(" to gain %d life");

					if (!pAction->IsTrick())
						nBonusScore += GET_INTEGER(nLifeDelta);
				}
				else
				{
					if (!bIncludeTricks)
					{
						pActionContainer->RemoveAt(l);
						pAction = NULL;
						break;
					}

					if (bSetNames)
						strFormat = _T("");

					pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
				}

			if (bSetNames && !strFormat.IsEmpty())
			{
				strActionName1.Format(strFormat,
					abs(GET_INTEGER(nLifeDelta)));
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CCursedScrollSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();
	CZone* pHand = pAction->GetController()->GetZoneById(ZoneId::Hand);

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int i = 0; i < pHand->GetSize(); ++i)
	{
		CCard* pCard = pHand->GetAt(i);
		bool bIncluded = false;
		for (int j = 0; j < nCardListSize; ++j)
			if (pCardList.GetAt(j)->GetPrintedCardName() == pCard->GetPrintedCardName())
			{
				bIncluded = true;
				break;
			}

		if (!bIncluded)
		{
			pCardList.AddCard(pCard, CardPlacement::Top);
			nCardListSize++;
		}
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("No card name"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pCardList.GetSize(); ++i)
		{
			const CCard* pCard = pCardList.GetAt(i);

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Search for %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener1.GetPointer(),
		entries, 1, 1, GetCard(), pCaster,
		(DWORD)pCaster,				// Context 1
		(DWORD)pPlayer);	// Context 2
}
void CCursedScrollSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CPlayer* pCaster = pAction->GetController();
	CZone* pHand = pCaster->GetZoneById(ZoneId::Hand);


	std::vector<SelectionEntry> entries;

	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("No card name"));

		entries.push_back(selectionEntry);
	}

	for (int i = 0; i <  pHand->GetSize(); ++i)
		{
		const CCard* pCard = pHand->GetAt(i);

		SelectionEntry selectionEntry;

		selectionEntry.dwContext = (DWORD)pCard;
		selectionEntry.strText.Format(_T("Name: %s"), pCard->GetPrintedCardName());

		entries.push_back(selectionEntry);
		}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener2.GetPointer(),
		entries, 1, 1, GetCard(), pCaster,
		(DWORD)pCaster,				// Context 1
		(DWORD)pCard);	// Context 2
}
void CCursedScrollSpell::OnSelectionDone1(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener1->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);

	CCard* pDiscardCard = NULL;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{

				return;
			}

			CCard* pCard = (CCard*)(it->dwContext);
			pDiscardCard = pCard;

			CPlayer* pCaster = (CPlayer*)dwContext1;
			CPlayer* pTarget = (CPlayer*)dwContext2;

			CZone* pHand = pCaster->GetZoneById(ZoneId::Hand);

			int nRand;

			if (m_pGame->IsThinking())
				nRand = 0;
			else
				nRand = pCaster->GetRand() % pHand->GetSize();

			CCard* pCard2 = pHand->GetAt(nRand);

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pCaster->GetPlayerName(), pCard2->GetCardName(TRUE));

				m_pGame->Message(
					strMessage,
					pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCard2);
				}
			}

			if (pCard2->GetPrintedCardName() == pCard->GetPrintedCardName())
				m_LifeModifier.ApplyTo(pTarget);
			break;
		}


}
void CCursedScrollSpell::OnSelectionDone2(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener2->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);

	CCard* pDiscardCard = NULL;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{

				return;
			}

			CCard* pCard = (CCard*)(it->dwContext);
			pDiscardCard = pCard;

			CPlayer* pCaster = (CPlayer*)dwContext1;
			CCreatureCard* pTarget = (CCreatureCard*)dwContext2;

			pCaster->GetZoneById(ZoneId::Hand)->Shuffle();

			if (!m_pGame->IsThinking())
			{

				CString strMessage;
				strMessage.Format(_T("%s reveals %s"), pCaster->GetPlayerName(), pCaster->GetZoneById(ZoneId::Hand)->GetTopCard()->GetPrintedCardName());

				m_pGame->Message(
					strMessage,
					pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);

				for (int j = 0; j < m_pGame->GetPlayerCount(); ++j)
				{
					m_pGame->GetPlayer(j)->MemorizeCard(pCaster->GetZoneById(ZoneId::Hand)->GetTopCard());
				}
			}

			if (pCaster->GetZoneById(ZoneId::Hand)->GetTopCard()->GetPrintedCardName() == pCard->GetPrintedCardName())
				m_LifeModifier.ApplyTo(pTarget);
			break;
		}


}
//____________________________________________________________________________
//
/*
Ref:
	Peel From Reality 1U
	Instant
	Return target creature you control and target creature you don't control to their owners' hands.
*/
void CDoubleTargetSpell::FlagTargets(BOOL bFlagTargets, BOOL bKeepFlagUntilEndOfTurn)
{
	m_CardFlagModifier.GetModifier().RemoveAll();

	if (bFlagTargets)
	{
		m_CardFlagModifier.GetModifier().SetOneTurnOnly(bKeepFlagUntilEndOfTurn);
		m_CardFlagModifier.GetModifier().SetToAdd(CardFlag::AbilityFlag);
		m_CardFlagModifier.GetModifier().SetAdditionData(GetInstanceID());
	}
}

CActionContainer* CDoubleTargetSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();

		if (m_bAdjustTargetCountWithExtraCostValue1)
		{
			int nExtraValue = GetCost().GetExtraValue(pAction->GetCostConfigEntry());
			if (nExtraValue <= 0)
				continue;

			GetTargeting1()->SetSubjectCount(nExtraValue, nExtraValue, FALSE);
		}

		if (m_bAdjustTargetCountWithExtraCostValue2)
		{
			int nExtraValue = GetCost().GetExtraValue(pAction->GetCostConfigEntry());
			if (nExtraValue <= 0)
				continue;

			GetTargeting2()->SetSubjectCount(nExtraValue, nExtraValue, FALSE);
		}
		if (m_bAdjustTargetCountWithExtraCostValueAddOne1)								  // for strive mechanic
		{
			int nExtraValue = GetCost().GetExtraValue(pAction->GetCostConfigEntry()) + 1; // additional target(s) + first target
			if (nExtraValue <= 0)
				continue;

			GetTargeting1()->SetSubjectCount(nExtraValue, nExtraValue, FALSE);
		}
		if (m_bAdjustTargetCountWithExtraCostValueAddOne2)								  // for strive mechanic
		{
			int nExtraValue = GetCost().GetExtraValue(pAction->GetCostConfigEntry()) + 1; // additional target(s) + first target
			if (nExtraValue <= 0)
				continue;

			GetTargeting2()->SetSubjectCount(nExtraValue, nExtraValue, FALSE);
		}

		if (m_bFreeAdjustTargetCountWithExtraCostValue1)
		{
			int nExtraValue = GetCost().GetExtraValue(pAction->GetCostConfigEntry());
			if (nExtraValue <= 0)
				continue;

			GetTargeting1()->SetSubjectCount(1, nExtraValue, FALSE);
		}

		if (m_bFreeAdjustTargetCountWithExtraCostValue2)
		{
			int nExtraValue = GetCost().GetExtraValue(pAction->GetCostConfigEntry());
			if (nExtraValue <= 0)
				continue;

			GetTargeting2()->SetSubjectCount(1, nExtraValue, FALSE);
		}

		CSubjectGroupContainer targetGroups1;
		CSubjectGroupContainer targetGroups2;
		std::vector<BOOL> tricks1;
		std::vector<BOOL> tricks2;
		GetTargeting1()->GetSubjects(bIncludeTricks, targetGroups1, tricks1, pAction->GetValue());
		GetTargeting2()->GetSubjects(bIncludeTricks, targetGroups2, tricks2, pAction->GetValue());

		if (m_pAnother)
		{
		BOOL sametargets;
		for (int i = 0; i < targetGroups1.GetSize(); ++i)
		{
			for (int j = 0; j < targetGroups2.GetSize(); ++j)
			{
			sametargets = FALSE;
			for (CSubjectGroup::CardSubjectIterator it1 = targetGroups1.GetAt(i).CardSubjectBegin();
				it1 != targetGroups1.GetAt(i).CardSubjectEnd(); ++it1)
				for (CSubjectGroup::CardSubjectIterator it2 = targetGroups2.GetAt(j).CardSubjectBegin();
					it2 != targetGroups2.GetAt(j).CardSubjectEnd(); ++it2)
					if ((*it1) == (*it2)) 
						sametargets = TRUE;

			if (!sametargets) 
			{
			counted_ptr<CDoubleTargetSpellAction> cpAction1 = (CDoubleTargetSpellAction*)CreateAction().GetPointer();
			cpAction1->Copy(pAction);

			cpAction1->GetTargetGroup1() = targetGroups1.GetAt(i);
			cpAction1->GetTargetGroup2() = targetGroups2.GetAt(j);
			if (tricks1[i] || tricks2[j])
				cpAction1->SetTrick();

			pActionContainer1->Add(cpAction1.GetPointer());
			}
			}
		}
		}
		else
		for (int i = 0; i < targetGroups1.GetSize(); ++i)
		{
			for (int j = 0; j < targetGroups2.GetSize(); ++j)
			{
			counted_ptr<CDoubleTargetSpellAction> cpAction1 = (CDoubleTargetSpellAction*)CreateAction().GetPointer();
			cpAction1->Copy(pAction);

			cpAction1->GetTargetGroup1() = targetGroups1.GetAt(i);
			cpAction1->GetTargetGroup2() = targetGroups2.GetAt(j);
			if (tricks1[i] || tricks2[j])
				cpAction1->SetTrick();

			pActionContainer1->Add(cpAction1.GetPointer());
			}
		}
	}

	if (m_bAdjustTargetCountWithExtraCostValue1 || m_bAdjustTargetCountWithExtraCostValueAddOne1 || m_bFreeAdjustTargetCountWithExtraCostValue1)
		GetTargeting1()->SetSubjectCount(1, 1, FALSE); // reset subject count for IsPlayable()

	if (m_bAdjustTargetCountWithExtraCostValue2 ||  m_bAdjustTargetCountWithExtraCostValueAddOne2 || m_bFreeAdjustTargetCountWithExtraCostValue2)
		GetTargeting2()->SetSubjectCount(1, 1, FALSE); // reset subject count for IsPlayable()

	delete pActionContainer;

	if (bSetNames)
		// Standard targeting move names
		for (int l = 0; l < pActionContainer1->GetSize(); ++l)
		{
			CDoubleTargetSpellAction* pAction = (CDoubleTargetSpellAction*)pActionContainer1->GetAt(l).GetPointer();
			CSubjectGroup& targetGroup1 = pAction->GetTargetGroup1();
			CSubjectGroup& targetGroup2 = pAction->GetTargetGroup2();

			CString strActionName;

			for (CSubjectGroup::CardSubjectIterator it = targetGroup1.CardSubjectBegin();
				it != targetGroup1.CardSubjectEnd(); ++it)
			{
				CString strActionName1;
				if ((*it)->GetCardType().IsCreature())
				{
					const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
					strActionName1.Format(_T(" and targets %s"), pCard->GetCreatureName(TRUE));
				}
				else
					strActionName1.Format(_T(" and targets %s"), (*it)->GetCardName());

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			for (CSubjectGroup::PlayerSubjectIterator it = targetGroup1.PlayerSubjectBegin();
				it != targetGroup1.PlayerSubjectEnd(); ++it)
			{
				const CPlayer* pPlayer = *it;

				CString strActionName1;
				strActionName1.Format(_T(" and targets %s"), pPlayer->GetPlayerName());
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			strActionName += m_pText;

			//  - - -  - - - -  --  - - - - -  - - - - - - - - -  - - - -

			for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin();
				it != targetGroup2.CardSubjectEnd(); ++it)
			{
				CString strActionName1;
				if ((*it)->GetCardType().IsCreature())
				{
					const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
					strActionName1.Format(_T(" and targets %s"), pCard->GetCreatureName(TRUE));
				}
				else
					strActionName1.Format(_T(" and targets %s"), (*it)->GetCardName());

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			for (CSubjectGroup::PlayerSubjectIterator it = targetGroup2.PlayerSubjectBegin();
				it != targetGroup2.PlayerSubjectEnd(); ++it)
			{
				const CPlayer* pPlayer = *it;

				CString strActionName1;
				strActionName1.Format(_T(" and targets %s"), pPlayer->GetPlayerName());
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			pAction->AppendToActionName(strActionName);
		}

	return pActionContainer1;
}

counted_ptr<CAbilityAction> CDoubleTargetSpell::CreateAction() const
{
	counted_ptr<CDoubleTargetSpellAction> cpAction = ::CreateObject<CDoubleTargetSpellAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CDoubleTargetSpell*>(this));
	cpAction->SetScore(ActionScore::Spell);

	return cpAction.GetPointer();
}

BOOL CDoubleTargetSpell::ResolveImpl(const CAbilityAction* pAction)
{
	if (!__super::ResolveImpl(pAction))
		return FALSE;

	const CDoubleTargetSpellAction* pAction1 = (const CDoubleTargetSpellAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	const CSubjectGroup& targetGroup1 = pAction1->GetTargetGroup1();
	const CSubjectGroup& targetGroup2 = pAction1->GetTargetGroup2();


	CCountedCardContainer pCardContainer1;
	CCountedCardContainer pCardContainer2;
	CPlayerContainer pPlayerContainer1;
	CPlayerContainer pPlayerContainer2;

	BOOL bSuccess = FALSE;

	for (CSubjectGroup::CardSubjectIterator it = targetGroup1.CardSubjectBegin();
		it != targetGroup1.CardSubjectEnd(); ++it)
	{
		BOOL bTrick;
		if (!m_apTargeting1->IsSubjectIncluded(it->GetPointer(), TRUE, bTrick) ||
			(*it)->GetZoneMoveNumber() != targetGroup1.GetZoneMoveNumber(it->GetPointer()))
		{
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s skipped illegal target %s"), GetCard()->GetCardName(), (*it)->GetCardName());
				m_pGame->Message(
					strMessage,
					pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			continue;
		}

		// Flag card
		if (!m_CardFlagModifier.GetModifier().IsNull())
			m_CardFlagModifier.ApplyTo((CCard*)it->GetPointer());

		const ContextValue& value = targetGroup1.GetValue(it->GetPointer());

		pCardContainer1.AddCard((CCard*)it->GetPointer(), CardPlacement::Top);

		//ResolveCard(pAction1, (CCard*)it->GetPointer(), value);

		bSuccess = TRUE;
	}

	for (CSubjectGroup::CardSubjectIterator it = targetGroup2.CardSubjectBegin();
		it != targetGroup2.CardSubjectEnd(); ++it)
	{
		BOOL bTrick;
		if (!m_apTargeting2->IsSubjectIncluded(it->GetPointer(), TRUE, bTrick) ||
			(*it)->GetZoneMoveNumber() != targetGroup2.GetZoneMoveNumber(it->GetPointer()))
		{
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s skipped illegal target %s"), GetCard()->GetCardName(), (*it)->GetCardName());
				m_pGame->Message(
					strMessage,
					pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			continue;
		}

		// Flag card
		if (!m_CardFlagModifier.GetModifier().IsNull())
			m_CardFlagModifier.ApplyTo((CCard*)it->GetPointer());

		const ContextValue& value = targetGroup2.GetValue(it->GetPointer());

		pCardContainer2.AddCard((CCard*)it->GetPointer(), CardPlacement::Top);

		//ResolveCard(pAction1, (CCard*)it->GetPointer(), value);

		bSuccess = TRUE;
	}

	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup1.PlayerSubjectBegin();
		it != targetGroup1.PlayerSubjectEnd(); ++it)
	{
		BOOL bTrick;
		if (!m_apTargeting1->IsSubjectIncluded(*it, TRUE, bTrick))
		{
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s skipped illegal target %s"), GetCard()->GetCardName(), (*it)->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			continue;
		}

		const ContextValue& value = targetGroup1.GetValue(*it);

		//ResolvePlayer(pAction1, (CPlayer*)(*it), value);
		pPlayerContainer1.Add((CPlayer*)(*it));

		bSuccess = TRUE;
	}

	for (CSubjectGroup::PlayerSubjectIterator it = targetGroup2.PlayerSubjectBegin();
		it != targetGroup2.PlayerSubjectEnd(); ++it)
	{
		BOOL bTrick;
		if (!m_apTargeting2->IsSubjectIncluded(*it, TRUE, bTrick))
		{
			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s skipped illegal target %s"), GetCard()->GetCardName(), (*it)->GetPlayerName());
				m_pGame->Message(
					strMessage,
					pCaster->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}

			continue;
		}

		const ContextValue& value = targetGroup2.GetValue(*it);

		//ResolvePlayer(pAction1, (CPlayer*)(*it), value);
		pPlayerContainer2.Add((CPlayer*)(*it));

		bSuccess = TRUE;
	}

	ResolveGroup(pCardContainer1, pCardContainer2, pPlayerContainer1, pPlayerContainer2);

	return bSuccess; // need to have at least one target, otherwise the spell is considered to fail
}
void CDoubleTargetSpell::ResolveGroup(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2)
{
}
/*void CDoubleTargetSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	m_TargetModifier.CCardModifiers::ApplyTo(pCard);
	if (pCard->GetCardType().IsCreature())
		m_TargetModifier.CCreatureModifiers::ApplyTo((CCreatureCard*)pCard);
}

void CDoubleTargetSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	m_TargetModifier.CPlayerModifiers::ApplyTo(pPlayer);
}

void CTargetSpell::OnResolutionCompleted(const CAbilityAction* pAction, BOOL bResolutionResult)
{
	__super::OnResolutionCompleted(pAction, bResolutionResult);

	// Unflag all tokens flagged by this ability

	if (!m_CardFlagModifier.GetModifier().IsNull() &&
		!m_CardFlagModifier.GetModifier().GetOneTurnOnly())
	{
		CardFlagComparer* pComparer = new CardFlagComparer(CardFlag::AbilityFlag, false);
		pComparer->SetData(m_CardFlagModifier.GetModifier().GetAdditionData());
		CCardFilter cardFilter(pComparer);

		const CTargetSpellAction* pAction1 = (const CTargetSpellAction*)pAction;
		const CPlayer* pCaster = pAction1->GetController();

		CZone* pBattlefield = pCaster->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
			if (cardFilter.IsCardIncluded(pBattlefield->GetAt(i)))
				m_CardFlagModifier.RemoveFrom(pBattlefield->GetAt(i));
	}
}*/

//____________________________________________________________________________
//
/*
Ref:
	Auriok Windwalker 3W
	Creature — Human Wizard
	Flying
	Tap: Attach target Equipment you control to target creature you control.
*/
CEquipSpell::CEquipSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost, new CardTypeComparer(CardType::Equipment, false), FALSE,
						new AnyCreatureComparer, FALSE, _T(" to equip"))	
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting1()->SetSubjectZoneId(ZoneId::Battlefield);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting2()->SetSubjectZoneId(ZoneId::Battlefield);
}

void CEquipSpell::ResolveGroup(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2)
{
	if (pContainer1.GetSize() && pContainer2.GetSize())
	{
		CEquipModifier pModifier = CEquipModifier(pContainer1.GetAt(0));
		
		pModifier.ApplyTo((CCreatureCard*)pContainer2.GetAt(0));

	}
}

//____________________________________________________________________________
//
/*
Ref:
	Donate 2U
	Sorcery
	Target player gains control of target permanent you control.
*/
CDonateSpell::CDonateSpell(CCard* pCard, AbilityType abilityType, LPCTSTR strManaCost)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost, new TrueCardComparer, FALSE,
						FALSE_CARD_COMPARER, TRUE, _T(" to"))	
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting1()->SetSubjectZoneId(ZoneId::Battlefield);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
	//GetTargeting2()->SetSubjectZoneId(ZoneId::Graveyard);
}

void CDonateSpell::ResolveGroup(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2)
{
	if (pContainer1.GetSize() && pPContainer2.GetSize())
	{

//		if (!m_pGame->IsThinking()){
//		pContainer1.GetAt(0)->SetPreviousController(pContainer1.GetAt(0)->GetController());
//		 pContainer1.GetAt(0)->SetControlledBy(NULL);	
//									}
// TODO: Convert this to CTransferControlModifier
// TODO: Add check for from==to
		pContainer1.GetAt(0)->Move(pPContainer2.GetAt(0)->GetZoneById(ZoneId::Battlefield),pPContainer2.GetAt(0), MoveType::Others);	

	}
}

//____________________________________________________________________________
//
/*
Ref:
	Consume Strength 1BG
	Instant
	Target creature gets +2/+2 until end of turn. Another target creature gets -2/-2 until end of turn.
*/
CDoubleTargetChgPwrTghAttrSpell::CDoubleTargetChgPwrTghAttrSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 Power nPowerDelta1, Life nLifeDelta1,
										 Power nPowerDelta2, Life nLifeDelta2,
										 CreatureKeyword creatureKeywordToAdd1,
										 CreatureKeyword creatureKeywordToRemove1,
										 CreatureKeyword creatureKeywordToAdd2,
										 CreatureKeyword creatureKeywordToRemove2,
										 BOOL bThisTurnOnly,
										 PreventableType preventable,
										 CardComparer* pComparer1, CardComparer* pComparer2)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost,   pComparer1, FALSE, pComparer2, FALSE,  _T(" to"), TRUE, new CMyTargeting1, new CMyTargeting2)
	, m_PowerModifier1(Power(nPowerDelta1), bThisTurnOnly)
	, m_LifeModifier1(Life(nLifeDelta1), pCard, preventable, DamageType::NotDealingDamage, bThisTurnOnly)
	, m_PowerModifier2(Power(nPowerDelta2), bThisTurnOnly)
	, m_LifeModifier2(Life(nLifeDelta2), pCard, preventable, DamageType::NotDealingDamage, bThisTurnOnly)
{
	AddAbilityTag(AbilityTag::CreatureChange);

	m_CreatureKeywordModifier1.GetModifier().SetOneTurnOnly(bThisTurnOnly);
	m_CreatureKeywordModifier1.GetModifier().SetToAdd(creatureKeywordToAdd1);
	m_CreatureKeywordModifier1.GetModifier().SetToRemove(creatureKeywordToRemove1);


	m_CardKeywordModifier1.GetModifier().SetOneTurnOnly(bThisTurnOnly);

	m_CreatureKeywordModifier2.GetModifier().SetOneTurnOnly(bThisTurnOnly);
	m_CreatureKeywordModifier2.GetModifier().SetToAdd(creatureKeywordToAdd2);
	m_CreatureKeywordModifier2.GetModifier().SetToRemove(creatureKeywordToRemove2);


	m_CardKeywordModifier2.GetModifier().SetOneTurnOnly(bThisTurnOnly);

	SetActionValue(ContextValue(GET_INTEGER(nLifeDelta1), GET_INTEGER(nPowerDelta1)));
	SetValidExtraActionValueVector(ContextValue(1, 1));
}

CActionContainer* CDoubleTargetChgPwrTghAttrSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CDoubleTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();
	Characteristic characteristic1 = GetTargeting1()->GetCharacteristic();
	Characteristic characteristic2 = GetTargeting2()->GetCharacteristic();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CDoubleTargetSpellAction* pAction = (CDoubleTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		const CSubjectGroup& targetGroup1 = pAction->GetTargetGroup1();
		const CSubjectGroup& targetGroup2 = pAction->GetTargetGroup2();

		int nBonusScore = 0;

		for (CSubjectGroup::CardSubjectIterator it1 = targetGroup1.CardSubjectBegin();
			it1 != targetGroup1.CardSubjectEnd(); ++it1)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it1->GetPointer();


			if (bSetNames)
			{

				CString strActionName1(
					GetCreatureGainString(pCard, &m_PowerModifier1, &m_LifeModifier1, &m_CreatureKeywordModifier1, &m_CardKeywordModifier1));

				if (!strActionName1.IsEmpty())
					strActionName.AppendFormat(_T(" (%s)"), strActionName1);
			}
		}


		//if (bSetNames)
			//pAction->AppendToActionName(strActionName);

		for (CSubjectGroup::CardSubjectIterator it2 = targetGroup2.CardSubjectBegin();
			it2 != targetGroup2.CardSubjectEnd(); ++it2)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it2->GetPointer();


			if (bSetNames)
			{
	
				CString strActionName1(
					GetCreatureGainString(pCard, &m_PowerModifier2, &m_LifeModifier2, &m_CreatureKeywordModifier2, &m_CardKeywordModifier2));

				if (!strActionName1.IsEmpty())
					strActionName.AppendFormat(_T(" (%s)"), strActionName1);
			}
		}


		if (bSetNames)
			pAction->AppendToActionName(strActionName);

	}

	return pActionContainer;
}

void CDoubleTargetChgPwrTghAttrSpell::ResolveGroup(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2)
{

	if (pContainer1.GetSize())
	{
		m_LifeModifier1.SetSourceCard(GetTargeting1()->GetSourceCard());
		m_LifeModifier1.ApplyTo((CCreatureCard*)pContainer1.GetAt(0));

		m_PowerModifier1.ApplyTo((CCreatureCard*)pContainer1.GetAt(0));

		m_CreatureKeywordModifier1.ApplyTo((CCreatureCard*)pContainer1.GetAt(0));
		m_CardKeywordModifier1.ApplyTo((CCreatureCard*)pContainer1.GetAt(0));
	}
	if (pContainer2.GetSize())
	{
		m_LifeModifier2.SetSourceCard(GetTargeting2()->GetSourceCard());
		m_LifeModifier2.ApplyTo((CCreatureCard*)pContainer2.GetAt(0));

		m_PowerModifier2.ApplyTo((CCreatureCard*)pContainer2.GetAt(0));

		m_CreatureKeywordModifier2.ApplyTo((CCreatureCard*)pContainer2.GetAt(0));
		m_CardKeywordModifier2.ApplyTo((CCreatureCard*)pContainer2.GetAt(0));
	}
}


//____________________________________________________________________________
//
/*
Ref:
	Orim's Chant W
	Instant
	Kicker W (You may pay an additional W as you cast this spell.)
	Target player can't cast spells this turn.
	If Orim's Chant was kicked, creatures can't attack this turn.
*/
COrimsChantSpell::COrimsChantSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
	, m_CardFilter(FALSE_CARD_COMPARER)
{
	GetCost().AddOptionalManaCost(WHITE_MANA_TEXT);
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}
void COrimsChantSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayerEffectModifier* pModifier = new CPlayerEffectModifier(PlayerEffectType::CantPlaySpells, (int)CCardFilter::GetFilter(_T("cards")));
	CScheduledPlayerModifier* pModifier2 = new CScheduledPlayerModifier(
			GetGame(), pModifier, TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);	

	pModifier->ApplyTo(pPlayer);
	pModifier2->ApplyTo(pPlayer);

	if(pAction->GetCostConfigEntry().HasOptionalManaCost(WHITE_MANA_TEXT))
	{
		CCanAttackWithModifier* pModifier3 = new CCanAttackWithModifier(GetGame(), &m_CardFilter);
		CScheduledPlayerModifier* pModifier4 = new CScheduledPlayerModifier(
			GetGame(), pModifier3 , TurnNumberDelta(-1), NodeId::EndStep, CScheduledPlayerModifier::Operation::RemoveFromLater);	

		pModifier3->ApplyTo(pPlayer);
		pModifier4->ApplyTo(pPlayer);
		
		pModifier3->ApplyTo(m_pGame->GetNextPlayer(pPlayer));
		pModifier4->ApplyTo(m_pGame->GetNextPlayer(pPlayer));
	}


}

//____________________________________________________________________________
//
/*
Specific to Vengeful Rebirth card.
Ref:
	Vengeful Rebirth 4RG
	Sorcery
	Return target card from your graveyard to your hand. If you return a nonland card to 
	your hand this way, Vengeful Rebirth deals damage equal to that card's converted mana 
	cost to target creature or player.
	Exile Vengeful Rebirth.
*/
CVengefulRebirthSpell::CVengefulRebirthSpell(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost)
: CDoubleTargetSpell(pCard, abilityType, strManaCost, new TrueCardComparer, FALSE,
						new AnyCreatureComparer, TRUE, _T(" to"))	
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Positive);
	GetTargeting1()->SetSubjectZoneId(ZoneId::Graveyard);
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
	GetTargeting2()->SetSubjectZoneId(ZoneId::Battlefield);
}
void CVengefulRebirthSpell::ResolveGroup(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2)
{
	if (pContainer1.GetSize() && pPContainer2.GetSize())
	{

		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pContainer1.GetAt(0)->GetController());
		pModifier.ApplyTo(pContainer1.GetAt(0));

		if (!pContainer1.GetAt(0)->GetCardType().IsLand())
		{
			CLifeModifier pModifier2 =  CLifeModifier(Life(-1*pContainer1.GetAt(0)->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal()), m_pCard);
			pModifier2.ApplyTo(pPContainer2.GetAt(0));
		}
	}
	
	if (pContainer1.GetSize() && pContainer2.GetSize())
	{

		CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Hand, TRUE, MoveType::Others, pContainer1.GetAt(0)->GetController());
		pModifier.ApplyTo(pContainer1.GetAt(0));

		if (!pContainer1.GetAt(0)->GetCardType().IsLand())
		{
			CLifeModifier pModifier2 =  CLifeModifier(Life(-1*pContainer1.GetAt(0)->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal()), m_pCard);
			pModifier2.ApplyTo((CCreatureCard*)pContainer2.GetAt(0));
		}
	}
}

//____________________________________________________________________________
//
/*
Specific to Blinding Beam card.
Ref:	
	Blinding Beam 2W
	Instant
	Choose one — Tap two target creatures; or creatures don't untap during target player's next untap step.
	Entwine 1 (Choose both if you pay the entwine cost.)
*/
CBlindingBeamSpell::CBlindingBeamSpell(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost)
: CDoubleTargetSpell(pCard, abilityType, strManaCost, new AnyCreatureComparer, FALSE,
						FALSE_CARD_COMPARER, TRUE, _T(" to"))	
{	
	GetTargeting1()->SetDefaultCharacteristic(Characteristic::Negative);
	GetTargeting1()->SetSubjectCount(2,2);
	GetTargeting2()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CBlindingBeamSpell::ResolveGroup(const CCountedCardContainer& pContainer1,const  CCountedCardContainer& pContainer2,const CPlayerContainer& pPContainer1,const CPlayerContainer& pPContainer2)
{
	CPlayer* pTargetPlayer = pPContainer2.GetAt(0);

	CCardOrientationModifier pModifier1 = CCardOrientationModifier(TRUE);
	
	for (int i = 0; i < pContainer1.GetSize(); ++i)
		pModifier1.ApplyTo(pContainer1.GetAt(i));

	std::auto_ptr<CPlayerModifier> apModifier(new CPlayerUntapCardTypeModifier(CardType::Creature, CardType::Creature, CPlayerUntapCardTypeModifier::ResetCantUntapCardType));
	apModifier->ApplyTo(pTargetPlayer);

	// Schedule a task to undo the untap card type at the beginning of next upkeep

	CPlayerModifierTask* pTask = new CPlayerModifierTask(pTargetPlayer, apModifier,
		false); // use RemoveFrom

	m_pGame->GetScheduler()->ScheduleTask(pTask, pTargetPlayer, NodeId::UpkeepStep, TurnNumberDelta(-1));
}

//____________________________________________________________________________
//
/*
Ref:
	Shrine of Burning Rage 2
	Artifact
	At the beginning of your upkeep or whenever you cast a red spell, put a charge 
	counter on Shrine of Burning Rage.
	3, Tap, Sacrifice Shrine of Burning Rage: Shrine of Burning Rage deals damage 
	equal to the number of charge counters on it to target creature or player.

	Magma Mine 1
	Artifact
	4: Put a pressure counter on Magma Mine.
	Tap, Sacrifice Magma Mine: Magma Mine deals damage equal to the number of pressure 
	counters on it to target creature or player.

*/
CTargetChgLifeSpellCounter::CTargetChgLifeSpellCounter(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   CardComparer* pComparer,
										   BOOL bTargetPlayers,
										   PreventableType preventable,										  
										   LPCTSTR pCounter,
										    DamageType damageType)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, bTargetPlayers)
	//, m_bReceiveDamageFromTargetedCreature(FALSE)
	, m_LifeModifier(Life(0), pCard, preventable, damageType)
	, m_pCounter(pCounter)
{
	if (preventable == PreventableType::Preventable)
		AddAbilityTag(AbilityTag::DamageSource);
	else
		AddAbilityTag(AbilityTag::LifeLost);

	ATLASSERT((m_pCard->GetCardType() & CardType::Creature).Any());

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CTargetChgLifeSpellCounter::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		// Deduction equals to this creature's power (will be updated again during resolution)
		
		Life nLifeDelta((-(m_pCard->GetCounterContainer()->GetCounter(m_pCounter)->GetCount())));

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			targetGroup.SetValue(pCard, ContextValue(GET_INTEGER(nLifeDelta))); // still need to save life delta to support Ghitu fire-eater

			if (nLifeDelta != Life(0))
			{
				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);

				if (bSetNames)
				{
					strActionName1.Format(_T(" to deal %d damage"),
						abs(GET_INTEGER(nLifeDelta)));
					if (!strActionName.IsEmpty())
						strActionName += _T(",") + strActionName1;
					else
						strActionName += strActionName1;
				}
			}
			else
			{
				if (!bIncludeTricks)
				{
					pActionContainer->RemoveAt(l);
					pAction = NULL;
					break;
				}

				pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			const CPlayer* pPlayer = *it;
			targetGroup.SetValue(pPlayer, ContextValue(GET_INTEGER(nLifeDelta))); // still need to save life delta to support Ghitu fire-eater

			if (nLifeDelta != Life(0))
			{
				if (!pAction->IsTrick())
					nBonusScore += GET_INTEGER(-nLifeDelta);

				if (bSetNames)
				{
					strActionName1.Format(_T(" to deal %d damage"),
						abs(GET_INTEGER(nLifeDelta)));
					if (!strActionName.IsEmpty())
						strActionName += _T(",") + strActionName1;
					else
						strActionName += strActionName1;
				}
			}
			else
			{
				if (!bIncludeTricks)
				{
					pActionContainer->RemoveAt(l);
					pAction = NULL;
					break;
				}

				pAction->SetTrick();	// 5/6/2001, targeting without dealing/giving damage/life
			}
		}

		if (!pAction)			// Action has been removed
			continue;

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetChgLifeSpellCounter::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCreatureCard* pTargetedCreature = (CCreatureCard*)pCard;

	Life nLifeDelta;
	if (m_pCard->IsInplay())
		nLifeDelta = Life((-(m_pCard->GetCounterContainer()->GetCounter(m_pCounter)->GetCount())));
	else
		nLifeDelta = Life(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pTargetedCreature);

	Life nLifeDelta2(GET_INTEGER(-pTargetedCreature->GetPower()));

	/*if (m_bReceiveDamageFromTargetedCreature)
	{
		m_LifeModifier.SetLifeDelta(nLifeDelta2);
		m_LifeModifier.SetSourceCard(pTargetedCreature);
		m_LifeModifier.ApplyTo((CCreatureCard*)m_pCard);
	}*/
}

void CTargetChgLifeSpellCounter::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	Life nLifeDelta;
	if (m_pCard->IsInplay())
		nLifeDelta = Life(GET_INTEGER(-((CCreatureCard*)m_pCard)->GetPower()));
	else
		nLifeDelta = Life(value.nValue1);

	m_LifeModifier.SetLifeDelta(nLifeDelta);
	m_LifeModifier.SetSourceCard(GetTargeting()->GetSourceCard());
	m_LifeModifier.ApplyTo(pPlayer);
}

//____________________________________________________________________________
//
/*
Ref:
	Hex Parasite 1
	Artifact Creature — Insect
	X Phyrexian B: Remove up to X counters from target permanent. For each counter removed this way, 
	Hex Parasite gets +1/+0 until end of turn. (Phyrexian Black can be paid with either Black or 
	2 life.)
*/
CTargetCounterPumpSpell::CTargetCounterPumpSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 CardComparer* pComparer)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE)
	, m_ProliferateSelection(m_pGame,CSelectionSupport::SelectionCallback(this, &CTargetCounterPumpSpell::OnProliferateSelected))
{
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
	SetActionValue(ContextValue(0));
	SetValidExtraActionValueVector(ContextValue(1));
}

CActionContainer* CTargetCounterPumpSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;
	CString strFormat;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			const ContextValue& value = targetGroup.GetValue(pCard);
			
				
			if (bSetNames)
				strFormat = _T(" to remove up to %d counter");

			if (!pAction->IsTrick())
				nBonusScore += -value.nValue1;
				

			if (bSetNames && !strFormat.IsEmpty())
			{
				strActionName1.Format(strFormat,
					abs((value.nValue1)));
				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

	
		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CTargetCounterPumpSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	struct PushBack
	{
		PushBack(CCard* nCard)
			: entries()
			, kCard(nCard)
		{}
		void operator()(Counter* c)
		{
			LPCTSTR name = c->GetName();
		
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)c;  //assuming size_of(c)==size_of(DWORD)
			selectionEntry.strText.Format(_T("remove a %s from %s"), name, kCard->GetCardName());

			if (c->GetCount()!=0)
				for (int i = 0; i < c->GetCount(); ++i)
			{
				entries.push_back(selectionEntry);
			}
		}

		CCard* kCard;
		
		std::vector<SelectionEntry> entries;

	} push(pCard);
	
	m_ProliferateSelection.AddSelectionRequest(
		pCard->GetCounterContainer()->ForEachCounter(push).entries, 0, value.nValue1, NULL, pAction->GetController(), (DWORD)pCard, (DWORD)m_pCard);

}

void CTargetCounterPumpSpell::OnProliferateSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			Counter* prof = (Counter*)it->dwContext;
			CCard* pCard = (CCard*)dwContext1;
			CCardCounterModifier modifier(prof->GetName(), -1);
			modifier.ApplyTo(pCard);

			CPowerModifier pModifier2 = CPowerModifier(Power(+2), FALSE);
			if (((CCard*)dwContext2)->GetCardType().IsCreature()) pModifier2.ApplyTo((CCreatureCard*)dwContext2);
		}
}

//____________________________________________________________________________
//
/*
Specific to Surgical Extraction card.
Ref:
	Surgical Extraction Phyrexian B
	Instant
	(Phyrexian Black can be paid with either Black or 2 life.)
	Choose target card in a graveyard other than a basic land card. Search its owner's graveyard, 
	hand, and library for any number of cards with the same name as that card and exile them. 
	Then that player shuffles his or her library.
*/
CSurgicalExtractionSpell::CSurgicalExtractionSpell(CCard* pCard, AbilityType abilityType,
										 LPCTSTR strManaCost,
										 CardComparer* pComparer)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE)
{
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CSurgicalExtractionSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;
	CString strFormat;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
				
			if (bSetNames)
			{
				strFormat = _T("  to search its owner's graveyard, hand, and library and exile cards with te same name");

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;

	
		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CSurgicalExtractionSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CPlayer* pCont = pCard->GetController();
	CCountedCardContainer pContainer;

	CCardFilter* pDiscardFilter;
	CCardFilter pDiscardFilter_temp;

	pDiscardFilter = NULL;

	pDiscardFilter_temp.SetComparer(new CardNameComparer(pCard->GetPrintedCardName()));

	pDiscardFilter = &pDiscardFilter_temp;

	if (pAction->GetController()->IsComputer())

	{
	CPlayerSearchModifier pModifier = CPlayerSearchModifier(
					pCont,
					MinimumValue(SpecialNumber::Any),
					MaximumValue(SpecialNumber::Any),
					pCont,
					ZoneId::Library,
					pDiscardFilter,
					ZoneId::Exile,
					TRUE,
					CardPlacement::Top,
					FALSE,
					TRUE);

	pModifier.ApplyTo(pAction->GetController());

	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(
					pCont,
					MinimumValue(SpecialNumber::Any),
					MaximumValue(SpecialNumber::Any),
					pCont,
					ZoneId::Hand,
					pDiscardFilter,
					ZoneId::Exile,
					TRUE,
					CardPlacement::Top,
					FALSE,
					TRUE, FALSE, NULL, FALSE);

	pModifier1.ApplyTo(pAction->GetController());

	CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(
					pCont,
					MinimumValue(SpecialNumber::Any),
					MaximumValue(SpecialNumber::Any),
					pCont,
					ZoneId::Graveyard,
					pDiscardFilter,
					ZoneId::Exile,
					TRUE,
					CardPlacement::Top,
					FALSE,
					TRUE, FALSE, NULL, FALSE);

	pModifier2.ApplyTo(pAction->GetController());
	}
	else
	{
	CPlayerSearchModifier pModifier = CPlayerSearchModifier(
					pCont,
					MinimumValue(0),
					MaximumValue(4),
					pCont,
					ZoneId::Library,
					pDiscardFilter,
					ZoneId::Exile,
					TRUE,
					CardPlacement::Top,
					FALSE,
					TRUE);

	pModifier.ApplyTo(pAction->GetController());

	CPlayerSearchModifier pModifier1 = CPlayerSearchModifier(
					pCont,
					MinimumValue(0),
					MaximumValue(4),
					pCont,
					ZoneId::Hand,
					pDiscardFilter,
					ZoneId::Exile,
					TRUE,
					CardPlacement::Top,
					FALSE,
					TRUE, FALSE, NULL, FALSE);

	pModifier1.ApplyTo(pAction->GetController());

	CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(
					pCont,
					MinimumValue(0),
					MaximumValue(4),
					pCont,
					ZoneId::Graveyard,
					pDiscardFilter,
					ZoneId::Exile,
					TRUE,
					CardPlacement::Top,
					FALSE,
					TRUE, FALSE, NULL, FALSE);

	pModifier2.ApplyTo(pAction->GetController());
	}

	CZoneModifier pmodifier_opp1 = CZoneModifier(GetGame(), ZoneId::Hand, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier_opp1.ApplyTo(pCont);
	CZoneModifier pmodifier_opp2 = CZoneModifier(GetGame(), ZoneId::Library, SpecialNumber::All , CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
	pmodifier_opp2.ApplyTo(pCont);
}
//____________________________________________________________________________
//
// 10/08/2011 Created using CTargetDrawCardSpell as template. This type of spell can be used to add a CPlayerEffectModifier to a target player
// Using this ability class would fix deflection effect bug on some spells, which can'be be deflected.
/*
Ref:
	Sleep 2UU
	Sorcery
	Tap all creatures target player controls. Those creatures don't untap during that player's next untap step.
*/
CGenericTargetPlayerSpell::CGenericTargetPlayerSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE)
{
}

//____________________________________________________________________________
//
/*
Ref:	
	Roar of the Crowd 3R
	Sorcery
	Choose a creature type. Roar of the Crowd deals damage to target creature or player equal
	to the number of permanents you control of the chosen type.
*/
CGenericTargetPlayerCreatureSpell::CGenericTargetPlayerCreatureSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost, CardComparer* comparer)
	: CTargetSpell(pCard, abilityType, strManaCost, comparer, TRUE)
{
}

//____________________________________________________________________________
//
/*
Ref:
	Repentance 2W
	Sorcery
	Target creature deals damage to itself equal to its power.
*/
CGenericTargetCreatureSpell::CGenericTargetCreatureSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost, CardComparer* comparer)
	: CTargetSpell(pCard, abilityType, strManaCost, comparer, FALSE)
{
}

//____________________________________________________________________________
//
/*
Ref:
	Gauntlets of Chaos 5
	Artifact
	5, Sacrifice Gauntlets of Chaos: Exchange control of target artifact, creature, or land you control 
	and target permanent an opponent controls that shares one of those types with it. If those permanents 
	are exchanged this way, destroy all Auras attached to them.
*/
CExhangeControllSpell::CExhangeControllSpell(CCard* pCard, AbilityType abilityType,
										   LPCTSTR strManaCost,
										   CardComparer* pComparer1,
										   CardComparer* pComparer2)
	: CDoubleTargetSpell(pCard, abilityType, strManaCost, pComparer1, FALSE, pComparer2, FALSE, _T(" with"))
{
	GetTargeting1()->SetIncludeControllerCardsOnly();
	GetTargeting2()->SetIncludeNonControllerCardsOnly();

	AddAbilityTag(AbilityTag::MoveCard);
}

void CExhangeControllSpell::ResolveGroup(const CCountedCardContainer& pContainer1, const CCountedCardContainer& pContainer2, const CPlayerContainer& pPContainer1, const CPlayerContainer& pPContainer2)
{
	//__super::ResolveGroup(pContainer1, pContainer2, pPContainer1, pPContainer2);

	if (!pContainer1.GetSize() || !pContainer2.GetSize()) return;

	CPlayer* pPlayer1 = pContainer1.GetAt(0)->GetController();
	CPlayer* pPlayer2 = pContainer2.GetAt(0)->GetController();

	pContainer1.GetAt(0)->Move(pPlayer2->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others);
	pContainer2.GetAt(0)->Move(pPlayer1->GetZoneById(ZoneId::Battlefield), GetController(), MoveType::Others);
}

//____________________________________________________________________________
//
/*
Ref:
	Thrull Parasite B
	Creature — Thrull
	Extort (Whenever you cast a spell, you may pay White or Black. If you do, each opponent 
	loses 1 life and you gain that much life.)
	Tap, Pay 2 life: Remove a counter from target nonland permanent.
*/
CTargetRemoveCounterSpell::CTargetRemoveCounterSpell(CCard* pCard, AbilityType abilityType,
												   LPCTSTR strManaCost,
												   CardComparer* pComparer,
												   int nCount)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CTargetRemoveCounterSpell::OnSelectionDone))
{
	GetTargeting()->SetDefaultCharacteristic(Characteristic::Neutral);
	SetActionValue(ContextValue(nCount));

	AddAbilityTag(AbilityTag::CardChange);
}

CActionContainer* CTargetRemoveCounterSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CPlayer* pController = GetController();

	CString strActionName1;
	CString strFormat;

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCreatureCard* pCard = (const CCreatureCard*)it->GetPointer();
			const ContextValue& value = targetGroup.GetValue(pCard);
			
			if (bSetNames)
			{
				CString strSinglePlurar;
				if (abs(value.nValue1) == 1)
					strSinglePlurar = _T("counter");
				else
					strSinglePlurar = _T("counters");

				strActionName1.Format(_T(" to remove %d %s"), abs(value.nValue1), strSinglePlurar);

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (!pAction)			// Action has been removed
			continue;
	
		if (bSetNames)
			pAction->AppendToActionName(strActionName);
	}

	return pActionContainer;
}

void CTargetRemoveCounterSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	if (!pCard->GetCounterContainer()->HasAnyCounters())
		return;

	struct PushBack
	{
		PushBack(CCard* nCard)
			: entries()
			, kCard(nCard)
		{}
		void operator()(Counter* c)
		{
			LPCTSTR name = c->GetName();
		
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)c;  //assuming size_of(c)==size_of(DWORD)
			selectionEntry.strText.Format(_T("remove %s from %s"), name, kCard->GetCardName());

			if (c->GetCount()!=0)
				entries.push_back(selectionEntry);
		}

		CCard* kCard;
		
		std::vector<SelectionEntry> entries;

	} push(pCard);
	
	m_SelectionSupport.AddSelectionRequest(
		pCard->GetCounterContainer()->ForEachCounter(push).entries, 1, 1, NULL, pAction->GetController(), (DWORD)pCard, (DWORD)value.nValue1);
}

void CTargetRemoveCounterSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			Counter* counter = (Counter*)it->dwContext;
			CCard* pCard = (CCard*)dwContext1;
			int nCount = (int)dwContext2;

			CCardCounterModifier modifier(counter->GetName(), -nCount);
			modifier.ApplyTo(pCard);
		}
}

//____________________________________________________________________________
//
/*
Ref:
	Reverberate RR
	Instant
	Copy target instant or sorcery spell. You may choose new targets for the copy.
*/
CTargetCopyCastSpell::CTargetCopyCastSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   ZoneId fromZoneId, CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTargetCopyCastSpell::OnSelectionDone))
{
	GetTargeting()->SetSubjectZoneId(fromZoneId);
}


void CTargetCopyCastSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCard* toCast;

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), m_pCard, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo(pCard);

	toCast = pContainer.GetAt(0);

	m_Selection.clear();
	int n=0;

	//------------------------------------------------------------------------------------------------------------------------------------------

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	//--------------------------------------------------------------------------------------------------------------------------------------------

	const CStack& stack = m_pGame->GetStack();
	const CStackAbilityAction* pStackAction;

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
						pStackAction = stack.GetStackAction(l).GetPointer();
						if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
						{
							break;
						}

	}

	//--------------------------------------------------------------------------------------------------------------------------------------------


	bool to_add = false;

	toCast->SetLastCastingCostConfigEntry(pStackAction->GetCostConfigEntry());
	toCast->SetLastCastingManaCost(pStackAction->GetCostConfigEntry().GetManaPool());
		

	//if (p
	int extra_value = 0;

	if (!toCast->GetCardType().IsLand())
	{
		if (toCast->GetController() != pAction->GetController()) toCast->SetController(pAction->GetController());

		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{
			to_add = true;
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					toCast->GetSpells().GetAt(i)->GetCost().AddReductionCost(CManaCostBase::Color::Black, pStackAction->GetCostConfigEntry().GetExtraValue());
				}

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			//toCast->GetSpells().GetAt(i)->GetCost().R
		//	else
		
			//	toCast->SetLastCastingExtraValue(pStackAction->GetAbility()->GetCost().GetExtraValue(pStackAction->GetCostConfigEntry()));
			//    extra_value = (pStackAction->GetAbility()->GetCost().GetExtraValue(pStackAction->GetCostConfigEntry()));
			

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

		//	if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				to_add = true;

				sel_entry.ActionIndex = j;

				m_Selection.push_back(sel_entry);

				SelectionEntry entry;

				entry.dwContext = n;
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				n=n+1;

				if (!HasSameSubjectCount(pStackAction, (pActionContainer->GetAt(j).GetPointer()))) 
					to_add = false;

				if (toCast->GetSpells().GetAt(i)->GetAbilityName() != ((CSpell*)pStackAction->GetAbility())->GetAbilityName()) 
					to_add = false; // Skipping other modes.

				if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					if (((CManaConsumptionAbilityAction*)(pActionContainer->GetAt(j).GetPointer()))->GetCostConfigEntry().GetExtraValue() != pStackAction->GetCostConfigEntry().GetExtraValue())
						to_add = false;
				}

				if (to_add) entries.push_back(entry);
			}
		}
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)toCast, extra_value, (DWORD)pCard);
}
bool CTargetCopyCastSpell::HasSameSubjectCount(const CStackAbilityAction* pStackAction, CAction* pAction)
{
	int subjects1 = 0;
	int subjects2 = 0;
	const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pStackAction);
			if (pTargetAction)
			{
				subjects1 = pTargetAction->GetTargetGroup().GetCardSubjectCount() + pTargetAction->GetTargetGroup().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects1 = 0;
			}

	const CTargetActionCommon* pTargetAction1 = dynamic_cast<const CTargetActionCommon*>(pAction);
			if (pTargetAction1)
			{
				subjects2 = pTargetAction1->GetTargetGroup().GetCardSubjectCount() + pTargetAction1->GetTargetGroup().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects2 = 0;
			}

	if (pTargetAction && pTargetAction1)
	{
		if (subjects1 != subjects2) 
			return false;
		else 
			return true;
	}

	const CDoubleTargetActionCommon* pDoubleTargetAction1 = dynamic_cast<const CDoubleTargetActionCommon*>(pStackAction);
			if (pDoubleTargetAction1)
			{
				subjects1 = pDoubleTargetAction1->GetTargetGroup1().GetCardSubjectCount() + pDoubleTargetAction1->GetTargetGroup1().GetPlayerSubjectCount();
				subjects2 = pDoubleTargetAction1->GetTargetGroup2().GetCardSubjectCount() + pDoubleTargetAction1->GetTargetGroup2().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects1 = 0;
				subjects2 = 0;
			}

	const CDoubleTargetActionCommon* pDoubleTargetAction2 = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			if (pDoubleTargetAction2)
			{
				if (subjects1 == pDoubleTargetAction2->GetTargetGroup1().GetCardSubjectCount() + pDoubleTargetAction2->GetTargetGroup1().GetPlayerSubjectCount() &&
				subjects2 == pDoubleTargetAction2->GetTargetGroup2().GetCardSubjectCount() + pDoubleTargetAction2->GetTargetGroup2().GetPlayerSubjectCount())
					return true;
				else 
					return false;
			}
			else
			{ 
				return true;
			}
	
	return true;
}
void CTargetCopyCastSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;
			int j = (int)it->dwContext;

			const CStack& stack = m_pGame->GetStack();
			const CStackAbilityAction* pStackAction;

			for (int l = 0; l < stack.GetStackSize(); ++l)
			{
				pStackAction = stack.GetStackAction(l).GetPointer();
				if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == (CCard*)dwContext3))
				{
					break;
				}

			}


			if (j == 99999) break;
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
				}
				else
				{
				//	m_Selection[j].PerformAction(toCast);
						CManaPool PPool = pSelectionPlayer->GetManaPool();

						CAction* pAction = m_Selection[j].GetAction(toCast).GetPointer();
						((CAbilityAction*)pAction)->SetCostConfigEntry(pStackAction->GetCostConfigEntry());
					//	if (dwContext2) pAction->SetValue(ContextValue(dwContext2));
						pAction->PerformAction();

						pSelectionPlayer->GetManaPool().SetMana(PPool);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
				}

		}
}

//____________________________________________________________________________
//
/*
Ref:
	Echo Mage 1UU
	Creature - Human Wizard
	Level up 1U (1U: Put a level counter on this. Level up only as a sorcery.)
	LEVEL 2-3
	2/4
	UU, Tap: Copy target instant or sorcery spell. You may choose new targets for the copy.
	LEVEL 4+
	2/5
	UU, Tap: Copy target instant or sorcery spell twice. You may choose new targets for the copies.

	Used at LEVEL 4+ ability
*/
CTargetCopyCastTwiceSpell::CTargetCopyCastTwiceSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   ZoneId fromZoneId, CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CTargetCopyCastTwiceSpell::OnSelectionDone))
{
	GetTargeting()->SetSubjectZoneId(fromZoneId);
}


void CTargetCopyCastTwiceSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCard* toCast1;
	
	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), m_pCard, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo(pCard);

	toCast1 = pContainer.GetAt(0);

	m_Selection.clear();
	int n=0;

	//------------------------------------------------------------------------------------------------------------------------------------------

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	//--------------------------------------------------------------------------------------------------------------------------------------------

	const CStack& stack = m_pGame->GetStack();
	const CStackAbilityAction* pStackAction;

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
						pStackAction = stack.GetStackAction(l).GetPointer();
						if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
						{
							break;
						}

	}

	//--------------------------------------------------------------------------------------------------------------------------------------------


	bool to_add = false;

	toCast1->SetLastCastingCostConfigEntry(pStackAction->GetCostConfigEntry());
	toCast1->SetLastCastingManaCost(pStackAction->GetCostConfigEntry().GetManaPool());
		

	//if (p
	int extra_value = 0;

	if (!toCast1->GetCardType().IsLand())
	{
		if (toCast1->GetController() != pAction->GetController()) toCast1->SetController(pAction->GetController());

		for (int i = 0; i <  toCast1->GetSpells().GetSize(); ++i)
		{
			to_add = true;
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast1);

			if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					toCast1->GetSpells().GetAt(i)->GetCost().AddReductionCost(CManaCostBase::Color::Black, pStackAction->GetCostConfigEntry().GetExtraValue());
				}

			toCast1->GetCardKeyword()->AddFreecast(TRUE);

			//toCast->GetSpells().GetAt(i)->GetCost().R
		//	else
		
			//	toCast->SetLastCastingExtraValue(pStackAction->GetAbility()->GetCost().GetExtraValue(pStackAction->GetCostConfigEntry()));
			//    extra_value = (pStackAction->GetAbility()->GetCost().GetExtraValue(pStackAction->GetCostConfigEntry()));
			

			std::auto_ptr<CActionContainer> pActionContainer(toCast1->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

		//	if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast1->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				to_add = true;

				sel_entry.ActionIndex = j;

				m_Selection.push_back(sel_entry);

				SelectionEntry entry;

				entry.dwContext = n;
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				n=n+1;

				if (!HasSameSubjectCount(pStackAction, (pActionContainer->GetAt(j).GetPointer()))) 
					to_add = false;

				if (toCast1->GetSpells().GetAt(i)->GetAbilityName() != ((CSpell*)pStackAction->GetAbility())->GetAbilityName()) 
					to_add = false; // Skipping other modes.

				if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					if (((CManaConsumptionAbilityAction*)(pActionContainer->GetAt(j).GetPointer()))->GetCostConfigEntry().GetExtraValue() != pStackAction->GetCostConfigEntry().GetExtraValue())
						to_add = false;
				}

				if (to_add) entries.push_back(entry);
			}
		}
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), pAction->GetController(), (DWORD)toCast1, extra_value, (DWORD)pCard);

	CCard* toCast2;

	pContainer.RemoveAll();

	pModifier.ApplyTo(pCard);

	toCast2 = pContainer.GetAt(0);

	m_Selection.clear();
	n = 0;

	//------------------------------------------------------------------------------------------------------------------------------------------

	vector<SelectionEntry> entries2;

	SelectionEntry entry2;

	//--------------------------------------------------------------------------------------------------------------------------------------------

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
						pStackAction = stack.GetStackAction(l).GetPointer();
						if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
						{
							break;
						}

	}

	//--------------------------------------------------------------------------------------------------------------------------------------------


	to_add = false;

	toCast2->SetLastCastingCostConfigEntry(pStackAction->GetCostConfigEntry());
	toCast2->SetLastCastingManaCost(pStackAction->GetCostConfigEntry().GetManaPool());
		

	//if (p
	extra_value = 0;

	if (!toCast2->GetCardType().IsLand())
	{
		if (toCast2->GetController() != pAction->GetController()) toCast2->SetController(pAction->GetController());

		for (int i = 0; i <  toCast2->GetSpells().GetSize(); ++i)
		{
			to_add = true;
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast2);

			if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					toCast2->GetSpells().GetAt(i)->GetCost().AddReductionCost(CManaCostBase::Color::Black, pStackAction->GetCostConfigEntry().GetExtraValue());
				}

			toCast2->GetCardKeyword()->AddFreecast(TRUE);

			//toCast->GetSpells().GetAt(i)->GetCost().R
		//	else
		
			//	toCast->SetLastCastingExtraValue(pStackAction->GetAbility()->GetCost().GetExtraValue(pStackAction->GetCostConfigEntry()));
			//    extra_value = (pStackAction->GetAbility()->GetCost().GetExtraValue(pStackAction->GetCostConfigEntry()));
			

			std::auto_ptr<CActionContainer> pActionContainer(toCast2->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

		//	if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast2->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				to_add = true;

				sel_entry.ActionIndex = j;

				m_Selection.push_back(sel_entry);

				SelectionEntry entry;

				entry.dwContext = n;
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				n=n+1;

				if (!HasSameSubjectCount(pStackAction, (pActionContainer->GetAt(j).GetPointer()))) 
					to_add = false;

				if (toCast2->GetSpells().GetAt(i)->GetAbilityName() != ((CSpell*)pStackAction->GetAbility())->GetAbilityName()) 
					to_add = false; // Skipping other modes.

				if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					if (((CManaConsumptionAbilityAction*)(pActionContainer->GetAt(j).GetPointer()))->GetCostConfigEntry().GetExtraValue() != pStackAction->GetCostConfigEntry().GetExtraValue())
						to_add = false;
				}

				if (to_add) entries2.push_back(entry);
			}
		}
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries2, 1, 1, GetCard(), pAction->GetController(), (DWORD)toCast2, extra_value, (DWORD)pCard);
}
bool CTargetCopyCastTwiceSpell::HasSameSubjectCount(const CStackAbilityAction* pStackAction, CAction* pAction)
{
	int subjects1 = 0;
	int subjects2 = 0;
	const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pStackAction);
			if (pTargetAction)
			{
				subjects1 = pTargetAction->GetTargetGroup().GetCardSubjectCount() + pTargetAction->GetTargetGroup().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects1 = 0;
			}

	const CTargetActionCommon* pTargetAction1 = dynamic_cast<const CTargetActionCommon*>(pAction);
			if (pTargetAction1)
			{
				subjects2 = pTargetAction1->GetTargetGroup().GetCardSubjectCount() + pTargetAction1->GetTargetGroup().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects2 = 0;
			}

	if (pTargetAction && pTargetAction1)
	{
		if (subjects1 != subjects2) 
			return false;
		else 
			return true;
	}

	const CDoubleTargetActionCommon* pDoubleTargetAction1 = dynamic_cast<const CDoubleTargetActionCommon*>(pStackAction);
			if (pDoubleTargetAction1)
			{
				subjects1 = pDoubleTargetAction1->GetTargetGroup1().GetCardSubjectCount() + pDoubleTargetAction1->GetTargetGroup1().GetPlayerSubjectCount();
				subjects2 = pDoubleTargetAction1->GetTargetGroup2().GetCardSubjectCount() + pDoubleTargetAction1->GetTargetGroup2().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects1 = 0;
				subjects2 = 0;
			}

	const CDoubleTargetActionCommon* pDoubleTargetAction2 = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			if (pDoubleTargetAction2)
			{
				if (subjects1 == pDoubleTargetAction2->GetTargetGroup1().GetCardSubjectCount() + pDoubleTargetAction2->GetTargetGroup1().GetPlayerSubjectCount() &&
				subjects2 == pDoubleTargetAction2->GetTargetGroup2().GetCardSubjectCount() + pDoubleTargetAction2->GetTargetGroup2().GetPlayerSubjectCount())
					return true;
				else 
					return false;
			}
			else
			{ 
				return true;
			}
	
	return true;
}
void CTargetCopyCastTwiceSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;
			int j = (int)it->dwContext;

			const CStack& stack = m_pGame->GetStack();
			const CStackAbilityAction* pStackAction;

			for (int l = 0; l < stack.GetStackSize(); ++l)
			{
				pStackAction = stack.GetStackAction(l).GetPointer();
				if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == (CCard*)dwContext3))
				{
					break;
				}

			}


			if (j == 99999) break;
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
				}
				else
				{
				//	m_Selection[j].PerformAction(toCast);
						CManaPool PPool = pSelectionPlayer->GetManaPool();

						CAction* pAction = m_Selection[j].GetAction(toCast).GetPointer();
						((CAbilityAction*)pAction)->SetCostConfigEntry(pStackAction->GetCostConfigEntry());
					//	if (dwContext2) pAction->SetValue(ContextValue(dwContext2));
						pAction->PerformAction();

						pSelectionPlayer->GetManaPool().SetMana(PPool);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
				}

		}
}

//____________________________________________________________________________
//
/*
Ref:
*/
/*
CMeletisCharlatanSpell::CMeletisCharlatanSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   ZoneId fromZoneId, CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CMeletisCharlatanSpell::OnSelectionDone))
{
	GetTargeting()->SetSubjectZoneId(fromZoneId);
}


void CMeletisCharlatanSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CCard* toCast;

	CCountedCardContainer pContainer;

	CCardCopyModifier pModifier = CCardCopyModifier(GetGame(), m_pCard, NULL, NULL, &pContainer, ZoneId::_Tokens); 

	pModifier.ApplyTo(pCard);

	toCast = pContainer.GetAt(0);

	m_Selection.clear();
	int n=0;

	//------------------------------------------------------------------------------------------------------------------------------------------

	vector<SelectionEntry> entries;

	SelectionEntry entry;

	//--------------------------------------------------------------------------------------------------------------------------------------------

	const CStack& stack = m_pGame->GetStack();
	const CStackAbilityAction* pStackAction;

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
						pStackAction = stack.GetStackAction(l).GetPointer();
						if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == pCard))
						{
							break;
						}

	}

	//--------------------------------------------------------------------------------------------------------------------------------------------


	bool to_add = false;

	toCast->SetLastCastingCostConfigEntry(pStackAction->GetCostConfigEntry());
	toCast->SetLastCastingManaCost(pStackAction->GetCostConfigEntry().GetManaPool());
		

	//if (p
	int extra_value = 0;

	if (!toCast->GetCardType().IsLand())
	{
		for (int i = 0; i <  toCast->GetSpells().GetSize(); ++i)
		{
			to_add = true;
			FreecastCardActionsSelection sel_entry;
			sel_entry.SpellIndex = i;
			sel_entry.AddReductionCost(toCast);

			if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					toCast->GetSpells().GetAt(i)->GetCost().AddReductionCost(CManaCostBase::Color::Black, pStackAction->GetCostConfigEntry().GetExtraValue());
				}

			toCast->GetCardKeyword()->AddFreecast(TRUE);

			//toCast->GetSpells().GetAt(i)->GetCost().R
		//	else
		
			//	toCast->SetLastCastingExtraValue(pStackAction->GetAbility()->GetCost().GetExtraValue(pStackAction->GetCostConfigEntry()));
			//    extra_value = (pStackAction->GetAbility()->GetCost().GetExtraValue(pStackAction->GetCostConfigEntry()));
			

			std::auto_ptr<CActionContainer> pActionContainer(toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE));

		//	if (toCast->GetSpells().GetAt(i)->GetPlayableFrom() != ZoneId::Hand)  {continue;}
			if (!toCast->GetSpells().GetAt(i)->GetAbilityActions(TRUE,TRUE)) {continue;}

			for (int j = 0; j < pActionContainer->GetSize(); ++j)
			{
				to_add = true;

				sel_entry.ActionIndex = j;

				m_Selection.push_back(sel_entry);

				SelectionEntry entry;

				entry.dwContext = n;
				entry.strText.Format(_T("%s"), (pActionContainer->GetAt(j).GetPointer())->GetActionText());

				n=n+1;

				if (!HasSameSubjectCount(pStackAction, (pActionContainer->GetAt(j).GetPointer()))) 
					to_add = false;

				if (toCast->GetSpells().GetAt(i)->GetAbilityName() != ((CSpell*)pStackAction->GetAbility())->GetAbilityName()) 
					to_add = false; // Skipping other modes.

				if (pStackAction->GetCostConfigEntry().GetExtraValue())
				{
					if (((CManaConsumptionAbilityAction*)(pActionContainer->GetAt(j).GetPointer()))->GetCostConfigEntry().GetExtraValue() != pStackAction->GetCostConfigEntry().GetExtraValue())
						to_add = false;
				}

				if (to_add) entries.push_back(entry);
			}
		}
	}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(), entries, 1, 1, GetCard(), toCast->GetController(), (DWORD)toCast, extra_value, (DWORD)pCard);
}

bool CMeletisCharlatanSpell::HasSameSubjectCount(const CStackAbilityAction* pStackAction, CAction* pAction)
{
	int subjects1 = 0;
	int subjects2 = 0;
	const CTargetActionCommon* pTargetAction = dynamic_cast<const CTargetActionCommon*>(pStackAction);
			if (pTargetAction)
			{
				subjects1 = pTargetAction->GetTargetGroup().GetCardSubjectCount() + pTargetAction->GetTargetGroup().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects1 = 0;
			}

	const CTargetActionCommon* pTargetAction1 = dynamic_cast<const CTargetActionCommon*>(pAction);
			if (pTargetAction1)
			{
				subjects2 = pTargetAction1->GetTargetGroup().GetCardSubjectCount() + pTargetAction1->GetTargetGroup().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects2 = 0;
			}

	if (pTargetAction && pTargetAction1)
	{
		if (subjects1 != subjects2) 
			return false;
		else 
			return true;
	}

	const CDoubleTargetActionCommon* pDoubleTargetAction1 = dynamic_cast<const CDoubleTargetActionCommon*>(pStackAction);
			if (pDoubleTargetAction1)
			{
				subjects1 = pDoubleTargetAction1->GetTargetGroup1().GetCardSubjectCount() + pDoubleTargetAction1->GetTargetGroup1().GetPlayerSubjectCount();
				subjects2 = pDoubleTargetAction1->GetTargetGroup2().GetCardSubjectCount() + pDoubleTargetAction1->GetTargetGroup2().GetPlayerSubjectCount();
			}
			else
			{ 
				subjects1 = 0;
				subjects2 = 0;
			}

	const CDoubleTargetActionCommon* pDoubleTargetAction2 = dynamic_cast<const CDoubleTargetActionCommon*>(pAction);
			if (pDoubleTargetAction2)
			{
				if (subjects1 == pDoubleTargetAction2->GetTargetGroup1().GetCardSubjectCount() + pDoubleTargetAction2->GetTargetGroup1().GetPlayerSubjectCount() &&
				subjects2 == pDoubleTargetAction2->GetTargetGroup2().GetCardSubjectCount() + pDoubleTargetAction2->GetTargetGroup2().GetPlayerSubjectCount())
					return true;
				else 
					return false;
			}
			else
			{ 
				return true;
			}
	
	return true;
}

void CMeletisCharlatanSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* toCast = (CCard*)dwContext1;
			int j = (int)it->dwContext;

			const CStack& stack = m_pGame->GetStack();
			const CStackAbilityAction* pStackAction;

			for (int l = 0; l < stack.GetStackSize(); ++l)
			{
				pStackAction = stack.GetStackAction(l).GetPointer();
				if (pStackAction->IsSpell() && (pStackAction->GetAbility()->GetCard() == (CCard*)dwContext3))
				{
					break;
				}

			}


			if (j == 99999) break;
			else
				if (j == 99998)
				{
					((CBasicLandCard*)toCast)->GetLandAbility()->GetAbilityActions(TRUE,TRUE)->PerformAction(0);
					toCast->GetCardKeyword()->RemoveFreecast(TRUE);
				}
				else
				{
				//	m_Selection[j].PerformAction(toCast);
						CManaPool PPool = pSelectionPlayer->GetManaPool();

						CAction* pAction = m_Selection[j].GetAction(toCast).GetPointer();
						((CAbilityAction*)pAction)->SetCostConfigEntry(pStackAction->GetCostConfigEntry());
					//	if (dwContext2) pAction->SetValue(ContextValue(dwContext2));
						pAction->PerformAction();

						pSelectionPlayer->GetManaPool().SetMana(PPool);

					toCast->GetCardKeyword()->AddFreecast(TRUE);
					m_Selection[j].RemoveReductionCost(toCast);
				}

		}
}
*/
//____________________________________________________________________________
//
/*
	Specific to Foreshadow card.	
Ref:
	Foreshadow 1U
	Instant
	Name a card, then target opponent puts the top card of his or her library into his or her graveyard. 
	If that card is the named card, you draw a card.
	Draw a card at the beginning of the next turn's upkeep.
*/
CForeshadowSpell::CForeshadowSpell(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost,
															   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CForeshadowSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag::MoveCard);

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CForeshadowSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);
			int nDiscardCount = targetGroup.GetValue(pPlayer).nValue1;

			if (bSetNames)
			{
				strActionName1 = _T(" to put the top card of his or her library into his or her graveyard");

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
				nBonusScore += pPlayer->GetZoneById(ZoneId::Hand)->GetSize() / 2;	// Pure guess
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CForeshadowSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();
	int nZoneCount = pPlayer->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pPlayer->GetZone(nZone);
		int nZoneSize = pZone->GetSize();

		for (int i = 0; i < nZoneSize; ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (!pCard->GetCardType().IsToken())
			{
				bool bIncluded = false;
				for (int j = 0; j < nCardListSize; ++j)
					if (pCardList.GetAt(j)->GetPrintedCardName() == pCard->GetPrintedCardName())
					{
						bIncluded = true;
						break;
					}

				if (!bIncluded)
				{
					pCardList.AddCard(pCard, CardPlacement::Top);
					nCardListSize++;
				}
			}
		}
	}
		
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("No card name"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pCardList.GetSize(); ++i)
		{
			const CCard* pCard = pCardList.GetAt(i);

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Search for %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(),
		entries, 1, 1, GetCard(), pCaster,
		(DWORD)pCaster,				// Context 1
		(DWORD)pPlayer);	// Context 2
}

void CForeshadowSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);

	CCard* pDiscardCard = NULL;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{

				return;
			}

			CCard* pCard = (CCard*)(it->dwContext);
			pDiscardCard = pCard;
			break;
		}

	CPlayer* pCaster = (CPlayer*)dwContext1;
	CPlayer* pDiscarder = (CPlayer*)dwContext2;

	CCardFilter* pDiscardFilter;
	CCardFilter pDiscardFilter_temp;

	pDiscardFilter = NULL;

	if (pDiscardCard)
		pDiscardFilter_temp.SetComparer(new CardNameComparer(pDiscardCard->GetPrintedCardName()));

	pDiscardFilter = &pDiscardFilter_temp;

	DiscardCards(pCaster, pDiscarder, pDiscardFilter);
}

void CForeshadowSpell::DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter)
{
	CCard* pNextDraw = pDiscarder->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (!pNextDraw->GetCardType().IsLand())
	{
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal();
	}

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pDiscarder);

	pModifier.ApplyTo(pNextDraw);

	if (pDiscardFilter->IsCardIncluded(pNextDraw))
	{
		CDrawCardModifier pModifier1 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		pModifier1.ApplyTo(pCaster);
	}

	CTokenCreationModifier pModifier2 = CTokenCreationModifier(GetGame(), _T("Slowtrip Effect"), 61031, 1, FALSE, ZoneId::_Effects);
	pModifier2.ApplyTo(pCaster);
}
//____________________________________________________________________________
//
/*
	Specific to Predict card.	
Ref:
	Predict 1U
	Instant
	Name a card, then target player puts the top card of his or her library into his or her graveyard. 
	If that card is the named card, you draw two cards. Otherwise, you draw a card.
*/
CPredictSpell::CPredictSpell(CCard* pCard, AbilityType abilityType,
															   LPCTSTR strManaCost,
															   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_cpSelectionListener(VAR_NAME(m_cpSelectionListener), SelectionEventSource::Listener::EventCallback(this, &CPredictSpell::OnSelectionDone))
{
	AddAbilityTag(AbilityTag::MoveCard);

	GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

CActionContainer* CPredictSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = __super::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CString strActionName1;
	CPlayer* pController = GetController();

	for (int l = 0; l < pActionContainer->GetSize(); ++l)
	{
		CString strActionName;
		int nBonusScore = 0;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();

		for (CSubjectGroup::PlayerSubjectIterator it = targetGroup.PlayerSubjectBegin();
			it != targetGroup.PlayerSubjectEnd(); ++it)
		{
			CPlayer* pPlayer = const_cast<CPlayer*>(*it);
			int nDiscardCount = targetGroup.GetValue(pPlayer).nValue1;

			if (bSetNames)
			{
				strActionName1 = _T(" to put the top card of his or her library into his or her graveyard");

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}

			if (!pAction->IsTrick())
				nBonusScore += pPlayer->GetZoneById(ZoneId::Hand)->GetSize() / 2;	// Pure guess
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

		if (!pAction->IsTrick())
			pAction->SetScore(MIN(pAction->GetScore() + nBonusScore, ActionScore::SpellMaximum));
	}

	return pActionContainer;
}

void CPredictSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	CPlayer* pCaster = pAction->GetController();
	int nZoneCount = pPlayer->GetZoneCount();

	CCountedCardContainer pCardList;
	pCardList.RemoveAll();
	int nCardListSize = 0;

	for (int nZone = 0; nZone < nZoneCount; ++nZone)
	{
		CZone* pZone = pPlayer->GetZone(nZone);
		int nZoneSize = pZone->GetSize();

		for (int i = 0; i < nZoneSize; ++i)
		{
			CCard* pCard = pZone->GetAt(i);
			if (!pCard->GetCardType().IsToken())
			{
				bool bIncluded = false;
				for (int j = 0; j < nCardListSize; ++j)
					if (pCardList.GetAt(j)->GetPrintedCardName() == pCard->GetPrintedCardName())
					{
						bIncluded = true;
						break;
					}

				if (!bIncluded)
				{
					pCardList.AddCard(pCard, CardPlacement::Top);
					nCardListSize++;
				}
			}
		}
	}

	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 0;
		selectionEntry.strText.Format(_T("No card name"));

		entries.push_back(selectionEntry);
	}
	for (int i = 0; i < pCardList.GetSize(); ++i)
		{
			const CCard* pCard = pCardList.GetAt(i);

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("Search for %s"), pCard->GetPrintedCardName());

			entries.push_back(selectionEntry);
		}

	m_pGame->GetSelection().AddSelectionRequest(
		m_cpSelectionListener.GetPointer(),
		entries, 1, 1, GetCard(), pCaster,
		(DWORD)pCaster,				// Context 1
		(DWORD)pPlayer);	// Context 2
}

void CPredictSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	m_cpSelectionListener->RemoveAllEventSources();

	ATLASSERT(nSelectedCount == 1);

	CCard* pDiscardCard = NULL;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{

				return;
			}

			CCard* pCard = (CCard*)(it->dwContext);
			pDiscardCard = pCard;
			break;
		}

	CPlayer* pCaster = (CPlayer*)dwContext1;
	CPlayer* pDiscarder = (CPlayer*)dwContext2;

	CCardFilter* pDiscardFilter;
	CCardFilter pDiscardFilter_temp;

	pDiscardFilter = NULL;

	if (pDiscardCard)
		pDiscardFilter_temp.SetComparer(new CardNameComparer(pDiscardCard->GetPrintedCardName()));

	pDiscardFilter = &pDiscardFilter_temp;

	DiscardCards(pCaster, pDiscarder, pDiscardFilter);
}

void CPredictSpell::DiscardCards(CPlayer* pCaster, CPlayer* pDiscarder, const CCardFilter* pDiscardFilter)
{
	CCard* pNextDraw = pDiscarder->GetZoneById(ZoneId::Library)->GetTopCard();

	int nCost = 0;

	if (!pNextDraw->GetCardType().IsLand())
	{
		nCost = pNextDraw->GetSpells().GetAt(0)->GetCost().GetManaCost().GetTotal();
	}

	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others, pDiscarder);

	pModifier.ApplyTo(pNextDraw);

	if (pDiscardFilter->IsCardIncluded(pNextDraw))
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(2), MaximumValue(2));
		pModifier.ApplyTo(pCaster);
	}
	else
	{
		CDrawCardModifier pModifier = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
		pModifier.ApplyTo(pCaster);
	}

}
//____________________________________________________________________________
//
/*
Ref: 
	Karn Liberated 7
	Planeswalker — Karn
	+4: Target player exiles a card from his or her hand.
	-3: Exile target permanent.
	-14: Restart the game, leaving in exile all non-Aura permanent cards exiled with Karn Liberated. 
	Then put those cards onto the battlefield under your control.

	Used in +4 part of card.

*/
CTargetPlayerExileSpell::CTargetPlayerExileSpell(CCard* pCard, AbilityType abilityType,
														 LPCTSTR strManaCost,
														 const CCardFilter* pCardFilter,
														 CCountedCardContainer* pContainer,
														 CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, FALSE_CARD_COMPARER, TRUE, pTargeting)
	, m_SelectionSupport(pCard->GetGame(), CSelectionSupport::SelectionCallback(this, &CTargetPlayerExileSpell::OnSelectionDone))
	, m_pCardFilter(pCardFilter)
	, m_pContainer(pContainer)
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Exile));

	//GetTargeting()->SetDefaultCharacteristic(Characteristic::Negative);
}

void CTargetPlayerExileSpell::ResolvePlayer(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value)
{
	__super::ResolvePlayer(pAction, pPlayer, value);

	std::vector<SelectionEntry> entries;

	GetSelectionEntries(pAction, pPlayer, value, entries);

	if (entries.size())
		m_SelectionSupport.AddSelectionRequest(entries, 1, 1, GetCard(), pPlayer, (DWORD)pAction->GetController());
}

void CTargetPlayerExileSpell::GetSelectionEntries(const CTargetSpellAction* pAction, CPlayer* pPlayer, const ContextValue& value, std::vector<SelectionEntry>& entries)
{
	CZone* pZone = pPlayer->GetZoneById(ZoneId::Hand);

	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		if (!m_pCardFilter->IsCardIncluded(pCard))
			continue;

		SelectionEntry entry;
		entry.dwContext = (DWORD)pCard;
		entry.strText.Format(_T("selects %s"), pCard->GetCardName());
		entry.cpAssociatedCard = pCard;
		entries.push_back(entry);
	}
}

void CTargetPlayerExileSpell::OnSelectionDone(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	const CPlayer* pByPlayer = (const CPlayer*)dwContext1;

	for (vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)(it->dwContext);
			pCard->Move(pCard->GetOwner()->GetZoneById(ZoneId::Exile), pByPlayer, MoveType::Others);
			m_pContainer->AddCard(pCard, CardPlacement::Top);

			break;
		}
}

BOOL CTargetPlayerExileSpell::CMyTargeting::SubjectAllowed(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pPlayer, bIncludeTricks, bTrick))
		return FALSE;

	CTargetPlayerExileSpell* pThisAbility = (CTargetPlayerExileSpell*)GetAbility();

	CZone* pZone = pPlayer->GetZoneById(ZoneId::Hand);
	for (int k = 0; k < pZone->GetSize(); ++k)
	{
		CCard* pCard = pZone->GetAt(k);

		if (pThisAbility->m_pCardFilter->IsCardIncluded(pCard))
			return TRUE;
	}

	bTrick = TRUE;

	if (!bIncludeTricks)
		return FALSE;

	return TRUE;
}

//____________________________________________________________________________
//
/*
Ref:
	Killing Glare XB
	Instant
	Destroy target creature with power X or less.
*/
CTargetExtraPowerMoveCardSpell::CTargetExtraPowerMoveCardSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   ZoneId fromZoneId, ZoneId toZoneId, BOOL bToOwner, MoveType moveType, BOOL pOrLess,
							   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
	, m_bToOwner(bToOwner)
	, m_ToZoneId(toZoneId)
	, m_ReturnNodeId(NodeId::Null)
	, m_MoveType(moveType)
	, m_Placement(CardPlacement::Top)
	, m_pOrLess(pOrLess)
{
	AddAbilityTag(AbilityTag(fromZoneId, toZoneId));

	GetTargeting()->SetSubjectZoneId(fromZoneId);
}

BOOL CTargetExtraPowerMoveCardSpell::CMyTargeting::SubjectAllowed(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (GetAbility()->GetGame()->HasTarget(pCard))
		return TRUE;

	CTargetExtraPowerMoveCardSpell* pAbility = (CTargetExtraPowerMoveCardSpell*)GetAbility();

	CPlayer* pController = pAbility->GetController();
	CZone* pMoveFromZone = pCard->GetZone();


	CZone* pMoveToZone = NULL;
	if (pAbility->m_bToOwner)
		pMoveToZone = pCard->GetOwner()->GetZoneById(pAbility->m_ToZoneId);
	else
		pMoveToZone = pController->GetZoneById(pAbility->m_ToZoneId);

	if (CZone::IsBadCardMovement(pController, pMoveFromZone, pMoveToZone))
	{
		bTrick = TRUE;

		if (!bIncludeTricks)
			return FALSE;
	}

	return TRUE;
}
CActionContainer* CTargetExtraPowerMoveCardSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;

	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();
		BOOL bFound = FALSE;

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCard* pCard = it->GetPointer();
			const CZone* pMoveFromZone = pCard->GetZone();

			int nExtraCost = pAction->GetCostConfigEntry().GetExtraValue();

			if (pCard->GetCardType().IsCreature() && ((((CCreatureCard*)pCard)->GetLastKnownPower() == nExtraCost) || 
					(m_pOrLess == TRUE && (nExtraCost >= ((CCreatureCard*)pCard)->GetLastKnownPower()))))
					bFound = TRUE;
			else
			break;

			targetGroup.SetValue(pCard, ContextValue(/*(int)pMoveToZone,*/ (int)pMoveFromZone));

			if (bSetNames)
			{
				CString strActionName1;

				if (m_ToZoneId != ZoneId::Battlefield)
					strActionName1 = _T(" and moves ") + pCard->GetCardName();
				else
					strActionName1 = _T(" and gains control of ") + pCard->GetCardName();

				if (GetTargeting()->GetSubjectZoneId() != ZoneId::Battlefield)
					strActionName1 += _T(" in ") + pMoveFromZone->GetZoneName();

				if (m_ToZoneId != ZoneId::Battlefield)
					strActionName1 += _T(" to ") + m_ToZoneId.ToString();

				if (!strActionName.IsEmpty())
					strActionName += _T(",") + strActionName1;
				else
					strActionName += strActionName1;
			}
		}

		if (bSetNames)
			pAction->AppendToActionName(strActionName);

	//	counted_ptr<CTargetExtraPowerMoveCardSpell> cpAction1 = (CTargetExtraPowerMoveCardSpell*)pAction;//.GetPointer();

		if (bFound)
			pActionContainer1->Add(pAction);

	}
	delete pActionContainer;

	return pActionContainer1;
}
void CTargetExtraPowerMoveCardSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CZone* pMoveFromZone = (CZone*)value.nValue1;	// From zone can be outside of in-play
	CZone* pMoveToZone;
	CCard* pControlCard = pAction->GetOriginatingCard();

	if (m_bToOwner)
		pMoveToZone = pCard->GetOwner()->GetZoneById(m_ToZoneId);
	else
		pMoveToZone = pAction->GetController()->GetZoneById(m_ToZoneId);

	if (CZone::IsSamePhysicalZone(pCard->GetZone(), pMoveFromZone))
	{
		if (m_ReturnNodeId.Any() &&
			pCard->GetController() != pAction->GetController())
		{
			CGainControlModifier* pModifier = new CGainControlModifier(m_pGame,pControlCard,true);

			m_pGame->GetScheduler()->ScheduleTask(
				new CCardModifierTask(pCard, std::auto_ptr<CCardModifier>(pModifier)),
				m_ReturnNodeId,
				TurnNumberDelta(-1));
		}

		CPlayer* pPreviousController = pCard->GetController();

		if (pMoveFromZone->GetZoneId() == ZoneId::Battlefield &&
			pMoveToZone->GetZoneId() == ZoneId::Battlefield)
		{
			CGainControlModifier* pModifier = new CGainControlModifier(m_pGame, pControlCard);
			pModifier->ApplyTo(pCard);
		}
		else
			if (pMoveFromZone != pMoveToZone)
				pCard->Move(pMoveToZone, pAction->GetController(), m_MoveType, m_Placement);

		m_CardControllerModifier.ApplyTo(pPreviousController);
	}
}

//____________________________________________________________________________
//
/*
Ref:
	Minamo Sightbender 1U
	Creature — Human Wizard
	X, Tap: Target creature with power X or less can't be blocked this turn.
*/
CTargetExtraPowerSpell::CTargetExtraPowerSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   BOOL pOrLess,
							   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
	, m_pOrLess(pOrLess)
{
}

BOOL CTargetExtraPowerSpell::CMyTargeting::SubjectAllowed(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (GetAbility()->GetGame()->HasTarget(pCard))
		return TRUE;

	CTargetExtraPowerSpell* pAbility = (CTargetExtraPowerSpell*)GetAbility();

	return TRUE;
}
CActionContainer* CTargetExtraPowerSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;

	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();
		BOOL bFound = FALSE;

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCard* pCard = it->GetPointer();
			const CZone* pMoveFromZone = pCard->GetZone();

			int nExtraCost = pAction->GetCostConfigEntry().GetExtraValue();

			if (pCard->GetCardType().IsCreature() && ((((CCreatureCard*)pCard)->GetLastKnownPower() == nExtraCost) || 
					(m_pOrLess == TRUE && (nExtraCost >= ((CCreatureCard*)pCard)->GetLastKnownPower()))))
					bFound = TRUE;
			else
			break;
		}

	//	counted_ptr<CTargetExtraPowerSpell> cpAction1 = (CTargetExtraPowerSpell*)pAction;//.GetPointer();

		if (bFound)
			pActionContainer1->Add(pAction);

	}
	delete pActionContainer;

	return pActionContainer1;
}
void CTargetExtraPowerSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);
}

//____________________________________________________________________________
//
/*
Ref:
	Helm of Obedience 4	
	Artifact
	X, Tap: Target opponent puts cards from the top of his or her library into his or her 
	graveyard until a creature card or X cards are put into that graveyard this way, 
	whichever comes first. If a creature card is put into that graveyard this way, 
	sacrifice Helm of Obedience and put that card onto the battlefield under your control. 
	X can't be 0.
*/
CXLowerLimitTargetSpell::CXLowerLimitTargetSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   BOOL pTargetPlayers,
							   int LowerLimit,
							   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, pTargetPlayers, pTargeting)
	, m_nLowerLimit(LowerLimit)
{
}

BOOL CXLowerLimitTargetSpell::CMyTargeting::SubjectAllowed(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (GetAbility()->GetGame()->HasTarget(pCard))
		return TRUE;

	CXLowerLimitTargetSpell* pAbility = (CXLowerLimitTargetSpell*)GetAbility();

	return TRUE;
}
CActionContainer* CXLowerLimitTargetSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;

	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();
		BOOL bFound = FALSE;

		int nExtraCost = pAction->GetCostConfigEntry().GetExtraValue();

		if (nExtraCost >= m_nLowerLimit)
			pActionContainer1->Add(pAction);

	}
	delete pActionContainer;

	return pActionContainer1;
}
void CXLowerLimitTargetSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);
}

//____________________________________________________________________________
//
/*
	Specific to Simic Manipulator card.
Ref:
	Simic Manipulator 1UU
	Creature — Mutant Wizard
	Evolve (Whenever a creature enters the battlefield under your control, if that 
	creature has greater power or toughness than this creature, put a +1/+1 counter 
	on this creature.)
	Tap, Remove one or more +1/+1 counters from Simic Manipulator: Gain control of 
	target creature with power less than or equal to the number of +1/+1 counters removed this way.
*/
CSimicManipulatorSpell::CSimicManipulatorSpell(CCard* pCard, AbilityType abilityType,
							   LPCTSTR strManaCost,
							   CardComparer* pComparer,
							   CTargeting* pTargeting)
	: CTargetSpell(pCard, abilityType, strManaCost, pComparer, FALSE, pTargeting)
{
}

BOOL CSimicManipulatorSpell::CMyTargeting::SubjectAllowed(const CCard* pCard,
								     BOOL bIncludeTricks,
								     BOOL& bTrick) const
{
	if (!__super::SubjectAllowed(pCard, bIncludeTricks, bTrick))
		return FALSE;

	if (GetAbility()->GetGame()->HasTarget(pCard))
		return TRUE;

	CSimicManipulatorSpell* pAbility = (CSimicManipulatorSpell*)GetAbility();

	return TRUE;
}

CActionContainer* CSimicManipulatorSpell::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CTargetSpell::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;

	CPlayer* pController = GetController();

	for (int l = pActionContainer->GetSize() - 1; l >= 0; --l)
	{
		CString strActionName;

		CTargetSpellAction* pAction = (CTargetSpellAction*)pActionContainer->GetAt(l).GetPointer();
		CSubjectGroup& targetGroup = pAction->GetTargetGroup();
		BOOL bFound = FALSE;

		int nExtraCost = -pAction->GetCostConfigEntry().GetExtraValue();

		for (CSubjectGroup::CardSubjectIterator it = targetGroup.CardSubjectBegin();
			it != targetGroup.CardSubjectEnd(); ++it)
		{
			const CCard* pCard = it->GetPointer();
			const CZone* pMoveFromZone = pCard->GetZone();

			if (pCard->GetCardType().IsCreature() && (((CCreatureCard*)pCard)->GetLastKnownPower() <= nExtraCost ))
				bFound = TRUE;

			else
			break;
		}

	//	counted_ptr<CTargetExtraPowerSpell> cpAction1 = (CTargetExtraPowerSpell*)pAction;//.GetPointer();

		if (bFound)
			pActionContainer1->Add(pAction);

	}
	delete pActionContainer;

	return pActionContainer1;
}

void CSimicManipulatorSpell::ResolveCard(const CTargetSpellAction* pAction, CCard* pCard, const ContextValue& value)
{
	__super::ResolveCard(pAction, pCard, value);

	CPlayer* pController = pAction->GetController();
	CCard* pTarget = pAction->GetAssociatedCard();

	pTarget->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
}

//____________________________________________________________________________
//