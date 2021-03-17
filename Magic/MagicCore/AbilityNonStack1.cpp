#include "stdafx.h"


#define new DEBUG_NEW

//____________________________________________________________________________
//
CManaProductionAbility::CManaProductionAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType,
								   LPCTSTR strManaPool)
	: CNonStackAbility(pCard, strAbilityName, abilityType)
	, m_ManaPool(strManaPool)
	, m_cpTapForManaEventSource(::CreateObject<CardTapForManaEventSource>(VAR_NAME(m_cpTapForManaEventSource)))
{
	AddAbilityTag(AbilityTag::Mana);

	SetAbilityText(_T("activates"));

	m_AbilityType = m_AbilityType | AbilityType::_ProduceMana
		| AbilityType::ManaSource;					// 9/27/2003

	SetInPlayOnly();
}

counted_ptr<CAbilityAction> CManaProductionAbility::CreateAction() const
{
	counted_ptr<CManaProductionAbilityAction> cpAction(::CreateObject<CManaProductionAbilityAction>(m_pGame));
	ASSERT(cpAction != NULL);

	cpAction->SetAbility(const_cast<CManaProductionAbility*>(this));

	if ((m_pCard->GetCardType() & CardType::_Land).Any())
	{
		cpAction->SetScore(ActionScore::ProduceMana);

		if (m_Cost.HasOnlyTapCost() && (m_pCard->GetCardType() & CardType::BasicLand).Any() && !GetController()->IsCommander())
			cpAction->SetUndoable();

		if ((m_pCard->GetCardType() & CardType::BasicLand).Any())
			cpAction->SetBasicNonStackAction();
	}
	else
		cpAction->SetScore(ActionScore::ProduceManaNonland);

	cpAction->SetHideInConcise();

	return cpAction.GetPointer();
}

CActionContainer* CManaProductionAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CNonStackAbility::GetAbilityActions(bIncludeTricks, bSetNames);
	if (!pActionContainer)
		return NULL;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CManaProductionAbilityAction* pAction = (CManaProductionAbilityAction*)pActionContainer->GetAt(i).GetPointer();
		pAction->SetManaPool(m_ManaPool);

		if (bSetNames && m_ManaPool.GetTotal())
			pAction->AppendToActionName(_T(" and adds {") + m_ManaPool.ToString() + _T("} to mana pool"));
	}

	return pActionContainer;
}

BOOL CManaProductionAbility::ResolveImpl(const CAbilityAction* pAction)
{
	const CManaProductionAbilityAction* pAction1 = (const CManaProductionAbilityAction*)pAction;

	GetController()->GetManaPool().AddMana2(pAction1->GetManaPool());

	BOOL bResult = CNonStackAbility::ResolveImpl(pAction);

	if (bResult && m_Cost.HasTapThisCardCost(m_pCard))
	{
		m_cpTapForManaEventSource->FireEvent(pAction1, bResult);
		m_pCard->GetZone()->OnCardTappedForMana(pAction1, bResult);		
	}
	
	if (bResult)
		GetController()->GetManaAddEventSource()->FireEvent(GetController(), pAction1->GetManaPool());


	return bResult;
}

//____________________________________________________________________________
//
CAttackAbility::CAttackAbility(CCard* pCard)
	: CNonStackAbility(pCard, _T("Attack"), AbilityType::Attack)
	, m_pAmlify(0)
{
	SetAbilityText(_T("attacks"));

	counted_ptr<CBOTControllerTraitCombat> cpTrait(::CreateObject<CBOTControllerTraitCombat>(this));
	CTraitContainer::Add(cpTrait.GetPointer());
//	GetCost().AddOptionalManaCost(m_AttackPlayerCost);

	SetInPlayOnly();
}
/*void CAttackAbility::AddOptionalPlayerCost()
{
	GetCost().AddOptionalManaCost(m_AttackPlayerCost);
}

/*void CAttackAbility::RemoveOptionalPlayerCost()
{
	GetCost().ReAddOptionalManaCost(m_AttackPlayerCost);
}*/

BOOL CAttackAbility::CanAttackImpl() const
{
	if (!(m_pCard->GetCardType() & CardType::Creature).Any())
		return FALSE;

	CCreatureCard* pCard = (CCreatureCard*)m_pCard;
	
	if (GetController() != m_pGame->GetActivePlayer())
		return FALSE;

	CCreatureKeyword* pCreatureKeywordContainer = pCard->GetCreatureKeyword();

	if (pCreatureKeywordContainer->CantAttack())
		return FALSE;

	COrientation* pOrientation = pCard->GetOrientation();
	if (pOrientation->IsTapped())
		return FALSE;

	if (m_pCard->GetCardKeyword()->HasDetain())
		return FALSE;

	if (m_pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::HedronFields) && (pCard->GetLastKnownPower() > 6))
		return FALSE;

	if (pCard->IsAttacking())	// Some creature can attack without tap
		return FALSE;

	CPlayer* pNextPlayer = m_pGame->GetNextPlayer(GetController()); // Hack: only can attack the next player

	if (!pNextPlayer->CanBeAttackedBy(pCard))
		return FALSE;

	if (pCreatureKeywordContainer->CowardAttacker())
	{
		CPlayer* pAttackingPlayer = m_pGame->GetActivePlayer();
		CZone* pInplay = pAttackingPlayer->GetZoneById(ZoneId::Battlefield);
		BOOL bFound = FALSE;
		for (int i = 0; i < pInplay->GetSize(); ++i)
			if ((pInplay->GetAt(i)->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard = (CCreatureCard*)(pInplay->GetAt(i));
				if ((pCreatureCard->GetPower() > pCard->GetPower()) && pCreatureCard->IsAttacking())
				{
					bFound = TRUE;
					break;
				}
			}

		if (!bFound)
			return FALSE;
	}

	//2010-06-27: removed auto-prevent-attack-ability from Wall creature type, because all Walls already have defender ability; WallMayAttack/CanWallAttack changed to DefenderMayAttack/CanDefenderAttack
	//2010-05-06: added to each Wall creature the creature keyword Defender
	//if (pCard->GetCreatureType().HasType(SingleCreatureType::Wall))
	//	return pCreatureKeywordContainer->CanWallAttack();

	//2010-06-27: new one for DefenderMayAttack: should replace Wall-attack-prevention and WallMayAttack ability
	if (pCreatureKeywordContainer->Defender())
		return pCreatureKeywordContainer->CanDefenderAttack();

	return TRUE;
}

BOOL CAttackAbility::CanAttack() const
{
	if (!CanAttackImpl())
		return FALSE;

	CCreatureCard* pCard = (CCreatureCard*)m_pCard;
	
	CZone* pZone = pCard->GetZone();
	if (pZone->GetZoneId() != ZoneId::Battlefield)
		return FALSE;

	if (!IsPlayableWithTrait(FALSE))
		return FALSE;

	return TRUE;
}

BOOL CAttackAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	return CanAttackImpl();
}

counted_ptr<CAbilityAction> CAttackAbility::CreateAction() const
{
	counted_ptr<CAttackAction> cpAction = ::CreateObject<CAttackAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CAttackAbility*>(this));

	return cpAction.GetPointer();
}

CActionContainer* CAttackAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CNonStackAbility::GetAbilityActions(bIncludeTricks, TRUE);
	if (!pActionContainer)
		return NULL;

	CPlayer* pAttackPlayer = m_pGame->GetNextPlayer(GetController());		// HACK: Assume always attacking next player
	CZone* pBattlefield = pAttackPlayer->GetZoneById(ZoneId::Battlefield);

	CCreatureCard* pCreatureCard = (CCreatureCard*)m_pCard;

	CActionContainer* pActionContainer1 = new CActionContainer;

	CCardFilter GideonFilter;
	GideonFilter.SetComparer(new CardNameComparer(_T("Gideon Jura")));
	
	if (m_pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::MustAttackGideon) && 
		GideonFilter.CountIncluded(pBattlefield->GetCardContainer()))
	{
		CAttackAction* pAction = (CAttackAction*)pActionContainer->GetAt(0).GetPointer();
		CAbilityAction* pAction3 = (CAbilityAction*)pActionContainer->GetAt(0).GetPointer();

		counted_ptr<CAction> cpAction(pAction->Clone());

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsPlaneswalker() && pCard->GetPrintedCardName() == "Gideon Jura")
			{
				CPlaneswalkerCard* pPlaneswalker = (CPlaneswalkerCard*)pCard;

				counted_ptr<CAction> cpAction(pAction->Clone());
				CAttackAction* pAction2 = (CAttackAction*)cpAction.GetPointer();

				pAction2->SetAttacked(AttackSubject(pPlaneswalker));

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T("%s %s with %s"),
						GetAbilityText(),
						pPlaneswalker->GetCardName(),
						pCreatureCard->GetCreatureName(TRUE));

					pAction2->SetActionName(strActionName);
				//	pAction2->AppendToCostName(pAction3->GetCostConfigEntry().GetCostName());	
				}

				if (m_pAmlify > 0)
				{
					if (!this->GetCost().GetOptionalValueSize(pAction3->GetCostConfigEntry()))
					pActionContainer1->Add(pAction2);
				}
				else
					pActionContainer1->Add(pAction2);
				
			}
		}
	}
	
	else

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CAttackAction* pAction = (CAttackAction*)pActionContainer->GetAt(i).GetPointer();
		CAbilityAction* pAction3 = (CAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		counted_ptr<CAction> cpAction(pAction->Clone());
		CAttackAction* pAction2 = (CAttackAction*)cpAction.GetPointer();

		pAction2->SetAttacked(AttackSubject(pAttackPlayer));

		if (bSetNames)
		{
			CString strActionName;
			strActionName.Format(_T("%s %s with %s"),
				GetAbilityText(),
				pAttackPlayer->GetPlayerName(),
				pCreatureCard->GetCreatureName(TRUE));

			pAction2->SetActionName(strActionName);
	//		pAction2->AppendToCostName(pAction3->GetCostConfigEntry().GetCostName());	
		}

		if (m_pAmlify > 0)
		{
			if (this->GetCost().GetOptionalValueSize(pAction3->GetCostConfigEntry()) == m_pAmlify)
				pActionContainer1->Add(pAction2);
		}
		else
			pActionContainer1->Add(pAction2);
		// Planeswalker

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsPlaneswalker())
			{
				CPlaneswalkerCard* pPlaneswalker = (CPlaneswalkerCard*)pCard;

				counted_ptr<CAction> cpAction(pAction->Clone());
				CAttackAction* pAction2 = (CAttackAction*)cpAction.GetPointer();

				pAction2->SetAttacked(AttackSubject(pPlaneswalker));

				if (bSetNames)
				{
					CString strActionName;
					strActionName.Format(_T("%s %s with %s"),
						GetAbilityText(),
						pPlaneswalker->GetCardName(),
						pCreatureCard->GetCreatureName(TRUE));

					pAction2->SetActionName(strActionName);
				//	pAction2->AppendToCostName(pAction3->GetCostConfigEntry().GetCostName());	
				}

							if (m_pAmlify > 0)
				{
					if (!this->GetCost().GetOptionalValueSize(pAction3->GetCostConfigEntry()))
					pActionContainer1->Add(pAction2);
				}
				else
					pActionContainer1->Add(pAction2);
			}
		}
	}

	delete pActionContainer;
	return pActionContainer1;
}

BOOL CAttackAbility::ResolveImpl(const CAbilityAction* pAction)
{
	const CAttackAction* pAction1 = (const CAttackAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();
	
	CCreatureCard* pCard = (CCreatureCard*)m_pCard;

	if (!pCard->GetCreatureKeyword()->Vigilance())		// Moved the tap action before the Attack() call to allow Seasoned Marshal to filter out itself as a tap target
	{	
		COrientation* pOrientation = pCard->GetOrientation();	
		pOrientation->Tap();
	}

	CPlayer* pPlayer = pAction1->GetAttacked().pPlayer; 
	if (pPlayer)
		pCard->Attack(pPlayer);
	else
		pCard->Attack(pAction1->GetAttacked().cpPlaneswalker.GetPointer());

	pCard->GetController()->IncreaseAttackCount();

	return CNonStackAbility::ResolveImpl(pAction);
}

//____________________________________________________________________________
//
CBlockAbility::CBlockAbility(CCard* pCard)
	: CNonStackAbility(pCard, _T("Block"), AbilityType::Block)
{
	SetAbilityText(_T("blocks"));
	SetInPlayOnly();
}

BOOL CBlockAbility::CanBlockInGeneral(const CCreatureCard* pAttacker) const
{
	if (!m_pCard->GetCardType().IsCreature())
		return FALSE;

	/*if (m_pCard->GetCardKeyword()->HasDetain()) //Moved below to fix blocking bug
			return FALSE;*/

	const COrientation* pOrientation = m_pCard->GetOrientation();
	CCreatureCard* pCard = (CCreatureCard*)m_pCard;
	if ((pOrientation->IsTapped()) && (!pCard->GetCreatureKeyword()->TappedCanBlock()))
		return FALSE;

	const CCreatureCard* pBlocker = (const CCreatureCard*)m_pCard;
	if (pBlocker->GetMaxBlockingCount() != SpecialNumber::Any)
	{
		int nToBlockCount = pBlocker->GetMaxBlockingCount() - pBlocker->GetBlockingCount();
		if (nToBlockCount <= 0)
			return FALSE;
	}

	const CPlayer* pPlayer = GetController();
	const CCreatureKeyword* pAttribute = pBlocker->GetCreatureKeyword();
	BOOL bWall = pBlocker->GetCreatureType().HasType(SingleCreatureType::Wall);

	return CanBlockImpl(pBlocker, pPlayer, pAttribute, bWall, pAttacker);
}
/*
	CBlockAbility::CanBlockImpl
	Purpose:
		This function determines whether creature attempting to block (pBlocker) can block attacking creature 
		(pAttacker) by applying checks based on card keywords and player effects.
	Inputs:
		CCreatureCard*    pBlocker         - creature attempting to block
		CPlayer*          pPlayer          - creature attempting to block's controller
		CCreatureKeyword* pBlockerKeyword  - creature attempting to block's keywords (attributes)
		BOOL              bWall            - TRUE->creature type is Wall, FALSE->Creature type is not Wall
											 Currently not used in this function.
		CCreatureCard*    pAttacker        - creature attacking 
	Returns:
		returns TRUE  if creature blocking (pBlocker) can block attacking creature (pAttacker)
		returns FALSE if creature blocking (pBlocker) can't block attacking creature (pAttacker)

*/
BOOL CBlockAbility::CanBlockImpl(const CCreatureCard* pBlocker,	          // This card
								 const CPlayer* pPlayer,				  // This card's controller
								 const CCreatureKeyword* pBlockerKeyword, // This card's attribute
								 BOOL bWall,
								 const CCreatureCard* pAttacker) const
{
	if (!pAttacker->IsAttacking())
		return FALSE;

	// Main blocking logic

	const CCreatureKeyword* pAttackerKeyword = pAttacker->GetCreatureKeyword();

	if (pBlockerKeyword->CowardBlocker())
	{
		const CZone* pInplay = pPlayer->GetZoneById(ZoneId::Battlefield);
		BOOL bFound = FALSE;
		for (int i = 0; i < pInplay->GetSize(); ++i)
			if ((pInplay->GetAt(i)->GetCardType() & CardType::Creature).Any())
			{
				const CCreatureCard* pCreatureCard2 = (const CCreatureCard*)(pInplay->GetAt(i));
				if ((pCreatureCard2->GetPower() > pBlocker->GetPower()) && pCreatureCard2->IsBlocking())
				{
					bFound = TRUE;
					break;
				}
			}

		if (!bFound)
			return FALSE;
	}

	// Can this card block pAttacker?

	if (pAttacker->HasProtectionFrom(pBlocker, FALSE))
		return FALSE;

	if (m_pCard->GetCardKeyword()->HasDetain())//Here fix Detain bug with blocking
			return FALSE;

	if (pAttackerKeyword->Flying() && !pBlockerKeyword->Flying() && !pBlockerKeyword->CanReach(pAttacker))
		return FALSE;

	if (!pAttackerKeyword->Flying() && pBlockerKeyword->CanOnlyBlockFlying(pAttacker))
		return FALSE;

	if (pAttackerKeyword->Fear() && !pBlocker->IsColor(CManaPool::Color::Black) && !pBlocker->GetCardType().IsArtifact())
		return FALSE;

	if (pAttackerKeyword->Intimidate() && !pBlocker->GetCardType().IsArtifact()
		&& (!pAttacker->IsColor(CManaPool::Color::White) || !pBlocker->IsColor(CManaPool::Color::White))
		&& (!pAttacker->IsColor(CManaPool::Color::Blue)  || !pBlocker->IsColor(CManaPool::Color::Blue))
		&& (!pAttacker->IsColor(CManaPool::Color::Black) || !pBlocker->IsColor(CManaPool::Color::Black))
		&& (!pAttacker->IsColor(CManaPool::Color::Red)   || !pBlocker->IsColor(CManaPool::Color::Red))
		&& (!pAttacker->IsColor(CManaPool::Color::Green) || !pBlocker->IsColor(CManaPool::Color::Green)))
		return FALSE;

	if (pAttackerKeyword->Shadow() && !pBlockerKeyword->Shadow() && !pBlockerKeyword->ShadowReach())
		return FALSE;

	if (pAttackerKeyword->Shadow() && pBlockerKeyword->Shadow() && pBlockerKeyword->ShadowReach())
		return FALSE;

	if (!pAttackerKeyword->Shadow() && pBlockerKeyword->Shadow())
		return FALSE;

	if (pAttackerKeyword->Horsemanship() && !pBlockerKeyword->Horsemanship())
		return FALSE;

	if (pAttackerKeyword->CantBeBlockedByMultiple(pBlocker) && pAttacker->GetBlockedByCount())
		return FALSE;

	if (pAttacker->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::UnblockableCreatures))
		return FALSE;

	if (pAttacker->IsUnblockableWalkOkay(pPlayer)) // Attacking creature has is unblockable if the defender has certain cards? true -> can't block
		return FALSE;

	if (!pBlockerKeyword->LandwalkReach() && pAttacker->IsLandWalkOkay(pPlayer)) // Attacking creature has landwalk attribute? true -> can't block
		return FALSE;

	if (pBlockerKeyword->Unleash() && (pBlocker->GetCounterContainer()->GetCounter(_T("+1/+1"))->GetCount() > 0))
		return FALSE;

	if (pBlocker->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::Power1OrLessCantBlock) && (pBlocker->GetLastKnownPower() < 2))
		return FALSE;

	if (pAttacker->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ChampionOfLambholtEffect))
	{
		CZone* pBattlefield = pAttacker->GetController()->GetZoneById(ZoneId::Battlefield);

		Power nMaxPower = Power(0);
		bool bFound = false;

		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsCreature() && pCard->GetPrintedCardName() == _T("Champion of Lambholt"))
			{
				CCreatureCard* pChampion = (CCreatureCard*)pCard;
				if (!bFound || (pChampion->GetLastKnownPower() > nMaxPower))
				{
					nMaxPower = pChampion->GetLastKnownPower();
					bFound = true;
				}
			}
		}

		if (pBlocker->GetLastKnownPower() < nMaxPower)
			return FALSE;
	}
	/*
		HoodedHorrorEffect - Creature can't be blocked if defending player controls the most creatures 
		or is tied for the most
	*/
	if (pAttacker->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::HoodedHorrorEffect))
	{
		CZone* pBattlefield       = pAttacker->GetController()->GetZoneById(ZoneId::Battlefield);
		bool bCanBlockAttCreature = TRUE;                        // can this card pBlocker block attacking card (pAttacker)
		int  nCreaturePlayerAtt   = 0;							 // number of creatures player attacking controls
		int  nCreaturePlayerBlk   = 0;							 // number of creatures player blocking controls
		/* get number of creatures player attacking controls */
		for (int i = 0; i < pBattlefield->GetSize(); ++i)        
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetCardType().IsCreature())
				nCreaturePlayerAtt++;
		}
		/* get number of creatures player blocking controls */
		CZone* pBattlefieldBlocker = pBlocker->GetController()->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefieldBlocker->GetSize(); ++i) 
		{
			CCard* pCard = pBattlefieldBlocker->GetAt(i);
			if (pCard->GetCardType().IsCreature())
				nCreaturePlayerBlk++;
		}
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetPrintedCardName() == _T("Hooded Horror") && 
			  (nCreaturePlayerBlk >= nCreaturePlayerAtt)) 
			{
				bCanBlockAttCreature = FALSE; 					 // can't block attacking creature
			}
		}
		return bCanBlockAttCreature;
	}
	/*
		GraxiplonEffect - Graxiplon can't be blocked unless defending player controls three or more creatures 
		that share a creature type.
	*/
	if (pAttacker->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GraxiplonEffect))
	{
		CZone* pBattlefield       = pAttacker->GetController()->GetZoneById(ZoneId::Battlefield);
		bool bCanBlockAttCreature = FALSE;											  // can this card pBlocker block attacking card (pAttacker)						

		bool bTypeThreeOrMoreFnd = TypeThreeOrMoreExists(pBlocker->GetController());  // whether three cards sharing a common type were found 
		for (int i = 0; i < pBattlefield->GetSize(); ++i)
		{
			CCard* pCard = pBattlefield->GetAt(i);
			if (pCard->GetPrintedCardName() == _T("Graxiplon") && 
		       (bTypeThreeOrMoreFnd)) 
			{
				bCanBlockAttCreature = TRUE; 										  // can block attacking creature
			}
		}
		return bCanBlockAttCreature;
	}
	if (pBlocker->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::HedronFields) && (pBlocker->GetLastKnownPower() > 6))
		return FALSE;

	if (pBlockerKeyword->CantBlock(pAttacker))
		return FALSE;
	
	if (pAttackerKeyword->Unblockable(pBlocker))
		return FALSE;

	return TRUE;
}
/*
	Used by BOOL CBlockAbility::CanBlockImpl for Graxiplon effect.
	This function returns TRUE when player (eg blocker) controls three or more creatures that share a
	common creature type and FALSE when this condition is not met.
	Put code in separate function so when three or more creatures that share a common creature type are found 
	function is exited to improve performance.
	Note **This function is very processor intensive** 
*/
bool TypeThreeOrMoreExists(const CPlayer* pPlayer)
{
	    bool bTypeThreeOrMoreFnd  = FALSE;							 // whether three cards sharing a common type were found 
		int  iTypeCommonCnt       = 0;								 // current common type count
        /*
			Check all blocker's creature cards for common types and find first occurance where three cards
			share a common type.
		*/
		CZone* pBattlefieldPlayer = pPlayer->GetZoneById(ZoneId::Battlefield);
		for (int i = 0; i < pBattlefieldPlayer->GetSize(); ++i) 
		{
			CCard* pCardCur = pBattlefieldPlayer->GetAt(i);
			if (pCardCur->GetCardType().IsCreature())
			{
				iTypeCommonCnt = 1;
				CCreatureCard* pCreatureCardCur = (CCreatureCard*)pCardCur;
				for (int j = 0; j < pBattlefieldPlayer->GetSize(); ++j) 
				{
					if (i != j) // do not compare current card with itself
					{
						CCard* pCardTmp = pBattlefieldPlayer->GetAt(j);
						if (pCardTmp->GetCardType().IsCreature())
						{
							CCreatureCard* pCreatureCardTmp = (CCreatureCard*)pCardTmp;
							if (pCreatureCardCur->GetCardKeyword()->HasChangeling() ||  // changeling keyword means card is all creature types 
								pCreatureCardTmp->GetCardKeyword()->HasChangeling() ||
								pCreatureCardCur->GetCreatureType().HasCommonTypes(pCreatureCardTmp->GetCreatureType()))
							{
								iTypeCommonCnt++;
								if (iTypeCommonCnt >= 3)
								{
									bTypeThreeOrMoreFnd = TRUE;
									return bTypeThreeOrMoreFnd;
								}
							}
						}
					}
				}
			}
		}
	return bTypeThreeOrMoreFnd;
}

BOOL CBlockAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	CPlayer* pActivePlayer = m_pGame->GetActivePlayer(); 

	if (m_pGame->GetNextPlayer(pActivePlayer) != GetController())
		return FALSE;
	
	if (!(m_pCard->GetCardType() & CardType::Creature).Any())
		return FALSE;

	const COrientation* pOrientation = m_pCard->GetOrientation();
	CCreatureCard* pCreatureCard = (CCreatureCard*)m_pCard;
	if ((pOrientation->IsTapped()) && (!pCreatureCard->GetCreatureKeyword()->TappedCanBlock()))
		return FALSE;

	if (m_pGame->IsThinking())
	{
		if (pCreatureCard->GetBlocking().GetSize())
			return FALSE;	// For creatures which can block multiple attackers, prevent them to block again if one or more attackers have already been blocked
	}

	if (pCreatureCard->GetMaxBlockingCount() != SpecialNumber::Any)
	{
		int nToBlockCount = pCreatureCard->GetMaxBlockingCount() - pCreatureCard->GetBlockingCount();
		if (nToBlockCount <= 0)
			return FALSE;
	}
	
	CPlayer* pPlayer = GetController();
	CCreatureKeyword* pAttribute = pCreatureCard->GetCreatureKeyword();
	BOOL bWall = pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Wall);

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer1 = m_pGame->GetPlayer(i);
		if (pPlayer1 == pPlayer)
			continue;
		CZone* pZone = pPlayer1->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if ((pCard->GetCardType() & CardType::Creature).Any())
			{
				if (CanBlockImpl(pCreatureCard, pPlayer, pAttribute, bWall, (CCreatureCard*)pCard))
					return TRUE;
			}
		}
	}

	return FALSE;
}

CActionContainer* CBlockAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CNonStackAbility::GetAbilityActions(bIncludeTricks, FALSE);
	if (!pActionContainer)
		return NULL;

	CCreatureCard* pCreatureCard = (CCreatureCard*)m_pCard;

	int nToBlockCount;
	if (pCreatureCard->GetMaxBlockingCount() != SpecialNumber::Any)
	{
		nToBlockCount = pCreatureCard->GetMaxBlockingCount() - pCreatureCard->GetBlockingCount();
		if (nToBlockCount <= 0)
		{
			delete pActionContainer;
			return NULL;
		}
	}
	else
		nToBlockCount = SpecialNumber::Any;

	CPlayer* pPlayer = pCreatureCard->GetController();
	CCreatureKeyword* pAttribute = pCreatureCard->GetCreatureKeyword();
	BOOL bWall = pCreatureCard->GetCreatureType().HasType(SingleCreatureType::Wall);

#if 1	// 10/26/2003: See if this creature can block any lure creatures

	BOOL bCanBlockLure = FALSE;

	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer1 = m_pGame->GetPlayer(i);
		if (pPlayer1 == pPlayer)
			continue;
		CZone* pZone = pPlayer1->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard1 = pZone->GetAt(k);
			if ((pCard1->GetCardType() & CardType::Creature).Any())
			{
				CCreatureCard* pCreatureCard1 = static_cast<CCreatureCard*>(pCard1);
				if (pCreatureCard1->IsAttacking() &&
					pCreatureCard1->GetCreatureKeyword()->Lure() &&
					CanBlockImpl(pCreatureCard, pPlayer, pAttribute, bWall, pCreatureCard1))
				{
					bCanBlockLure = TRUE;
					break;
				}
			}
		}

		if (bCanBlockLure)
			break;
	}

#endif

	const CCountedCardContainer_& currentlyBlocking(pCreatureCard->GetBlocking());

	CCountedCardContainer attackingCreatures;	// Attacking creatures this creature can block
	for (int i = 0; i < m_pGame->GetPlayerCount(); ++i)
	{
		CPlayer* pPlayer1 = m_pGame->GetPlayer(i);
		if (pPlayer1 == pPlayer)
			continue;
		CZone* pZone = pPlayer1->GetZoneById(ZoneId::Battlefield);
		for (int k = 0; k < pZone->GetSize(); ++k)
		{
			CCard* pCard = pZone->GetAt(k);
			if ((pCard->GetCardType() & CardType::Creature).Any())
			{
#if 1			// 10/26/2003: Limit blocking to only lure creatures if this creature can block one ore more lure creatures

				CCreatureCard* pCreatureCard1 = (CCreatureCard*)pCard;

				if (currentlyBlocking.FindIndex(pCreatureCard1) != -1)
					continue;	// Cannot block a creature twice

				if (!bCanBlockLure ||
					(bCanBlockLure && pCreatureCard1->GetCreatureKeyword()->Lure()))
				{
					if (CanBlockImpl(pCreatureCard, pPlayer, pAttribute, bWall, pCreatureCard1))
						attackingCreatures.AddCard(pCard, CardPlacement::Top);
				}
#else
				/*
				if (CanBlockImpl(pCreatureCard, pPlayer, pAttribute, bWall, (CCreatureCard*)pCard))
					AttackingCreature.AddCard(pCard);
				*/
#endif
			}
		}
	}

	if (!attackingCreatures.GetSize())
	{
		delete pActionContainer;
		return NULL;
	}

	if (nToBlockCount == SpecialNumber::Any ||
		nToBlockCount > attackingCreatures.GetSize())
		nToBlockCount = attackingCreatures.GetSize();	// Can't block more than the number of attacking creatures

	CActionContainer* pActionContainer1 = new CActionContainer;
	ATLASSERT(pActionContainer1);

	int nAttackingCreatureCount = attackingCreatures.GetSize();

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		const CBlockAction* pAction = (CBlockAction*)pActionContainer->GetAt(i).GetPointer();

		if (nToBlockCount == 1)
		{
			for (int j = 0; j < nAttackingCreatureCount; ++j)
			{
				CCreatureCard* pCard = (CCreatureCard*)attackingCreatures.GetAt(j);

				counted_ptr<CBlockAction> cpAction1((CBlockAction*)CreateAction().GetPointer());
				ATLASSERT(cpAction1);

				cpAction1->Copy(pAction);

				cpAction1->GetAttackers().AddCard(pCard, CardPlacement::Top);
				cpAction1->SetBasicNonStackAction();

				if (bSetNames)
					cpAction1->SetActionName(GetAbilityText() + _T(" ") + pCard->GetCreatureName(TRUE) + _T(" with ") +
						((CCreatureCard*)m_pCard)->GetCreatureName(TRUE));

				pActionContainer1->Add(cpAction1.GetPointer());
			}
		}
		else
		{
			// Can block multiple, generate moves to block 1..nToBlockCount attackers

			for (int j = nToBlockCount; j >= 1; --j)
			{
				IntArray bound;
				IntArray current;
				for (int k = 0; k < j; ++k)
				{
					current.push_back(k);
					bound.push_back(nAttackingCreatureCount - 1);
				}

				do
				{
					counted_ptr<CBlockAction> cpAction1((CBlockAction*)CreateAction().GetPointer());
					ATLASSERT(cpAction1);

					cpAction1->Copy(pAction);

					CString strAttackingCreatures;

					for (int k = 0; k < j; ++k)
					{
						CCreatureCard* pCard = (CCreatureCard*)attackingCreatures.GetAt(current[k]);

						cpAction1->GetAttackers().AddCard(pCard, CardPlacement::Top);

						if (bSetNames)
						{
							if (!strAttackingCreatures.IsEmpty())
								strAttackingCreatures += _T(", ");
							strAttackingCreatures += pCard->GetCreatureName(TRUE);
						}
					}

					if (bSetNames)
						cpAction1->SetActionName(GetAbilityText() + _T(" ") + strAttackingCreatures + _T(" with ") +
							((CCreatureCard*)m_pCard)->GetCreatureName(TRUE));

					pActionContainer1->Add(cpAction1.GetPointer());

				} while (Permutation(bound, j, current, TRUE, TRUE));
			}
		}
	}

	delete pActionContainer;

	return pActionContainer1;
}

BOOL CBlockAbility::ResolveImpl(const CAbilityAction* pAction)
{
	const CBlockAction* pAction1 = (const CBlockAction*)pAction;	

	CCreatureCard* pCard = (CCreatureCard*)GetCard();
	const CCountedCardContainer& attackers(pAction1->GetAttackers());

	for (int i = 0; i < attackers.GetSize(); ++i)
		pCard->AddBlocking((CCreatureCard*)attackers.GetAt(i));

	return CNonStackAbility::ResolveImpl(pAction);
}

counted_ptr<CAbilityAction> CBlockAbility::CreateAction() const
{
	counted_ptr<CBlockAction> cpAction = ::CreateObject<CBlockAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CBlockAbility*>(this));

	return cpAction.GetPointer();
}

#ifdef M10_COMBAT
//____________________________________________________________________________
//
CDamageAssignmentOrderAbility::CDamageAssignmentOrderAbility(CCard* pCard)
	: CNonStackAbility(pCard, _T("order Damage Assignment"), AbilityType::CombatDamageOrder)
{
	SetAbilityText(_T("orders"));
	SetInPlayOnly();
}

BOOL CDamageAssignmentOrderAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (!(m_pCard->GetCardType() & CardType::Creature).Any())
		return FALSE;

	CCreatureCard* pCard = (CCreatureCard*)m_pCard;
	
	if (m_pGame->GetActivePlayer() == GetController())
	{
		if (!pCard->IsAttacking())
			return FALSE;
	}
	else
		if (!pCard->IsBlocking())
			return FALSE;
		
	if (pCard->IsDamageAssignmentOrdered())
		return FALSE;

	return TRUE;
}

CActionContainer* CDamageAssignmentOrderAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CNonStackAbility::GetAbilityActions(bIncludeTricks, FALSE);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;
	ATLASSERT(pActionContainer1);

	CCreatureCard* pCard = (CCreatureCard*)GetCard();

	if (pCard->IsAttacking())
	{
		const CCountedCardContainer_& blockedBy(pCard->GetBlockedBy());
		CCountedCardContainer blockedByInplay;

		for (int i = 0; i < blockedBy.GetSize(); ++i)
		{
			CCreatureCard* pCard = (CCreatureCard*)blockedBy.GetAt(i);
			if (pCard->GetZoneId() == ZoneId::Battlefield && pCard->IsBlocking())
				blockedByInplay.AddCard(pCard, CardPlacement::Top);
		}

		int nSubjectCount = blockedByInplay.GetSize();

		if (nSubjectCount)
		{
			IntArray bounds;
			bounds.resize(nSubjectCount);

			IntArray assignmentOrder;
			assignmentOrder.resize(nSubjectCount);

			for (int i = 0; i < nSubjectCount; ++i)
			{
				bounds[i] = nSubjectCount - 1;
				assignmentOrder[i] = i;
			}

			CString strActionName;
			do
			{
				for (int i = 0; i < pActionContainer->GetSize(); ++i)
				{
					const CDamageAssignmentOrderAction* pAction = (CDamageAssignmentOrderAction*)pActionContainer->GetAt(i).GetPointer();

					counted_ptr<CDamageAssignmentOrderAction> cpAction1 = (CDamageAssignmentOrderAction*)CreateAction().GetPointer();
					ATLASSERT(cpAction1);
					cpAction1->Copy(pAction);

					CSubjectGroup& subjectGroup = cpAction1->GetSubjectGroup();
					subjectGroup.RemoveAll();
					subjectGroup.SetSourceCard(m_pCard);

					if (bSetNames)
						strActionName = GetAbilityText() + _T(" combat damage from ") + pCard->GetCreatureName(TRUE) + _T(": ");

					for (int j = 0; j < nSubjectCount; ++j)
					{
						CCreatureCard* pCard1 = (CCreatureCard*)blockedByInplay.GetAt(assignmentOrder[j]);

						if (bSetNames)
						{
							if (subjectGroup.GetSubjectCount())
								strActionName.Append(_T(", "));
							strActionName.Append(pCard1->GetCreatureName(TRUE));
						}

						subjectGroup.AddSubject(pCard1, ContextValue(j));
					}

					if (bSetNames)
						cpAction1->SetActionName(strActionName);

					pActionContainer1->Add(cpAction1.GetPointer());
				}

			} while (Permutation(bounds,	// Maximum value for each entry generated in Result
				 nSubjectCount,				// Number of entries required
				 assignmentOrder,			// Current Result
				 FALSE,						// Generate increasing entries
				 TRUE));					// Generate unique entries
		}
	}
	else
	if (pCard->IsBlocking())
	{
		const CCountedCardContainer_& blocking(pCard->GetBlocking());
		CCountedCardContainer blockingInplay;
		for (int i = 0; i < blocking.GetSize(); ++i)
		{
			CCreatureCard* pCard = (CCreatureCard*)blocking.GetAt(i);
			if (pCard->GetZoneId() == ZoneId::Battlefield  && pCard->IsAttacking())
				blockingInplay.AddCard(pCard, CardPlacement::Top);
		}
		
		int nSubjectCount = blockingInplay.GetSize();

		if (nSubjectCount)
		{
			IntArray bounds;
			bounds.resize(nSubjectCount);

			IntArray assignmentOrder;
			assignmentOrder.resize(nSubjectCount);

			for (int i = 0; i < nSubjectCount; ++i)
			{
				bounds[i] = nSubjectCount - 1;
				assignmentOrder[i] = i;
			}

			CString strActionName;
			do
			{
				for (int i = 0; i < pActionContainer->GetSize(); ++i)
				{
					const CDamageAssignmentOrderAction* pAction = (CDamageAssignmentOrderAction*)pActionContainer->GetAt(i).GetPointer();

					counted_ptr<CDamageAssignmentOrderAction> cpAction1 = (CDamageAssignmentOrderAction*)CreateAction().GetPointer();
					ATLASSERT(cpAction1);
					cpAction1->Copy(pAction);

					CSubjectGroup& subjectGroup = cpAction1->GetSubjectGroup();
					subjectGroup.RemoveAll();
					subjectGroup.SetSourceCard(m_pCard);

					if (bSetNames)
						strActionName = GetAbilityText() + _T(" combat damage from ") + pCard->GetCreatureName(TRUE) + _T(": ");

					for (int j = 0; j < nSubjectCount; ++j)
					{
						CCreatureCard* pCard1 = (CCreatureCard*)blockingInplay.GetAt(assignmentOrder[j]);

						if (bSetNames)
						{
							if (subjectGroup.GetSubjectCount())
								strActionName.Append(_T(", "));
							strActionName.Append(pCard1->GetCreatureName(TRUE));
						}

						subjectGroup.AddSubject(pCard1, ContextValue(j));
					}

					if (bSetNames)
						cpAction1->SetActionName(strActionName);

					pActionContainer1->Add(cpAction1.GetPointer());
				}

			} while (Permutation(bounds,	// Maximum value for each entry generated in Result
				 nSubjectCount,				// Number of entries required
				 assignmentOrder,			// Current Result
				 FALSE,						// Generate increasing entries
				 TRUE));					// Generate unique entries
		}
	}

	delete pActionContainer;
	return pActionContainer1;
}

BOOL CDamageAssignmentOrderAbility::ResolveImpl(const CAbilityAction* pAction)
{
	const CDamageAssignmentOrderAction* pAction1 = (const CDamageAssignmentOrderAction*)pAction;

	((CCreatureCard*)m_pCard)->OrderDamageAssignment(pAction1->GetSubjectGroup());

	return CNonStackAbility::ResolveImpl(pAction);
}

counted_ptr<CAbilityAction> CDamageAssignmentOrderAbility::CreateAction() const
{
	counted_ptr<CDamageAssignmentOrderAction> cpAction = ::CreateObject<CDamageAssignmentOrderAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CDamageAssignmentOrderAbility*>(this));

	return cpAction.GetPointer();
}
#endif

//____________________________________________________________________________
//
CCombatDamageAssignmentAbility::CCombatDamageAssignmentAbility(CCard* pCard)
	: CNonStackAbility(pCard, _T("Assign Combat Damage"), AbilityType::CombatDamageAssign)
{
	SetAbilityText(_T("assigns"));
	SetInPlayOnly();
}

BOOL CCombatDamageAssignmentAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (!(m_pCard->GetCardType() & CardType::Creature).Any())
		return FALSE;

	CCreatureCard* pCard = (CCreatureCard*)m_pCard;

	if (m_pGame->GetActivePlayer() == GetController())
	{
		if (!pCard->IsAttacking())
			return FALSE;

		BOOL bFound = FALSE;
		const CCountedCardContainer_& blockedBy(pCard->GetBlockedBy());
		for (int i = 0; i < blockedBy.GetSize(); ++i)
		{
			CCreatureCard* pCard = (CCreatureCard*)blockedBy.GetAt(i);
			if (pCard->GetZoneId() == ZoneId::Battlefield && pCard->IsBlocking())
			{
				bFound = TRUE;
				break;
			}
		}

		if (!bFound && !pCard->GetCreatureKeyword()->Trample())
			return FALSE;
	}
	else
	{
		if (!pCard->IsBlocking())
			return FALSE;

		BOOL bFound = FALSE;
		const CCountedCardContainer_& blocking(pCard->GetBlocking());
		for (int i = 0; i < blocking.GetSize(); ++i)
		{
			CCreatureCard* pCard = (CCreatureCard*)blocking.GetAt(i);
			if (pCard->GetZoneId() == ZoneId::Battlefield && pCard->IsAttacking())
			{
				bFound = TRUE;
				break;
			}
		}

		if (!bFound)
			return FALSE;
	}

	if ((pCard->GetPower() == Power(0) && !GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage)) ||
		(pCard->GetPermanentLife() <= Life(0)  && GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage)) ||
		pCard->GetCreatureKeyword()->DealNoCombatDamage())
		return FALSE;

	// Assigned already in this combat?
	if (((CCombatDamageNode1a*)m_pGame->GetCurrentNode()->GetGraph()->GetNodeById(NodeId::CombatDamageStep1a))->HasAssignedDamage(pCard))
	{
		if (!(m_pGame->GetCurrentNode()->GetNodeId() & NodeId::CombatDamageStep2a).Any() ||
			!pCard->GetCreatureKeyword()->DoubleStrike())
			return FALSE;
	}

	// Assigned already in this step?
	if (m_pGame->HasCombatDamageAssignment(pCard))
		return FALSE;

	if ((m_pGame->GetCurrentNode()->GetNodeId() & NodeId::CombatDamageStep1a).Any())
	{
		if (!pCard->GetCreatureKeyword()->FirstStrike() && !pCard->GetCreatureKeyword()->DoubleStrike())
			return FALSE;
	}
	else
		if (!(m_pGame->GetCurrentNode()->GetNodeId() & NodeId::CombatDamageStep2a).Any())
			return FALSE;

	return TRUE;
}

#ifdef M10_COMBAT
CActionContainer* CCombatDamageAssignmentAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CNonStackAbility::GetAbilityActions(bIncludeTricks, FALSE);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;
	ATLASSERT(pActionContainer1);

	CCreatureCard* pCard = (CCreatureCard*)GetCard();
	BOOL bDeathtouch = pCard->GetCardKeyword()->HasDeathtouch();

	if (pCard->IsAttacking())
	{
		const CCountedCardContainer_& blockedBy(pCard->GetBlockedBy());
		CCountedCardContainer blockedByInplay;

		for (int i = 0; i < blockedBy.GetSize(); ++i)
		{
			CCreatureCard* pCard = (CCreatureCard*)blockedBy.GetAt(i);
			if (pCard->GetZoneId() == ZoneId::Battlefield && pCard->IsBlocking())
				blockedByInplay.AddCard(pCard, CardPlacement::Top);
		}

		int nSubjectCount = blockedByInplay.GetSize();
		Power nPower; //= pCard->GetPower();
		
		if (pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage)) nPower = Power(GET_INTEGER(pCard->GetPermanentLife())); else nPower = pCard->GetPower();

		int nPoint = GET_INTEGER(nPower);		
		if (nPoint <= 0)
		{
			delete pActionContainer1;
			return NULL;
		}
			
		CCreatureKeyword* pCreatureKeywordContainer = pCard->GetCreatureKeyword();
		if (pCreatureKeywordContainer->CanAssignDamageToPlayer() && pCard->GetAttackedPlayer())	// Ref: Thorn Elemental
		{
			counted_ptr<CCombatDamageAssignmentAction> cpAction1 = (CCombatDamageAssignmentAction*)CreateAction().GetPointer();
			ATLASSERT(cpAction1);

			CSubjectGroup& subjectGroup = cpAction1->GetSubjectGroup();
			subjectGroup.SetSourceCard(m_pCard);
			subjectGroup.AddSubject(pCard->GetAttackedPlayer(), ContextValue(-nPoint));

			if (bSetNames)
				cpAction1->SetActionName(GetAbilityText() + _T(" combat damage from ") + pCard->GetCreatureName(TRUE) + _T(" to defending player"));

			pActionContainer1->Add(cpAction1.GetPointer());
		}

		BOOL bTrample = pCreatureKeywordContainer->Trample();
		if (bTrample)
			++nSubjectCount;	// Last subject is the defending player

		if (!nSubjectCount && pCard->IsBlocked())
		{
			delete pActionContainer1;
			return NULL;
		}

		if (nSubjectCount)
		{
			CPlayer* pAttackedPlayer = pCard->GetAttackedPlayer();
			CPlaneswalkerCard* pAttackedPlaneswalker = pCard->GetAttackedPlaneswalker();	

			std::vector<IntArray> subjectConfig;
			int nConfigCount = CSubjectGroup::CalculateSubjectPermutations(nSubjectCount, nPoint, subjectConfig);

			CString strActionName;
			CString strActionName1;
			for (int i = 0; i < pActionContainer->GetSize(); ++i)
			{
				const CCombatDamageAssignmentAction* pAction = (CCombatDamageAssignmentAction*)pActionContainer->GetAt(i).GetPointer();

				for (int j = 0; j < nConfigCount; ++j)
				{
					IntArray& point(subjectConfig[j]);

					counted_ptr<CCombatDamageAssignmentAction> cpAction1 = (CCombatDamageAssignmentAction*)CreateAction().GetPointer();
					ATLASSERT(cpAction1);
					cpAction1->Copy(pAction);

					CSubjectGroup& subjectGroup = cpAction1->GetSubjectGroup();
					subjectGroup.RemoveAll();
					subjectGroup.SetSourceCard(m_pCard);

					if (bSetNames)
						strActionName = GetAbilityText() + _T(" combat damage from ") + pCard->GetCreatureName(TRUE) + _T(": ");

					int nLethalDamageCount = 0;
					BOOL bTrampleToPlayer = FALSE;
					BOOL bValid = TRUE;

					for (int k = 0; k < nSubjectCount; ++k)
						if (point[k])
						{
							Life nDamage(-point[k]);

							if (bTrample && k + 1 == nSubjectCount)
							{
								bTrampleToPlayer = TRUE;
								
								if (bSetNames)
								{
									if (subjectGroup.GetSubjectCount())
										strActionName += _T(", ");
									
									if (pAttackedPlayer)
										strActionName1.Format(_T("%d damage to %s"),
											point[k],
											pAttackedPlayer->GetPlayerName());
									else
										strActionName1.Format(_T("%d damage to %s"),
											point[k],
											pAttackedPlaneswalker->GetCardName());
									strActionName += strActionName1;
								}

								if (pAttackedPlayer)
									subjectGroup.AddSubject(pAttackedPlayer, ContextValue(GET_INTEGER(nDamage)));
								else
									subjectGroup.AddSubject(pAttackedPlaneswalker, ContextValue(GET_INTEGER(nDamage)));
							}
							else
							{
								CCreatureCard* pCard1 = (CCreatureCard*)blockedByInplay.GetAt(k);

								// M10: this configuration is valid when (least time consuming checking to more time consuming checking order):
								// * This creature has Deathtouch OR
								// * This is the last creature in the distribution, OR
								// * This creature's toughness is less than or equal to point[k], OR
								// * This is the last value in point[] (k+1..nSubjectCount-1) with a non-zero value, OR
								// * This creature will be dealt lethal damage (current damage assignment + point[k]),OR
								// * This creature is also blocking any other attacking creatures (not yet assigned combat damage) and the sum of those attackers' power + point[k] + current damage assignment can cause lethal damage to this creature

								if (!bDeathtouch)
								{
									if ((k + 1 < nSubjectCount) &&			// (k + 1 == nSubjectCount)
										(pCard1->GetLife() > -nDamage))
									{
										bool bFound = false;
										for (int l = k + 1; l < nSubjectCount; ++l)
											if (point[l])
											{
												bFound = true;
												break;
											}

										if (bFound)
										{
											const CCountedCardContainer_& blocking(pCard1->GetBlocking());

											Life nTotalPotentialDamage(nDamage);
											for (int l = 0; l < blocking.GetSize(); ++l)
											{												
												const CCreatureCard* pBlocked = (const CCreatureCard*)blocking.GetAt(l);

												int blocked_power;
												if (pBlocked->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage))  blocked_power= GET_INTEGER(pBlocked->GetPermanentLife());
													else blocked_power= GET_INTEGER(pBlocked->GetPower());

												if (!m_pGame->HasCombatDamageAssignment(pBlocked) && pBlocked != m_pCard &&
													blocked_power > 0)
													nTotalPotentialDamage += Life(-blocked_power);
											}

											if (!pCard1->HasLethalDamage(nTotalPotentialDamage))
											{
												bValid = FALSE;
												break;
											}
										}
									}
								}

								if (bSetNames)
								{
									if (subjectGroup.GetSubjectCount())
										strActionName += _T(", ");
									
									strActionName1.Format(_T("%d damage to %s"),
										point[k],
										pCard1->GetCreatureName(TRUE));
									strActionName += strActionName1;
								}

								subjectGroup.AddSubject(pCard1, ContextValue(GET_INTEGER(nDamage)));

								if (bTrample)
								{
									if ((nDamage < Life(0) && bDeathtouch) || pCard1->HasLethalDamage(nDamage))
										++nLethalDamageCount;
								}
							}
						}
						else
						if (!bDeathtouch)
						{
							// M10

							bool bFound = false;
							for (int l = k + 1; l < nSubjectCount; ++l)
								if (point[l])
								{
									bFound = true;
									break;
								}

							if (bFound)
							{
								CCreatureCard* pCard1 = (CCreatureCard*)blockedByInplay.GetAt(k);

								// Make sure other attacker can give lethal damage to this creature

								const CCountedCardContainer_& blocking(pCard1->GetBlocking());

								Life nTotalPotentialDamage(Life(0));
								for (int l = 0; l < blocking.GetSize(); ++l)
								{
									const CCreatureCard* pBlocked = (const CCreatureCard*)blocking.GetAt(l);

									int blocked_power;
									if (pBlocked->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage))  blocked_power= GET_INTEGER(pBlocked->GetPermanentLife());
										else blocked_power= GET_INTEGER(pBlocked->GetPower());

									if (!m_pGame->HasCombatDamageAssignment(pBlocked) && pBlocked != m_pCard &&
										blocked_power > 0)
										nTotalPotentialDamage += Life(-blocked_power);
								}

								if (!pCard1->HasLethalDamage(nTotalPotentialDamage))
								{
									bValid = FALSE;
									break;
								}
							}
						}

					if (bValid && (!bTrample || !bTrampleToPlayer || 
						nLethalDamageCount == nSubjectCount - 1))
						/* 502.9b The controller of an attacking creature with trample first assigns damage to the creature(s)blocking it. 
						   If *all* those blocking creatures are assigned *lethal* damage, any remaining damage is assigned as its controller 
						   chooses among those blocking creatures and the player or planeswalker the creature is attacking. When checking 
						   for assigned lethal damage, take into account damage already on the creature and damage from other creatures 
						   that will be assigned at the same time (see rule 502.9e). The controller need not assign lethal damage to all 
						   those blocking creatures but in that case can’t assign any damage to the player or planeswalker it’s attacking. */
					{
						if (bSetNames)
							cpAction1->SetActionName(strActionName);

						pActionContainer1->Add(cpAction1.GetPointer());
					}
				}
			}
		}
	}
	else
	if (pCard->IsBlocking())
	{
		const CCountedCardContainer_& blocking(pCard->GetBlocking());
		CCountedCardContainer blockingInplay;
		for (int i = 0; i < blocking.GetSize(); ++i)
		{
			CCreatureCard* pCard = (CCreatureCard*)blocking.GetAt(i);
			if (pCard->GetZoneId() == ZoneId::Battlefield && pCard->IsAttacking())
				blockingInplay.AddCard(pCard, CardPlacement::Top);
		}
		
		int nSubjectCount = blockingInplay.GetSize();		

		int nPoint; // = GET_INTEGER(pCard->GetPower());

		if (pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage)) nPoint = GET_INTEGER(pCard->GetPermanentLife()); 
			else nPoint = GET_INTEGER(pCard->GetPower());

		if (nPoint <= 0)
		{
			delete pActionContainer1;
			return NULL;
		}

		std::vector<IntArray> subjectConfig;
		int nConfigCount = CSubjectGroup::CalculateSubjectPermutations(nSubjectCount, nPoint, subjectConfig);

		CString strActionName;
		CString strActionName1;
		for (int i = 0; i < pActionContainer->GetSize(); ++i)
		{
			const CCombatDamageAssignmentAction* pAction = (CCombatDamageAssignmentAction*)pActionContainer->GetAt(i).GetPointer();

			for (int j = 0; j < nConfigCount; ++j)
			{
				IntArray& point(subjectConfig[j]);

				counted_ptr<CCombatDamageAssignmentAction> cpAction1 = (CCombatDamageAssignmentAction*)CreateAction().GetPointer();
				ATLASSERT(cpAction1);
				cpAction1->Copy(pAction);

				CSubjectGroup& subjectGroup = cpAction1->GetSubjectGroup();
				subjectGroup.RemoveAll();
				subjectGroup.SetSourceCard(m_pCard);

				if (bSetNames)
					strActionName = GetAbilityText() + _T(" combat damage from ") + pCard->GetCreatureName(TRUE) + _T(": ");

				BOOL bValid = TRUE;

				for (int k = 0; k < nSubjectCount; ++k)
					if (point[k])
					{
						CCreatureCard* pCard1 = (CCreatureCard*)blockingInplay.GetAt(k);

						if (!bDeathtouch)
						{
							// M10: this configuration is valid when (least time consuming checking to more time consuming checking order):
							// * This creature has Deathtouch OR
							// * This is the last creature in the distribution, OR
							// * This creature's toughness is less than or equal to point[k], OR
							// * This is the last value in point[] (k+1..nSubjectCount-1) with a non-zero value, OR
							// * This creature will be dealt lethal damage (current damage assignment + point[k]),OR
							// * This creature is also blocked by any other blocking creatures (not yet assigned combat damage) and the sum of those blockers' power + point[k] + current damage assignment can cause lethal damage to this creature

							if ((k + 1 < nSubjectCount) &&			// (k + 1 == nSubjectCount)
								(pCard1->GetLife() > Life(point[k])))
							{
								bool bFound = false;
								for (int l = k + 1; l < nSubjectCount; ++l)
									if (point[l])
									{
										bFound = true;
										break;
									}

								if (bFound)
								{
									const CCountedCardContainer_& blockedBy(pCard1->GetBlockedBy());

									Life nTotalPotentialDamage(Life(-point[k]));
									for (int l = 0; l < blockedBy.GetSize(); ++l)
									{
										const CCreatureCard* pBlockedBy = (const CCreatureCard*)blockedBy.GetAt(l);

										int pBlockedBy_power;
										if (pBlockedBy->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage))  pBlockedBy_power= GET_INTEGER(pBlockedBy->GetPermanentLife());
											else pBlockedBy_power= GET_INTEGER(pBlockedBy->GetPower());

										if (!m_pGame->HasCombatDamageAssignment(pBlockedBy) && pBlockedBy != m_pCard)
										//	nTotalPotentialDamage += Life(-GET_INTEGER(pBlockedBy->GetPower()));
											nTotalPotentialDamage += Life(-pBlockedBy_power);
									}

									if (!pCard1->HasLethalDamage(nTotalPotentialDamage))
									{
										bValid = FALSE;
										break;
									}
								}
							}
						}

						if (bSetNames)
						{
							if (subjectGroup.GetSubjectCount())
								strActionName += _T(", ");
							
							strActionName1.Format(_T("%d damage to %s"),
								point[k],
								pCard1->GetCreatureName(TRUE));
							strActionName += strActionName1;
						}

						subjectGroup.AddSubject(pCard1, ContextValue(-point[k]));
					}
					else
					if (!bDeathtouch)
					{
						// M10

						bool bFound = false;
						for (int l = k + 1; l < nSubjectCount; ++l)
							if (point[l])
							{
								bFound = true;
								break;
							}

						if (bFound)
						{
							CCreatureCard* pCard1 = (CCreatureCard*)blockingInplay.GetAt(k);

							// Make sure other blocker can give lethal damage to this creature

							const CCountedCardContainer_& blockedBy(pCard1->GetBlockedBy());

							Life nTotalPotentialDamage(Life(0));
							for (int l = 0; l < blockedBy.GetSize(); ++l)
							{
								const CCreatureCard* pBlockedBy = (const CCreatureCard*)blockedBy.GetAt(l);

								int pBlockedBy_power;
								if (pBlockedBy->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::ToughnessCombatDamage))  pBlockedBy_power= GET_INTEGER(pBlockedBy->GetPermanentLife());
									else pBlockedBy_power= GET_INTEGER(pBlockedBy->GetPower());

								if (!m_pGame->HasCombatDamageAssignment(pBlockedBy) && pBlockedBy != m_pCard)
									nTotalPotentialDamage += Life(-pBlockedBy_power);
							}

							if (!pCard1->HasLethalDamage(nTotalPotentialDamage))
							{
								bValid = FALSE;
								break;
							}
						}
					}

				if (!bValid)
					continue;

				if (bSetNames)
					cpAction1->SetActionName(strActionName);

				pActionContainer1->Add(cpAction1.GetPointer());
			}
		}
	}

	delete pActionContainer;
	return pActionContainer1;
}
#else
CActionContainer* CCombatDamageAssignmentAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	CActionContainer* pActionContainer = CNonStackAbility::GetAbilityActions(bIncludeTricks, FALSE);
	if (!pActionContainer)
		return NULL;

	CActionContainer* pActionContainer1 = new CActionContainer;
	ATLASSERT(pActionContainer1);

	CCreatureCard* pCard = (CCreatureCard*)GetCard();

	if (pCard->IsAttacking())
	{
		const CCountedCardContainer_& blockedBy(pCard->GetBlockedBy());
		CCountedCardContainer blockedByInplay;

		for (int i = 0; i < blockedBy.GetSize(); ++i)
		{
			CCard* pCard = blockedBy.GetAt(i).GetPointer();
			if (pCard->GetZoneId() == ZoneId::Battlefield)
				blockedByInplay.CCountedCardContainer::Add(pCard);
		}

		int nSubjectCount = blockedByInplay.GetSize();
		Power nPower = pCard->GetPower();
		int nPoint = GET_INTEGER(nPower);

#if 1 // 9/20/2003
		CCreatureKeyword* pCreatureKeywordContainer = pCard->GetCreatureKeyword();
		if (pCreatureKeywordContainer->CanAssignDamageToPlayer())	// Ref: Thorn Elemental
		{
			counted_ptr<CCombatDamageAssignmentAction> cpAction1 = (CCombatDamageAssignmentAction*)CreateAction().GetPointer();
			ATLASSERT(cpAction1);

			CSubjectGroup& subjectGroup = cpAction1->GetSubjectGroup();
			subjectGroup.SetSourceCard(m_pCard);
			subjectGroup.AddSubject(pCard->GetAttackedPlayer(), ContextValue(-nPoint));

			if (bSetNames)
				cpAction1->SetActionName(GetAbilityText() + _T(" combat damage from ") + pCard->GetCreatureName(TRUE) + _T(" to defending player"));

			pActionContainer1->Add(cpAction1.GetPointer());
		}
#endif

		BOOL bTrample = pCreatureKeywordContainer->Trample();
		if (bTrample)
			++nSubjectCount;	// Last subject is the defending player

		if (!nSubjectCount && pCard->IsBlocked())
		{
			delete pActionContainer1;
			return NULL;
		}

		if (nSubjectCount)
		{
			CPlayer* pDefendingPlayer = pCard->GetAttackedPlayer();

			std::vector<IntArray> subjectConfig;
			int nConfigCount = CSubjectGroup::CalculateSubjectPermutations(nSubjectCount, nPoint, subjectConfig);

			CString strActionName;
			CString strActionName1;
			for (int i = 0; i < pActionContainer->GetSize(); ++i)
			{
				const CCombatDamageAssignmentAction* pAction = (CCombatDamageAssignmentAction*)pActionContainer->GetAt(i).GetPointer();

				for (int j = 0; j < nConfigCount; ++j)
				{
					IntArray& point(subjectConfig[j]);

					counted_ptr<CCombatDamageAssignmentAction> cpAction1 = (CCombatDamageAssignmentAction*)CreateAction().GetPointer();
					ATLASSERT(cpAction1);
					cpAction1->Copy(pAction);

					CSubjectGroup& subjectGroup = cpAction1->GetSubjectGroup();
					subjectGroup.RemoveAll();
					subjectGroup.SetSourceCard(m_pCard);

					if (bSetNames)
						strActionName = GetAbilityText() + _T(" combat damage from ") + pCard->GetCreatureName(TRUE) + _T(": ");

					int nLethalDamageCount = 0;
					BOOL bTrampleToPlayer = FALSE;

					for (int k = 0; k < nSubjectCount; ++k)
						if (point[k])
						{
							Life nDamage(-point[k]);

							if (bTrample && k + 1 == nSubjectCount)
							{
								bTrampleToPlayer = TRUE;
								
								if (bSetNames)
								{
									if (subjectGroup.GetSubjectCount())
										strActionName += _T(", ");
									
									strActionName1.Format(_T("%d damage to %s"),
										point[k],
										pDefendingPlayer->GetPlayerName());
									strActionName += strActionName1;
								}

								subjectGroup.AddSubject(pDefendingPlayer, ContextValue(GET_INTEGER(nDamage)));
							}
							else
							{
								CCreatureCard* pCard1 = (CCreatureCard*)blockedByInplay.GetAt(k);

								if (bSetNames)
								{
									if (subjectGroup.GetSubjectCount())
										strActionName += _T(", ");
									
									strActionName1.Format(_T("%d damage to %s"),
										point[k],
										pCard1->GetCreatureName(TRUE));
									strActionName += strActionName1;
								}

								subjectGroup.AddSubject(pCard1, ContextValue(GET_INTEGER(nDamage)));

								if (bTrample)
								{
									if (pCard1->HasLethalDamage(nDamage))
										++nLethalDamageCount;
								}
							}
						}

					if (!bTrample || !bTrampleToPlayer || 
						nLethalDamageCount == nSubjectCount - 1)
						/* 502.9b The controller of an attacking creature with trample first assigns damage to the creature(s)blocking it. 
						   If *all* those blocking creatures are assigned *lethal* damage, any remaining damage is assigned as its controller 
						   chooses among those blocking creatures and the player or planeswalker the creature is attacking. When checking 
						   for assigned lethal damage, take into account damage already on the creature and damage from other creatures 
						   that will be assigned at the same time (see rule 502.9e). The controller need not assign lethal damage to all 
						   those blocking creatures but in that case can’t assign any damage to the player or planeswalker it’s attacking. */
					{
						if (bSetNames)
							cpAction1->SetActionName(strActionName);

						pActionContainer1->Add(cpAction1.GetPointer());
					}
				}
			}
		}
	}
	else
	if (pCard->IsBlocking())
	{
		const CCountedCardContainer_& blocking(pCard->GetBlocking());
		CCountedCardContainer blockingInplay;
		for (int i = 0; i < blocking.GetSize(); ++i)
		{
			CCreatureCard* pCard = (CCreatureCard*)blocking.GetAt(i).GetPointer();
			if (pCard->GetZoneId() == ZoneId::Battlefield)
				blockingInplay.CCountedCardContainer::Add(pCard);
		}
		
		int nSubjectCount = blockingInplay.GetSize();
		int nPoint = GET_INTEGER(pCard->GetPower());

		std::vector<IntArray> subjectConfig;
		int nConfigCount = CSubjectGroup::CalculateSubjectPermutations(nSubjectCount, nPoint, subjectConfig);

		CString strActionName;
		CString strActionName1;
		for (int i = 0; i < pActionContainer->GetSize(); ++i)
		{
			const CCombatDamageAssignmentAction* pAction = (CCombatDamageAssignmentAction*)pActionContainer->GetAt(i).GetPointer();

			for (int j = 0; j < nConfigCount; ++j)
			{
				IntArray& point(subjectConfig[j]);

				counted_ptr<CCombatDamageAssignmentAction> cpAction1 = (CCombatDamageAssignmentAction*)CreateAction().GetPointer();
				ATLASSERT(cpAction1);
				cpAction1->Copy(pAction);

				CSubjectGroup& subjectGroup = cpAction1->GetSubjectGroup();
				subjectGroup.RemoveAll();
				subjectGroup.SetSourceCard(m_pCard);

				if (bSetNames)
					strActionName = GetAbilityText() + _T(" combat damage from ") + pCard->GetCreatureName(TRUE) + _T(": ");

				for (int k = 0; k < nSubjectCount; ++k)
					if (point[k])
					{
						CCreatureCard* pCard1 = (CCreatureCard*)blockingInplay.GetAt(k);

						if (bSetNames)
						{
							if (subjectGroup.GetSubjectCount())
								strActionName += _T(", ");
							
							strActionName1.Format(_T("%d damage to %s"),
								point[k],
								pCard1->GetCreatureName(TRUE));
							strActionName += strActionName1;
						}

						subjectGroup.AddSubject(pCard1, ContextValue(-point[k]));
					}

				if (bSetNames)
					cpAction1->SetActionName(strActionName);

				pActionContainer1->Add(cpAction1.GetPointer());
			}
		}
	}

	delete pActionContainer;

	if (pActionContainer1->GetSize() == 1)
		((CCombatDamageAssignmentAction*)pActionContainer1->GetAt(0).GetPointer())->SetToSimpleAssignment();

	return pActionContainer1;
}
#endif

BOOL CCombatDamageAssignmentAbility::ResolveImpl(const CAbilityAction* pAction)
{
	const CCombatDamageAssignmentAction* pAction1 = (const CCombatDamageAssignmentAction*)pAction;

	const CSubjectGroup& subjectGroup = pAction1->GetSubjectGroup();

	m_pGame->GetCombatDamageAssignment().Add(subjectGroup);

	return CNonStackAbility::ResolveImpl(pAction);
}

counted_ptr<CAbilityAction> CCombatDamageAssignmentAbility::CreateAction() const
{
	counted_ptr<CCombatDamageAssignmentAction> cpAction = ::CreateObject<CCombatDamageAssignmentAction>(m_pGame);
	ATLASSERT(cpAction);

	cpAction->SetAbility(const_cast<CCombatDamageAssignmentAbility*>(this));

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
CLandAbility::CLandAbility(CCard* pCard)
	: CNonStackAbility(pCard, _T("Play"), AbilityType::Land)
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));
	
	// Lands are still consider to be 'played' under M10
	SetAbilityText(_T("plays")); // http://www.wizards.com/magic/magazine/article.aspx?x=mtg/daily/feature/42a
	SetHandOnly();
}

ZoneId CLandAbility::GetPlayableFrom() const
{
	ZoneId zoneId = __super::GetPlayableFrom();
	if ((zoneId & ZoneId::Graveyard).Any())
		return zoneId;	

	if ((zoneId & ZoneId::Library).Any())
		return zoneId;	

	if (m_pCard->GetCardKeyword()->HasFreecast()) return ZoneId::_Effects;

	CPlayer* pController = GetController();
	if (pController)
	{
		std::set<const CCardFilter*> allowedCards;
		if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromGraveyard, allowedCards) &&
			(!pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage) || !m_pCard->GetCardType().IsCreature()))
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

		if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayOneCardFromGraveyard, allowedCards) &&
			(!pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage) || !m_pCard->GetCardType().IsCreature()))
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
		
		if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::PlayCardsFromLibraryTop, allowedCards) &&
			(!pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage) || !m_pCard->GetCardType().IsCreature()))
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

	return zoneId;
}

BOOL CLandAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	CPlayer* pPlayer = GetController();

	if (m_pCard->GetCardType().IsCreature() && (m_pCard->GetCardKeyword()->HasFlash() || m_pCard->GetCardKeyword()->HasPflash()) && m_pGame->GetStack().IsValidAbilityType(AbilityType::Instant, true))
		if (GetController()->GetGraph()->GetCurrentNode() && ((CMainNode*)GetController()->GetGraph()->GetNodeById(NodeId::MainPhaseStep))->IsLandActionValid()) return TRUE;

	if (m_pCard->GetCardKeyword()->HasFreecast())
		if (GetController()->GetGraph()->GetCurrentNode() && ((CMainNode*)GetController()->GetGraph()->GetNodeById(NodeId::MainPhaseStep))->IsLandActionValid()) return TRUE;

	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (pPlayer != m_pGame->GetActivePlayer())
		return FALSE;

	CNode* pNode = pPlayer->GetGraph()->GetCurrentNode();

	if (!pNode || (pNode->GetNodeId() != NodeId::MainPhaseStep && !(m_pCard->GetCardType().IsCreature() && (m_pCard->GetCardKeyword()->HasFlash() || m_pCard->GetCardKeyword()->HasPflash()))))
		return FALSE;

	CMainNode* pMainNode = (CMainNode*)pNode;
	if (pNode && !pMainNode->IsLandActionValid())
		return FALSE;

	if (!pNode && ((CMainNode*)GetController()->GetGraph()->GetNodeById(NodeId::MainPhaseStep))->IsLandActionValid())
		return FALSE;

	if (m_pGame->GetStack().GetStackSize())
		return FALSE;

	return TRUE;
}

BOOL CLandAbility::ResolveImpl(const CAbilityAction* pAction)
{
	const CNonStackAbilityAction* pAction1 = (const CNonStackAbilityAction*)pAction;
	const CPlayer* pCaster = pAction1->GetController();

	m_pCard->Move(const_cast<CZone*>(pCaster->GetZoneById(ZoneId::Battlefield)), const_cast<CPlayer*>(pCaster), MoveType::Play);

	CMainNode* pMainNode = (CMainNode*)(pCaster->GetGraph()->GetNodeById(NodeId::MainPhaseStep));
	pMainNode->IncreaseLandCount();

	return CNonStackAbility::ResolveImpl(pAction);
}

counted_ptr<CAbilityAction> CLandAbility::CreateAction() const
{
	counted_ptr<CAbilityAction> cpAction = CNonStackAbility::CreateAction();

	cpAction->SetScore(ActionScore::PlayLand);
	cpAction->SetPlayLand();

//	cpAction->SetAnnounce();
	cpAction->SetBasicNonStackAction();
	//cpAction->SetHideInConcise();
	cpAction->SetValue(ContextValue(m_pCard->GetCardType().Get()));

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
CUntapAbility::CUntapAbility(CCard* pCard)
	: CNonStackAbility(pCard, _T("Untap"), AbilityType::Untap)
{
	AddAbilityTag(AbilityTag::OrientationChange);

	SetAbilityText(_T("untaps"));
	SetInPlayOnly();
}

BOOL CUntapAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (GetController() != m_pGame->GetActivePlayer())
		return FALSE;

	if (m_pCard->GetCardKeyword()->NoUntapInUntapPhase() || m_pCard->GetCardKeyword()->HasCanChooseNotUntap())
		return FALSE;

	if (m_pCard->GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CreaturesDontUntapNextCont) && m_pCard->GetCardType().IsCreature())
		return FALSE;

	if (m_pCard->GetCardKeyword()->NoUntapInNextContUntap())
		return FALSE;

	const CPlayer* pController = GetController();

	if (!pController->CanUntap(m_pCard))
		return FALSE;

	COrientation* pOrientation = m_pCard->GetOrientation();
	if (!pOrientation->IsTapped())
		return FALSE;

	// 10/28/2003: To support Meekstone
	int nMaxParam = 0;
	int nMinParam = 0;
	if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::Meekstone, nMaxParam, nMinParam))
	{
		if ((m_pCard->GetCardType() & CardType::Creature).Any())
		{
			CCreatureCard* pCreatureCard = static_cast<CCreatureCard*>(m_pCard);
			if (GET_INTEGER(pCreatureCard->GetPower()) > nMinParam)
				return FALSE;
		}
	}

	// 11/2/2003: To support Static Orb
	nMaxParam = 0;
	nMinParam = 0;
	if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::UntapLimit, nMaxParam, nMinParam))
	{
		if (pController->GetTurnUntappedCount() >= nMinParam)
			return FALSE;
	}

	// 11/Nov/2012: To support interaction between Winter Orb and smoke
	int nOrbMaxParam = 0;
	int nOrbMinParam = 0;
	if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::WinterOrb, nOrbMaxParam, nOrbMinParam))
	{
		if ((m_pCard->GetCardType() & CardType::_Land).Any())
		{
			if (pController->GetTurnUntappedLandsCount() >= nOrbMinParam)
				return FALSE;
		}
	}

	// 11/Nov/2012: To support interaction between Winter Orb and smoke
	int nSmokeMaxParam = 0;
	int nSmokeMinParam = 0;
	if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::Smoke, nSmokeMaxParam, nSmokeMinParam))
	{
		if ((m_pCard->GetCardType() & CardType::Creature).Any())
		{
			if (pController->GetTurnUntappedCreaturesCount() >= nSmokeMinParam)
				return FALSE;
		}
	}

	return TRUE;
}

BOOL CUntapAbility::ResolveImpl(const CAbilityAction* pAction)
{
	COrientation* pOrientation = m_pCard->GetOrientation();	
	pOrientation->Untap();

	GetController()->IncreaseTurnUntapCount();
	
	if ((m_pCard->GetCardType() & CardType::_Land).Any())
		{
			GetController()->IncreaseTurnUntapLandsCount();
			return CNonStackAbility::ResolveImpl(pAction);
		}

	if ((m_pCard->GetCardType() & CardType::Creature).Any())
		{
			GetController()->IncreaseTurnUntapCreaturesCount();
			return CNonStackAbility::ResolveImpl(pAction);
		}

	return CNonStackAbility::ResolveImpl(pAction);
}

counted_ptr<CAbilityAction> CUntapAbility::CreateAction() const
{
	counted_ptr<CAbilityAction> cpAction = CNonStackAbility::CreateAction();
	cpAction->SetUntapAction();

	//cpAction->SetBasicNonStackAction();
	cpAction->SetScore(ActionScore::Untap);

#if 1	// 11/2/2003: To support Static Orb
	if (!GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::UntapLimit))
		cpAction->SetRequiredTransientActionId(ActionTransientId::Untap);
#else
	// 	cpAction->SetRequiredTransientActionId(CAction::ACTION_REQTRANS_UNTAP);
#endif

	cpAction->SetHideInConcise();

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
CDiscardAbility::CDiscardAbility(CCard* pCard)
	: CNonStackAbility(pCard, _T("Discard"), AbilityType::Discard)
{
	AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Graveyard));

	SetAbilityText(_T("discards"));
	SetHandOnly();
}

BOOL CDiscardAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;
	
	CPlayer* pPlayer = GetController();

	if (pPlayer != m_pGame->GetActivePlayer())
		return FALSE;

	// 11/2/2003: To support Spellbook card
	if (GetController()->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::NoMaximumHandSize))
		return FALSE;

	if (m_pCard->GetZone()->GetSize() <= pPlayer->GetMaxHandSize())
		return FALSE;

	if (m_pGame->IsThinking() && (pPlayer != m_pGame->GetThinkingPlayer()))	// 5/30/2002, work with CCleanUpNode::GetAbilityActions()
		return FALSE;

	return TRUE;
}

BOOL CDiscardAbility::ResolveImpl(const CAbilityAction* pAction)
{
	m_pCard->Move(m_pCard->GetOwner()->GetZoneById(ZoneId::Graveyard), GetController(), MoveType::NormalDiscard);

	return CNonStackAbility::ResolveImpl(pAction);
}

//____________________________________________________________________________
//
CCreateTempTriggeredAbilityAbility::CCreateTempTriggeredAbilityAbility(CCard* pCard, 
											 LPCTSTR strActionName,
											 CAbility* pAbilityToRemove,
											 CPlayer* pTriggeredPlayer,
											 PreRemoveAbilityCallback preRemoveAbilityCallback)
	: CNonStackAbility(pCard, _T(""), AbilityType::Triggered)
	, m_pAbilityToRemove(pAbilityToRemove)
	, m_pTriggeredPlayer(pTriggeredPlayer)
	, m_strActionName(strActionName)
	, m_PreRemoveAbilityCallback(preRemoveAbilityCallback)
{
	ATLASSERT(pAbilityToRemove);

	SetPlayableFrom(ZoneId::Battlefield | ZoneId::_Effects);
}

void CCreateTempTriggeredAbilityAbility::Create(CCard* pTriggerCard,
												CCreateTempTriggeredAbilityAbility::CreateAbilityCallback callback, 
												CPlayer* pPlayer, 
												CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback preRemoveAbilityCallback)
{
	counted_ptr<CAbility> cpTemporaryAbility(callback());
	cpTemporaryAbility->DefineGameClassID();
	cpTemporaryAbility->SetAbilityType((cpTemporaryAbility->GetAbilityType() & AbilityType::_ManaAbilityMask) | AbilityType::Triggered);
	cpTemporaryAbility->SetMaxTurnUsageCount(1);

	CString strActionName;
	strActionName.Format(_T("finishes with triggered ability of %s"), pTriggerCard->GetCardName());

	counted_ptr<CCreateTempTriggeredAbilityAbility> cpRemoveAbility(
		::CreateObject<CCreateTempTriggeredAbilityAbility>(
			cpTemporaryAbility->GetCard(),
			strActionName,
			cpTemporaryAbility.GetPointer(),
			pPlayer,
			preRemoveAbilityCallback));

	cpRemoveAbility->SetPlayableFrom(ZoneId::Battlefield | ZoneId::_Effects);

	counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
		::CreateObject<CCreateTempTriggeredAbilityTrait>(
			cpTemporaryAbility.GetPointer(), cpRemoveAbility.GetPointer()));

	cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());

	cpTemporaryAbility->SetPlayableFrom(ZoneId::Battlefield | ZoneId::_Effects);
	cpTemporaryAbility->GetCard()->AddAbility(cpTemporaryAbility.GetPointer());
	cpTemporaryAbility->GetCard()->AddAbility(cpRemoveAbility.GetPointer());

	pTriggerCard->GetGame()->SetTriggeredResolutionPlayer(pPlayer);
}

CSpell* CCreateTempTriggeredAbilityAbility::Create(CCard* pTriggerCard, CCard* pOnCard, CPlayer* pPlayer, LPCTSTR strManaCost,
												CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback preRemoveAbilityCallback)
{
	counted_ptr<CSpell> cpTemporaryAbility(::CreateObject<CSpell>(pOnCard, AbilityType::Triggered, strManaCost, FALSE));
	cpTemporaryAbility->DefineGameClassID();
	cpTemporaryAbility->SetToActivatedAbility();
	cpTemporaryAbility->SetMaxTurnUsageCount(1);

	CString strActionName;
	strActionName.Format(_T("finishes with triggered ability of %s"), pTriggerCard->GetCardName());

	counted_ptr<CCreateTempTriggeredAbilityAbility> cpRemoveAbility(
		::CreateObject<CCreateTempTriggeredAbilityAbility>(
			cpTemporaryAbility->GetCard(),
			strActionName,
			cpTemporaryAbility.GetPointer(),
			pPlayer,
			preRemoveAbilityCallback));
	
	cpRemoveAbility->SetPlayableFrom(ZoneId::Battlefield | ZoneId::_Effects);

	counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
		::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility.GetPointer(), 
		cpRemoveAbility.GetPointer()));

	cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());
	cpTemporaryAbility->SetPlayableFrom(ZoneId::Battlefield | ZoneId::_Effects);
	cpTemporaryAbility->GetCard()->AddAbility(cpTemporaryAbility.GetPointer());
	cpTemporaryAbility->GetCard()->AddAbility(cpRemoveAbility.GetPointer());

	pTriggerCard->GetGame()->SetTriggeredResolutionPlayer(pPlayer);

	return cpTemporaryAbility.GetPointer();
}

void CCreateTempTriggeredAbilityAbility::Create(CCard* pTriggerCard, 
												CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2 callback, 
												CPlayer* pPlayer, LPCTSTR strManaCost,
												CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback preRemoveAbilityCallback)
{
	counted_ptr<CSpell> cpTemporaryAbility(::CreateObject<CSpell>(callback(), AbilityType::Triggered, strManaCost, FALSE));
	cpTemporaryAbility->DefineGameClassID();
	cpTemporaryAbility->SetToActivatedAbility();
	cpTemporaryAbility->SetMaxTurnUsageCount(1);

	CString strActionName;
	strActionName.Format(_T("finishes with triggered ability of %s"), pTriggerCard->GetCardName());

	counted_ptr<CCreateTempTriggeredAbilityAbility> cpRemoveAbility(
		::CreateObject<CCreateTempTriggeredAbilityAbility>(
			cpTemporaryAbility->GetCard(),
			strActionName,
			cpTemporaryAbility.GetPointer(),
			pPlayer,
			preRemoveAbilityCallback));

	cpRemoveAbility->SetPlayableFrom(ZoneId::Battlefield | ZoneId::_Effects);

	counted_ptr<CCreateTempTriggeredAbilityTrait> cpCreateTemporaryAbilityTrait(
		::CreateObject<CCreateTempTriggeredAbilityTrait>(cpTemporaryAbility.GetPointer(), 
		cpRemoveAbility.GetPointer()));

	cpTemporaryAbility->CTraitContainer::Add(cpCreateTemporaryAbilityTrait.GetPointer());
	cpTemporaryAbility->SetPlayableFrom(ZoneId::Battlefield | ZoneId::_Effects);
	cpTemporaryAbility->GetCard()->AddAbility(cpTemporaryAbility.GetPointer());
	cpTemporaryAbility->GetCard()->AddAbility(cpRemoveAbility.GetPointer());

	pTriggerCard->GetGame()->SetTriggeredResolutionPlayer(pPlayer);
}

CActionContainer* CCreateTempTriggeredAbilityAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	ATLASSERT(m_pAbilityToRemove->GetCard()->FindAbility(m_pAbilityToRemove) != -1);

	CActionContainer* pActionContainer = CNonStackAbility::GetAbilityActions(bIncludeTricks, FALSE);
	if (!pActionContainer)
		return NULL;

	if (!bSetNames)
		return pActionContainer;

	for (int i = 0; i < pActionContainer->GetSize(); ++i)
	{
		CNonStackAbilityAction* pAction = (CNonStackAbilityAction*)pActionContainer->GetAt(i).GetPointer();

		pAction->SetActionName(m_strActionName);
	}

	return pActionContainer;
}

BOOL CCreateTempTriggeredAbilityAbility::ResolveImpl(const CAbilityAction* pAction)
{
	m_pGame->SetTriggeredResolutionPlayer(NULL);

	ATLASSERT(m_pAbilityToRemove);
	if (m_pAbilityToRemove)
	{
		CCard* pCard = m_pAbilityToRemove->GetCard();

		if (!m_PreRemoveAbilityCallback.empty())
			m_PreRemoveAbilityCallback(pCard, m_pTriggeredPlayer);

		pCard->RemoveAbility(m_pAbilityToRemove);
	}	

	BOOL bResult = CNonStackAbility::ResolveImpl(pAction);

	GetCard()->RemoveAbility(this);

	return bResult;
}

//____________________________________________________________________________
//
CMorphAbility::CMorphAbility(CCard* pCard)
	: CNonStackAbility(pCard, _T("UnMorph"), AbilityType::ManaSource)
{	
	
	// Lands are still consider to be 'played' under M10
	SetAbilityText(_T("UnMorph")); // http://www.wizards.com/magic/magazine/article.aspx?x=mtg/daily/feature/42a
	this->SetInPlayOnly();
}

ZoneId CMorphAbility::GetPlayableFrom() const
{
	ZoneId zoneId = __super::GetPlayableFrom();
	return ZoneId::Battlefield;
}

BOOL CMorphAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	CPlayer* pPlayer = GetController();

	if (!CNonStackAbility::IsPlayable(bIncludeTricks, bAssumeSufficientMana))
		return FALSE;

	if (pPlayer != m_pGame->GetActivePlayer())
		return FALSE;

	return TRUE;
}

BOOL CMorphAbility::ResolveImpl(const CAbilityAction* pAction)
{
	const CNonStackAbilityAction* pAction1 = (const CNonStackAbilityAction*)pAction;

	(reinterpret_cast<CMorphCreatureCard*>(m_pCard))->UnMorph();

	//CMainNode* pMainNode = (CMainNode*)(pCaster->GetGraph()->GetNodeById(NodeId::MainPhaseStep));
	//MainNode->IncreaseLandCount();

	return CNonStackAbility::ResolveImpl(pAction);
}

counted_ptr<CAbilityAction>  CMorphAbility::CreateAction() const
{
	counted_ptr<CAbilityAction> cpAction = CNonStackAbility::CreateAction();

	cpAction->SetBasicNonStackAction();

	cpAction->SetValue(ContextValue(m_pCard->GetCardType().Get()));

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//
CNonStackManaConsumptionAbility::CNonStackManaConsumptionAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType,
								   LPCTSTR strManaCost)
	: CNonStackAbility(pCard, strAbilityName, abilityType)
{
	m_Cost.SetManaCost(strManaCost);
}

counted_ptr<CAbilityAction> CNonStackManaConsumptionAbility::CreateAction() const
{
	counted_ptr<CNonStackManaConsumptionAbilityAction> cpAction = ::CreateObject<CNonStackManaConsumptionAbilityAction>(m_pGame);
	ATLASSERT(cpAction);
	
	cpAction->SetAbility(const_cast<CNonStackManaConsumptionAbility*>(this));
	cpAction->SetScore(ActionScore::ConsumeMana);

	return cpAction.GetPointer();
}

//____________________________________________________________________________
//