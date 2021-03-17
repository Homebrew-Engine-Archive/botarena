#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
CCreatureCard::CCreatureCard(CGame* pGame, LPCTSTR strCardName, CardType cardType, const CreatureType& creatureType, UINT uID,
							 LPCTSTR strCostText, Power nPower, Life nToughness,
							 AbilityType abilityType)
	: CInPlaySpellCard(pGame, strCardName, cardType, uID, strCostText, abilityType)
	, m_cpBlockedCreatureEventSource(::CreateObject<BlockedCreatureEventSource>(_T("BLOCKED CREATURE")))
	, m_cpBlockedByCreatureEventSource(::CreateObject<BlockedByCreatureEventSource>(_T("BLOCKED BY CREATURE")))
	, m_cpAttackedPlayerEventSource(::CreateObject<AttackedPlayerEventSource>(_T("ATTACKED")))
	, m_cpCreatureTypeEventSource(::CreateObject<CreatureTypeEventSource>(_T("CREATURE TYPE")))
	, m_cpCreatureKeyword(::CreateObject<CCreatureKeyword>(this))
	, m_cpCreatureFlag(::CreateObject<CCreatureFlag>())
	, m_nLastKnownPower(nPower)
	, m_nPermanentPowerModifier(Power(0))
	, m_nPermanentPowerBase(nPower)
	, m_nPowerModifier(Power(0))
	, m_nPowerBase(nPower)
	, m_nPermanentLifeModifier(Life(0))
	, m_nPermanentLifeBase(nToughness)
	, m_nLifeModifier(Life(0))
	, m_nLifeBase(nToughness)
	, m_nPrintedPower(nPower)
	, m_nLastKnownToughness(nToughness)
	, m_nPrintedToughness(nToughness)
	, m_nRegenerationCount(0)
	, m_nRegenerationsThisTurn(0)
	, m_nDamageTakenThisTurn(0)
	, m_nBlazingEffigyDamage(0)
	, m_nMaxBlockedCount(1)
	, m_CreatureType(creatureType)
	, m_PrintedCreatureType(creatureType)
	, m_DamageRedirectionSelection(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CCreatureCard::OnDamageRedirectionSelected))
	, m_DamageReplacementSelection(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CCreatureCard::OnDamageReplacementSelected))
	, m_RegenerationSelection(pGame,
		CSelectionSupport::SelectionCallback(
			this, &CCreatureCard::OnRegenerationSelected))
	, m_nTurnPowerModifier(Power(0))
	, m_nTurnPowerBase(nPower)
	, m_nTurnLifeModifier(Life(0))
	, m_nTurnLifeBase(nToughness)
	//, m_bSuspend(FALSE)
#ifdef M10_COMBAT
	, m_bDamageAssignmentOrdered(FALSE)
#endif
	, m_pCombatDamageAssignmentAbility(NULL)
{
	// Creature abilities

	counted_ptr<CAttackAbility> cpAttackAbility(::CreateObject<CAttackAbility>(this));
	m_pAttackAbility = cpAttackAbility.GetPointer();
	ATLASSERT(m_pAttackAbility);
	AddAbility(m_pAttackAbility);

	counted_ptr<CBlockAbility> cpBlockAbility(::CreateObject<CBlockAbility>(this));
	m_pBlockAbility = cpBlockAbility.GetPointer();
	ATLASSERT(m_pBlockAbility);
	AddAbility(m_pBlockAbility);

#ifdef M10_COMBAT
	counted_ptr<CDamageAssignmentOrderAbility> cpDamageAssignmentOrderAbility(::CreateObject<CDamageAssignmentOrderAbility>(this));
	ATLASSERT(cpDamageAssignmentOrderAbility);
	AddAbility(cpDamageAssignmentOrderAbility.GetPointer());
#endif

	counted_ptr<CCombatDamageAssignmentAbility> cpADAssignAbility(::CreateObject<CCombatDamageAssignmentAbility>(this));
	ATLASSERT(cpADAssignAbility);
	m_pCombatDamageAssignmentAbility = cpADAssignAbility.GetPointer();
	AddAbility(m_pCombatDamageAssignmentAbility);
}

CCreatureCard::~CCreatureCard()
{
}

void CCreatureCard::DecreasePower(Power nPower, BOOL bToBase)
{
	if (nPower == Power(0)) return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nPower)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nPower)))
	{
		LOG_WARNING(_T("Special number %d not supported for DecreasePower. Ignored."), nPower);
		return;
	}

	if (nPower < Power(0))
	{
		IncreasePower(-nPower, bToBase);
		return;
	}

	do
	{
		Power nTempPower(nPower);
		if (bToBase)
		{
			if (m_nPowerBase >= nPower)
			{
				m_nPowerBase -= nPower;
				break;
			}
			else
			{
				nTempPower -= m_nPowerBase;
				m_nPowerBase = Power(0);
			}
		}
		else
//		if (m_nPowerModifier >= nTempPower)
		{
			m_nPowerModifier -= nTempPower;
			break;
		}
	//	else
	//	{
	//		nTempPower -= m_nPowerModifier;
	//		m_nPowerModifier = Power(0);
	//	}

	//	m_nPowerBase -= nTempPower;

	} while (false);

	do
	{
		Power nTempPower(nPower);
		if (bToBase)
		{
			if (m_nTurnPowerBase >= nPower)
			{
				m_nTurnPowerBase -= nPower;
				break;
			}
			else
			{
				nTempPower -= m_nTurnPowerBase;
				m_nTurnPowerBase = Power(0);
			}
		}
		else
//		if (m_nTurnPowerModifier >= nTempPower)
		{
			m_nTurnPowerModifier -= nTempPower;
			break;
		}
//		else
//		{
//			nTempPower -= m_nTurnPowerModifier;
//			m_nTurnPowerModifier = Power(0);
//		}

//		m_nTurnPowerBase -= nTempPower;

	} while (false);
}

void CCreatureCard::IncreasePower(Power nPower, BOOL bToBase)
{
	if (nPower == Power(0)) return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nPower)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nPower)))
	{
		LOG_WARNING(_T("Special number %d not supported for IncreasePower. Ignored."), nPower);
		return;
	}

	if (nPower < Power(0))
	{
		DecreasePower(-nPower, bToBase);
		return;
	}

	if (bToBase)
	{
		m_nPowerBase += nPower;
		m_nTurnPowerBase += nPower;
	}
	else
	{
		m_nPowerModifier += nPower;
		m_nTurnPowerModifier += nPower;
	}
}

Power CCreatureCard::GetPrintedPower() const
{
	if (!GetCreatureKeyword()->SwitchedPT())
		return m_nPrintedPower;

	return Power(GET_INTEGER(m_nPrintedToughness));
}

void CCreatureCard::SetPrintedPower(Power nPower)
{
	m_nPrintedPower = nPower;

	m_nPermanentPowerBase = nPower;
	m_nPermanentPowerModifier = Power(0);

	m_nPowerBase = nPower;
	m_nPowerModifier = Power(0);

	m_nTurnPowerBase = nPower;
	m_nTurnPowerModifier = Power(0);
}

Power CCreatureCard::GetPower() const
{
	if (!GetCreatureKeyword()->SwitchedPT())
	{
		if ( m_nPowerModifier + m_nPowerBase < Power(0) )
			return Power(0); 

		return m_nPowerModifier + m_nPowerBase;
	}

	if (m_nTurnLifeModifier + m_nTurnLifeBase < Life(0))
		return Power(0);

	return Power(GET_INTEGER(m_nTurnLifeModifier + m_nTurnLifeBase));
}

void CCreatureCard::SetPower(Power nPower, BOOL bToBase)
{
	if ((bToBase && (m_nPowerBase == nPower)) ||
		(!bToBase && (m_nPowerModifier == nPower)))
		return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nPower)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nPower)))
	{
		LOG_WARNING(_T("Special number %d not supported for SetPower. Ignored."), nPower);
		return;
	}

	if (bToBase)
	{
		m_nPowerBase = nPower;
		m_nTurnPowerBase = nPower;
	}
	else
	{
		m_nPowerModifier = nPower;
		m_nTurnPowerModifier = nPower;
	}
}

void CCreatureCard::DecreasePermanentPower(Power nOriginalPower, BOOL bToBase)
{
	if (nOriginalPower == Power(0)) return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nOriginalPower)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nOriginalPower)))
	{
		LOG_WARNING(_T("Special number %d not supported for DecreasePermanentPower. Ignored."), nOriginalPower);
		return;
	}

	if (nOriginalPower < Power(0))
	{
		IncreasePermanentPower(-nOriginalPower, bToBase);
		return;
	}

	if (bToBase)
	{
		if (m_nPermanentPowerBase >= nOriginalPower)
		{
			m_nPermanentPowerBase -= nOriginalPower;
			return;
		}
		else
		{
			nOriginalPower -= m_nPermanentPowerBase;
			m_nPermanentPowerBase = Power(0);
		}
	}

//	if (m_nPermanentPowerModifier >= nOriginalPower)
//	{
		m_nPermanentPowerModifier -= nOriginalPower;
		return;
//	}
//	else
//	{
//		nOriginalPower -= m_nPermanentPowerModifier;
//		m_nPermanentPowerModifier = Power(0);
//	}

//	m_nPermanentPowerBase -= nOriginalPower;
}

void CCreatureCard::IncreasePermanentPower(Power nOriginalPower, BOOL bToBase)
{
	if (nOriginalPower == Power(0)) return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nOriginalPower)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nOriginalPower)))
	{
		LOG_WARNING(_T("Special number %d not supported for IncreasePermanentPower. Ignored."), nOriginalPower);
		return;
	}

	if (nOriginalPower < Power(0))
	{
		DecreasePermanentPower(-nOriginalPower, bToBase);
		return;
	}

	if (bToBase)
		m_nPermanentPowerBase += nOriginalPower;
	else
		m_nPermanentPowerModifier += nOriginalPower;
}

Power CCreatureCard::GetLastKnownPower() const
{
	if (!GetCreatureKeyword()->SwitchedPT())
	{
		if (GetZoneId() == ZoneId::Battlefield)
			return GetPower();

		return m_nLastKnownPower;
	}

	if (GetZoneId() == ZoneId::Battlefield)
		return Power(GET_INTEGER(GetToughness()));

	return Power(GET_INTEGER(m_nLastKnownToughness));
}

Power CCreatureCard::GetPermanentPower() const
{
	if (!GetCreatureKeyword()->SwitchedPT())
	{
		if (m_nPermanentPowerModifier + m_nPermanentPowerBase < Power(0))
			return Power(0);

		return m_nPermanentPowerModifier + m_nPermanentPowerBase;
	}

	return Power(GET_INTEGER(m_nPermanentLifeModifier + m_nPermanentLifeBase));
}

void CCreatureCard::SetPermanentPower(Power nOriginalPower, BOOL bToBase)
{
	if ((bToBase && (m_nPermanentPowerBase == nOriginalPower)) ||
		(!bToBase && (m_nPermanentPowerModifier == nOriginalPower)))
		return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nOriginalPower)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nOriginalPower)))
	{
		LOG_WARNING(_T("Special number %d not supported for SetPermanentPower. Ignored."), nOriginalPower);
		return;
	}

	if (bToBase)
		m_nPermanentPowerBase = nOriginalPower;
	else
		m_nPermanentPowerModifier = nOriginalPower;
}

void CCreatureCard::DecreasePermanentLife(Life nToughness, BOOL bToBase)
{
	if (nToughness == Life(0)) return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nToughness)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nToughness)))
	{
		LOG_WARNING(_T("Special number %d not supported for DecreasePermanentLife. Ignored."), nToughness);
		return;
	}

	if (nToughness < Life(0))
	{
		IncreasePermanentLife(-nToughness, bToBase);
		return;
	}

	if (bToBase)
	{
		if (m_nPermanentLifeBase >= nToughness)
		{
			m_nPermanentLifeBase -= nToughness;
			return;
		}
		else
		{
			nToughness -= m_nPermanentLifeBase;
			m_nPermanentLifeBase = Life(0);
		}
	}

	//if (m_nPermanentLifeModifier >= nToughness)
	//{
		m_nPermanentLifeModifier -= nToughness;
	//	return;
	//}
	//else
	//{
	//	nToughness -= m_nPermanentLifeModifier;
	//	m_nPermanentLifeModifier = Life(0);
	//}

	//m_nPermanentLifeBase -= nToughness;
}

void CCreatureCard::IncreasePermanentLife(Life nToughness, BOOL bToBase)
{
	if (nToughness == Life(0)) return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nToughness)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nToughness)))
	{
		LOG_WARNING(_T("Special number %d not supported for IncreasePermanentLife. Ignored."), nToughness);
		return;
	}

	if (nToughness < Life(0))
	{
		DecreasePermanentLife(-nToughness, bToBase);
		return;
	}

	if (bToBase)
		m_nPermanentLifeBase += nToughness;
	else
		m_nPermanentLifeModifier += nToughness;
}

Life CCreatureCard::GetLastKnownToughness() const
{
	if (!GetCreatureKeyword()->SwitchedPT())
	{
		if (GetZoneId() == ZoneId::Battlefield)
			return GetToughness();

		return m_nLastKnownToughness;
	}

	if (GetZoneId() == ZoneId::Battlefield)
		return Life(GET_INTEGER(GetPower()));

	return Life(GET_INTEGER(m_nLastKnownPower));
}

Life CCreatureCard::GetPrintedToughness() const
{
	if (!GetCreatureKeyword()->SwitchedPT())
		return m_nPrintedToughness;

	return Life(GET_INTEGER(m_nPrintedPower));
}

void CCreatureCard::SetPrintedToughness(Life nLife)
{
	m_nPrintedToughness = nLife;

	m_nPermanentLifeBase = nLife;
	m_nPermanentLifeModifier = Life(0);

	m_nLifeBase = nLife;
	m_nLifeModifier = Life(0);

	m_nTurnLifeBase = nLife;
	m_nTurnLifeModifier = Life(0);
}

Life CCreatureCard::GetPermanentLife() const
{
	if (!GetCreatureKeyword()->SwitchedPT())
		return m_nPermanentLifeModifier + m_nPermanentLifeBase;

	if (m_nPermanentPowerModifier + m_nPermanentPowerBase < Power(0))
		return Life(0);

	return Life(GET_INTEGER(m_nPermanentPowerModifier + m_nPermanentPowerBase));
}

void CCreatureCard::SetPermanentLife(Life nToughness, BOOL bToBase)
{
	if ((GetZoneId() != ZoneId::Battlefield) ||
		(bToBase && (m_nPermanentLifeBase == nToughness)) ||
		(!bToBase && (m_nPermanentLifeModifier == nToughness)))
		return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nToughness)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nToughness)))
	{
		LOG_WARNING(_T("Special number %d not supported for SetPermanentLife. Ignored."), nToughness);
		return;
	}

	if (bToBase)
		m_nPermanentLifeBase = nToughness;
	else
		m_nPermanentLifeModifier = nToughness;
}

const CDamagePrevention_& CCreatureCard::GetDamagePrevention() const
{
	return m_DamagePrevention;
}

CDamagePrevention_& CCreatureCard::GetDamagePrevention()
{
	return m_DamagePrevention;
}

const CDamageRedirection_& CCreatureCard::GetDamageRedirection() const
{
	return m_DamageRedirection;
}

CDamageRedirection_& CCreatureCard::GetDamageRedirection()
{
	return m_DamageRedirection;
}

void CCreatureCard::AddRegenerationShield()
{
	++m_nRegenerationCount;
}

int CCreatureCard::GetRegenerationShields() const
{
	return m_nRegenerationCount;
}

// See comprehensive rules 306.2
BOOL CCreatureCard::Regenerate()
{

	if (GetCreatureKeyword()->CantRegenerate() && !GetCardKeyword()->HasTotemArmor())
		return FALSE;

	if (!GetCreatureKeyword()->SwitchedPT())
	{
		if (m_nTurnLifeModifier + m_nTurnLifeBase <= Life(0))
			return FALSE;
	}
	else
		if ((Life(GET_INTEGER(m_nPowerModifier)) + Life(GET_INTEGER(m_nPowerBase))) <= Life(0))
			return FALSE;

	if (!m_nRegenerationCount && !GetCardKeyword()->HasTotemArmor())
		return FALSE;

	if (GetCardKeyword()->HasTotemArmor())
	{
		CCountedCardContainer TotemArmor;
		CCardFilter AuraFilter;
		AuraFilter.SetComparer(new CardTypeComparer(CardType::_Aura, false));
		AuraFilter.AddComparer(new CardKeywordComparer(CardKeyword::TotemArmor, false));

		if (AuraFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer())>0)	
		{
			CCountedCardContainer Auras;

			if (AuraFilter.GetIncluded(*GetController()->GetZoneById(ZoneId::Battlefield), Auras))			
		
			for (int i = 0; i < Auras.GetSize(); ++i)
			{
				CEnchant* pEnchantAbility = NULL;
				for (int j = 0; j <  Auras.GetAt(i)->GetAbilityCount(); ++j)
				{
					pEnchantAbility = dynamic_cast<CEnchant*>(Auras.GetAt(i)->GetAbility(j));		

					if (pEnchantAbility)
					{
						if (pEnchantAbility->HasEnchantTarget())
						{
							if (pEnchantAbility->GetEnchantedOnCard() == (CCreatureCard*)this)
							{
								TotemArmor.AddCard(Auras.GetAt(i), CardPlacement::Top);								
							}
						}
					}
				}
			}
		}

		std::vector<SelectionEntry> entries;		

		if (m_nRegenerationCount && !GetCreatureKeyword()->CantRegenerate())
		{			
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 0; 
			selectionEntry.strText.Format(_T("%s decides to regenerate a card"), GetController()->GetPlayerName());
			entries.push_back(selectionEntry);
		}

		for (int i = 0; i <  TotemArmor.GetSize(); ++i)
		{
			const CCard* pCard =  TotemArmor.GetAt(i);			

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("destroys %s"), pCard->GetCardName());

			entries.push_back(selectionEntry);
		}

		m_RegenerationSelection.AddSelectionRequest(
			entries, 1, 1, NULL, GetController());

		CCardKeywordModifier indModifier;
		indModifier.GetModifier().SetToAdd(CardKeyword::Indestructible);
		indModifier.ApplyTo(this);
		return TRUE;
	}
	else
	{
		--m_nRegenerationCount;
		++m_nRegenerationsThisTurn;

		COrientation* pOrientation = GetOrientation();
		if (!pOrientation->IsTapped())
			pOrientation->Tap();

		ResetCreatureAttributes(FALSE);
		RemoveFromCombat(FALSE);

		return TRUE;
	}
}
BOOL CCreatureCard::TotemArmor()
{
	if (GetCardKeyword()->HasTotemArmor())
	{
		CCountedCardContainer TotemArmor;
		CCardFilter AuraFilter;
		AuraFilter.SetComparer(new CardTypeComparer(CardType::_Aura, false));
		AuraFilter.AddComparer(new CardKeywordComparer(CardKeyword::TotemArmor, false));

		if (AuraFilter.CountIncluded(GetController()->GetZoneById(ZoneId::Battlefield)->GetCardContainer())>0)	
		{
			CCountedCardContainer Auras;

			if (AuraFilter.GetIncluded(*GetController()->GetZoneById(ZoneId::Battlefield), Auras))			
		
			for (int i = 0; i < Auras.GetSize(); ++i)
			{
				CEnchant* pEnchantAbility = NULL;
				for (int j = 0; j <  Auras.GetAt(i)->GetAbilityCount(); ++j)
				{
					pEnchantAbility = dynamic_cast<CEnchant*>(Auras.GetAt(i)->GetAbility(j));		

					if (pEnchantAbility)
					{
						if (pEnchantAbility->HasEnchantTarget())
						{
							if (pEnchantAbility->GetEnchantedOnCard() == (CCreatureCard*)this)
							{
								TotemArmor.AddCard(Auras.GetAt(i), CardPlacement::Top);								
							}
						}
					}
				}
			}
		}

		std::vector<SelectionEntry> entries;		


		for (int i = 0; i <  TotemArmor.GetSize(); ++i)
		{
			const CCard* pCard =  TotemArmor.GetAt(i);			

			SelectionEntry selectionEntry;

			selectionEntry.dwContext = (DWORD)pCard;
			selectionEntry.strText.Format(_T("destroys %s"), pCard->GetCardName());

			entries.push_back(selectionEntry);
		}

		m_RegenerationSelection.AddSelectionRequest(
			entries, 1, 1, NULL, GetController());

		CCardKeywordModifier indModifier;
		indModifier.GetModifier().SetToAdd(CardKeyword::Indestructible);
		indModifier.ApplyTo(this);
		return TRUE;
	}
	return FALSE;
}
void CCreatureCard::OnRegenerationSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (!it->dwContext)
			{
				--m_nRegenerationCount;
				++m_nRegenerationsThisTurn;

				COrientation* pOrientation = GetOrientation();
				if (!pOrientation->IsTapped())
				pOrientation->Tap();

				ResetCreatureAttributes(FALSE);
				RemoveFromCombat(FALSE);

				CCardKeywordModifier indModifier;
				indModifier.GetModifier().SetToRemove(CardKeyword::Indestructible);
				indModifier.ApplyTo(this);

				return;
			}			
			else
			{
			CCard* pCard = (CCard*)(it->dwContext);
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, GetController());
			pModifier.ApplyTo(pCard);
			ResetCreatureAttributes(FALSE);			

			CCardKeywordModifier indModifier;
			indModifier.GetModifier().SetToRemove(CardKeyword::Indestructible);
			indModifier.ApplyTo(this);
			}

			return;
		}
}
Life CCreatureCard::GetLife() const
{
	if (!GetCreatureKeyword()->SwitchedPT())
	{
		if (m_nLifeModifier + m_nLifeBase < Life(0))
			return Life(0);

		return m_nLifeModifier + m_nLifeBase;
	}

	if (Life(GET_INTEGER(m_nPowerModifier)) + Life(GET_INTEGER(m_nPowerBase)) - m_nPermanentLifeModifier - m_nPermanentLifeBase + m_nLifeModifier + m_nLifeBase < Life(0))
		return Life(0);

	return Life(GET_INTEGER(m_nPowerModifier)) + Life(GET_INTEGER(m_nPowerBase)) - m_nPermanentLifeModifier - m_nPermanentLifeBase + m_nLifeModifier + m_nLifeBase;
}
Life CCreatureCard::GetDamage() const
{
	return (Life(0) - m_nPermanentLifeModifier - m_nPermanentLifeBase + m_nLifeModifier + m_nLifeBase);
}
void CCreatureCard::SetDamage(Life nLife)
{
	m_nLifeModifier += nLife;
	m_nTurnLifeModifier += nLife;
	CheckDying(TRUE);
}
Life CCreatureCard::GetToughness() const
{
	if (!GetCreatureKeyword()->SwitchedPT())
	{
		if (m_nTurnLifeModifier + m_nTurnLifeBase < Life(0))
			return Life(0);

		return m_nTurnLifeModifier + m_nTurnLifeBase;
	}

	if ( m_nPowerModifier + m_nPowerBase < Power(0) )
		return Life(0);

	return Life(GET_INTEGER(m_nPowerModifier + m_nPowerBase));
}

void CCreatureCard::SetLife(const CCard* pSourceCard, Life nLife)
{
	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(nLife)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(nLife)))
	{
		LOG_WARNING(_T("Special number %d not supported for SetLife. Ignored."), nLife);
		return;
	}

	if (nLife == m_nLifeBase)
		return;

	//if (HasProtectionFrom(pSourceCard))
		//return;

	m_nLifeBase = nLife;
	m_nTurnLifeBase = nLife;

	CheckDying(TRUE);
}

void CCreatureCard::ChangeLife(Damage damage, BOOL bToBase)
{
	if (damage.m_nLifeDelta == Life(0)) return;

	ATLASSERT(!SpecialNumber::IsSpecialNumber(GET_INTEGER(damage.m_nLifeDelta)));
	if (SpecialNumber::IsSpecialNumber(GET_INTEGER(damage.m_nLifeDelta)))
	{
		LOG_WARNING(_T("Special number %d not supported for ChangeLife. Ignored."), damage.m_nLifeDelta);
		return;
	}

	bool pSpell = FALSE;
	if (damage.m_pSourceCard && ((damage.m_DamageType & DamageType::SpellDamage).Any() || damage.m_pSourceCard->GetZoneId() == ZoneId::Stack))
		 pSpell = TRUE;

	if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage))
		damage.m_Preventable = PreventableType::NotPreventable;

	if (damage.m_pSourceCard && damage.m_pSourceCard->GetCardKeyword()->HasUnpreventableDamage() && damage.m_pSourceCard->IsInplay())
		damage.m_Preventable = PreventableType::NotPreventable;

	if (damage.m_DamageType != DamageType::NotDealingDamage && damage.m_Preventable == PreventableType::Preventable && // only protect from combat or non-combat damage
		HasProtectionFrom(damage.m_pSourceCard, pSpell) && !damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage))
		return;

	if (damage.m_DamageType == DamageType::NonCombatDamage && damage.m_pSourceCard && damage.m_pSourceCard->GetCardType().IsCreature())
	{
		CCreatureCard* pCreatureCard = (CCreatureCard*)damage.m_pSourceCard;
		if (pCreatureCard->GetCreatureKeyword()->DealNoNoncombatDamage())
			return;
	}

	if (damage.m_nLifeDelta > Life(0))
	{
		ATLASSERT(damage.m_DamageType == DamageType::NotDealingDamage);

		if (bToBase)
		{
			m_nLifeBase += damage.m_nLifeDelta;
			m_nTurnLifeBase += damage.m_nLifeDelta;
		}
		else
		{
			m_nLifeModifier += damage.m_nLifeDelta;
			m_nTurnLifeModifier += damage.m_nLifeDelta;
		}

		return;
	}

	ATLASSERT(damage.m_DamageType != DamageType::NotDealingDamage ||
				damage.m_Preventable == PreventableType::NotPreventable);

	if (damage.m_Preventable == PreventableType::Preventable && !this->GetCreatureKeyword()->ReplacedDamage() && !this->GetCreatureKeyword()->FullReplacedDamage() &&
		!damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage))
	{
		if ((damage.m_DamageType & DamageType::CombatDamage).Any() && m_cpCreatureKeyword->PreventAllCombatDamage())
			return;

		if ((damage.m_DamageType & DamageType::NonCombatDamage).Any() && m_cpCreatureKeyword->PreventAllNoncombatDamage())
			return;

		if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllDamageToCreatures))
			return;

		m_DamagePrevention.PreventDamage(damage);		// Prevent damage may reverse damage to life gain (ref: Reverse Damage)
	}

	if (damage.m_nLifeDelta >= Life(0))
	{
		if (damage.m_nLifeDelta > Life(0))
		{
			if (bToBase)
				m_nLifeBase += damage.m_nLifeDelta;
			else
				m_nLifeModifier += damage.m_nLifeDelta;
		}

		return;
	}

	// Furnace of Rath
	if (damage.m_DamageType != DamageType::NotDealingDamage)
	{
		int nMultiplier = 0;
		if (damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::MultiplyDamage, nMultiplier, FALSE))
			for (int i = 0; i < nMultiplier; ++i)
				damage.m_nLifeDelta *= Life(2);
	}

	std::vector<int> redirections;
	m_DamageRedirection.GetRedirections(damage, redirections);

	size_t redirectionCount = redirections.size();

	if (redirectionCount && !this->GetCreatureKeyword()->ReplacedDamage() && !this->GetCreatureKeyword()->FullReplacedDamage())
	{
		if (redirectionCount > 1)
		{
			std::vector<SelectionEntry> entries;

			for (std::vector<int>::const_iterator i = redirections.begin(); i != redirections.end();
				++i)
			{
				const CDamageRedirectionEntry& entry(m_DamageRedirection.GetRedirection(*i));

				SelectionEntry selectionEntry;

				selectionEntry.dwContext = (DWORD)*i;
				selectionEntry.strText = entry.ToString();

				entries.push_back(selectionEntry);
			}

			m_DamageRedirectionSelection.AddSelectionRequest(
				entries, 1, 1, this, GetController(),
				(DWORD)GET_INTEGER(damage.m_nLifeDelta),
				(DWORD)damage.m_Preventable.Get(),
				(DWORD)damage.m_DamageType.Get(),
				(DWORD)damage.m_pSourceCard,
				(DWORD)bToBase);

			return;
		}

		if (!m_pGame->IsThinking())
		{
			const CDamageRedirectionEntry& entry(m_DamageRedirection.GetRedirection(redirections[0]));

			CString strMessage;
			strMessage.Format(_T("%s %s"), GetController()->GetPlayerName(), entry.ToString());
			m_pGame->Message(
				strMessage,
				GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}
		
		m_DamageRedirection.RedirectDamage(damage, redirections[0]);
	}

	// Damage replacement events here (+ selections for protection and other stuff)

	if (((damage.m_DamageType & DamageType::CombatDamage).Any() || (damage.m_DamageType & DamageType::NonCombatDamage).Any()) &&
		damage.m_pSourceCard && (this->GetCreatureKeyword()->ReplacedDamage() || this->GetCreatureKeyword()->FullReplacedDamage()))
	{
		if (damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPreventDamage))
			damage.m_Preventable = PreventableType::NotPreventable;

		if (damage.m_pSourceCard && damage.m_pSourceCard->GetCardKeyword()->HasUnpreventableDamage() && damage.m_pSourceCard->IsInplay())
			damage.m_Preventable = PreventableType::NotPreventable;

		bool bFound = false;

		std::vector<SelectionEntry> entries;		
		
		if (HasProtectionFrom(damage.m_pSourceCard, pSpell))
		{
			// Protection replacement
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 1; 
			selectionEntry.strText.Format(_T("selects %d to be prevented by protection"), damage.m_nLifeDelta);
			entries.push_back(selectionEntry);
			bFound = true;
		}

		std::vector<int> redirections;
		m_DamageRedirection.GetRedirections(damage, redirections);

		size_t redirectionCount = redirections.size();

		if (redirectionCount)
			if (redirectionCount > 1)
			{
				// Redirection replacement
				SelectionEntry selectionEntry;
				selectionEntry.dwContext = 2; 
				selectionEntry.strText.Format(_T("selects %d to be redirected"), damage.m_nLifeDelta);
				entries.push_back(selectionEntry);
				bFound = true;
			}

		if (damage.m_Preventable == PreventableType::Preventable && (!m_DamagePrevention.IsEmpty() ||
			((damage.m_DamageType & DamageType::CombatDamage).Any() && m_cpCreatureKeyword->PreventAllCombatDamage()) ||
			((damage.m_DamageType & DamageType::NonCombatDamage).Any() && m_cpCreatureKeyword->PreventAllNoncombatDamage()) ||
			(GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllDamageToCreatures))) 
			)
		{
			// Prevention replacement
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 3; 
			selectionEntry.strText.Format(_T("selects %d to be prevented"), damage.m_nLifeDelta);
			entries.push_back(selectionEntry);
			bFound = true;
		}

		if (GetController()->ExternalDamageReplacementCards() && damage.m_Preventable == PreventableType::Preventable)
		{
			// Prevention replacement
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 4; 
			selectionEntry.strText.Format(_T("selects %d to be prevented by Vigor's ability"), damage.m_nLifeDelta);  // also should be extended depending of which external replacement is used and depending of need to prevent damage
			entries.push_back(selectionEntry);
			bFound = true;
		}

		if (bFound && GetAbility(_T("Hidden. Self damage replacement")))    // Some function should be places here that returns if the creature has self damage replacement
		{
			// "Trigger" replacement replacement
			SelectionEntry selectionEntry;
			selectionEntry.dwContext = 0; 
			selectionEntry.strText.Format(_T("selects %d to be prevented by %s replacement effect"), damage.m_nLifeDelta, this->GetCardName());
			entries.push_back(selectionEntry);


			m_DamageReplacementSelection.AddSelectionRequest(
				entries, 1, 1, this, GetController(),
				(DWORD)GET_INTEGER(damage.m_nLifeDelta),
				(DWORD)damage.m_Preventable.Get(),
				(DWORD)damage.m_DamageType.Get(),
				(DWORD)damage.m_pSourceCard,
				(DWORD)bToBase);
		}
		else
		{
		
			if (damage.m_Preventable == PreventableType::Preventable)
			{
				const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(NULL, this, NULL, damage, 0);  // BATTLESTAR: these index values need to be changed into a enum type. Readers will have no clue what they are dealing with here.
				const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(NULL, this, NULL, damage, 1);
				const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(NULL, this, NULL, damage, 2);
			}
			else 
			{
				const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(NULL, this, NULL, damage, 1);
				ChangeLifeImpl(damage, bToBase);
			}
			//GetDamagePrevention().AddDamagePreventionEntry(CDamagePreventionEntry(damage.m_nLifeDelta), (CCard*)damage.m_pSourceCard);
			//m_DamagePrevention.PreventDamage(damage);
		}
	}
	else
		ChangeLifeImpl(damage, bToBase);
}

void CCreatureCard::OnDamageReplacementSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	if (GetZoneId() != ZoneId::Battlefield)
		return;

	Damage damage;
	damage.m_nLifeDelta = Life(dwContext1);
	damage.m_Preventable = PreventableType::Enum(dwContext2);
	damage.m_DamageType = static_cast<DamageType::Enum>(dwContext3);
	damage.m_pSourceCard = (CCard*)dwContext4;
	BOOL bToBase = (BOOL)dwContext5;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if (it->dwContext == 0)
			{
				if (damage.m_Preventable == PreventableType::Preventable)
				{
					const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(NULL, this, NULL, damage, 0);
					const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(NULL, this, NULL, damage, 1);
				}
				else
				{
					const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(NULL, this, NULL, damage, 1);
					ChangeLifeImpl(damage, bToBase);
				}
			
				return;
			}
			if (it->dwContext == 1)
			{
				return;
			}
			if (it->dwContext == 2)
			{

				std::vector<int> redirections;
				m_DamageRedirection.GetRedirections(damage, redirections);

				size_t redirectionCount = redirections.size();

				if (redirectionCount && !this->GetCreatureKeyword()->ReplacedDamage())
				{
					if (redirectionCount > 1)
					{
						std::vector<SelectionEntry> entries;

						for (std::vector<int>::const_iterator i = redirections.begin(); i != redirections.end();
							++i)
						{
							const CDamageRedirectionEntry& entry(m_DamageRedirection.GetRedirection(*i));

							SelectionEntry selectionEntry;

							selectionEntry.dwContext = (DWORD)*i;
							selectionEntry.strText = entry.ToString();

							entries.push_back(selectionEntry);
						}

						m_DamageRedirectionSelection.AddSelectionRequest(
							entries, 1, 1, this, GetController(),
							(DWORD)GET_INTEGER(damage.m_nLifeDelta),
							(DWORD)damage.m_Preventable.Get(),
							(DWORD)damage.m_DamageType.Get(),
							(DWORD)damage.m_pSourceCard,
							(DWORD)bToBase);

						return;
					}

					if (!m_pGame->IsThinking())
					{
						const CDamageRedirectionEntry& entry(m_DamageRedirection.GetRedirection(redirections[0]));

						CString strMessage;
						strMessage.Format(_T("%s %s"), GetController()->GetPlayerName(), entry.ToString());
						m_pGame->Message(
							strMessage,
							GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
							MessageImportance::High
							);
					}

					m_DamageRedirection.RedirectDamage(damage, redirections[0]);
				}
			}
			if (it->dwContext == 3)
			{

				if ((damage.m_DamageType & DamageType::CombatDamage).Any() && m_cpCreatureKeyword->PreventAllCombatDamage())
					return;

				if ((damage.m_DamageType & DamageType::NonCombatDamage).Any() && m_cpCreatureKeyword->PreventAllNoncombatDamage())
					return;

				if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PreventAllDamageToCreatures))
					return;

				m_DamagePrevention.PreventDamage(damage);
				ChangeLifeImpl(damage, bToBase);
			}
			if (it->dwContext == 4)
			{
				const_cast<CCard*>(damage.m_pSourceCard)->BeforeDealDamage(NULL, this, NULL, damage, 2);

			//	GetDamagePrevention().AddDamagePreventionEntry(CDamagePreventionEntry(damage.m_nLifeDelta), (CCard*)damage.m_pSourceCard);

			//	m_DamagePrevention.PreventDamage(damage);
				return;
			}
		}

}
void CCreatureCard::OnDamageRedirectionSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	if (GetZoneId() != ZoneId::Battlefield)
		return;

	Damage damage;
	damage.m_nLifeDelta = Life(dwContext1);
	damage.m_Preventable = PreventableType::Enum(dwContext2);
	damage.m_DamageType = static_cast<DamageType::Enum>(dwContext3);
	damage.m_pSourceCard = (CCard*)dwContext4;

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			m_DamageRedirection.RedirectDamage(damage, it->dwContext);
			break;
		}

	if (damage.m_nLifeDelta != Life(0))
		ChangeLife(damage, (BOOL)dwContext5);
}

void CCreatureCard::ChangeLifeImpl(Damage damage, BOOL bToBase)
{
	if (damage.m_nLifeDelta >= Life(0))
		return;

	/* moved to ChangeLife() to protect life gains also
	if (HasProtectionFrom(damage.m_pSourceCard))
		return;
	*/

	m_nDamageTakenThisTurn += -(int)damage.m_nLifeDelta;

	if ((damage.m_pSourceCard != this) && (damage.m_pSourceCard->GetPrintedCardName() == _T("Blazing Effigy")))
		m_nBlazingEffigyDamage += -(int)damage.m_nLifeDelta;

	if ((damage.m_DamageType & DamageType::CombatDamage).Any())
		m_cpCreatureFlag->AddHasTakenCombatDamage();
	else
		if ((damage.m_DamageType & DamageType::NonCombatDamage).Any())
			m_cpCreatureFlag->AddHasTakenNonCombatDamage();

	if ((damage.m_DamageType & DamageType::NoRegeneration).Any())
	{
		// Ref: Incinerate

		GetCreatureKeyword()->AddCantRegenerate(TRUE);
	}

	if ((damage.m_DamageType & DamageType::CreatureTapDamage).Any())
	{
		// Ref: Aurelia's Fury

		CCardOrientationModifier pTapModifier = CCardOrientationModifier(TRUE);
		pTapModifier.ApplyTo(this);
	}

	if ((damage.m_DamageType & DamageType::AttackEnforceDamage).Any())
	{
		// Ref: Aggravate

		CCreatureKeywordModifier pAttackEnforceModifier = CCreatureKeywordModifier(CreatureKeyword::MustAttack, TRUE);
		pAttackEnforceModifier.ApplyTo(this);
	}

	if ((damage.m_DamageType & DamageType::ToExileDamage).Any())
	{
		// Ref: Red Sun Zenith

		GetReplacementKeyword()->AddGraveyardToExile(TRUE);
	}

	if (damage.m_pSourceCard->GetCardKeyword()->HasLifelink() && !(damage.m_DamageType == DamageType::NotDealingDamage) && !bToBase)
	{
		Damage lifelink_damage;
		lifelink_damage.m_nLifeDelta = Life(-damage.m_nLifeDelta);
		lifelink_damage.m_Preventable = PreventableType::NotPreventable;
		lifelink_damage.m_DamageType = DamageType::NotDealingDamage;
		lifelink_damage.m_pSourceCard = damage.m_pSourceCard;
		damage.m_pSourceCard->GetController()->ChangeLife(lifelink_damage);
	}

	if ((damage.m_DamageType & DamageType::CombatDamage).Any())
		damage.m_pSourceCard->GetCardFlag()->AddHasDealtCombatDamage();
	if ((damage.m_DamageType & DamageType::NonCombatDamage).Any())
		damage.m_pSourceCard->GetCardFlag()->AddHasDealtNonCombatDamage();

	bool bWither = (damage.m_pSourceCard->GetCardKeyword()->HasWither() || damage.m_pSourceCard->GetCardKeyword()->HasInfect() ||
		             damage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::WitherDamage)) &&
					(damage.m_DamageType != DamageType::NotDealingDamage); // this is needed to prevent recursive calls by Counter::ChangePTCounter()

	if (!bWither)
	{
		do
		{
			Damage tempDamage = damage;

			if (bToBase)
			{
				if (m_nLifeBase >= -tempDamage.m_nLifeDelta)
				{
					m_nLifeBase += tempDamage.m_nLifeDelta;
					break;
				}
				else
				{
					tempDamage.m_nLifeDelta += m_nLifeBase;
					m_nLifeBase = Life(0);
				}
			}

			if (m_nLifeModifier >= -tempDamage.m_nLifeDelta)
			{
				m_nLifeModifier += tempDamage.m_nLifeDelta;
				break;
			}
			else
			{
				tempDamage.m_nLifeDelta += m_nLifeModifier;
				m_nLifeModifier = Life(0);
			}

			if (!tempDamage.m_pSourceCard->GetCardKeyword()->HasWither() && !tempDamage.m_pSourceCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::WitherDamage)
				&& !tempDamage.m_pSourceCard->GetCardKeyword()->HasInfect())
				m_nLifeBase += tempDamage.m_nLifeDelta;

		} while (false);

		if (damage.m_DamageType == DamageType::NotDealingDamage)
			do
			{
				Damage tempDamage = damage;

				if (bToBase)
				{
					if (m_nTurnLifeBase >= -tempDamage.m_nLifeDelta)
					{
						m_nTurnLifeBase += tempDamage.m_nLifeDelta;
						break;
					}
					else
					{
						tempDamage.m_nLifeDelta += m_nTurnLifeBase;
						m_nTurnLifeBase = Life(0);
					}
				}

				if (m_nTurnLifeModifier >= -tempDamage.m_nLifeDelta)
				{
					m_nTurnLifeModifier += tempDamage.m_nLifeDelta;
					break;
				}
				else
				{
					tempDamage.m_nLifeDelta += m_nTurnLifeModifier;
					m_nTurnLifeModifier = Life(0);
				}

				m_nTurnLifeBase += tempDamage.m_nLifeDelta;

			} while (false);
	}
	else
	{
		// Wither

		int nCount = -GET_INTEGER(damage.m_nLifeDelta);

		Counter* pCounter = this->GetCounterContainer()->GetCounter(_T("-1/-1"));
		
		int multiplied = -GET_INTEGER(damage.m_nLifeDelta);
		int nMultiplier = 0;
		
		if (GetController()->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::DoubleCounters, nMultiplier, FALSE) && (damage.m_DamageType & DamageType::NonCombatDamage).Any())
				multiplied <<= nMultiplier;

		if (multiplied>0) nCount = multiplied;

		if ((CCard*)this->GetCardKeyword()->HasCantGetCounters()) nCount = 0;

		const_cast<CCard*>((CCard*)this)->CounterMoved(this,_T("-1/-1"), pCounter->GetCount(), pCounter->GetCount()+nCount);

		pCounter->IncreaseCount(nCount);
	}

	// 8/25/2001: Added to support Spirit Link
	// 5/13/2002: 0 damages will not trigger OnDealDamage events
	if (((damage.m_DamageType & DamageType::CombatDamage).Any() || (damage.m_DamageType & DamageType::NonCombatDamage).Any()) &&
		damage.m_pSourceCard)
	{
		const_cast<CCard*>(damage.m_pSourceCard)->OnDealDamage(NULL, this, NULL, damage);

		if (damage.m_pSourceCard->GetCardType().IsCreature())
		{
			// To support Deathtouch
			const CCreatureCard* pCreatureCard = (const CCreatureCard*)damage.m_pSourceCard;
			if (pCreatureCard->GetCardKeyword()->HasDeathtouch())
			{
				m_nLifeModifier = Life(0);
				m_nLifeBase = Life(0);
			}
		}
	}

	CheckDying(TRUE);
}

void CCreatureCard::ResetCreatureAttributes(BOOL bClearTurnEffectsAlso)
{
	if (bClearTurnEffectsAlso)
	{
		m_nLifeModifier = m_nPermanentLifeModifier;
		m_nLifeBase = m_nPermanentLifeBase;
		m_nPowerModifier = m_nPermanentPowerModifier;
		m_nPowerBase = m_nPermanentPowerBase;
		m_nTurnLifeModifier = m_nLifeModifier;

		m_cpCreatureKeyword->TurnReset();

		m_DamagePrevention.RemoveTurnPreventions();
		m_DamageRedirection.RemoveTurnRedirections();

		m_nRegenerationCount = 0;

		if (m_cpCreatureFlag->HasAttacked() && (m_pAttackedLastTurn.FindIndex(GetGame()->GetActivePlayer()) == -1))
			m_pAttackedLastTurn.Add(GetGame()->GetActivePlayer());

		if (!m_cpCreatureFlag->HasAttacked() && (m_pAttackedLastTurn.FindIndex(GetGame()->GetActivePlayer()) != -1))
			m_pAttackedLastTurn.Remove(GetGame()->GetActivePlayer());

		m_cpCreatureFlag->TurnReset();
	}
	else
	{
		m_nLifeModifier = m_nTurnLifeModifier;
		m_nLifeBase = m_nTurnLifeBase;
		m_nPowerModifier = m_nTurnPowerModifier;
		m_nPowerBase = m_nTurnPowerBase;
	}
	CheckDying(TRUE);
}

void CCreatureCard::ResetCreatureAttributesToPrinted()
{
	m_nPermanentPowerModifier = Power(0);
	m_nPermanentPowerBase = m_nPrintedPower;

	m_nTurnPowerModifier = Power(0);
	m_nTurnPowerBase = m_nPrintedPower;

	m_nPowerModifier = Power(0);
	m_nPowerBase = m_nPrintedPower;

	m_nPermanentLifeModifier = Life(0);
	m_nPermanentLifeBase = m_nPrintedToughness;

	m_nTurnLifeModifier = Life(0);
	m_nTurnLifeBase = m_nPrintedToughness;

	m_nLifeModifier = Life(0);
	m_nLifeBase = m_nPrintedToughness;

	m_nRegenerationCount = 0;

	m_cpCreatureKeyword->TurnReset();
	//m_cpCreatureFlag->ResetAll();	Changed to ResetTurnAttributes to support Viashino Sandstalker
	m_cpCreatureFlag->TurnReset();

	m_DamagePrevention.RemoveTurnPreventions();
	m_DamageRedirection.RemoveAll();
}

CString CCreatureCard::GetPowerToughnessText(BOOL bIncludeDetails) const
{
	CString strPower;
	CString strToughness;

	Power nPower = GetDisplayPower();
	Power nOriginalPower = GetPermanentPower();

	if (bIncludeDetails && (nPower != nOriginalPower))
		strPower.Format(_T("%d(%d)"), nPower, nOriginalPower);
	else
		strPower.Format(_T("%d"), nOriginalPower);

	Life nLife = GetLife();
	Life nToughness = GetPermanentLife();

	if (bIncludeDetails && (nLife != nToughness))
		strToughness.Format(_T("%d(%d)"), nLife, nToughness);
	else
		strToughness.Format(_T("%d"), nToughness);
		
	return strPower + _T("/") + strToughness;
}

CString CCreatureCard::GetCreatureName(BOOL bIncludeDetails) const
{
	CString strExtras;
	if (bIncludeDetails)
	{
		for (int i = 0; i < m_nRegenerationCount; ++i)
			strExtras += _T("r");
			
		strExtras += m_DamagePrevention.ToString();
	}

	return GetCardName(bIncludeDetails) + _T("(") + GetPowerToughnessText(bIncludeDetails) + strExtras + _T(")");
}

void CCreatureCard::RemoveFromCombat(BOOL bAdjustOthers)
{
#ifdef M10_COMBAT
	m_bDamageAssignmentOrdered = FALSE;
#endif

	// Attackers

	if (IsAttacking())
	{
		m_pAttackedPlayer = NULL;
		m_pAttackedPlaneswalker = NULL;
		RemoveAllBlockedBy(bAdjustOthers);
		m_cpCreatureFlag->RemoveIsBlocked();

		// See also CAttackDeclarationNode1::OnBeforeExit()
		m_cpAttackedPlayerEventSource->FireEvent(AttackSubject(), this);
	}
	else if (IsBlocking())
		RemoveAllBlocking(bAdjustOthers);
}

bool CCreatureCard::IsAttacking() const
{
	return GetAttackedPlayer() != NULL || GetAttackedPlaneswalker() != NULL;
}

bool CCreatureCard::IsAttacking(const CCreatureCard* pBlocker) const
{
	for (int i = 0; i < m_BlockedBy.GetSize(); ++i)
		if (m_BlockedBy.GetAt(i) == pBlocker)
			return true;

	return false;
}

CPlayer* CCreatureCard::GetAttackedPlayer() const
{
	return m_pAttackedPlayer;
}

CPlaneswalkerCard* CCreatureCard::GetAttackedPlaneswalker() const
{
	return m_pAttackedPlaneswalker;
}

void CCreatureCard::Attack(CPlayer* pPlayer)
{
	ATLASSERT(pPlayer);

	m_pAttackedPlayer = pPlayer;
	m_cpCreatureFlag->AddHasAttacked();
}

void CCreatureCard::Attack(CPlaneswalkerCard* pPlaneswalker)
{
	ATLASSERT(pPlaneswalker);

	m_pAttackedPlaneswalker = pPlaneswalker;
	m_cpCreatureFlag->AddHasAttacked();
}

void CCreatureCard::AddBlockedBy(CCreatureCard* pBlocker)
{
	m_BlockedBy.AddCard(pBlocker, CardPlacement::Top);

	m_bDamageAssignmentOrdered = FALSE;
	m_cpCreatureFlag->AddIsBlocked();
	m_cpCreatureFlag->AddHasBeenBlocked();

	// Firing from CBlockDeclarationNode1::OnBeforeExit() instead
	//m_cpBlockedByCreatureEventSource->FireEvent(this, pBlocker, m_BlockedBy.GetSize());
}

void CCreatureCard::RemoveBlockedBy(CCreatureCard* pBlocker)
{
	m_BlockedBy.RemoveCard(pBlocker);

	// This code should be reached only if the block declaration is not legal
	if (m_BlockedBy.GetSize() == 0)
		m_cpCreatureFlag->RemoveIsBlocked();
}

const CCountedCardContainer_& CCreatureCard::GetBlockedBy() const
{
	return m_BlockedBy;
}

int CCreatureCard::GetBlockedByCount() const
{
	return m_BlockedBy.GetSize();
}

void CCreatureCard::RemoveAllBlockedBy(BOOL bUpdateBlockers)
{
	if (bUpdateBlockers)
	{
		for (int i = 0; i < m_BlockedBy.GetSize(); ++i)
			((CCreatureCard*)m_BlockedBy.GetAt(i))->RemoveBlocking(this, FALSE);
	}

	m_BlockedBy.RemoveAll();
}

BOOL CCreatureCard::CanAttackInGeneral() const
{
	if (m_pAttackAbility)
		for (int i = 0; i < m_pAttackAbility->CTraitContainer::GetSize(); ++i)
		{
			CBOTControllerTraitCombat* pTrait = dynamic_cast<CBOTControllerTraitCombat*>(m_pAttackAbility->CTraitContainer::GetAt(i).GetPointer());
			if (pTrait)	return pTrait->IsPlayable(FALSE);
		}
	return FALSE;
}

BOOL CCreatureCard::CanBlockInGeneral(const CCreatureCard* pCreatureCard) const
{
	return m_pBlockAbility->CanBlockInGeneral(pCreatureCard);	
}

bool CCreatureCard::IsBlocking() const
{
	return m_BlockedAttackers.GetSize() != 0;
}

bool CCreatureCard::IsBlocking(const CCreatureCard* pAttacker) const
{
	for (int i = 0; i < m_BlockedAttackers.GetSize(); ++i)
		if (m_BlockedAttackers.GetAt(i) == pAttacker)
			return true;

	return false;
}

int CCreatureCard::GetBlockingCount() const
{
	return m_BlockedAttackers.GetSize();
}

int CCreatureCard::GetMaxBlockingCount() const
{
	return m_nMaxBlockedCount;
}

void CCreatureCard::SetMaxBlockingCount(int nMaxBlockingCount)
{
	m_nMaxBlockedCount = nMaxBlockingCount;
}

const CCountedCardContainer_& CCreatureCard::GetBlocking() const
{
	return m_BlockedAttackers;
}

void CCreatureCard::AddBlocking(CCreatureCard* pAttacker)
{
	ATLASSERT(pAttacker);

	pAttacker->AddBlockedBy(this);
	m_cpCreatureFlag->AddHasBlocked();
	m_BlockedAttackers.AddCard(pAttacker, CardPlacement::Top);

	m_bDamageAssignmentOrdered = FALSE;

	// Moved to CBlockDeclarationNode1::OnBeforeExit()
	// m_cpBlockedCreatureEventSource->FireEvent(this, pAttacker, m_BlockedAttackers.GetSize());

	/*
	if (m_ppBlockedAttacker->GetPointer())
		m_ppBlockedAttacker->GetPointer()->RemoveBlockedBy(this);

	*m_ppBlockedAttacker = pAttacker;

	if (pAttacker)
	{
		pAttacker->AddBlockedBy(this);
		m_cpCreatureFlag->AddHasBlocked(TRUE);
	}
	else
		m_cpCreatureFlag->AddHasBlocked(FALSE);	// review for creatures which can multiple attackers
	*/
}

void CCreatureCard::RemoveBlocking(CCreatureCard* pAttacker, BOOL bAdjustAttacker)
{
	for (int i = 0; i < m_BlockedAttackers.GetSize(); ++i)
		if (m_BlockedAttackers.GetAt(i) == pAttacker)
		{
			m_BlockedAttackers.RemoveAt(i);

			if (bAdjustAttacker)
				pAttacker->RemoveBlockedBy(this);
			
			break;
		}

	if (!m_BlockedAttackers.GetSize())
		if (m_cpCreatureFlag->HasBlocked())	// may not be set now if this creature has died
			m_cpCreatureFlag->RemoveHasBlocked();
}

void CCreatureCard::RemoveAllBlocking(BOOL bAdjustAttacker)
{
	if (bAdjustAttacker)
		for (int i = 0; i < m_BlockedAttackers.GetSize(); ++i)
			((CCreatureCard*)m_BlockedAttackers.GetAt(i))->RemoveBlockedBy(this);

	m_BlockedAttackers.RemoveAll();
}

void CCreatureCard::AssignUnblockedCombatDamage()
{
	if (!IsAttacking() || m_BlockedBy.GetSize())
		return;

	if ((GetPower() <= Power(0)  && !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage)) || GetCreatureKeyword()->DealNoCombatDamage() ||
		(GetPermanentLife() <= Life(0)  && GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage)) )
		return;

	// Assigned already in this combat?
	if (((CCombatDamageNode1a*)m_pGame->GetCurrentNode()->GetGraph()->GetNodeById(NodeId::CombatDamageStep1a))->HasAssignedDamage(this))
	{
		if (!(m_pGame->GetCurrentNode()->GetNodeId() & NodeId::CombatDamageStep2a).Any() ||
			!GetCreatureKeyword()->DoubleStrike())
			return;
	}

	// Assigned already in this step?
	if (m_pGame->HasCombatDamageAssignment(this))
		return;

	if ((m_pGame->GetCurrentNode()->GetNodeId() & NodeId::CombatDamageStep1a).Any())
	{
		if (!GetCreatureKeyword()->FirstStrike() && !GetCreatureKeyword()->DoubleStrike())
			return;
	}
	else
		if (!(m_pGame->GetCurrentNode()->GetNodeId() & NodeId::CombatDamageStep2a).Any())
			return;

	CSubjectGroup targetGroup;
	targetGroup.SetSourceCard(const_cast<CCreatureCard*>(this));

	// No other creatures are blocking so assign damage to attacked player or planeswalker

	int damage_amount=0;
	if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage)) damage_amount = GET_INTEGER(GetPermanentLife()); 
		else damage_amount = GET_INTEGER(GetPower()); // to support Doran's effect

	if (GetAttackedPlayer())
		targetGroup.AddSubject(GetAttackedPlayer(), 
			ContextValue(-damage_amount, PreventableType::Preventable));
	else
		targetGroup.AddSubject(GetAttackedPlaneswalker(), 
			ContextValue(-damage_amount, PreventableType::Preventable));

	m_pGame->GetCombatDamageAssignment().Add(targetGroup);
}

void CCreatureCard::AssignSimpleCombatDamage()
{
	int nPower; // = GET_INTEGER(GetPower());
	if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage)) nPower = GET_INTEGER(GetPermanentLife()); 
		else nPower = GET_INTEGER(GetPower()); // to support Doran's effect
	if (nPower < 0)
		nPower = 0;

	if (IsAttacking())
	{
		if (GetCreatureKeyword()->DealNoCombatDamage())
			return;

		if (m_cpCreatureKeyword->Trample() ||
			m_cpCreatureKeyword->CanAssignDamageToPlayer())
			return;

		CCreatureCard* pBlocker = NULL;
		for (int i = 0; i < m_BlockedBy.GetSize(); ++i)
		{
			CCard* pCard = m_BlockedBy.GetAt(i);
			if (pCard->GetZoneId() == ZoneId::Battlefield && ((CCreatureCard*)pCard)->IsBlocking())
			{
				if (pBlocker)
				{
					pBlocker = NULL;
					break;
				}

				pBlocker = (CCreatureCard*)pCard;
			}
		}

		if (!pBlocker)
			return;

		CSubjectGroup targetGroup;
		targetGroup.SetSourceCard(const_cast<CCreatureCard*>(this));

		targetGroup.AddSubject(pBlocker, 
			ContextValue(-nPower, PreventableType::Preventable));

		m_pGame->GetCombatDamageAssignment().Add(targetGroup);

		if (!m_pGame->IsThinking())
		{
			CString strMessage;
			strMessage.Format(_T("%s assigns combat damage from %s: %d damage to %s"), 
				GetController()->GetPlayerName(), 
				GetCreatureName(TRUE),
				nPower,
				pBlocker->GetCreatureName(TRUE));
			
			m_pGame->Message(
				strMessage,
				GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}
	}

	if (!IsBlocking())
		return;

	if (GetCreatureKeyword()->DealNoCombatDamage())
		return;

	CCreatureCard* pBlocked = NULL;
	for (int i = 0; i < m_BlockedAttackers.GetSize(); ++i)
	{
		CCard* pCard = m_BlockedAttackers.GetAt(i);
		if (pCard->GetZoneId() == ZoneId::Battlefield  && ((CCreatureCard*)pCard)->IsAttacking())
		{
			if (pBlocked)
			{
				pBlocked = NULL;
				break;
			}

			pBlocked = (CCreatureCard*)pCard;
		}
	}

	if (!pBlocked)
		return;
	
	CSubjectGroup targetGroup;
	targetGroup.SetSourceCard(const_cast<CCreatureCard*>(this));

	targetGroup.AddSubject(pBlocked, 
		ContextValue(-nPower, PreventableType::Preventable));

	m_pGame->GetCombatDamageAssignment().Add(targetGroup);

	if (!m_pGame->IsThinking())
	{
		CString strMessage;
		strMessage.Format(_T("%s assigns combat damage from %s: %d damage to %s"), 
			GetController()->GetPlayerName(), 
			GetCreatureName(TRUE),
			nPower,
			pBlocked->GetCreatureName(TRUE));
		
		m_pGame->Message(
			strMessage,
			GetController()->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
	}
}

BOOL CCreatureCard::RequireCombatDamageAssignment() const
{
	return m_pCombatDamageAssignmentAbility->IsPlayable(TRUE, TRUE);
}

BOOL CCreatureCard::HasLethalDamage(Life nConsiderThisDamageToo) const
{
	// Check with combat damage assignment

	const CSubjectGroupContainer_& combatDamageAssignment = m_pGame->GetCombatDamageAssignment();

	Life nCurrentLife(GetLife());

	ATLASSERT(nConsiderThisDamageToo <= Life(0));
	nCurrentLife += nConsiderThisDamageToo;

	if (nCurrentLife <= Life(0))
		return TRUE;
	
	for (int i = 0; i < combatDamageAssignment.GetSize(); ++i)
	{
		const CSubjectGroup& targetGroup = combatDamageAssignment.GetAt(i);
		if (targetGroup.HasSubject(this))
		{
			const ContextValue& value = targetGroup.GetValue(this);

			Life nLifeDelta(value.nValue1);

			ATLASSERT(nLifeDelta < Life(0));

			nCurrentLife += nLifeDelta;

			if (nCurrentLife <= Life(0))
				return TRUE;
		}
	}

	return FALSE;
}

#ifdef M10_COMBAT
BOOL CCreatureCard::IsDamageAssignmentOrdered()
{
	if (!IsAttacking() && !IsBlocking())
		return TRUE;

	if (GetCardKeyword()->HasDeathtouch())
		return TRUE;

	if (m_bDamageAssignmentOrdered)
		return TRUE;

	if (IsAttacking())
	{
		int nCount = 0;
		for (int i = 0; i < m_BlockedBy.GetSize(); ++i)
		{
			CCard* pCard = m_BlockedBy.GetAt(i);
			if (pCard->GetZoneId() == ZoneId::Battlefield)
			{
				if (nCount)
					return FALSE;
				
				++nCount;
			}
		}

		m_bDamageAssignmentOrdered = TRUE;

		return TRUE;
	}

	int nCount = 0;
	for (int i = 0; i < m_BlockedAttackers.GetSize(); ++i)
	{
		CCard* pCard = m_BlockedAttackers.GetAt(i);
		if (pCard->GetZoneId() == ZoneId::Battlefield)
		{
			if (nCount)
				return FALSE;
			
			++nCount;
		}
	}

	m_bDamageAssignmentOrdered = TRUE;

	return TRUE;
}

void CCreatureCard::OrderDamageAssignment(const CSubjectGroup& creatures)
{
	if (IsAttacking())
	{
		int nCount = m_BlockedBy.GetSize();
		CCountedCardContainer cardSubjects;
		creatures.GetCardSubjects(cardSubjects);

		ATLASSERT(cardSubjects.GetSize() == nCount);
		if (cardSubjects.GetSize() != nCount)
		{
			LOG_ERROR(_T("Incorrect number of subjects used in assignment order: %d - %d"),
				cardSubjects.GetSize(),
				nCount);
			return;
		}

#ifdef _DEBUG
		for (int i = 0; i < nCount; ++i)
			m_BlockedBy.SetAt(i, NULL);
#endif

		for (int i = 0; i < nCount; ++i)
		{
			CCard* pCard = cardSubjects.GetAt(i);

			ATLASSERT(creatures.HasValue(pCard));
			int nOrder = creatures.GetValue(pCard).nValue1;

			ATLASSERT(nOrder >= 0 && nOrder < nCount);

			m_BlockedBy.SetAt(nOrder, pCard);
		}

#ifdef _DEBUG
		for (int i = 0; i < nCount; ++i)
			ATLASSERT(m_BlockedBy.GetAt(i));
#endif
	}
	else
	if (IsBlocking())
	{
		int nCount = m_BlockedAttackers.GetSize();
		CCountedCardContainer cardSubjects;
		creatures.GetCardSubjects(cardSubjects);

		ATLASSERT(cardSubjects.GetSize() == nCount);
		if (cardSubjects.GetSize() != nCount)
		{
			LOG_ERROR(_T("Incorrect number of subjects used in assignment order: %d - %d"),
				cardSubjects.GetSize(),
				nCount);
			return;
		}

#ifdef _DEBUG
		for (int i = 0; i < nCount; ++i)
			m_BlockedAttackers.SetAt(i, NULL);
#endif

		for (int i = 0; i < nCount; ++i)
		{
			CCard* pCard = cardSubjects.GetAt(i);

			ATLASSERT(creatures.HasValue(pCard));
			int nOrder = creatures.GetValue(pCard).nValue1;

			ATLASSERT(nOrder >= 0 && nOrder < nCount);

			m_BlockedAttackers.SetAt(nOrder, pCard);
		}

#ifdef _DEBUG
		for (int i = 0; i < nCount; ++i)
			ATLASSERT(m_BlockedAttackers.GetAt(i));
#endif
	}

	m_bDamageAssignmentOrdered = TRUE;
}
#endif

const CreatureType_& CCreatureCard::GetCreatureType() const
{
	return m_CreatureType;
}

CreatureType_& CCreatureCard::GetCreatureType()
{
	return m_CreatureType;
}

BOOL CCreatureCard::IsUnblockableWalkOkay(const CPlayer* pPlayer) const
{
	if (m_cpCreatureKeyword->HasUnblockableWalk())
	{
		const CCardFilter* pCardFilter= m_cpCreatureKeyword->GetUnblockableWalkFilter();
		CZone* pCardZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		if (pCardFilter->CountIncluded(pCardZone->GetCardContainer()) > 0)
			return TRUE;
	}

	return FALSE;
}

BOOL CCreatureCard::IsLandWalkOkay(const CPlayer* pPlayer) const
{
	if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Alltypewalk))
		return FALSE;

	CreatureKeyword landwalk = m_cpCreatureKeyword->GetLandwalk();

	if (landwalk.Any())
	{
		CardType cardType;

		if ((landwalk & CreatureKeyword::Islandwalk).Any()
			&& !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Islandwalk))
				cardType |= CardType::Island;

		if ((landwalk & CreatureKeyword::Swampwalk).Any()
			&& !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Swampwalk))
				cardType |= CardType::Swamp;

		if ((landwalk & CreatureKeyword::Plainswalk).Any()
			&& !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Plainswalk))
				cardType |= CardType::Plains;

		if ((landwalk & CreatureKeyword::Forestwalk).Any()
			&& !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Forestwalk))
				cardType |= CardType::Forest;

		if ((landwalk & CreatureKeyword::Mountainwalk).Any()
			&& !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::SuppressedLandwalk, SuppressWalkId::Mountainwalk))
				cardType |= CardType::Mountain;

		if (!cardType.Any())
			return FALSE;

		const CZone* pZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pZone->GetSize(); ++i)
			if ((pZone->GetAt(i)->GetCardType() & cardType).Any())
				return TRUE;
	}

	if (m_cpCreatureKeyword->HasNonBasicWalk())
	{
		const CCardFilter* pCardFilter= m_cpCreatureKeyword->GetNonBasicWalkFilter();
		CZone* pCardZone = pPlayer->GetZoneById(ZoneId::Battlefield);
		if (pCardFilter->CountIncluded(pCardZone->GetCardContainer()) > 0)
			return TRUE;
	}

	return FALSE;
}

/* Changed to state-based approach
void CCreatureCard::SetSuspend(BOOL bSuspend) 
{ 
	m_bSuspend = bSuspend; 
	
	if (!m_bSuspend)
		CheckDying(FALSE);
}
*/

BOOL CCreatureCard::CheckDying(BOOL bCheckOnly)
{
	// Changed to state-based approach
	//if (m_pGame->SuspendAllCreatures() || m_bSuspend)
	//	return FALSE;

	if (GetZoneId() != ZoneId::Battlefield)
		return FALSE;

	if (!GetCreatureKeyword()->SwitchedPT())
	{
		if (m_nLifeModifier + m_nLifeBase > Life(0))
			return FALSE;
	}
	else
		if (Life(GET_INTEGER(m_nPowerModifier)) + Life(GET_INTEGER(m_nPowerBase)) - m_nPermanentLifeModifier - m_nPermanentLifeBase + m_nLifeModifier + m_nLifeBase > Life(0))
			return FALSE;

	if (((GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructibleCreatures) || GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructiblePermanents) || GetCardKeyword()->HasIndestructible()) && GetToughness() > Life(0)))
		return FALSE;

	if (bCheckOnly)
	{
		m_pGame->AddStatebasedHint(CGame::StatebasedHint::CreatureCards);
		return TRUE;
	}

	Die();
	return TRUE;
}

void CCreatureCard::Die()
{
	if (Regenerate())
		return;

	Move(GetOwner()->GetZoneById(ZoneId::Graveyard), NULL, MoveType::Destroy);	// See also CZone::_AddCard()
}

int CCreatureCard::GetScore() const
{
	int nScore = __super::GetScore();

	/*
		For each power/toughness: +300
		For each positive creature attribute: +100
		For each negative creature attribute: -100
		AttackSubject this turn: -20 - (power + toughness)
		Blocked this turn: -(power + toughness)
	*/

	if (m_pGame && (!m_pGame->IsThinking() ||
		m_pGame->IsCardVisible(this)))
	{
		int nPowerAndToughness =
			GET_INTEGER(GetPermanentPower()) + GET_INTEGER(GetPermanentLife());

		nScore += nPowerAndToughness * 300 +
			m_cpCreatureKeyword->GetPositiveCount() * 100 +
			m_cpCreatureKeyword->GetNegativeCount() * -100;

		if (GetZoneId() == ZoneId::Battlefield)
		{
			// Added penalty to attacking and blocking so that no unnecessary
			// attackings or blockings will be performed

			if (m_cpCreatureFlag->HasAttacked())
				nScore -= 20 + nPowerAndToughness;

			if (m_cpCreatureFlag->HasBlocked())
				nScore -= nPowerAndToughness;
		}
	}

	/*
	if (GetZoneId() != ZoneId::Battlefield)
		nScore += m_nPrintedPower * 8 + m_nPrintedToughness * 7 +
					m_cpCreatureKeyword->GetCount(TRUE);
	else
		nScore += 10 + GetPermanentPower() * 10 +
					GetPermanentLife() * 9 +
					m_cpCreatureKeyword->GetCount(TRUE);

	// Added penalty to attacking and blocking so that no unnecessary
	// attackings or blockings will be performed

	if (m_cpCreatureFlag->HasAttacked())
		nScore -= 1;

	if (m_cpCreatureFlag->HasBlocked())
		nScore -= GetLife();
	*/

	return nScore;
}

void CCreatureCard::Move(CZone* pToZone,
						 const CPlayer* pByPlayer,		// Card moved by this player (NULL if not applicable)
						 MoveType moveType,
						 CardPlacement cardPlacement, BOOL can_dredge)
{
	SetLastKnownm11Counters(this->GetCounterContainer()->GetCounter(_T("-1/-1"))->GetCount());
	SetLastKnownp11Counters(this->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount());
	SetLastKnownFungusCounters(this->GetCounterContainer()->GetCounter(FUNGUS_COUNTER)->GetCount());

	if (moveType == MoveType::Destroy || moveType == MoveType::DestroyWithoutRegeneration)
	{
		if (((GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructibleCreatures) || GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::IndestructiblePermanents)) && GetToughness() > Life(0)))
		return ;
	}
	if (moveType == MoveType::Destroy)
	{
		ATLASSERT(pToZone->GetZoneId() == ZoneId::Graveyard && GetZoneId() == ZoneId::Battlefield);
		if (Regenerate()) return;
	}

	if (moveType == MoveType::DestroyWithoutRegeneration)
	{
		ATLASSERT(pToZone->GetZoneId() == ZoneId::Graveyard && GetZoneId() == ZoneId::Battlefield);
		if (TotemArmor()) return;
	}

	CZone* pPreviousZone(GetZone());
	Power nSavedPower(GetPower());
	Life nSavedToughness(GetToughness());

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
	if (pPreviousZone == GetZone()) return; // movement cancelled

	RemoveFromCombat(FALSE);

	if (GetZone()->GetZoneId() == ZoneId::Battlefield)
		m_pGame->AddStatebasedHint(CGame::StatebasedHint::CreatureCards);	
	else if (pPreviousZone->GetZoneId() == ZoneId::Battlefield)
	{
		m_nLastKnownToughness = nSavedToughness;
		m_nLastKnownPower = nSavedPower;
	}
}

void CCreatureCard::ResetTurnProperties()
{
	__super::ResetTurnProperties();

	ResetCreatureAttributes(TRUE);
}

void CCreatureCard::ResetProperties()
{
	__super::ResetProperties();

	m_CreatureType = m_PrintedCreatureType;
}

void CCreatureCard::ZeroCounts(bool TurnClearOnly)
{
	if (!TurnClearOnly)
	{
		m_pAttackedLastTurn.RemoveAll();
	}

	m_nRegenerationsThisTurn = 0;
	m_nDamageTakenThisTurn = 0;
	m_nBlazingEffigyDamage = 0;
}
//____________________________________________________________________________
//
