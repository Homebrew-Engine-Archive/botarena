#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
BOOL CSubjectGroupContainer::HasSourceCard(const CCard* pCard) const
{
	int nSubjectCount = GetSize();
	for (int i = 0; i < nSubjectCount; ++i)
	{
		const CSubjectGroup& subjectGroup(GetAt(i));
		if (subjectGroup.GetSourceCard() == pCard)
			return TRUE;
	}

	return FALSE;
}

BOOL CSubjectGroupContainer::HasSubject(const CCard* pCard) const
{
	int nSubjectCount = GetSize();
	for (int i = 0; i < nSubjectCount; ++i)
	{
		const CSubjectGroup& subjectGroup(GetAt(i));
		if (subjectGroup.HasSubject(pCard))
			return TRUE;
	}

	return FALSE;
}

BOOL CSubjectGroupContainer::HasSubject(const CPlayer* pPlayer) const
{
	int nSubjectCount = GetSize();
	for (int i = 0; i < nSubjectCount; ++i)
	{
		const CSubjectGroup& subjectGroup(GetAt(i));
		if (subjectGroup.HasSubject(pPlayer))
			return TRUE;
	}

	return FALSE;
}

//____________________________________________________________________________
//
Characteristic CSubjectGatherer::GetPwrTghAttrCharacteristic(
		Life nLifeDelta, Power nPowerDelta,
		Characteristic pwrTghHint,
		CardKeyword cardKeywordToAdd,
		CardKeyword cardKeywordToRemove,
		CreatureKeyword creatureKeywordToAdd,
		CreatureKeyword creatureKeywordToRemove)
{
	Characteristic pwrTghChar = pwrTghHint;
	if (pwrTghChar == Characteristic::Neutral)
	{
		if (((nLifeDelta < Life(0)) && (nPowerDelta <= Power(0))) ||
			((nLifeDelta <= Life(0)) && (nPowerDelta < Power(0))))
			pwrTghChar = Characteristic::Negative;
		else
			if (((nLifeDelta > Life(0)) && (nPowerDelta >= Power(0))) ||
				((nLifeDelta >= Life(0)) && (nPowerDelta > Power(0))))
				pwrTghChar = Characteristic::Positive;
	}

	Characteristic creatureKeywordChar = Characteristic::Neutral;
	if (creatureKeywordToAdd.Any())
		if ((creatureKeywordToAdd & CreatureKeyword::_PositiveCreatureKeywords).Any() &&
			!(creatureKeywordToAdd & CreatureKeyword::_NegativeCreatureKeywords).Any())
			creatureKeywordChar = Characteristic::Positive;
		else
		if ((creatureKeywordToAdd & CreatureKeyword::_NegativeCreatureKeywords).Any() &&
			!(creatureKeywordToAdd & CreatureKeyword::_PositiveCreatureKeywords).Any())
			creatureKeywordChar = Characteristic::Negative;
	
	Characteristic creatureKeywordChar1 = Characteristic::Neutral;
	if (creatureKeywordToRemove.Any())
		if ((creatureKeywordToRemove & CreatureKeyword::_PositiveCreatureKeywords).Any() &&
			!(creatureKeywordToRemove & CreatureKeyword::_NegativeCreatureKeywords).Any())
			creatureKeywordChar1 = Characteristic::Negative;
		else
		if ((creatureKeywordToRemove & CreatureKeyword::_NegativeCreatureKeywords).Any() &&
			!(creatureKeywordToRemove & CreatureKeyword::_PositiveCreatureKeywords).Any())
			creatureKeywordChar1 = Characteristic::Positive;

	Characteristic cardKeywordChar = Characteristic::Neutral;
	if (cardKeywordToAdd.Any())
		if ((cardKeywordToAdd & CardKeyword::_PositiveCardKeywords).Any() &&
			!(cardKeywordToAdd & CardKeyword::_NegativeCardKeywords).Any())
			cardKeywordChar = Characteristic::Positive;
		else
		if ((cardKeywordToAdd & CardKeyword::_NegativeCardKeywords).Any() &&
			!(cardKeywordToAdd & CardKeyword::_PositiveCardKeywords).Any())
			cardKeywordChar = Characteristic::Negative;
	
	Characteristic cardKeywordChar1 = Characteristic::Neutral;
	if (cardKeywordToRemove.Any())
		if ((cardKeywordToRemove & CardKeyword::_PositiveCardKeywords).Any() &&
			!(cardKeywordToRemove & CardKeyword::_NegativeCardKeywords).Any())
			cardKeywordChar1 = Characteristic::Negative;
		else
		if ((cardKeywordToRemove & CardKeyword::_NegativeCardKeywords).Any() &&
			!(cardKeywordToRemove & CardKeyword::_PositiveCardKeywords).Any())
			cardKeywordChar1 = Characteristic::Positive;

	if (pwrTghChar == Characteristic::Neutral && 
		creatureKeywordChar == Characteristic::Neutral && 
		creatureKeywordChar1 == Characteristic::Neutral &&
		cardKeywordChar == Characteristic::Neutral && 
		cardKeywordChar1 == Characteristic::Neutral)
		return Characteristic::Neutral;

	if (pwrTghChar != Characteristic::Positive  && 
		creatureKeywordChar != Characteristic::Positive && 
		creatureKeywordChar1 != Characteristic::Positive && 
		cardKeywordChar != Characteristic::Positive && 
		cardKeywordChar1 != Characteristic::Positive)
		return Characteristic::Negative;

	if (pwrTghChar != Characteristic::Negative && 
		creatureKeywordChar != Characteristic::Negative && 
		creatureKeywordChar1 != Characteristic::Negative && 
		cardKeywordChar != Characteristic::Negative && 
		cardKeywordChar1 != Characteristic::Negative)
		return Characteristic::Positive;

	return Characteristic::Neutral;
}

/*
BOOL CSubjectGatherer::ResolveDamage(const CSubjectGroup& subjectGroup, DamageType damageType)
{
	CLifeModifier lifeModifier(Life(0), subjectGroup.GetSourceCard(), PreventableType::NotPreventable, damageType);

	// Targeted creatures

	for (CSubjectGroup::CardSubjectIterator i = subjectGroup.CardSubjectBegin();
		i != subjectGroup.CardSubjectEnd(); ++i)
	{
		CCreatureCard* pCard = (CCreatureCard*)const_cast<CCard*>(*i);
		if (pCard->GetZoneId() == ZoneId::Battlefield)
		{
			const ContextValue& value = subjectGroup.GetValue(pCard);

			lifeModifier.SetLifeDelta(Life(value.nValue1));
			lifeModifier.SetPreventable(PreventableType::Enum(value.nValue2));
			lifeModifier.ApplyTo(pCard);
		}
	}

	// Targeted players

	for (CSubjectGroup::PlayerSubjectIterator i = subjectGroup.PlayerSubjectBegin();
		i != subjectGroup.PlayerSubjectEnd(); ++i)
	{
		CPlayer* pPlayer = const_cast<CPlayer*>(*i);

		const ContextValue& value = subjectGroup.GetValue(pPlayer);

		lifeModifier.SetLifeDelta(Life(value.nValue1));
		lifeModifier.SetPreventable(PreventableType::Enum(value.nValue2));
		lifeModifier.ApplyTo(pPlayer);
	}

	return TRUE;
}

BOOL CSubjectGatherer::ResolvePowerToughness(const CSubjectGroup& subjectGroup, BOOL bThisTurnOnly)
{
	CPowerModifier powerModifier(Power(0), bThisTurnOnly);
	CLifeModifier lifeModifier(Life(0), subjectGroup.GetSourceCard(), PreventableType::NotPreventable, DamageType::NotDealingDamage, bThisTurnOnly);

	for (CSubjectGroup::CardSubjectIterator i = subjectGroup.CardSubjectBegin();
		i != subjectGroup.CardSubjectEnd(); ++i)
	{
		CCreatureCard* pCard = (CCreatureCard*)const_cast<CCard*>(*i);

		if (pCard->GetZoneId() != ZoneId::Battlefield)
			continue;

		const ContextValue& value = subjectGroup.GetValue(pCard);

		powerModifier.SetPowerDelta(Power(value.nValue2));
		powerModifier.ApplyTo(pCard);

		lifeModifier.SetLifeDelta(Life(value.nValue1));
		lifeModifier.ApplyTo(pCard);
	}

	ATLASSERT(!subjectGroup.GetPlayerSubjectCount());

	return TRUE;
}

BOOL CSubjectGatherer::ResolveDamagePrevention(const CSubjectGroup& subjectGroup)
{
	for (CSubjectGroup::CardSubjectIterator i = subjectGroup.CardSubjectBegin();
		i != subjectGroup.CardSubjectEnd(); ++i)
	{
		CCreatureCard* pCard = (CCreatureCard*)const_cast<CCard*>(*i);
		if (pCard->GetZoneId() != ZoneId::Battlefield)
			continue;

		Life nPreventionValue(subjectGroup.GetValue(pCard).nValue1);
		ATLASSERT(nPreventionValue == Life(PreventionType::PreventNextDamage) 
			|| nPreventionValue == Life(PreventionType::PreventAllDamage)
			|| nPreventionValue == Life(PreventionType::ReverseNextDamage)
			|| nPreventionValue >= Life(0));
		pCard->GetDamagePrevention().AddDamagePreventionEntry(CDamagePreventionEntry(nPreventionValue));
	}

	for (CSubjectGroup::PlayerSubjectIterator i = subjectGroup.PlayerSubjectBegin();
		i != subjectGroup.PlayerSubjectEnd(); ++i)
	{
		CPlayer* pPlayer = const_cast<CPlayer*>(*i);
		Life nPreventionValue(subjectGroup.GetValue(pPlayer).nValue1);
		ATLASSERT(nPreventionValue == Life(PreventionType::PreventNextDamage) 
			|| nPreventionValue == Life(PreventionType::PreventAllDamage)
			|| nPreventionValue == Life(PreventionType::ReverseNextDamage)
			|| nPreventionValue >= Life(0));
		pPlayer->GetDamagePrevention().AddDamagePreventionEntry(CDamagePreventionEntry(nPreventionValue));
	}

	return TRUE;
}

BOOL CSubjectGatherer::ResolveDamageSourcePrevention(const CSubjectGroup& subjectGroup, CCard* pSourceCard)
{
	for (CSubjectGroup::CardSubjectIterator i = subjectGroup.CardSubjectBegin();
		i != subjectGroup.CardSubjectEnd(); ++i)
	{
		CCreatureCard* pCard = (CCreatureCard*)const_cast<CCard*>(*i);

		if (pCard->GetZoneId() != ZoneId::Battlefield)
			continue;

		Life nPreventionValue(subjectGroup.GetValue(pCard).nValue1);
		pCard->GetDamagePrevention().AddDamagePreventionEntry(CDamagePreventionEntry(nPreventionValue), pSourceCard);
	}

	for (CSubjectGroup::PlayerSubjectIterator i = subjectGroup.PlayerSubjectBegin();
		i != subjectGroup.PlayerSubjectEnd(); ++i)
	{
		CPlayer* pPlayer = const_cast<CPlayer*>(*i);
		Life nPreventionValue(subjectGroup.GetValue(pPlayer).nValue1);
		pPlayer->GetDamagePrevention().AddDamagePreventionEntry(CDamagePreventionEntry(nPreventionValue), pSourceCard);
	}

	return TRUE;
}

BOOL CSubjectGatherer::ResolveMoveCard(const CSubjectGroup& subjectGroup, CPlayer* pByPlayer)
{
	for (CSubjectGroup::CardSubjectIterator i = subjectGroup.CardSubjectBegin();
		i != subjectGroup.CardSubjectEnd(); ++i)
	{
		CCreatureCard* pCard = (CCreatureCard*)const_cast<CCard*>(*i);

		const ContextValue& value = subjectGroup.GetValue(pCard);

		CZone* pMoveFromZone = (CZone*)value.nValue2;	// From zone can be outside of in-play
		CZone* pMoveToZone = (CZone*)value.nValue1;

		if (CZone::IsSamePhysicalZone(pCard->GetZone(), pMoveFromZone))
			pCard->Move(pMoveToZone, pByPlayer);
	}

	return TRUE;
}
*/

//____________________________________________________________________________
//
CSubjectGatherer::CSubjectGatherer()
	: m_Distribute(DistributeMethodType::Null)
	, m_bDistributeFirstValueOnly(FALSE)
	, m_nMaxDistributedValue(0)
	, m_SubjectZoneId(ZoneId::Battlefield)
	, m_nMinSubjectCount(1)
	, m_nMaxSubjectCount(1)
	, m_bSingleZone(FALSE)
	, m_bMultiZones(FALSE)
	, m_DefaultChar(Characteristic::Neutral)
	, m_pAbility(NULL)
	, m_pController(NULL)
	, m_bControllerCardsOnly(FALSE)
	, m_bNoncontrollerCardsOnly(FALSE)
	, m_bLowerMinWhenNotEnoughSubjects(FALSE)
	, m_pSourceCard(NULL)
{
}

BOOL CSubjectGatherer::IsSubjectIncluded(const CCard* pCard, BOOL bIncludeTricks, BOOL& bTrick) const
{
	bTrick = FALSE;

	if (!(pCard->GetZoneId() & m_SubjectZoneId).Any())
		return FALSE;

	if (!m_CardSubjectFilter.IsCardIncluded(pCard))
		return FALSE;

	const CPlayer* pPlayer = pCard->GetController();
	const CPlayer* pController = GetControllerImpl();

	Characteristic characteristic = GetCharacteristic();
	if (((characteristic < Characteristic::Neutral) && (pPlayer == pController)) ||
		((characteristic > Characteristic::Neutral) && (pPlayer != pController)))
	{
		bTrick = TRUE;
		if (!bIncludeTricks)
			return FALSE;
	}

	CGame* pGame = pCard->GetGame();

	// 10/19/2003 Changed to support usage pattern from remote users as well
	CPlayer* pPriorityPlayer = pGame->GetPriorityPlayer();

	if (pPriorityPlayer->IsComputer())
	{
		if (!m_pAbility->GetComputerUsage())
			return TRUE;
	
		if (!m_pAbility->GetComputerUsage()->IsAbilityUsableOnCard(m_pAbility, pCard))
		{
			bTrick = TRUE;
			if (!bIncludeTricks)
				return FALSE;
		}

		return TRUE;		
	}

	CUsageAbility* pUsageAbility = m_pAbility->GetPlayerUsage(pPriorityPlayer);
	if (!pUsageAbility)
	{
		if (pGame->IsThinking())
		{
			if (!m_pAbility->GetComputerUsage())
				return TRUE;

			if (!m_pAbility->GetComputerUsage()->IsAbilityUsableOnCard(m_pAbility, pCard))
			{
				bTrick = TRUE;
				if (!bIncludeTricks)
					return FALSE;
			}
		}

		return TRUE;
	}

    if (!pUsageAbility->IsAbilityUsableOnCard(m_pAbility, pCard))
	{
		bTrick = TRUE;
		if (!bIncludeTricks)
			return FALSE;
	}

	return TRUE;
}

BOOL CSubjectGatherer::IsSubjectIncluded(const CPlayer* pPlayer, BOOL bIncludeTricks, BOOL& bTrick) const
{
	bTrick = FALSE;

	const CPlayer* pController = GetControllerImpl();

	if (!m_PlayerSubjectFilter.IsPlayerIncluded(pPlayer, pController))
		return FALSE;

	Characteristic characteristic = GetCharacteristic();

	if (((characteristic < Characteristic::Neutral) && (pPlayer == pController)) ||
		((characteristic > Characteristic::Neutral) && (pPlayer != pController)))
	{
		bTrick = TRUE;
		if (!bIncludeTricks)
			return FALSE;
	}

	CGame* pGame = pPlayer->GetGame();

	// 10/19/2003 Changed to support usage pattern from remote users as well
	CPlayer* pPriorityPlayer = pGame->GetPriorityPlayer();

	if (pPriorityPlayer->IsComputer())
	{
		if (!m_pAbility->GetComputerUsage())
			return TRUE;

		if (!m_pAbility->GetComputerUsage()->IsAbilityUsableOnPlayer(m_pAbility, pPlayer))
		{
			bTrick = TRUE;
			if (!bIncludeTricks)
				return FALSE;
		}

		return TRUE;
	}

	CUsageAbility* pUsageAbility = m_pAbility->GetPlayerUsage(pPriorityPlayer);

	if (!pUsageAbility)
	{
		if (pGame->IsThinking())
		{
			if (!m_pAbility->GetComputerUsage())
				return TRUE;

			if (!m_pAbility->GetComputerUsage()->IsAbilityUsableOnPlayer(m_pAbility, pPlayer))
			{
				bTrick = TRUE;
				if (!bIncludeTricks)
					return FALSE;
			}
		}

		return TRUE;
	}

    if (!pUsageAbility->IsAbilityUsableOnPlayer(m_pAbility, pPlayer))
	{
		bTrick = TRUE;
		if (!bIncludeTricks)
			return FALSE;
	}

	return TRUE;
}

void CSubjectGatherer::SetDistributeValues(int nMaxDistributedValue, BOOL bFirstValueOnly)
{
	m_Distribute = DistributeMethodType::DistributeValues;
	m_bDistributeFirstValueOnly = bFirstValueOnly;
	m_nMaxDistributedValue = nMaxDistributedValue;

	m_nMinSubjectCount = 0;
	m_nMaxSubjectCount = SpecialNumber::Any;
}

void CSubjectGatherer::SetSubjectCount(int nMinSubjectCount, int nMaxSubjectCount, BOOL bLowerMinWhenNotEnoughSubjects)
{
	ATLASSERT(nMinSubjectCount >= 0);
	ATLASSERT(nMaxSubjectCount == SpecialNumber::Any || (nMaxSubjectCount >= nMinSubjectCount));

	m_nMinSubjectCount = nMinSubjectCount;
	m_nMaxSubjectCount = nMaxSubjectCount;
	m_bLowerMinWhenNotEnoughSubjects = bLowerMinWhenNotEnoughSubjects;
}	

BOOL CSubjectGatherer::HasLegalSubjects(BOOL bIncludeTricks) const
{
	CGame* pGame = m_pAbility->GetGame();
	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pGame->GetPlayer(i);

		BOOL bTrick;
		if (IsSubjectIncluded(pPlayer, bIncludeTricks, bTrick))
			return TRUE;

		if (!m_CardSubjectFilter.IsPlayersCardsIncluded(pPlayer))
			continue;

		if (!m_bMultiZones)
		{
			CZone* pZone = pPlayer->GetZoneById(m_SubjectZoneId);
			for (int k = 0; k < pZone->GetSize(); ++k)
				{
					if (IsSubjectIncluded(pZone->GetAt(k), bIncludeTricks, bTrick))
						return TRUE;
				}
		}
		else
		{
			int nZoneCount = pPlayer->GetZoneCount();
			for (int j = 0; j < nZoneCount; ++j)
			{
				CZone* pZone = pPlayer->GetZone(j);
				for (int k = 0; k < pZone->GetSize(); ++k)
				{
					if (IsSubjectIncluded(pZone->GetAt(k), bIncludeTricks, bTrick))
						return TRUE;
				}
			}
		}
	}

	return FALSE;
}

void CSubjectGatherer::GetSubjects(BOOL bIncludeTricks, 
							CSubjectGroupContainer& subjectGroups,
						    std::vector<BOOL>& tricks,
						    const ContextValue& value) const
{
	const CCard* pThisCard = m_pAbility->GetCard();
	CGame* pGame = m_pAbility->GetGame();

	ATLASSERT(m_nMinSubjectCount >= 0);
	ATLASSERT(m_nMaxSubjectCount == SpecialNumber::Any || (m_nMaxSubjectCount >= m_nMinSubjectCount));

	// Doesn't include players or distribute values
	if (m_bSingleZone)
	{
		for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		{
			CSubjectGroupContainer singleZoneSubjects;
			std::vector<BOOL> trickSubjects;
			BOOL bTrick;

			CPlayer* pPlayer = pGame->GetPlayer(i);
			if (!m_CardSubjectFilter.IsPlayersCardsIncluded(pPlayer))
				continue;

			CZone* pZone = pPlayer->GetZoneById(m_SubjectZoneId);

			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k);

				if (IsSubjectIncluded(pCard, TRUE, bTrick))
				{
					if (!bIncludeTricks && bTrick)
						continue;

					CSubjectGroup subjectGroup;
					subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));
					subjectGroup.AddSubject(pCard, value);

					singleZoneSubjects.Add(subjectGroup);
					trickSubjects.push_back(bTrick);
				}
			}

			int nLegalSubjectCount = singleZoneSubjects.GetSize();

			int nMinSubjectCount = m_nMinSubjectCount;
			if (nLegalSubjectCount < m_nMinSubjectCount)
			{
				if (!m_bLowerMinWhenNotEnoughSubjects)
					continue;

				nMinSubjectCount = nLegalSubjectCount;
			}

			int nMaxSubjectCount;
			if (m_nMaxSubjectCount == SpecialNumber::Any)
				nMaxSubjectCount = nLegalSubjectCount;
			else
				nMaxSubjectCount = MIN(nLegalSubjectCount, m_nMaxSubjectCount);
			if (!nMaxSubjectCount)
				return;

			for (int nCurrentSubjectCount = nMaxSubjectCount; nCurrentSubjectCount >= nMinSubjectCount; --nCurrentSubjectCount)
			{
				if (!nCurrentSubjectCount)
				{
					CSubjectGroup subjectGroup;
					subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));
					subjectGroups.Add(subjectGroup);
					tricks.push_back(FALSE);
					continue;
				}

				IntArray currentConfig;
				currentConfig.resize(nCurrentSubjectCount);

				IntArray bounds;
				bounds.resize(nCurrentSubjectCount);

				for (int i = 0; i < nCurrentSubjectCount; ++i)
				{
					currentConfig[i] = i;
					bounds[i] = nLegalSubjectCount - 1;
				}

				do
				{
					CSubjectGroup subjectGroup;
					subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));

					BOOL bTrick = FALSE;

					for (int i = 0; i < nCurrentSubjectCount; ++i)
					{
						subjectGroup.AddSubjectGroup(singleZoneSubjects.GetAt(currentConfig[i]), &value);
						if (trickSubjects[currentConfig[i]])
							bTrick = TRUE;
					}

					subjectGroups.Add(subjectGroup);
					tricks.push_back(bTrick);			

				} while (Permutation(bounds, nCurrentSubjectCount, currentConfig, TRUE, TRUE));
			}
		}

		return;
	} // m_bSingleZone

	if ((m_Distribute == DistributeMethodType::Null) && (m_nMaxSubjectCount == 1) && (m_nMinSubjectCount == 1))		// Assign nValue to each target
	{
		for (int i = 0; i < pGame->GetPlayerCount(); ++i)
		{
			CPlayer* pPlayer = pGame->GetPlayer(i);

			BOOL bTrick;
			if (IsSubjectIncluded(pPlayer, TRUE, bTrick))
			{
				if (!bIncludeTricks && bTrick)
					continue;

				CSubjectGroup subjectGroup;
				subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));
				subjectGroup.AddSubject(pPlayer, value);

				subjectGroups.Add(subjectGroup);
				tricks.push_back(bTrick);
			}

			if (!m_CardSubjectFilter.IsPlayersCardsIncluded(pPlayer))
				continue;

			CZone* pZone = pPlayer->GetZoneById(m_SubjectZoneId);	// 3/4/2001: Changed to use m_SubjectZoneId
			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k);

				if (IsSubjectIncluded(pCard, TRUE, bTrick))
				{
					if (!bIncludeTricks && bTrick)
						continue;

					CSubjectGroup subjectGroup;
					subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));
					subjectGroup.AddSubject(pCard, value);

					subjectGroups.Add(subjectGroup);
					tricks.push_back(bTrick);
				}
			}
		}
		return;
	}

	// Gather all valid allLegalSubjects 

	CSubjectGroupContainer allLegalSubjects;
	std::vector<BOOL> trickSubjects;

	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pGame->GetPlayer(i);

		BOOL bTrick;
		if (IsSubjectIncluded(pPlayer, TRUE, bTrick))
		{
			if (!bIncludeTricks && bTrick)
				continue;

			CSubjectGroup subjectGroup;
			subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));
			subjectGroup.AddSubject(pPlayer);

			allLegalSubjects.Add(subjectGroup);
			trickSubjects.push_back(bTrick);
		}

		if (!m_CardSubjectFilter.IsPlayersCardsIncluded(pPlayer))
			continue;


		if (!m_bMultiZones)
		{
			CZone* pZone = pPlayer->GetZoneById(m_SubjectZoneId);		// 3/4/2001: Changed to use m_SubjectZoneId
			for (int k = 0; k < pZone->GetSize(); ++k)
			{
				CCard* pCard = pZone->GetAt(k);

				if (IsSubjectIncluded(pCard, TRUE, bTrick))
				{
					if (!bIncludeTricks && bTrick)
						continue;

					CSubjectGroup subjectGroup;
					subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));
					subjectGroup.AddSubject(pCard);

					allLegalSubjects.Add(subjectGroup);
					trickSubjects.push_back(bTrick);
				}
			}
		}
		else
		{
			int nZoneCount = pPlayer->GetZoneCount();
			for (int j = 0; j < nZoneCount; ++j)
			{
				CZone* pZone = pPlayer->GetZone(j);
				if (!(pZone->GetZoneId() & m_SubjectZoneId).Any())
					continue;

				for (int k = 0; k < pZone->GetSize(); ++k)
				{
				CCard* pCard = pZone->GetAt(k);

				if (IsSubjectIncluded(pCard, TRUE, bTrick))
				{
					if (!bIncludeTricks && bTrick)
						continue;

					CSubjectGroup subjectGroup;
					subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));
					subjectGroup.AddSubject(pCard);

					allLegalSubjects.Add(subjectGroup);
					trickSubjects.push_back(bTrick);
				}
				}
			}
		}

	}
		int nLegalSubjectCount = allLegalSubjects.GetSize();
		int nMinSubjectCount = m_nMinSubjectCount;

		if (nLegalSubjectCount < m_nMinSubjectCount)
		{
			if (!m_bLowerMinWhenNotEnoughSubjects)
				return;

			nMinSubjectCount = nLegalSubjectCount;
		}
	
		if (m_Distribute == DistributeMethodType::DistributeValues)
		{
			// Distribute nValue1 to all valid subjectGroups (min to max number of subjectGroups in each move)
			// Note: only one 0 point distribution is created for all subjectGroups and player

			int nPoint = value.nValue1;	// Adjusted with extra value already if applicable
			if (!nPoint)
				return;	// No points to distribute

			if (nPoint < 0)
				nPoint = -nPoint;	// Just use the absolute value

			std::vector<IntArray> targetConfig;
			int nConfigCount = CSubjectGroup::CalculateSubjectPermutations(nLegalSubjectCount, nPoint, targetConfig);

			ATLASSERT(nConfigCount);

			for	(int i = 0; i < nConfigCount; ++i)
			{
				const IntArray& distributedPoints(targetConfig[i]);

				CSubjectGroup subjectGroup;
				subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));

				BOOL bTrick = FALSE;
				BOOL bExceededMaxValue = FALSE;
			
				for (int j = 0; j < nLegalSubjectCount; ++j)
					if (distributedPoints[j])
					{
						int nPoint = distributedPoints[j];

						if (m_nMaxDistributedValue != SpecialNumber::Any)
							if (nPoint > m_nMaxDistributedValue)
							{
								bExceededMaxValue = TRUE;
								break;
							}

						if (value.nValue1 < 0)
							nPoint = -nPoint;

						ContextValue overrideValue(value);
						overrideValue.nValue1 = nPoint;
						if (!m_bDistributeFirstValueOnly)
							overrideValue.nValue2 = nPoint;

						subjectGroup.AddSubjectGroup(allLegalSubjects.GetAt(j), &overrideValue);

						if (trickSubjects[j])
							bTrick = TRUE;
					}

				if (bExceededMaxValue ||
					(subjectGroup.GetSubjectCount() < nMinSubjectCount) ||
					((m_nMaxSubjectCount != SpecialNumber::Any) && (subjectGroup.GetSubjectCount() > m_nMaxSubjectCount)))
				{
					continue;
				}

				subjectGroups.Add(subjectGroup);
				tricks.push_back(bTrick);			
			}

			return;
		}

	// Variable number of subjectGroups (nMinSubjectCount to m_nMaxSubjectCount)

	int nMaxSubjectCount;
	if (m_nMaxSubjectCount == SpecialNumber::Any)
		nMaxSubjectCount = nLegalSubjectCount;
	else
		nMaxSubjectCount = MIN(nLegalSubjectCount, m_nMaxSubjectCount);

	if (m_Distribute == DistributeMethodType::Fireball)
	{
		int nTargets = value.nValue1 > 0 ? value.nValue1 : -value.nValue1;
		nMaxSubjectCount = MIN(nLegalSubjectCount, nTargets + 1);
	}

	if (!nMaxSubjectCount)
		return;

	for (int nCurrentSubjectCount = nMaxSubjectCount; nCurrentSubjectCount >= nMinSubjectCount; --nCurrentSubjectCount)
	{
		if (!nCurrentSubjectCount)
		{
			CSubjectGroup subjectGroup;
			subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));
			subjectGroups.Add(subjectGroup);
			tricks.push_back(FALSE);
			continue;
		}

		IntArray currentConfig;
		currentConfig.resize(nCurrentSubjectCount);

		IntArray bounds;
		bounds.resize(nCurrentSubjectCount);

		for (int i = 0; i < nCurrentSubjectCount; ++i)
		{
			currentConfig[i] = i;
			bounds[i] = nLegalSubjectCount - 1;
		}

		if (m_Distribute == DistributeMethodType::Fireball) do
		{
			ContextValue FireballValue = value;
			int nDamage = value.nValue1 > 0 ? value.nValue1 : -value.nValue1;
			nDamage = (nDamage - nCurrentSubjectCount + 1) / nCurrentSubjectCount;
			FireballValue.nValue1 = -nDamage;

			CSubjectGroup subjectGroup;
			subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));

			BOOL bTrick = FALSE;

			for (int i = 0; i < nCurrentSubjectCount; ++i)
			{
				subjectGroup.AddSubjectGroup(allLegalSubjects.GetAt(currentConfig[i]), &FireballValue);
				if (trickSubjects[currentConfig[i]])
					bTrick = TRUE;
			}

			subjectGroups.Add(subjectGroup);
			tricks.push_back(bTrick);			

		} while (Permutation(bounds, nCurrentSubjectCount, currentConfig, TRUE, TRUE));
		else do
		{
			CSubjectGroup subjectGroup;
			subjectGroup.SetSourceCard(const_cast<CCard*>(GetSourceCard()));

			BOOL bTrick = FALSE;

			for (int i = 0; i < nCurrentSubjectCount; ++i)
			{
				subjectGroup.AddSubjectGroup(allLegalSubjects.GetAt(currentConfig[i]), &value);	// Adjusted with extra cost already if applicable
				if (trickSubjects[currentConfig[i]])
					bTrick = TRUE;
			}

			subjectGroups.Add(subjectGroup);
			tricks.push_back(bTrick);			

		} while (Permutation(bounds, nCurrentSubjectCount, currentConfig, TRUE, TRUE));
	}

}
//____________________________________________________________________________
//
