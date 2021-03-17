// CardUsagePattern.cpp : implementation file
//

#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//
#define REG_USAGE_KEY							_T("CardUsagePattern")
#define REG_USAGE_ENABLED_ENTRY					_T("Enabled")
#define REG_USAGE_CARD_NAME_ENTRY				_T("CardName")
#define REG_USAGE_ABILITY_ID_ENTRY				_T("AbilityID")
#define REG_USAGE_NODE_ENTRY					_T("Node%d")
#define REG_USAGE_NODE_COUNT_ENTRY				_T("Count")
#define REG_USAGE_USAGE_ENTRY					_T("Usage")
#define REG_USAGE_DEFAULT_USAGE_ENTRY			_T("DefaultUsage")
#define REG_USAGE_OVERRIDE_THIS_U_P_IN_STACK	_T("OverrideThisUPInStack")

//____________________________________________________________________________
//
// CUsageAbility
//

CUsageAbility::CUsageAbility(CUsageCard* pUsageCard)
	: m_bOverrideThisUPInStack(TRUE)
	, m_pUsageCard(pUsageCard)
	, m_bDefaultUsage(TRUE)
{
	ATLASSERT(IDS_LAST_USAGE_ITEM == UsagePatternItem::_LastItem);
}

CUsageAbility::~CUsageAbility()
{
	RemoveAllEntries();
}

void CUsageAbility::SetAbilityID(LPCTSTR strAbilityID)
{
	m_strUniqueChildAbilityName = strAbilityID;
}

CString CUsageAbility::GetUniqueChildAbilityName() const
{
	return m_strUniqueChildAbilityName;
}

CUsageAbility::UsageEntryArray::size_type CUsageAbility::GetEntryCount() const
{
	return m_Entries.size();
}

CUsageEntry* CUsageAbility::GetEntry(UsageEntryArray::size_type nIndex) const
{
	return m_Entries[nIndex];
}

void CUsageAbility::AddEntry(CUsageEntry* pUsageEntry)
{
	m_Entries.push_back(pUsageEntry);
}

BOOL CUsageAbility::MoveEntry(const CUsageEntry* pUsage, BOOL bMoveUp)
{
	UsageEntryArray::size_type nFoundAt = -1;
	CUsageEntry* pUsageFound = NULL;

	for (UsageEntryArray::size_type i = 0; i < m_Entries.size(); ++i)
		if (pUsage == m_Entries[i])
		{
			pUsageFound = m_Entries[i];
			nFoundAt = i;
			break;
		}

	if (nFoundAt == -1)
		return FALSE;

	m_Entries.erase(m_Entries.begin() + nFoundAt);

	UsageEntryArray::size_type nInsertAt = nFoundAt;

	if (bMoveUp)
	{
		--nInsertAt;
		if (nInsertAt < 0)
			nInsertAt = 0;
	}
	else
	{
		++nInsertAt;
		if (nInsertAt >= m_Entries.size())
			nInsertAt = m_Entries.size();
	}

	m_Entries.insert(m_Entries.begin() + nInsertAt, pUsageFound);

	return TRUE;
}

BOOL CUsageAbility::RemoveEntry(const CUsageEntry* pUsage)
{
	for (UsageEntryArray::iterator i = m_Entries.begin(); i != m_Entries.end(); ++i)
		if (pUsage == *i)
		{
			m_Entries.erase(i);
			delete pUsage;
			return TRUE;
		}

	return FALSE;
}

void CUsageAbility::RemoveAllEntries()
{
	for (UsageEntryArray::size_type i = 0; i < m_Entries.size(); ++i)
		delete m_Entries[i];

	m_Entries.clear();
}

void CUsageAbility::Copy(const CUsageAbility& usageAbility)
{
	RemoveAllEntries();

	m_strUniqueChildAbilityName = usageAbility.m_strUniqueChildAbilityName;
	m_bDefaultUsage = usageAbility.m_bDefaultUsage;
	m_bOverrideThisUPInStack = usageAbility.m_bOverrideThisUPInStack;

	for (UsageEntryArray::size_type i = 0; i < usageAbility.m_Entries.size(); ++i)
	{
		CUsageEntry* pUsageEntry = new CUsageEntry(*(usageAbility.m_Entries[i]));
		if (pUsageEntry)
			m_Entries.push_back(pUsageEntry);
	}
}

CUsageAbility* CUsageAbility::Clone() const
{
	CUsageAbility* pUsageAbility = new CUsageAbility(m_pUsageCard);

	if (!pUsageAbility)
		return NULL;

	pUsageAbility->Copy(*this);

	return pUsageAbility;
}

CUsageCard* CUsageAbility::GetUsageCard() const
{
	return m_pUsageCard;
}

void CUsageAbility::SetDefaultUsage(BOOL bUsable)
{
	m_bDefaultUsage = bUsable;
}

BOOL CUsageAbility::GetDefaultUsage() const
{
	return m_bDefaultUsage;
}

const CAbility* CUsageAbility::GetCardAbility() const
{
	if (!m_cpCard.GetPointer())
	{
		m_cpCard = counted_ptr<CCard>(CCardFactory::GetInstance()->CreateCard(NULL, m_pUsageCard->GetCardName(), -1));
		if (!m_cpCard.GetPointer())
		{
			m_cpCard = counted_ptr<CCard>(CCardFactory::GetInstance()->CreateToken(NULL, m_pUsageCard->GetCardName(), -1));
			if (!m_cpCard.GetPointer())
				return NULL;
		}
	}

	for (int j = 0; j < m_cpCard->GetAbilityCount(); ++j)
	{
		const CAbility* pAbility = m_cpCard->GetAbility(j);

		ATLASSERT(pAbility->GetReferenceCount() == 1);

		CString strAbilityID(pAbility->GetUniqueChildAbilityName());

		if (!_tcsicmp(strAbilityID, m_strUniqueChildAbilityName))
		{
			return pAbility;
		}
	}

	return NULL;
}

BOOL CUsageAbility::HasPredefinedUsage(const CAbility* pAbility)	// For UI hint
{
	CUsageAbility temp(NULL);
	return CreatePredefinedUsage(pAbility, temp);
}

BOOL CUsageAbility::SetPredefinedUsage(const CAbility* pAbility)
{
	return CreatePredefinedUsage(pAbility, *this);
}

BOOL CUsageAbility::CreatePredefinedUsage(const CAbility* pAbility, CUsageAbility& usageAbility)
{
	const CCard* pCard = pAbility->GetCard();
	BOOL bPlayFromHand = pAbility->GetHandOnly();
	BOOL bPlayFromInplay = pAbility->GetInPlayOnly();
	BOOL bFast = !(pAbility->GetAbilityType() & AbilityType::_SlowSpeed).Any();

	usageAbility.RemoveAllEntries();
	usageAbility.SetDefaultUsage(FALSE);
	usageAbility.m_bOverrideThisUPInStack = FALSE;	

	if (bPlayFromInplay)
		usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::ThisCardMayLeaveInplay));
	else
	if (bPlayFromHand)
		usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::ThisCardMayBeDiscarded));

	const CTargetChgPwrTghAttrSpell* pChgPwrTghAttrSpell = dynamic_cast<const CTargetChgPwrTghAttrSpell*>(pAbility);
	if (pChgPwrTghAttrSpell)
	{
		BOOL bReturn = FALSE;
		Life nLifeDelta(pChgPwrTghAttrSpell->GetActionValue().nValue1);
		Power nPowerDelta(pChgPwrTghAttrSpell->GetActionValue().nValue2);

		if (nLifeDelta > Life(0) || 
			(pChgPwrTghAttrSpell->GetCost().GetExtraManaCost() && 
				pChgPwrTghAttrSpell->GetExtraActionValueVector().nValue1 > 0))
		{
			if (bFast)
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourCreaturesMayLeaveInplay));
			else
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));

			bReturn = TRUE;
		}
		else
		if (nLifeDelta < Life(0) || 
			(pChgPwrTghAttrSpell->GetCost().GetExtraManaCost() && 
				pChgPwrTghAttrSpell->GetExtraActionValueVector().nValue1 < 0))
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourDeclareAttackersStep));
			usageAbility.AddEntry(new CUsageEntry(TRUE, 
				UsagePatternItem::YourCreaturesAreBlocked,
				UsagePatternItem::YourDeclareBlockersStep));

			if (bFast)
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsEndOfTurnStep));
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsDeclareAttackersStep));
			}

			bReturn = TRUE;
		}

		if ((nPowerDelta > Power(0)) || 
			(pChgPwrTghAttrSpell->GetCost().GetExtraManaCost() && 
				pChgPwrTghAttrSpell->GetExtraActionValueVector().nValue2 > 0))
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, 
				UsagePatternItem::YourCreaturesAreAttacking,
				UsagePatternItem::YourDeclareBlockersStep));

			usageAbility.AddEntry(new CUsageEntry(TRUE, 
				UsagePatternItem::YourCreaturesAreBlocking,
				UsagePatternItem::OpponentsDeclareBlockersStep));

			bReturn = TRUE;
		}
		else
		if ((nPowerDelta < Power(0)) || 
			(pChgPwrTghAttrSpell->GetCost().GetExtraManaCost() && 
				pChgPwrTghAttrSpell->GetExtraActionValueVector().nValue2 < 0))
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, 
				UsagePatternItem::YourCreaturesAreBlocked,
				UsagePatternItem::YourDeclareBlockersStep));

			bReturn = TRUE;
		}

		if (pChgPwrTghAttrSpell->GetCreatureKeywordMod().GetModifier().GetToAdd().Any() || 
			pChgPwrTghAttrSpell->GetCreatureKeywordMod().GetModifier().GetToRemove().Any())
		{
			CreatureKeyword keywords = pChgPwrTghAttrSpell->GetCreatureKeywordMod().GetModifier().GetToAdd()
				| pChgPwrTghAttrSpell->GetCreatureKeywordMod().GetModifier().GetToRemove();

			if ((keywords & CreatureKeyword::_AbleToAttackCreatureKeywords).Any())
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));

				bReturn = TRUE;
			}

			if ((keywords & CreatureKeyword::_PositiveAttackingCreatureKeywords).Any())
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, 
					UsagePatternItem::YourCreaturesAreAttacking,
					UsagePatternItem::YourDeclareAttackersStep));

				bReturn = TRUE;
			}

			if ((keywords & CreatureKeyword::_AbleToBlockCreatureKeywords).Any())
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, 
					UsagePatternItem::OpponentsCreaturesAreAttacking,
					UsagePatternItem::OpponentsDeclareAttackersStep));

				bReturn = TRUE;
			}
		}

		return bReturn;
	}

	const CChgLifeSpell* pChgLifeSpell = dynamic_cast<const CChgLifeSpell*>(pAbility);
	if (pChgLifeSpell)
	{
		if (bFast)
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourLifeMayDecrease));
		}
		else
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));
		}

		return TRUE;
	}

	const CTargetChgLifeSpell* pTargetChgLifeSpell = dynamic_cast<const CTargetChgLifeSpell*>(pAbility);
	if (pTargetChgLifeSpell)
	{
		if (pTargetChgLifeSpell->GetTargeting()->GetCharacteristic() == Characteristic::Positive)
		{
			if (bFast)
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourLifeMayDecrease));
			}
			else
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));
			}
		}
		else
		{
			if (bFast)
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsEndOfTurnStep));
			}
			else
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));
			}
		}

		return TRUE;
	}

	const CTargetDamagePreventionSpell* pTargetDamagePreventionSpell = dynamic_cast<const CTargetDamagePreventionSpell*>(pAbility);
	if (pTargetDamagePreventionSpell)
	{
		usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourCreaturesMayLeaveInplay));
		usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourLifeMayDecrease));

		return TRUE;
	}

	const CTargetCreatureDamageRedirectionSpell* pTargetCreatureDamageRedirectionSpell = dynamic_cast<const CTargetCreatureDamageRedirectionSpell*>(pAbility);
	if (pTargetCreatureDamageRedirectionSpell)
	{
		// Redirect to controller

		usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourCreaturesMayLeaveInplay));
		
		return TRUE;
	}

	const CTargetCreatureDamageRedirectionSpell2* pTargetCreatureDamageRedirectionSpell2 = dynamic_cast<const CTargetCreatureDamageRedirectionSpell2*>(pAbility);
	if (pTargetCreatureDamageRedirectionSpell2)
	{
		// Redirect from self to other players or creatures

		// Not need, already added at the beginning of the function
		//usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::ThisCardMayLeaveInplay));

		return TRUE;
	}

	const CTargetCreatureDamageRedirectionSpell3* pTargetCreatureDamageRedirectionSpell3 = dynamic_cast<const CTargetCreatureDamageRedirectionSpell3*>(pAbility);
	if (pTargetCreatureDamageRedirectionSpell3)
	{
		// Redirect from other creatures or players to self

		usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourCreaturesMayLeaveInplay));

		if (!(pTargetCreatureDamageRedirectionSpell3->GetTargeting()->GetPlayerFilter().Empty()))
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourLifeMayDecrease));
		
		return TRUE;
	}

	const CDamagePreventionSpell* pDamagePreventionSpell = dynamic_cast<const CDamagePreventionSpell*>(pAbility);
	if (pDamagePreventionSpell)
	{
		if (pDamagePreventionSpell->GetPreventDamageToController())
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourLifeMayDecrease));
		else
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::ThisCreaturesLifeMayDecrease));

		return TRUE;
	}

	const CRegenerationAbility* pRegenerationAbility = dynamic_cast<const CRegenerationAbility*>(pAbility);
	if (pRegenerationAbility)
	{
		// No need to add here, already added at the beginning of the function
		//usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::ThisCardMayLeaveInplay));

		return TRUE;
	}

	const CTargetRegenerationSpell* pTargetRegenerationSpell = dynamic_cast<const CTargetRegenerationSpell*>(pAbility);
	if (pTargetRegenerationSpell)
	{
		usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourCreaturesMayLeaveInplay));

		return TRUE;
	}

	const CPumpAbility* pPumpAbility = dynamic_cast<const CPumpAbility*>(pAbility);
	if (pPumpAbility)
	{
		if (pPumpAbility->GetPowerModifier().GetPowerDelta() != Power(0))
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, 
				UsagePatternItem::ThisCreatureIsAttacking,
				UsagePatternItem::YourDeclareBlockersStep));

			usageAbility.AddEntry(new CUsageEntry(TRUE, 
				UsagePatternItem::ThisCreatureIsBlocking,
				UsagePatternItem::OpponentsDeclareBlockersStep));
		}

		if (pPumpAbility->GetCreatureKeywordMod().GetModifier().GetToAdd().Any() || 
			pPumpAbility->GetCreatureKeywordMod().GetModifier().GetToRemove().Any())
		{
			CreatureKeyword keywords = pPumpAbility->GetCreatureKeywordMod().GetModifier().GetToAdd() | 
				pPumpAbility->GetCreatureKeywordMod().GetModifier().GetToRemove();

			if ((keywords & CreatureKeyword::_AbleToAttackCreatureKeywords).Any())
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));
			}

			if ((keywords & CreatureKeyword::_PositiveAttackingCreatureKeywords).Any())
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, 
					UsagePatternItem::ThisCreatureIsAttacking,
					UsagePatternItem::YourDeclareAttackersStep));
			}

			if ((keywords & CreatureKeyword::_AbleToBlockCreatureKeywords).Any())
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, 
					UsagePatternItem::OpponentsCreaturesAreAttacking,
					UsagePatternItem::OpponentsDeclareAttackersStep));
			}
		}

		return TRUE;
	}

	/* Disabled for now because it looks too specialized
	const CChgLifeBySurveySpell* pChgLifeByMultiplierSpell = dynamic_cast<const CChgLifeBySurveySpell*>(pAbility);
	if (pChgLifeByMultiplierSpell)
	{
		if (pChgLifeByMultiplierSpell->GetAttackedByMultiplier() &&
			!pChgLifeByMultiplierSpell->GetCardsMultiplier())
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, 
				UsagePatternItem::OpponentsCreaturesAreAttacking,
				UsagePatternItem::OpponentsDeclareAttackersStep));

			return TRUE;
		}
		else
			if (bFast)
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourLifeMayDecrease));
			}
			else
			{
				usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));
			}

		return FALSE;
	}
	*/

	// 10/25/2003
	const CActivatedAbility<CDrawCardSpell>* pDrawCardAbility = dynamic_cast<const CActivatedAbility<CDrawCardSpell>*>(pAbility);
	if (pDrawCardAbility)
	{
		if (pAbility->GetCard()->GetCardName() == _T("Greed"))
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));

			return TRUE;
		}

		return FALSE;
	}

	const CPlayerEffectSpell* pPlayerEffectSpell = dynamic_cast<const CPlayerEffectSpell*>(pAbility);
	if (pPlayerEffectSpell)
	{
		if (pAbility->GetCard()->GetCardName() == _T("Fog"))
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourDeclareBlockersStep));
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsDeclareAttackersStep));

			return TRUE;
		}

		return FALSE;
	}

	const CSelfMoveCardAbility* pSelfMoveCardAbility = dynamic_cast<const CSelfMoveCardAbility*>(pAbility);
	if (pSelfMoveCardAbility && pSelfMoveCardAbility->GetInPlayOnly())
	{
		// Not needed
		//usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::ThisCardMayLeaveInplay));

		return TRUE;
	}

	const CTargetTapUntapCardSpell* pTargetTapUntapCardSpell = dynamic_cast<const CTargetTapUntapCardSpell*>(pAbility);
	if (pTargetTapUntapCardSpell)
	{
		BOOL bTap = pTargetTapUntapCardSpell->GetTap();
		BOOL bUntap = pTargetTapUntapCardSpell->GetUntap();

		if (bTap)
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsUpkeepStep));
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourDeclareAttackersStep));
		}

		if (bUntap)
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsDeclareAttackersStep));
		}

		return TRUE;	
	}

#if 1
	const CTargetPlayerCardsSpell* pTargetPlayerCardsSpell = dynamic_cast<const CTargetPlayerCardsSpell*>(pAbility);
	if (pTargetPlayerCardsSpell)
	{
		if (pAbility->GetCard()->GetCardName() == _T("Mana Short"))
		{
			// Taps 

			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsUpkeepStep));
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourDeclareAttackersStep));

			return TRUE;
		}
		else
		if (pAbility->GetCard()->GetCardName() == _T("Early Harvest"))
		{
			// Untaps

			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsDeclareAttackersStep));

			return TRUE;
		}
	}
#else
	/*
	const CTargetPlayerTapUntapCardSpell* pTargetPlayerTapUntapCardSpell = dynamic_cast<const CTargetPlayerTapUntapCardSpell*>(pAbility);
	if (pTargetPlayerTapUntapCardSpell)
	{
		BOOL bTap = pTargetPlayerTapUntapCardSpell->GetTap();
		BOOL bUntap = pTargetPlayerTapUntapCardSpell->GetUntap();

		if (bTap)
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsUpkeepStep));
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourDeclareAttackersStep));
		}

		if (bUntap)
		{
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::YourMainPhasePrecombat));
			usageAbility.AddEntry(new CUsageEntry(TRUE, UsagePatternItem::OpponentsDeclareAttackersStep));
		}

		return TRUE;
	}
	*/
#endif

	return FALSE;
}

BOOL CUsageAbility::IsAbilityUsable(const CAbility* pAbility) const
{
	CGame* pGame = pAbility->GetGame();

	ATLASSERT(pAbility->GetCard()->GetController() == pGame->GetPriorityPlayer());

	NodeId nodeId = pGame->GetCurrentNode()->GetNodeId();

	if (nodeId == NodeId::UntapStep)
		return TRUE;

	if (m_bOverrideThisUPInStack && pGame->GetStack().GetStackSize())
		return TRUE;

	if (!m_Entries.size())
		return m_bDefaultUsage;

	const CCard* pCard = pAbility->GetCard();
	const CPlayer* pController = pCard->GetController();		// Controller == Priority Player
	const CStack& stack = pGame->GetStack();
	const CCreatureCard* pCreatureCard = NULL;

	if ((pCard->GetCardType() & CardType::Creature).Any())
		pCreatureCard = (const CCreatureCard*)pCard;

	BOOL bIsPreCombat = 
		((nodeId == NodeId::MainPhaseStep) && ((CMainNode*)pGame->GetCurrentNode())->IsPreCombat());

	for (UsageEntryArray::size_type j = 0; j < m_Entries.size(); ++j)
	{
		const CUsageEntry* pEntry = m_Entries[j];

		BOOL bFailed = FALSE;

		for (int k = 0; k < pEntry->m_nCount; ++k)
		{
			UsagePatternItem item = pEntry->m_Items[k];

			if (pGame->GetActivePlayer() == pGame->GetPriorityPlayer())
			{
				switch(item.Get())
				{
				case UsagePatternItem::YourTurn:
					continue;

				case UsagePatternItem::YourBeginningPhase:
					if (nodeId != NodeId::BeginningStep)
						break;
					continue;

				case UsagePatternItem::YourUntapStep:
					if (nodeId != NodeId::UntapStep)
						break;
					continue;

				case UsagePatternItem::YourUpkeepStep:
					if (nodeId != NodeId::UpkeepStep)
						break;
					continue;
					
				case UsagePatternItem::YourDrawStep:
					if (nodeId != NodeId::DrawStep2)
						break;
					continue;
					
				case UsagePatternItem::YourMainPhase:    
					if (nodeId != NodeId::MainPhaseStep)
						break;
					continue;

				case UsagePatternItem::YourMainPhasePrecombat:    
					if ((nodeId != NodeId::MainPhaseStep) || !bIsPreCombat)
						break;
					continue;

				case UsagePatternItem::YourMainPhasePostcombat:    
					if ((nodeId != NodeId::MainPhaseStep) || bIsPreCombat)
						break;
					continue;
					
				case UsagePatternItem::YourEndOfTurnStep:             
					if (nodeId != NodeId::EndStep)
						break;
					continue;
					
				case UsagePatternItem::YourBeginningOfCombatStep:         
					if (nodeId != NodeId::BeginningOfCombatStep)
						break;
					continue;

				case UsagePatternItem::YourDeclareAttackersStep:      
					if (nodeId != NodeId::DeclareAttackersStep2)
						break;
					continue;
					
				case UsagePatternItem::YourDeclareBlockersStep:       
					if (nodeId != NodeId::DeclareBlockersStep2)
						break;
					continue;

				case UsagePatternItem::YourCombatDamageStep:        
					if (nodeId != NodeId::CombatDamageStep1b &&
						nodeId != NodeId::CombatDamageStep2b)
						break;
					continue;

				case UsagePatternItem::YourEndOfCombatStep:      
					if (nodeId != NodeId::EndOfCombatStep)
						break;
					continue;					

				case UsagePatternItem::YourCombatPhase:
					if (!(nodeId & NodeId::_CombatPhase).Any())
						break;
					continue;
				}
			}
			else
			{
				switch(item.Get())
				{
				case UsagePatternItem::OpponentsTurn:
					continue;

				case UsagePatternItem::OpponentsBeginningPhase:
					if (nodeId != NodeId::BeginningStep)
						break;
					continue;

				case UsagePatternItem::OpponentsUntapStep:
					if (nodeId != NodeId::UntapStep)
						break;
					continue;

				case UsagePatternItem::OpponentsUpkeepStep:
					if (nodeId != NodeId::UpkeepStep)
						break;
					continue;
					
				case UsagePatternItem::OpponentsDrawStep:
					if (nodeId != NodeId::DrawStep2)
						break;
					continue;
					
				case UsagePatternItem::OpponentsMainPhase:    
					if (nodeId != NodeId::MainPhaseStep)
						break;
					continue;

				case UsagePatternItem::OpponentsMainPhasePrecombat:    
					if ((nodeId != NodeId::MainPhaseStep) || !bIsPreCombat)
						break;
					continue;

				case UsagePatternItem::OpponentsMainPhasePostcombat:    
					if ((nodeId != NodeId::MainPhaseStep) || bIsPreCombat)
						break;
					continue;
					
				case UsagePatternItem::OpponentsEndOfTurnStep:             
					if (nodeId != NodeId::EndStep)
						break;
					continue;
					
				case UsagePatternItem::OpponentsBeginningOfCombatStep:         
					if (nodeId != NodeId::BeginningOfCombatStep)
						break;
					continue;

				case UsagePatternItem::OpponentsDeclareAttackersStep:      
					if (nodeId != NodeId::DeclareAttackersStep2)
						break;
					continue;

				case UsagePatternItem::OpponentsDeclareBlockersStep:       
					if (nodeId != NodeId::DeclareBlockersStep2)
						break;
					continue;

				case UsagePatternItem::OpponentsCombatDamageStep:        
					if (nodeId != NodeId::CombatDamageStep1b &&
						nodeId != NodeId::CombatDamageStep2b)
						break;
					continue;
					
				case UsagePatternItem::OpponentsEndOfCombatStep:      
					if (nodeId != NodeId::EndOfCombatStep)
						break;
					continue;					

				case UsagePatternItem::OpponentsCombatPhase:
					if (!(nodeId & NodeId::_CombatPhase).Any())
						break;
					continue;
				}	// switch(pEntry->m_Items)
			}

			switch(item.Get())
			{
			case UsagePatternItem::YouAreTargeted:   
				{
					if (!pGame->HasTarget(pController))
						break;
					continue;	
				}
			case UsagePatternItem::YourLifeMayIncrease:
				{
					if (PlayerLifeMayIncrease(pController))
						continue;

					break;
				}
			case UsagePatternItem::YourLifeMayDecrease:
				{
					if (PlayerLifeMayDecrease(pController))
						continue;

					break;
				}
			case UsagePatternItem::YourCardsAreTargeted:  
				{
					if (!pGame->HasTargetedCards(pController))
						break;
					continue;
				}
			case UsagePatternItem::YourCardsMayLeaveInplay:
				{
					const CZone* pInplay = pController->GetZoneById(ZoneId::Battlefield);
					BOOL bFound = FALSE;
					for (int i = 0; i < pInplay->GetSize(); ++i)
						if (CardMayLeaveInPlay(pInplay->GetAt(i)))
						{
							bFound = TRUE;
							break;
						}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::YourCreaturesAreTargeted:  
				{
					if (!pGame->HasTargetedCreatures(pController))
						break;
					continue;
				}
			case UsagePatternItem::YourCreaturesMayLeaveInplay:
				{
					const CZone* pInplay = pController->GetZoneById(ZoneId::Battlefield);
					BOOL bFound = FALSE;
					for (int i = 0; i < pInplay->GetSize(); ++i)
					{
						const CCard* pCard = pInplay->GetAt(i);
						if (pCard->GetCardType().IsCreature() &&
							CardMayLeaveInPlay(pCard))
						{
							bFound = TRUE;
							break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::YourCreaturesAreBlocked:			
				{
					BOOL bFound = FALSE;

					CCountedCardContainer BlockedCreatures;
					pGame->GetBlockedCreatures(BlockedCreatures);
					for (int i = 0; i < BlockedCreatures.GetSize(); ++i)
					{
						const CCard* pCard2 = BlockedCreatures.GetAt(i);
						if (pCard2->GetController() == pController)
						{
							bFound = TRUE;
							break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::YourCreaturesAreAttacking:
				{
					BOOL bFound = FALSE;

					CCountedCardContainer AttackingCreatures;
					pGame->GetAttackingCreatures(AttackingCreatures);
					for (int i = 0; i < AttackingCreatures.GetSize(); ++i)
					{
						const CCard* pCard2 = AttackingCreatures.GetAt(i);
						if (pCard2->GetController() == pController)
						{
							bFound = TRUE;
							break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::YourCreaturesAreBlocking:			
				{
					BOOL bFound = FALSE;

					CCountedCardContainer BlockingCreatures;
					pGame->GetBlockingCreatures(BlockingCreatures);
					for (int i = 0; i < BlockingCreatures.GetSize(); ++i)
					{
						const CCard* pCard2 = BlockingCreatures.GetAt(i);
						if (pCard2->GetController() == pController)
						{
							bFound = TRUE;
							break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::YourCreaturesLifeMayIncrease:
				{
					const CZone* pInplay = pController->GetZoneById(ZoneId::Battlefield);
					BOOL bFound = FALSE;
					for (int i = 0; i < pInplay->GetSize(); ++i)
					{
						const CCard* pCard = pInplay->GetAt(i);
						if (pCard->GetCardType().IsCreature() &&
							CreatureLifeMayIncrease((const CCreatureCard*)pCard))
						{
							bFound = TRUE;
							break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::YourCreaturesLifeMayDecrease:
				{
					const CZone* pInplay = pController->GetZoneById(ZoneId::Battlefield);
					BOOL bFound = FALSE;
					for (int i = 0; i < pInplay->GetSize(); ++i)
					{
						const CCard* pCard = pInplay->GetAt(i);
						if (pCard->GetCardType().IsCreature() &&
							CreatureLifeMayDecrease((const CCreatureCard*)pCard))
						{
							bFound = TRUE;
							break;
						}
					}

					if (bFound)
						continue;

					break;
				}



			case UsagePatternItem::OpponentsAreTargeted:   
				{
					if (!pGame->HasOtherPlayerTargets(pController))
						break;
					continue;
				}
			case UsagePatternItem::OpponentsLifeMayIncrease:
				{
					BOOL bFound = FALSE;

					for (int i = 0; i < pGame->GetPlayerCount(); ++i)
					{
						const CPlayer* pPlayer = pGame->GetPlayer(i);
						if (pPlayer != pController)
						{
							if (PlayerLifeMayIncrease(pPlayer))
							{
								bFound = TRUE;
								break;
							}
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::OpponentsLifeMayDecrease:
				{
					BOOL bFound = FALSE;

					for (int i = 0; i < pGame->GetPlayerCount(); ++i)
					{
						const CPlayer* pPlayer = pGame->GetPlayer(i);
						if (pPlayer != pController)
						{
							if (PlayerLifeMayDecrease(pPlayer))
							{
								bFound = TRUE;
								break;
							}
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::OpponentsCardsAreTargeted:  
				{
					if (!pGame->HasOtherCardTargets(pController))
						break;
					continue;
				}
			case UsagePatternItem::OpponentsCardsMayLeaveInplay:
				{
					BOOL bFound = FALSE;

					for (int i = 0; i < pGame->GetPlayerCount(); ++i)
					{
						const CPlayer* pPlayer = pGame->GetPlayer(i);
						if (pPlayer != pController)
						{
							const CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
							for (int i = 0; i < pInplay->GetSize(); ++i)
							{
								const CCard* pCard = pInplay->GetAt(i);
								if (CardMayLeaveInPlay(pCard))
								{
									bFound = TRUE;
									break;
								}
							}

							if (bFound)
								break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::OpponentsCreaturesAreTargeted:  
				{
					if (!pGame->HasOtherCreatureTargets(pController))
						break;
					continue;
				}
			case UsagePatternItem::OpponentsCreaturesMayLeaveInplay:
				{
					BOOL bFound = FALSE;

					for (int i = 0; i < pGame->GetPlayerCount(); ++i)
					{
						const CPlayer* pPlayer = pGame->GetPlayer(i);
						if (pPlayer != pController)
						{
							const CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
							for (int i = 0; i < pInplay->GetSize(); ++i)
							{
								const CCard* pCard = pInplay->GetAt(i);
								if (pCard->GetCardType().IsCreature() &&
									CardMayLeaveInPlay(pCard))
								{
									bFound = TRUE;
									break;
								}
							}

							if (bFound)
								break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::OpponentsCreaturesAreBlocked:			
				{
					BOOL bFound = FALSE;

					CCountedCardContainer BlockedCreatures;
					pGame->GetBlockedCreatures(BlockedCreatures);
					for (int i = 0; i < BlockedCreatures.GetSize(); ++i)
					{
						const CCard* pCard2 = BlockedCreatures.GetAt(i);
						if (pCard2->GetController() != pController)
						{
							bFound = TRUE;
							break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::OpponentsCreaturesAreAttacking:
				{
					BOOL bFound = FALSE;

					CCountedCardContainer AttackingCreatures;
					pGame->GetAttackingCreatures(AttackingCreatures);
					for (int i = 0; i < AttackingCreatures.GetSize(); ++i)
					{
						const CCard* pCard2 = AttackingCreatures.GetAt(i);
						if (pCard2->GetController() != pController)
						{
							bFound = TRUE;
							break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::OpponentsCreaturesAreBlocking:			
				{
					BOOL bFound = FALSE;

					CCountedCardContainer BlockingCreatures;
					pGame->GetBlockingCreatures(BlockingCreatures);
					for (int i = 0; i < BlockingCreatures.GetSize(); ++i)
					{
						const CCard* pCard2 = BlockingCreatures.GetAt(i);
						if (pCard2->GetController() != pController)
						{
							bFound = TRUE;
							break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::OpponentsCreaturesLifeMayIncrease:
				{
					BOOL bFound = FALSE;

					for (int i = 0; i < pGame->GetPlayerCount(); ++i)
					{
						const CPlayer* pPlayer = pGame->GetPlayer(i);
						if (pPlayer != pController)
						{
							const CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
							for (int i = 0; i < pInplay->GetSize(); ++i)
							{
								const CCard* pCard = pInplay->GetAt(i);
								if (pCard->GetCardType().IsCreature() &&
									CreatureLifeMayIncrease((const CCreatureCard*)pCard))
								{
									bFound = TRUE;
									break;
								}
							}

							if (bFound)
								break;
						}
					}

					if (bFound)
						continue;

					break;
				}
			case UsagePatternItem::OpponentsCreaturesLifeMayDecrease:
				{
					BOOL bFound = FALSE;

					for (int i = 0; i < pGame->GetPlayerCount(); ++i)
					{
						const CPlayer* pPlayer = pGame->GetPlayer(i);
						if (pPlayer != pController)
						{
							const CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
							for (int i = 0; i < pInplay->GetSize(); ++i)
							{
								const CCard* pCard = pInplay->GetAt(i);
								if (pCard->GetCardType().IsCreature() &&
									CreatureLifeMayDecrease((const CCreatureCard*)pCard))
								{
									bFound = TRUE;
									break;
								}
							}

							if (bFound)
								break;
						}
					}

					if (bFound)
						continue;

					break;
				}

			case UsagePatternItem::ThisCardIsTargeted:
				{
					if (!pGame->HasTarget(pCard))
						break;
					continue;
				}
			case UsagePatternItem::ThisCardMayLeaveInplay:
				{
					if (CardMayLeaveInPlay(pCard))
						continue;

					break;
				}
			case UsagePatternItem::ThisCardMayBeDiscarded:
				{
					if (CardMayBeDiscarded(pCard))
						continue;

					break;
				}
			case UsagePatternItem::ThisCreatureIsAttacking:			
				{
					if (!pCreatureCard || !pCreatureCard->IsAttacking())
						break;
					continue;
				}
			case UsagePatternItem::ThisCreatureIsBlocking:		
				{
					if (!pCreatureCard || !pCreatureCard->IsBlocking())
						break;
					continue;
				}
			case UsagePatternItem::ThisCreatureIsBlocked:				
				{
					if (!pCreatureCard || !pCreatureCard->IsAttacking() ||
						!pCreatureCard->GetBlockedByCount())
						break;
					continue;
				}
			case UsagePatternItem::ThisCreaturesLifeMayIncrease:   
				{
					if (pCreatureCard && CreatureLifeMayIncrease(pCreatureCard))
						continue;

					break;
				}
			case UsagePatternItem::ThisCreaturesLifeMayDecrease:   
				{
					if (pCreatureCard && CreatureLifeMayDecrease(pCreatureCard))
						continue;

					break;
				}

			}	// switch(pEntry->m_Items)

			bFailed = TRUE;
			break;

		}	// for (int k = 0; k < pEntry->m_nCount; ++k)

		if (!bFailed)
			return pEntry->m_bUsable;

	}	// for (int j = 0; j < m_Entries.GetSize(); ++j)

	return m_bDefaultUsage;
}

BOOL CUsageAbility::IsAbilityUsableOnCard(const CAbility* pAbility, const CCard* pOnCard) const 
{
	CGame* pGame = pAbility->GetGame();

	if (m_bOverrideThisUPInStack && pGame->GetStack().GetStackSize())
		return TRUE;

	if (!m_Entries.size())
		return m_bDefaultUsage;

	const CCard* pCard = pAbility->GetCard();
	const CPlayer* pController = pCard->GetController();
	const CStack& stack = pGame->GetStack();
	const CCreatureCard* pCreatureCard = NULL;
	if ((pOnCard->GetCardType() & CardType::Creature).Any())
		pCreatureCard = (const CCreatureCard*)pOnCard;

	for (UsageEntryArray::size_type j = 0; j < m_Entries.size(); ++j)
	{
		const CUsageEntry* pEntry = m_Entries[j];
		if (pEntry->m_bUsable == m_bDefaultUsage)
			continue;

		BOOL bFailed = FALSE;

		for (int k = 0; k < pEntry->m_nCount; ++k)
		{
			UsagePatternItem item = pEntry->m_Items[k];

			switch(item.Get())
			{
			case UsagePatternItem::YourCardsAreTargeted:          
				{
					if ((pOnCard->GetController() == pController) && 
						pGame->HasTarget(pOnCard))
						continue;
					break;
				}
			case UsagePatternItem::YourCardsMayLeaveInplay:
				{
					if ((pOnCard->GetController() == pController) && 
						CardMayLeaveInPlay(pOnCard))
						continue;
					break;
				}
			case UsagePatternItem::YourCreaturesAreTargeted:          
				{
					if (pCreatureCard &&
						(pOnCard->GetController() == pController) && 
						pGame->HasTarget(pOnCard))
						continue;
					break;
				}
			case UsagePatternItem::YourCreaturesMayLeaveInplay:
				{
					if (pCreatureCard &&
						(pOnCard->GetController() == pController) && 
						CardMayLeaveInPlay(pOnCard))
						continue;
					break;
				}
			case UsagePatternItem::YourCreaturesAreAttacking:
				{
					if (pOnCard->GetController() != pController)
						break;

					if (!pCreatureCard)
						break;

					if (pCreatureCard->IsAttacking())
						continue;
					break;
				}
			case UsagePatternItem::YourCreaturesAreBlocked:			
				{
					if (pOnCard->GetController() != pController)
						break;

					if (!pCreatureCard)
						break;

					if (pCreatureCard->GetBlockedByCount())
						continue;
					break;
				}
			case UsagePatternItem::YourCreaturesAreBlocking:			
				{
					if (pOnCard->GetController() != pController)
						break;

					if (!pCreatureCard)
						break;

					if (pCreatureCard->IsBlocking())
						continue;
					break;
				}
			case UsagePatternItem::YourCreaturesLifeMayIncrease:
				{
					if (pOnCard->GetController() != pController)
						break;

					if (!pCreatureCard)
						break;

					if (CreatureLifeMayIncrease(pCreatureCard))
						continue;
				}
			case UsagePatternItem::YourCreaturesLifeMayDecrease:
				{
					if (pOnCard->GetController() != pController)
						break;

					if (!pCreatureCard)
						break;

					if (CreatureLifeMayDecrease(pCreatureCard))
						continue;
				}

			case UsagePatternItem::OpponentsCardsAreTargeted:          
				{
					if ((pOnCard->GetController() != pController) && 
						pGame->HasTarget(pOnCard))
						continue;
					break;
				}
			case UsagePatternItem::OpponentsCardsMayLeaveInplay:
				{
					if ((pOnCard->GetController() != pController) && 
						CardMayLeaveInPlay(pOnCard))
						continue;
					break;
				}
			case UsagePatternItem::OpponentsCreaturesAreTargeted:          
				{
					if (pCreatureCard &&
						(pOnCard->GetController() != pController) && 
						pGame->HasTarget(pOnCard))
						continue;
					break;
				}
			case UsagePatternItem::OpponentsCreaturesMayLeaveInplay:
				{
					if (pCreatureCard &&
						(pOnCard->GetController() != pController) && 
						CardMayLeaveInPlay(pOnCard))
						continue;
					break;
				}
			case UsagePatternItem::OpponentsCreaturesAreAttacking:
				{
					if (pOnCard->GetController() == pController)
						break;

					if (!pCreatureCard)
						break;

					if (pCreatureCard->IsAttacking())
						continue;
					break;
				}
			case UsagePatternItem::OpponentsCreaturesAreBlocked:			
				{
					if (pOnCard->GetController() == pController)
						break;

					if (!pCreatureCard)
						break;

					if (pCreatureCard->GetBlockedByCount())
						continue;
					break;
				}
			case UsagePatternItem::OpponentsCreaturesAreBlocking:			
				{
					if (pOnCard->GetController() == pController)
						break;

					if (!pCreatureCard)
						break;

					if (pCreatureCard->IsBlocking())
						continue;
					break;
				}
			case UsagePatternItem::OpponentsCreaturesLifeMayIncrease:
				{
					if (pOnCard->GetController() == pController)
						break;

					if (!pCreatureCard)
						break;

					if (CreatureLifeMayIncrease(pCreatureCard))
						continue;
				}
			case UsagePatternItem::OpponentsCreaturesLifeMayDecrease:
				{
					if (pOnCard->GetController() == pController)
						break;

					if (!pCreatureCard)
						break;

					if (CreatureLifeMayDecrease(pCreatureCard))
						continue;
				}

			default:
				continue;	// Pass if node is not relevant

			}	// switch(pEntry->m_Items)

			bFailed = TRUE;
			break;

		}	// for (int k = 0; k < pEntry->m_nCount; ++k)

		if (!bFailed)
			return pEntry->m_bUsable;

	}	// for (int j = 0; j < m_Entries.GetSize(); ++j)

	return m_bDefaultUsage;
}

BOOL CUsageAbility::IsAbilityUsableOnPlayer(const CAbility* pAbility, const CPlayer* pOnPlayer) const 
{
	CGame* pGame = pAbility->GetGame();

	if (m_bOverrideThisUPInStack && pGame->GetStack().GetStackSize())
		return TRUE;

	if (!m_Entries.size())
		return m_bDefaultUsage;

	const CCard* pCard = pAbility->GetCard();
	const CPlayer* pController = pCard->GetController();
	const CStack& stack = pGame->GetStack();

	for (UsageEntryArray::size_type j = 0; j < m_Entries.size(); ++j)
	{
		const CUsageEntry* pEntry = m_Entries[j];
		if (pEntry->m_bUsable == m_bDefaultUsage)
			continue;

		BOOL bFailed = FALSE;

		for (int k = 0; k < pEntry->m_nCount; ++k)
		{
			UsagePatternItem item = pEntry->m_Items[k];

			switch(item.Get())
			{
			case UsagePatternItem::YouAreTargeted:
				{
					if ((pController == pOnPlayer) && pGame->HasTarget(pOnPlayer))
						continue;
					break;
				}
			case UsagePatternItem::YourLifeMayIncrease:
				{
					if (pController != pOnPlayer)
						break;

					if (PlayerLifeMayIncrease(pOnPlayer))
						continue;

					break;
				}
			case UsagePatternItem::YourLifeMayDecrease:
				{
					if (pController != pOnPlayer)
						break;

					if (PlayerLifeMayDecrease(pOnPlayer))
						continue;

					break;
				}

			case UsagePatternItem::OpponentsAreTargeted:
				{
					if ((pController != pOnPlayer) && pGame->HasTarget(pOnPlayer))
						continue;
					break;
				}
			case UsagePatternItem::OpponentsLifeMayIncrease:
				{
					if (pController == pOnPlayer)
						break;

					if (PlayerLifeMayIncrease(pOnPlayer))
						continue;

					break;
				}
			case UsagePatternItem::OpponentsLifeMayDecrease:
				{
					if (pController == pOnPlayer)
						break;

					if (PlayerLifeMayDecrease(pOnPlayer))
						continue;

					break;
				}

			default:
				continue;	// Pass if node is not relevant

			}	// switch(pEntry->m_Items)

			bFailed = TRUE;
			break;

		}	// for (int k = 0; k < pEntry->m_nCount; ++k)

		if (!bFailed)
			return pEntry->m_bUsable;

	}	// for (int j = 0; j < m_Entries.GetSize(); ++j)

	return m_bDefaultUsage;
}

BOOL CUsageAbility::CardMayLeaveInPlay(const CCard* pCard) const 
{
	CStack& stack = pCard->GetGame()->GetStack();

	return stack.CardMayLeaveInplay(pCard);
}

BOOL CUsageAbility::CardMayBeDiscarded(const CCard* pCard) const 
{
	CStack& stack = pCard->GetGame()->GetStack();

	return stack.CardMayBeDiscarded(pCard);
}

BOOL CUsageAbility::CreatureLifeMayIncrease(const CCreatureCard* pCreature) const
{
	CStack& stack = pCreature->GetGame()->GetStack();

	if (stack.CreaturesLifeMayChange(pCreature, TRUE, FALSE))
		return TRUE;

	return FALSE;
}

BOOL CUsageAbility::CreatureLifeMayDecrease(const CCreatureCard* pCreature) const
{
	CStack& stack = pCreature->GetGame()->GetStack();

	if (stack.CreaturesLifeMayChange(pCreature, FALSE, TRUE))
		return TRUE;

	return FALSE;
}

BOOL CUsageAbility::PlayerLifeMayIncrease(const CPlayer* pPlayer) const
{
	CStack& stack = pPlayer->GetGame()->GetStack();

	if (stack.PlayersLifeMayChange(pPlayer, TRUE, FALSE))
		return TRUE;

	return FALSE;
}

BOOL CUsageAbility::PlayerLifeMayDecrease(const CPlayer* pPlayer) const
{
	CStack& stack = pPlayer->GetGame()->GetStack();

	if (stack.PlayersLifeMayChange(pPlayer, FALSE, TRUE))
		return TRUE;

	return FALSE;
}

BOOL CUsageAbility::GetOverrideThisInNonEmptyStack() const 
{
	return m_bOverrideThisUPInStack;
}

void CUsageAbility::SetOverrideThisInNonEmptyStack(BOOL bOverride)
{
	m_bOverrideThisUPInStack = bOverride;
}

//____________________________________________________________________________
//
// CUsageCard
//

CUsageCard::CUsageCard()
	: m_bEnabled(TRUE)
	, m_CardType(CardType::Null)
{
}

CUsageCard::~CUsageCard()
{
	for (UsageAbilityArray::size_type i = 0; i < m_Abilities.size(); ++i)
		delete m_Abilities[i];

	m_Abilities.clear();
}

void CUsageCard::SetCardName(LPCTSTR strCardName)
{
	m_strCardName = strCardName;

	counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(NULL, m_strCardName, -1));
	if (!cpCard.GetPointer())
	{
		cpCard = counted_ptr<CCard>(CCardFactory::GetInstance()->CreateToken(NULL, m_strCardName, -1));
		if (!cpCard.GetPointer())
			return;
	}

	m_CardType = cpCard->GetCardType();
}

const CString& CUsageCard::GetCardName() const
{
	return m_strCardName;
}

CString CUsageCard::GetTrCardName() const
{
	CString out=m_strCardName;
	out.Replace(_T("â"),_T("a"));
	out.Replace(_T("à"),_T("a"));
	out.Replace(_T("á"),_T("a"));
	out.Replace(_T("Æ"),_T("AE"));
	out.Replace(_T("é"),_T("e"));
	out.Replace(_T("ú"),_T("u"));
	out.Replace(_T("û"),_T("u"));
	out.Replace(_T(":"),_T(""));
	return out;
}

CUsageCard::UsageAbilityArray::size_type CUsageCard::GetAbilityCount() const
{
	return m_Abilities.size();
}

CUsageAbility* CUsageCard::GetAbility(UsageAbilityArray::size_type nIndex) const
{
	return m_Abilities[nIndex];
}

CUsageAbility* CUsageCard::AddAbility(LPCTSTR strAbilityID)
{
	for (UsageAbilityArray::size_type i = 0; i < m_Abilities.size(); ++i)
		if (!_tcsicmp(m_Abilities[i]->GetUniqueChildAbilityName(), strAbilityID))
			return m_Abilities[i];

	CUsageAbility* pAbility = new CUsageAbility(this);

	if (!pAbility)
		return NULL;

	pAbility->SetAbilityID(strAbilityID);

	m_Abilities.push_back(pAbility);

	return pAbility;
}

BOOL CUsageCard::IsEnabled() const
{
	return m_bEnabled;
}

void CUsageCard::SetEnable(BOOL bEnabled)
{
	m_bEnabled = bEnabled;
}

void CUsageCard::Copy(const CUsageCard& usageCard)
{
	for (UsageAbilityArray::size_type i = 0; i < m_Abilities.size(); ++i)
		delete m_Abilities[i];

	m_Abilities.clear();

	m_bEnabled = usageCard.m_bEnabled;
	m_strCardName = usageCard.m_strCardName;
	m_CardType = usageCard.m_CardType;

	for (UsageAbilityArray::size_type i = 0; i < usageCard.m_Abilities.size(); ++i)
		m_Abilities.push_back(usageCard.m_Abilities[i]->Clone());
}

CUsageCard* CUsageCard::Clone() const
{
	CUsageCard* pUsageCard = new CUsageCard;

	if (!pUsageCard)
		return NULL;

	pUsageCard->Copy(*this);

	return pUsageCard;
}

BOOL CUsageCard::CreateAbilities()
{
	counted_ptr<CCard> cpCard(CCardFactory::GetInstance()->CreateCard(NULL, m_strCardName, -1));
	if (!cpCard.GetPointer())
	{
		cpCard = counted_ptr<CCard>(CCardFactory::GetInstance()->CreateToken(NULL, m_strCardName, -1));
		if (!cpCard.GetPointer())
			return FALSE;
	}

	for (int j = 0; j < cpCard->GetAbilityCount(); ++j)
	{
		CAbility* pAbility = cpCard->GetAbility(j);
		if (!pAbility->GetEnabled())
			continue;

		CString strAbilityID(pAbility->GetUniqueChildAbilityName());
		CString strAbilityID2(strAbilityID);
		strAbilityID2.MakeLower();

		if (!_tcscmp(strAbilityID2, _T("untap")) ||					// These abilities are not programmable
			!_tcscmp(strAbilityID2, _T("discard")) ||
			!_tcscmp(strAbilityID2, _T("assign combat damage")) ||
			strAbilityID2.Find(_T("trigger")) != -1 ||
			strAbilityID2.Find(_T("effect")) != -1 ||
			strAbilityID2.Find(_T("damage assignment")) != -1)
			continue;

		CUsageAbility* pUsageAbility = AddAbility(strAbilityID);	// TODO, also set true ability names from cards
		if (!pUsageAbility)
		{
			return FALSE;
		}
	}

	m_CardType = cpCard->GetCardType();

	return TRUE;
}

CardType CUsageCard::GetCardType() const
{
	return m_CardType;
}

BOOL CUsageCard::HasEntries() const
{
	for (UsageAbilityArray::size_type i = 0; i < m_Abilities.size(); ++i)
		if (m_Abilities[i]->GetEntryCount())
			return TRUE;

	return FALSE;
}

//____________________________________________________________________________
//
// CUsagePattern
//

CUsagePattern::CUsagePattern()
{
}

CUsagePattern::~CUsagePattern()
{
	RemoveAllPatterns();
}

void CUsagePattern::RemoveComputerPatterns()
{
	for (UsageCardArray::size_type i = 0; i < m_ComputerCards.size(); ++i)
		delete m_ComputerCards[i];

	m_ComputerCards.clear();
}

void CUsagePattern::RemoveHumanPatterns()
{
	for (UsageCardArray::size_type i = 0; i < m_HumanCards.size(); ++i)
		delete m_HumanCards[i];

	m_HumanCards.clear();
}

void CUsagePattern::RemoveAllPatterns()
{
	RemoveComputerPatterns();
	RemoveHumanPatterns();
}

BOOL CUsagePattern::WriteProfile() const
{
	HKEY hAppKey = g_pCoreApp->GetAppRegistryKey();

	if (!hAppKey)
		return FALSE;

	SHDeleteKey(hAppKey, REG_USAGE_KEY);

	RegCloseKey(hAppKey);

	for (UsageCardArray::size_type i = 0; i < m_HumanCards.size(); ++i)
	{
		CUsageCard* pCardUsage = m_HumanCards[i];

		CString strCardKey;
		strCardKey.Format(_T("%s\\%d"), REG_USAGE_KEY, i);

		if (!g_pCoreApp->WriteProfileString(strCardKey, REG_USAGE_CARD_NAME_ENTRY, pCardUsage->GetCardName()))
			return FALSE;

		if (!g_pCoreApp->WriteProfileInt(strCardKey, REG_USAGE_ENABLED_ENTRY, pCardUsage->IsEnabled()))
			return FALSE;

		for (CUsageCard::UsageAbilityArray::size_type k = 0; k < pCardUsage->GetAbilityCount(); ++k)
		{
			CUsageAbility* pUsageAbility = pCardUsage->GetAbility(k);

			CString strAbilityKey;
			strAbilityKey.Format(_T("%s\\%d"), strCardKey, k);

			if (!g_pCoreApp->WriteProfileString(strAbilityKey, REG_USAGE_ABILITY_ID_ENTRY, pUsageAbility->GetUniqueChildAbilityName()))
				return FALSE;

			if (!g_pCoreApp->WriteProfileInt(strAbilityKey, REG_USAGE_DEFAULT_USAGE_ENTRY, pUsageAbility->GetDefaultUsage()))
				return FALSE;

			if (!g_pCoreApp->WriteProfileInt(strAbilityKey, REG_USAGE_OVERRIDE_THIS_U_P_IN_STACK, pUsageAbility->GetOverrideThisInNonEmptyStack() ? 1 : 0))
				return FALSE;

			for (CUsageAbility::UsageEntryArray::size_type j = 0; j < pUsageAbility->GetEntryCount(); ++j)
			{
				CUsageEntry* pUsageEntry = pUsageAbility->GetEntry(j);

				CString strEntryKey;
				strEntryKey.Format(_T("%s\\%d"), strAbilityKey, j);

				if (!g_pCoreApp->WriteProfileInt(strEntryKey, REG_USAGE_USAGE_ENTRY, pUsageEntry->m_bUsable))
					return FALSE;

				for (int l = 0; l < pUsageEntry->m_nCount; ++l)
				{
					CString strNodeKey;
					strNodeKey.Format(REG_USAGE_NODE_ENTRY, l);

					if (!g_pCoreApp->WriteProfileInt(strEntryKey, strNodeKey, pUsageEntry->m_Items[l].Get()))
						return FALSE;
				}

				if (!g_pCoreApp->WriteProfileInt(strEntryKey, REG_USAGE_NODE_COUNT_ENTRY, pUsageEntry->m_nCount))
					return FALSE;
			}
		}
	}

	return TRUE;
}

BOOL CUsagePattern::GetProfile()
{
	int i = 0;

	do
	{
		CString strCardKey;
		strCardKey.Format(_T("%s\\%d"), REG_USAGE_KEY, i);

		CString strCardName = g_pCoreApp->GetProfileString(strCardKey, REG_USAGE_CARD_NAME_ENTRY);
		if (strCardName.IsEmpty())
			break;

		int nEnabled = g_pCoreApp->GetProfileInt(strCardKey, REG_USAGE_ENABLED_ENTRY, -1);
		if (nEnabled == -1)
			break;

		BOOL bEnabled = (nEnabled != 0);

		CUsageCard* pUsageCard = AddCard(FALSE,		// For human
										 strCardName);
		pUsageCard->SetEnable(bEnabled);

		int k = 0;
		do
		{
			CString strAbilityKey;
			strAbilityKey.Format(_T("%s\\%d"), strCardKey, k);

			CString strAbilityID = g_pCoreApp->GetProfileString(strAbilityKey, REG_USAGE_ABILITY_ID_ENTRY);
			if (strAbilityID.IsEmpty())
				break;

			int nDefaultUsable = g_pCoreApp->GetProfileInt(strAbilityKey, REG_USAGE_DEFAULT_USAGE_ENTRY, -1);
			if (nDefaultUsable == -1)
				break;

			BOOL bDefaultUsable = (nDefaultUsable != 0);

			CUsageAbility* pUsageAbility = pUsageCard->AddAbility(strAbilityID);
			pUsageAbility->SetDefaultUsage(bDefaultUsable);

			int nOverrideThisUPInStack = g_pCoreApp->GetProfileInt(strAbilityKey, REG_USAGE_OVERRIDE_THIS_U_P_IN_STACK, 1);
			pUsageAbility->SetOverrideThisInNonEmptyStack(nOverrideThisUPInStack);

			int j = 0;

			do
			{
				CString strEntryKey;
				strEntryKey.Format(_T("%s\\%d"), strAbilityKey, j);

				CUsageEntry* pEntry(new CUsageEntry);
				if (pEntry)
				{
					int nCount = g_pCoreApp->GetProfileInt(strEntryKey, REG_USAGE_NODE_COUNT_ENTRY, -1);
					if (nCount == -1)
					{
						delete pEntry;
						break;
					}

					for (int l = 0; l < nCount; ++l)
					{
						CString strNodeKey;
						strNodeKey.Format(REG_USAGE_NODE_ENTRY, l);

						UsagePatternItem item(static_cast<UsagePatternItem::Enum>(g_pCoreApp->GetProfileInt(strEntryKey, strNodeKey, UsagePatternItem::Null)));
						if (item == UsagePatternItem::Null)
						{
							break;
						}

						pEntry->m_Items[l] = item;
					}

					int nUsable = g_pCoreApp->GetProfileInt(strEntryKey, REG_USAGE_USAGE_ENTRY, -1);
					if (nUsable == -1)
					{
						delete pEntry;
						break;
					}

					BOOL bUsable = (nUsable != 0);

					pEntry->m_bUsable = bUsable;			
					pEntry->m_nCount = nCount;

					pUsageAbility->AddEntry(pEntry);
				}

				++j;

			} while (TRUE);

			++k;

		} while (TRUE);

		++i;

	} while (TRUE);
		
	return TRUE;
}

CUsagePattern::UsageCardArray::size_type CUsagePattern::GetCardCount(BOOL bForComputer) const
{
	const UsageCardArray& pattern = bForComputer ?
		m_ComputerCards : m_HumanCards;

	return pattern.size();
}

CUsageCard* CUsagePattern::GetCard(BOOL bForComputer, UsageCardArray::size_type nIndex) const
{
	const UsageCardArray& pattern = bForComputer ?
		m_ComputerCards : m_HumanCards;

	return pattern[nIndex];
}

BOOL CUsagePattern::RemoveCard(const CUsageCard* pUsageCard)
{
	for (UsageCardArray::iterator i = m_ComputerCards.begin(); i != m_ComputerCards.end(); ++i)
		if (*i == pUsageCard)
		{
			m_ComputerCards.erase(i);
			delete pUsageCard;
			return TRUE;
		}

	for (UsageCardArray::iterator i = m_HumanCards.begin(); i != m_HumanCards.end(); ++i)
		if (*i == pUsageCard)
		{
			m_HumanCards.erase(i);
			delete pUsageCard;
			return TRUE;
		}

	return FALSE;
}

CUsageCard* CUsagePattern::AddCard(BOOL bForComputer, LPCTSTR strCardName)
{
	UsageCardArray& pattern = bForComputer ?
		m_ComputerCards : m_HumanCards;

	CUsageCard* pUsageCard = NULL;
	for (UsageCardArray::size_type i = 0; i < pattern.size(); ++i)
		if (!_tcsicmp(pattern[i]->GetCardName(), strCardName))
		{
			pUsageCard = pattern[i];
			break;
		}

	if (!pUsageCard)
	{
		pUsageCard = new CUsageCard;

		if (!pUsageCard)
			return NULL;

		pUsageCard->SetCardName(strCardName);
		pUsageCard->SetEnable(TRUE);
		pUsageCard->CreateAbilities();

		pattern.push_back(pUsageCard);
	}

	return pUsageCard;
}

CUsageCard* CUsagePattern::GetCard(BOOL bForComputer, LPCTSTR strCardName) const
{
	const UsageCardArray& pattern = bForComputer ?
		m_ComputerCards : m_HumanCards;

	for (UsageCardArray::size_type i = 0; i < pattern.size(); ++i)
		if (!_tcsicmp(pattern[i]->GetCardName(), strCardName))
			return pattern[i];

	return NULL;
}

const CUsageAbility* CUsagePattern::FindUsageAbility(BOOL bForComputer, LPCTSTR strCardName, LPCTSTR strAbilityID) const
{
	const UsageCardArray& pattern = bForComputer ? m_ComputerCards : m_HumanCards;

	for (UsageCardArray::size_type i = 0; i < pattern.size(); ++i)
	{
		CUsageCard* pUsageCard = pattern[i];
		if (pUsageCard->IsEnabled() &&
			!_tcsicmp(pUsageCard->GetCardName(), strCardName))
		{
			for (CUsageCard::UsageAbilityArray::size_type j = 0; j < pUsageCard->GetAbilityCount(); ++j)
			{
				CUsageAbility* pUsageAbility = pUsageCard->GetAbility(j);
				if (!_tcsicmp(pUsageAbility->GetUniqueChildAbilityName(), strAbilityID))
					return pUsageAbility;
			}
		}
	}

	return NULL;
}

CUsageAbility* CUsagePattern::FindUsageAbility(BOOL bForComputer, LPCTSTR strCardName, LPCTSTR strAbilityID)
{
	UsageCardArray& pattern = bForComputer ? m_ComputerCards : m_HumanCards;

	for (UsageCardArray::size_type i = 0; i < pattern.size(); ++i)
	{
		CUsageCard* pUsageCard = pattern[i];
		if (pUsageCard->IsEnabled() &&
			!_tcsicmp(pUsageCard->GetCardName(), strCardName))
		{
			for (CUsageCard::UsageAbilityArray::size_type j = 0; j < pUsageCard->GetAbilityCount(); ++j)
			{
				CUsageAbility* pUsageAbility = pUsageCard->GetAbility(j);
				if (!_tcsicmp(pUsageAbility->GetUniqueChildAbilityName(), strAbilityID))
					return pUsageAbility;
			}
		}
	}

	return NULL;
}

void CUsagePattern::UpdateAll(CGame* pGame)
{
	ATLASSERT(pGame);

	RemoveComputerPatterns();

	for (int i = 0; i < pGame->GetPlayerCount(); ++i)	
	{
		CPlayer* pPlayer = pGame->GetPlayer(i);
		for (int j = 0; j < pPlayer->GetZoneCount(); ++j)
		{
			CZone* pZone = pPlayer->GetZone(j);

			for (int k = 0; k < pZone->GetSize(); ++k)
				UpdateCard(pZone->GetAt(k));
		}
	}
}

void CUsagePattern::UpdateCard(const CCard* pCard)
{
	for (int l = 0; l < pCard->GetAbilityCount(); ++l)
	{
		UpdateAbility(const_cast<CAbility*>(pCard->GetAbility(l)));
	}
}

void CUsagePattern::UpdateAbility(CAbility* pAbility)
{
	CGame* pGame = pAbility->GetGame();
	const CCard* pCard = pAbility->GetCard();

	for (int i = 0; i < pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer = pGame->GetPlayer(i);

		CUsageAbility* pUsageAbility = NULL;
		
		if (pPlayer->IsComputer())
		{
			if (CUsageAbility::HasPredefinedUsage(pAbility))
			{
				CUsageCard* pUsageCard = AddCard(TRUE, pCard->GetCardName());
				pUsageAbility = pUsageCard->AddAbility(pAbility->GetUniqueChildAbilityName());
				pUsageAbility->SetPredefinedUsage(pAbility);
			}
		}
		else
			if (pPlayer->IsLocal())
				pUsageAbility =
					FindUsageAbility(FALSE, pCard->GetPrintedCardName(), pAbility->GetUniqueChildAbilityName());

		pAbility->SetUsage(pPlayer, pUsageAbility);
	}
}

void CUsagePattern::SetOverrides(const UsagePatternItemArray& overrides)
{
	m_Overrides = overrides;
}

BOOL CUsagePattern::IsOverriden(const CNode* pNode) const
{
	if (!m_Overrides.size())
		return FALSE;

	BOOL bOpponents = !pNode->GetGraph()->GetPlayer()->IsLocal();
	NodeId nodeId = pNode->GetNodeId();
	BOOL bPreCombat = FALSE;

	if (nodeId == NodeId::MainPhaseStep)
		bPreCombat = ((CMainNode*)pNode)->IsPreCombat();

	UsagePatternItem item;
	
	if (bOpponents)
		switch(nodeId.Get())
		{
		case NodeId::UntapStep: item = UsagePatternItem::OpponentsUntapStep; break;
		case NodeId::UpkeepStep: item = UsagePatternItem::OpponentsUpkeepStep; break;
		case NodeId::DrawStep1: item = UsagePatternItem::OpponentsDrawStep; break;
		case NodeId::DrawStep2: item = UsagePatternItem::OpponentsDrawStep; break;
		case NodeId::MainPhaseStep: item = (bPreCombat ? UsagePatternItem::OpponentsMainPhasePrecombat : UsagePatternItem::OpponentsMainPhasePostcombat); break;
		case NodeId::BeginningOfCombatStep: item = UsagePatternItem::OpponentsBeginningOfCombatStep; break;
		case NodeId::DeclareAttackersStep1: 
		case NodeId::DeclareAttackersStep2: item = UsagePatternItem::OpponentsDeclareAttackersStep; break;
		case NodeId::DeclareBlockersStep1: 
		case NodeId::DeclareBlockersStep2: item = UsagePatternItem::OpponentsDeclareBlockersStep; break;
		case NodeId::CombatDamageStep1b: 
		case NodeId::CombatDamageStep2b: item = UsagePatternItem::OpponentsCombatDamageStep; break;
		case NodeId::EndOfCombatStep: item = UsagePatternItem::OpponentsEndOfCombatStep; break;
		case NodeId::EndStep: item = UsagePatternItem::OpponentsEndOfTurnStep; break;
		}
	else
		switch(nodeId.Get())
		{
		case NodeId::UntapStep: item = UsagePatternItem::YourUntapStep; break;
		case NodeId::UpkeepStep: item = UsagePatternItem::YourUpkeepStep; break;
		case NodeId::DrawStep1: item = UsagePatternItem::YourDrawStep; break;
		case NodeId::DrawStep2: item = UsagePatternItem::YourDrawStep; break;
		case NodeId::MainPhaseStep: item = (bPreCombat ? UsagePatternItem::YourMainPhasePrecombat : UsagePatternItem::YourMainPhasePostcombat); break;
		case NodeId::BeginningOfCombatStep: item = UsagePatternItem::YourBeginningOfCombatStep; break;
		case NodeId::DeclareAttackersStep1: 
		case NodeId::DeclareAttackersStep2: item = UsagePatternItem::YourDeclareAttackersStep; break;
		case NodeId::DeclareBlockersStep1: 
		case NodeId::DeclareBlockersStep2: item = UsagePatternItem::YourDeclareBlockersStep; break;
		case NodeId::CombatDamageStep1b: 
		case NodeId::CombatDamageStep2b: item = UsagePatternItem::YourCombatDamageStep; break;
		case NodeId::EndOfCombatStep: item = UsagePatternItem::YourEndOfCombatStep; break;
		case NodeId::EndStep: item = UsagePatternItem::YourEndOfTurnStep; break;
		}

	for (UsagePatternItemArray::size_type i = 0; i < m_Overrides.size(); ++i)
		if (m_Overrides[i] == item)
			return TRUE;
	
	return FALSE;
}

NodeId CUsagePattern::MapUsagePatternItem(UsagePatternItem item)
{
	switch(item.Get())
	{
	case UsagePatternItem::OpponentsUpkeepStep:
	case UsagePatternItem::YourUpkeepStep:
		return NodeId::UpkeepStep;

	case UsagePatternItem::OpponentsBeginningOfCombatStep:
	case UsagePatternItem::YourBeginningOfCombatStep:
		return NodeId::BeginningOfCombatStep;

	case UsagePatternItem::OpponentsBeginningPhase:
	case UsagePatternItem::YourBeginningPhase:
		return NodeId::BeginningStep;

	case UsagePatternItem::OpponentsCombatDamageStep:
	case UsagePatternItem::YourCombatDamageStep:
		return NodeId::CombatDamageStep2b;

	case UsagePatternItem::OpponentsCombatPhase:
	case UsagePatternItem::YourCombatPhase:
		return NodeId::_CombatPhase;

	case UsagePatternItem::OpponentsDeclareAttackersStep:
	case UsagePatternItem::YourDeclareAttackersStep:
		return NodeId::DeclareAttackersStep2;

	case UsagePatternItem::OpponentsDeclareBlockersStep:
	case UsagePatternItem::YourDeclareBlockersStep:
		return NodeId::DeclareBlockersStep2;

	case UsagePatternItem::OpponentsDrawStep:
	case UsagePatternItem::YourDrawStep:
		return NodeId::DrawStep2;

	case UsagePatternItem::OpponentsEndOfCombatStep:
	case UsagePatternItem::YourEndOfCombatStep:
		return NodeId::EndOfCombatStep;

	case UsagePatternItem::OpponentsEndOfTurnStep:
	case UsagePatternItem::YourEndOfTurnStep:
		return NodeId::EndStep;

	case UsagePatternItem::OpponentsMainPhase:
	case UsagePatternItem::YourMainPhase:
	case UsagePatternItem::OpponentsMainPhasePostcombat:
	case UsagePatternItem::YourMainPhasePostcombat:
	case UsagePatternItem::OpponentsMainPhasePrecombat:
	case UsagePatternItem::YourMainPhasePrecombat:
		return NodeId::MainPhaseStep;

	case UsagePatternItem::OpponentsUntapStep:
	case UsagePatternItem::YourUntapStep:
		return NodeId::UntapStep;
	}

	return NodeId::Null;
}