#include "stdafx.h"

#define new DEBUG_NEW

//____________________________________________________________________________
//

USHORT CAbility::s_uNextInstanceID = 1;

CAbility::CAbility(CCard* pCard, LPCTSTR strAbilityName, AbilityType abilityType)
	: m_pGame(pCard->GetGame())
	, m_cpResolutionCompletedEventSource(::CreateObject<ResolutionCompletedEventSource>(VAR_NAME(m_cpResolutionCompletedEventSource)))
	, m_pCard(pCard)
	, m_pController(NULL)
	, m_strAbilityName(strAbilityName)
	, m_AbilityType(abilityType)
	, m_PlayableFrom(ZoneId::Null)
	, m_bUseOnlyInOpponentsTurn(FALSE)
	, m_bUseOnlyInYourTurn(FALSE)
	, m_dwTurnUsageCount(0)
	, m_dwTurnResolveCount(0)
	, m_dwMaxTurnUsageCount(0)
	, m_pComputerUsage(NULL)
	, m_bEnabled(TRUE)
	, m_Cost(pCard->GetGame())
	, m_bSkipPlayableCheck(FALSE)
	, m_pMorph(FALSE)
{
	SetUniqueChildAbilityName();

	m_uInstanceID = s_uNextInstanceID++;

	m_Cost.SetAbility(this);
}

CAbility::~CAbility()
{
}

SourceColor CAbility::GetSourceColor() const						
{
	return m_pCard->GetSourceColor(); 
}

void CAbility::SetAbilityName(LPCTSTR strAbilityName)
{
	m_strAbilityName = strAbilityName;
	SetUniqueChildAbilityName();
}

CPlayer* CAbility::GetController() const						
{ 
	return m_pController ? m_pController : m_pCard->GetController(); 
}

ULONG CAbility::GetCardAbilityClassID() const		
{
	return m_pCard->GetGameClassID() << 16 | GetGameClassID(); 
} 

BOOL CAbility::IsSpell() const										
{
	return m_pCard->IsSpell(this);
}

void CAbility::SetInPlayOnly()
{
	m_PlayableFrom = ZoneId::Battlefield;
	if (m_pGame)
		m_pGame->UpdateAbility(this);
}

BOOL CAbility::GetInPlayOnly() const								
{
	return GetPlayableFrom() == ZoneId::Battlefield; 
}

void CAbility::SetHandOnly()
{
	m_PlayableFrom = ZoneId::Hand;
	if (m_pGame)
		m_pGame->UpdateAbility(this);
}

BOOL CAbility::GetHandOnly() const								
{
	return GetPlayableFrom() == ZoneId::Hand; 
}

void CAbility::SetGraveyardOnly()
{
	m_PlayableFrom = ZoneId::Graveyard;
	if (m_pGame)
		m_pGame->UpdateAbility(this);
}

void CAbility::SetPlayableFrom(ZoneId playableFrom)			
{ 
	m_PlayableFrom = playableFrom; 
	if (m_pGame)
		m_pGame->UpdateAbility(this);
}

void CAbility::SetAddPlayableFromCommanderZone()			
{ 
	m_PlayableFrom  |= ZoneId::_Effects; 
}

void CAbility::SetRemovePlayableFromCommanderZone()			
{ 
	m_PlayableFrom  &= ~ZoneId::_Effects; 
}

void CAbility::SetUseInSpecificNode(NodeId nodeId, BOOL bOpponentsTurnOnly, BOOL bYourTurnOnly)
{
	m_UseOnlyInNode = nodeId;
	m_bUseOnlyInOpponentsTurn = bOpponentsTurnOnly;
	m_bUseOnlyInYourTurn = bYourTurnOnly;
	if (m_pGame)
		m_pGame->UpdateAbility(this);
}

#if 0	// According to rec.games.trading-cards.magic.rules, an ability's color is determined by the cards spell color
		// Re-implemented in CAbility::GetSourceColor() and CCard::GetSourceColor() (new)
/*
void CAbility::SetManaCost(LPCTSTR strManaCostText)
{
	__super::SetManaCost(strManaCostText);

	// Determine source type by consumed mana colors

	DWORD dwSourceType = 0;

	if (m_pManaCost->GetCost(CManaCost::Color::Blue))
		dwSourceType |= CDamagePrevention::SourceColor::BlueSource;

	if (m_pManaCost->GetCost(CManaCost::Color::Black))
		dwSourceType |= CDamagePrevention::SourceColor::BlackSource;		

	if (m_pManaCost->GetCost(CManaCost::Color::Red))
		dwSourceType |= CDamagePrevention::SourceColor::RedSource;

	if (m_pManaCost->GetCost(CManaCost::Color::Green))
		dwSourceType |= CDamagePrevention::SourceColor::GreenSource;

	if (m_pManaCost->GetCost(CManaCost::Color::White))
		dwSourceType |= CDamagePrevention::SourceColor::WhiteSource;

	SetSourceType(dwSourceType);		// For damage prevention supports
}
*/
#endif

#if 1	// 12/6/2003: Implemented in CCostBase
void CAbility::AddTapCost()
{
	m_Cost.AddTapThisCardCost(m_pCard);

	if ((m_pCard->GetCardType() & CardType::Creature).Any())
	{
		counted_ptr<CBOTControllerTraitTap> cpTrait1(::CreateObject<CBOTControllerTraitTap>(this));
		CTraitContainer::Add(cpTrait1.GetPointer());
	}
}
#else
/*
void CAbility::AddTapCost()
{
	CTapRestrictedTrait* pTrait1 = new CTapRestrictedTrait(this);
	ATLASSERT(pTrait1);

	AddTrait(pTrait1);
	pTrait1->Release();

	if (m_pCard->GetCardType() & CardType::Creature)
	{
		CBOTControllerTrait* pTrait1 = new CBOTControllerTrait(this);
		ATLASSERT(pTrait1);

		AddTrait(pTrait1);
		pTrait1->Release();
	}

	SetAbilityName(_T("Tap"));
	SetAbilityText(_T("taps"));

	if (!m_strStaticCostText.IsEmpty())
		m_strStaticCostText += _T(", ");
	m_strStaticCostText += _T("{T}");
}
*/
#endif

#if 1	// 12/6/2003: Implemented in CCostBase
void CAbility::AddUntapCost()
{
	m_Cost.AddUntapThisCardCost(m_pCard);

	if ((m_pCard->GetCardType() & CardType::Creature).Any())
	{
		counted_ptr<CBOTControllerTraitTap> cpTrait1(::CreateObject<CBOTControllerTraitTap>(this));
		CTraitContainer::Add(cpTrait1.GetPointer());
	}
}
#else
/*
void CAbility::AddUntapCost()
{
	CUntapRestrictedTrait* pTrait1 = new CUntapRestrictedTrait(this);
	ATLASSERT(pTrait1);

	AddTrait(pTrait1);
	pTrait1->Release();

	if (m_pCard->GetCardType() & CardType::Creature)
	{
		CBOTControllerTrait* pTrait1 = new CBOTControllerTrait(this);
		ATLASSERT(pTrait1);

		AddTrait(pTrait1);
		pTrait1->Release();
	}

	SetAbilityName(_T("Untap"));
	SetAbilityText(_T("untaps"));

	if (!m_strStaticCostText.IsEmpty())
		m_strStaticCostText += _T(", ");
	m_strStaticCostText += _T("Untap");
}
*/
#endif


#if 1	// 12/6/2003: Implemented in CCostBase
void CAbility::AddSacrificeCost()
{
	m_Cost.AddSacrificeThisCardCost(m_pCard);
}
#else
/*
void CAbility::AddSacrificeCost()
{
	CSacrificeTrait* pTrait = new CSacrificeTrait(this);
	AddTrait(pTrait);
	pTrait->Release();

	if (!m_strStaticCostText.IsEmpty())
		m_strStaticCostText += _T(", ");

	m_strStaticCostText += _T("Sacrifice ") + m_pCard->GetCardName();
}
*/
#endif

#if 1	// 12/6/2003: Implemented in CCostBase
void CAbility::AddExileCost()
{
	m_Cost.AddExileThisCardCost(m_pCard);
}
#else
/*
void CAbility::AddExileCost()
{
	CExileTrait* pTrait = new CExileTrait(this);
	AddTrait(pTrait);
	pTrait->Release();

	if (!m_strStaticCostText.IsEmpty())
		m_strStaticCostText += _T(", ");

	m_strStaticCostText += _T("Exile ") + m_pCard->GetCardName();
}
*/
#endif


#if 1	// 12/6/2003: Implemented in CCostBase
void CAbility::AddPayLifeDeltaCost(Life nLifeDelta)
{
	m_Cost.SetPlayerLifeCost(m_pCard, nLifeDelta);
}
#else
/*
void CAbility::AddPayLifeCost(Life nLifeDelta)
{
	CPayLifeTrait* pTrait = new CPayLifeTrait(this, nLifeDelta);
	AddTrait(pTrait);
	pTrait->Release();

	if (!m_strStaticCostText.IsEmpty())
		m_strStaticCostText += _T(", ");

	CString strTemp;
	strTemp.Format(_T("Pay %d life"), -nLifeDelta);
	m_strStaticCostText += strTemp;
}
*/
#endif

void CAbility::AddDiscardCost()
{
	m_Cost.AddDiscardThisCardCost(m_pCard);
}

BOOL CAbility::IsPlayable(BOOL bIncludeTricks, BOOL bAssumeSufficientMana) const
{
	if (!m_bEnabled)
		return FALSE;

	if (m_dwMaxTurnUsageCount)
		if (m_dwMaxTurnUsageCount <= m_dwTurnUsageCount)
			return FALSE;

	if (!(m_pCard->GetZoneId() & GetPlayableFrom()).Any() && !(m_pCard->GetCardKeyword()->HasFreecast() && IsSpell() && m_pCard->GetZoneId() != ZoneId::Stack))
		return FALSE;

	CPlayer* pController = GetController();

	if (IsSpell() && pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::GrafdiggersCage) &&
		(m_pCard->GetZoneId() == ZoneId::Library || m_pCard->GetZoneId() == ZoneId::Graveyard))
			return FALSE;

	if (m_pGame->GetPriorityPlayer() != pController && !(m_pCard->GetCardKeyword()->HasFreecast() && IsSpell()))
		return FALSE;

	AbilityType abilityType(GetAbilityType());
	if (IsSpell() && (m_pCard->GetCardKeyword()->HasFlash() || m_pCard->GetCardKeyword()->HasPflash()))
		abilityType |= AbilityType::Instant;

	if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::InstantEquip) && ((m_AbilityType & AbilityType::Equipment) == AbilityType::Equipment))
		abilityType |= AbilityType::Instant;

	if (!m_pGame->GetStack().IsValidAbilityType(abilityType, true) && !(m_pCard->GetCardKeyword()->HasFreecast() && IsSpell()))
		return FALSE;

	if (m_bUseOnlyInOpponentsTurn &&
		(m_pGame->GetActivePlayer() == pController))
		return FALSE;

	if (m_bUseOnlyInYourTurn &&
		(m_pGame->GetActivePlayer() != pController))
		return FALSE;

	if (m_UseOnlyInNode.Any() &&
		!(m_pGame->GetCurrentNode()->GetNodeId() & m_UseOnlyInNode).Any())
		return FALSE;

	if (IsSpell() && pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::TeferiEffect) && !m_pCard->GetCardKeyword()->HasStormCopy() && 
		(m_pGame->GetStack().GetStackSize() || !(m_pGame->GetActivePlayer() == pController && m_pGame->GetCurrentNode()->GetNodeId() == NodeId::MainPhaseStep)))
		return FALSE;

	if (IsSpell() && pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::BasandraEffect) && !m_pCard->GetCardKeyword()->HasStormCopy() && 
		(m_pGame->GetCurrentNode()->GetNodeId() & NodeId::_CombatPhase).Any())
		return FALSE;

	if (IsSpell() && pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::HandToHandEffect) && !m_pCard->GetCardKeyword()->HasStormCopy() && 
		m_pCard->GetCardType().IsInstant() && (m_pGame->GetCurrentNode()->GetNodeId() & NodeId::_CombatPhase).Any())
		return FALSE;

	if ((m_AbilityType & AbilityType::Activated) == AbilityType::Activated)
	{
		/* http://groups.google.com/group/rec.games.trading-cards.magic.rules/browse_thread/thread/9894e9541d0fef8b/fef014010ed039f5#fef014010ed039f5
		if ((m_pCard->GetCardType() & CardType::Artifact) &&
			m_pCard->GetOrientation()->IsTapped())
			return FALSE;
		*/

		std::set<const CCardFilter*> cardFilters;
		if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities, cardFilters))
		{
			for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
				if ((*i)->IsCardIncluded(m_pCard))
					return FALSE;
		}

		if (m_pCard->GetCardKeyword()->HasDetain())
			return FALSE;

		if ((m_AbilityType & AbilityType::ManaSource) != AbilityType::ManaSource)
		{
			// Not a mana source

			if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities2, cardFilters))
			{
				for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
					if ((*i)->IsCardIncluded(m_pCard))
						return FALSE;
			}
			if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::HandToHandEffect) && (m_pGame->GetCurrentNode()->GetNodeId() & NodeId::_CombatPhase).Any())
				return FALSE;
		}
	}

	if ((m_AbilityType & AbilityType::AsSorcery) == AbilityType::AsSorcery)
	{
		std::set<const CCardFilter*> cardFilters;
		if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities, cardFilters))
		{
			for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
				if ((*i)->IsCardIncluded(m_pCard))
					return FALSE;
		}

		if (m_pCard->GetCardKeyword()->HasDetain())
			return FALSE;

		if ((m_AbilityType & AbilityType::ManaSource) != AbilityType::ManaSource)
		{
			// Not a mana source

			if (pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantPlayActivatedAbilities2, cardFilters))
			{
				for (std::set<const CCardFilter*>::const_iterator i = cardFilters.begin(); i != cardFilters.end(); ++i)
					if ((*i)->IsCardIncluded(m_pCard))
						return FALSE;
			}
		}
	}

	if (!IsPlayableWithTrait(bIncludeTricks))
		return FALSE;

	if (!m_Cost.IsPlayable(pController, bIncludeTricks, bAssumeSufficientMana))
	{
#ifdef _DEBUG
		if (m_Cost.GetManaCost().GetTotal() && !(m_AbilityType & AbilityType::_ConsumeMana).Any() && !(m_AbilityType & AbilityType::_FilterMana).Any())
			ATLASSERT(false); // add AbilityType::_ConsumeMana to ability type
#endif

		if (IsSpell() && (m_pCard->GetCardFlag()->Get() & CardFlag::PaymentReplacement).Any())
		{
			bool found = false;
			if (m_pCard->GetCardFlag()->GetData(CardFlag::PaymentReplacement) == 1)   // Omniscence
			{
				CCost_ pCost = m_Cost;
				pCost.RemoveManaCost(pCost.GetManaCost());
				pCost.RemoveExtraManaCost();
				if (pCost.IsPlayable(pController, bIncludeTricks, bAssumeSufficientMana))
					found = true;
			}
			if (m_pCard->GetCardFlag()->GetData(CardFlag::PaymentReplacement) == 2)  // Fist of Suns 
			{
				CCost_ pCost = m_Cost;
				pCost.RemoveManaCost(pCost.GetManaCost());
				pCost.RemoveExtraManaCost();
				pCost.AddManaCost(BLUE_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT);
				if (pCost.IsPlayable(pController, bIncludeTricks, bAssumeSufficientMana))  
					found = true;
			}
			if (m_pCard->GetCardFlag()->GetData(CardFlag::PaymentReplacement) == 3)   // Dreamhalls
			{
				CCost_ pCost = m_Cost;
				pCost.RemoveManaCost(pCost.GetManaCost());
				pCost.RemoveExtraManaCost();
				CCardFilter m_CardFilter_temp;
				m_CardFilter_temp.AddComparer(new CardSharingCardColorComparer(m_pCard));
				m_CardFilter_temp.AddNegateComparer(new SpecificCardComparer(m_pCard));
				pCost.AddDiscardCardCost(1, &m_CardFilter_temp);
				if (pCost.IsPlayable(pController, bIncludeTricks, bAssumeSufficientMana))
					found = true;
			}

			if (!found) return FALSE;
		}
		else
		return FALSE;
	}

	if (!bIncludeTricks)	// 9/22/2002, User should be able to override usage patterns by choosing 'All Actions'
	{
		CPlayer* pPriorityPlayer = m_pGame->GetPriorityPlayer();

		if (pPriorityPlayer->IsComputer())
			return !m_pComputerUsage || m_pComputerUsage->IsAbilityUsable(this);

		CUsageAbility* pUsageAbility = GetPlayerUsage(pPriorityPlayer);
		if (!pUsageAbility)
		{
			// Use default usage pattern if found
			if (m_pGame->IsThinking())
				return !m_pComputerUsage || m_pComputerUsage->IsAbilityUsable(this);

			return TRUE;
		}

		if (CUsagePattern::GetInstance()->IsOverriden(m_pGame->GetCurrentNode()))
			return TRUE;

		return pUsageAbility->IsAbilityUsable(this);
	}

	return TRUE;
}

counted_ptr<CAbilityAction> CAbility::CreateAction() const
{
	counted_ptr<CAbilityAction> cpAction = ::CreateObject<CAbilityAction>(m_pGame);
	cpAction->SetAbility(const_cast<CAbility*>(this));
	return cpAction.GetPointer();
}

CActionContainer* CAbility::GetAbilityActions(BOOL bIncludeTricks, BOOL bSetNames)
{
	if (!m_bSkipPlayableCheck && !IsPlayable(bIncludeTricks, FALSE))		
		return NULL;

	CActionContainer* pActionContainer = new CActionContainer;
	ATLASSERT(pActionContainer);

	counted_ptr<CAbilityAction> cpAbilityAction = (CAbilityAction*)CreateAction().GetPointer();
	ATLASSERT(cpAbilityAction);

	LPCTSTR cardname = m_pCard->GetCardName();

	if (m_pMorph)
		cardname = _T("Morph");

	if (bSetNames)
	{
		CString strActionName;
		
		if (m_strAbilityText.Find(_T('%')) == -1)
			strActionName = m_strAbilityText + _T(" ") + cardname;
		else
			strActionName.Format(m_strAbilityText, cardname);

		cpAbilityAction->SetActionName(strActionName);
		cpAbilityAction->SetCostName(GetStaticCostText());	
	}

	if (bIncludeTricks)
	{
		if (!IsPlayableWithTrait(FALSE))	// If we reached here, it means that IsPlayableWithTrait(TRUE) returned TRUE.
											// If IsPlayableWithTrait(FALSE) returns FALSE, it means that this is a trick action perceived by traits.
			cpAbilityAction->SetTrick();		// As of 9/26/2003, there are no trick traits.
		else
		{
			CPlayer* pPriorityPlayer = m_pGame->GetPriorityPlayer();
		
			if (pPriorityPlayer->IsComputer())
			{
				if (m_pComputerUsage && !m_pComputerUsage->IsAbilityUsable(this))
					cpAbilityAction->SetTrick();
			}
			else
			{
				CUsageAbility* pUsageAbility = GetPlayerUsage(pPriorityPlayer);

				if (pUsageAbility)
				{
					if (!CUsagePattern::GetInstance()->IsOverriden(m_pGame->GetCurrentNode()))
						if (!pUsageAbility->IsAbilityUsable(this))
							cpAbilityAction->SetTrick();
				}
				else
					if (m_pGame->IsThinking() && m_pComputerUsage && !m_pComputerUsage->IsAbilityUsable(this))
						cpAbilityAction->SetTrick();
			}
		}
	}

	cpAbilityAction->SetValue(m_ActionValue);

	pActionContainer->Add(cpAbilityAction.GetPointer());

	CPlayer* pByPlayer = GetController();

	CostConfigurationArray configurations;

	configurations.clear();


	if ((!m_Cost.GetConfigurations(pByPlayer, bIncludeTricks, bSetNames, configurations))||
		!configurations.size())
	{
		bool found = false;

		if (IsSpell() && (m_pCard->GetCardFlag()->Get() & CardFlag::PaymentReplacement).Any())
		{
			found = true;
			if (m_pCard->GetCardFlag()->GetData(CardFlag::PaymentReplacement) == 1)   // Omniscence // Also doesn't work for now
			{
				CCost_ pCost = m_Cost;
				pCost.RemoveManaCost(pCost.GetManaCost());
				pCost.RemoveExtraManaCost();
				
				CostConfigurationArray configurations1;
				if (!pCost.GetConfigurations(pByPlayer, bIncludeTricks, bSetNames, configurations1) ||
					!configurations1.size())
					found = false;
				else
				{
						for (CostConfigurationArray::size_type j = 0; j < configurations1.size(); ++j)
							configurations.push_back(configurations1[j]);

				}
				
			}
			if (m_pCard->GetCardFlag()->GetData(CardFlag::PaymentReplacement) == 2)  // Fist of Suns // Can't understand why it adds 0 mana cast
			{
				CCost_ pCost = m_Cost;
				pCost.RemoveManaCost(pCost.GetManaCost());
				pCost.RemoveExtraManaCost();
				pCost.SetManaCost(BLUE_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT);
			   	
				CostConfigurationArray configurations1;
				if (!pCost.GetConfigurations(pByPlayer, bIncludeTricks, bSetNames, configurations1) ||
					!configurations1.size())
					found = false;
				else
				{
						for (CostConfigurationArray::size_type j = 0; j < configurations1.size(); ++j)
							configurations.push_back(configurations1[j]);

				}
			}
			if (m_pCard->GetCardFlag()->GetData(CardFlag::PaymentReplacement) == 3)   // Dreamhalls
			{
				CCost_ pCost = m_Cost;
				pCost.RemoveManaCost(pCost.GetManaCost());
				pCost.RemoveExtraManaCost();
				CCardFilter m_CardFilter_temp;
				m_CardFilter_temp.AddComparer(new CardSharingCardColorComparer(m_pCard));
				m_CardFilter_temp.AddNegateComparer(new SpecificCardComparer(m_pCard));
				pCost.AddDiscardCardCost(1, &m_CardFilter_temp);
			    
				CostConfigurationArray configurations1;
				if (!pCost.GetConfigurations(pByPlayer, bIncludeTricks, bSetNames, configurations1) ||
					!configurations1.size())
					found = false;
				else
				{
						for (CostConfigurationArray::size_type j = 0; j < configurations1.size(); ++j)
							configurations.push_back(configurations1[j]);

				}

			}

			if (configurations.size()) found = true;
		}

		if (!found) return pActionContainer;
	}
	else
	{
		if (IsSpell() && (m_pCard->GetCardFlag()->Get() & CardFlag::PaymentReplacement).Any())
		{
			bool found = false;
			if (m_pCard->GetCardFlag()->GetData(CardFlag::PaymentReplacement) == 1)   // Omniscence   // Also doesn't work for now
			{
				CCost_ pCost = m_Cost;
				pCost.RemoveManaCost(pCost.GetManaCost());
				pCost.RemoveExtraManaCost();
				
				CostConfigurationArray configurations1;
				if (!pCost.GetConfigurations(pByPlayer, bIncludeTricks, bSetNames, configurations1) ||
					!configurations1.size())
					found = false;
				else
				{
						for (CostConfigurationArray::size_type j = 0; j < configurations1.size(); ++j)
							configurations.push_back(configurations1[j]);

				}
				
			}
			if (m_pCard->GetCardFlag()->GetData(CardFlag::PaymentReplacement) == 2)  // Fist of Suns   // Can't understand why it adds 0 mana cast
			{
				CCost_ pCost = m_Cost;
				pCost.RemoveManaCost(pCost.GetManaCost());
				pCost.RemoveExtraManaCost();
				pCost.SetManaCost(BLUE_MANA_TEXT RED_MANA_TEXT GREEN_MANA_TEXT WHITE_MANA_TEXT BLACK_MANA_TEXT);
			   	
				CostConfigurationArray configurations1;
				if (!pCost.GetConfigurations(pByPlayer, bIncludeTricks, bSetNames, configurations1) ||
					!configurations1.size())
					found = false;
				else
				{
						for (CostConfigurationArray::size_type j = 0; j < configurations1.size(); ++j)
							configurations.push_back(configurations1[j]);

				}
			}
			if (m_pCard->GetCardFlag()->GetData(CardFlag::PaymentReplacement) == 3)   // Dreamhalls
			{
				CCost_ pCost = m_Cost;
				pCost.RemoveManaCost(pCost.GetManaCost());
				pCost.RemoveExtraManaCost();
				CCardFilter m_CardFilter_temp;
				m_CardFilter_temp.AddComparer(new CardSharingCardColorComparer(m_pCard));
				m_CardFilter_temp.AddNegateComparer(new SpecificCardComparer(m_pCard));
				pCost.AddDiscardCardCost(1, &m_CardFilter_temp);
			    
				CostConfigurationArray configurations1;
				if (!pCost.GetConfigurations(pByPlayer, bIncludeTricks, bSetNames, configurations1) ||
					!configurations1.size())
					found = false;
				else
				{
						for (CostConfigurationArray::size_type j = 0; j < configurations1.size(); ++j)
							configurations.push_back(configurations1[j]);

				}

			}
		}
	}
		

	CActionContainer* pActionContainer1 = new CActionContainer;
	ATLASSERT(pActionContainer1);

	// [Cost configurations] X [Action container from CAbility] = [New action container]

	for (CostConfigurationArray::size_type j = 0; j < configurations.size(); ++j)
	{
		CCostConfigEntry& costConfig = configurations[j];

		for (int i = 0; i < pActionContainer->GetSize(); ++i)
		{
			counted_ptr<CAbilityAction> cpAction1 = (CManaConsumptionAbilityAction*)CreateAction().GetPointer();
			ATLASSERT(cpAction1);

			cpAction1->Copy((CManaConsumptionAbilityAction*)pActionContainer->GetAt(i).GetPointer());
			cpAction1->SetCostConfigEntry(costConfig);

			ContextValue value(m_ActionValue);

			int nExtraValue = m_Cost.GetExtraValue(costConfig);
			if (nExtraValue)
			{
				ContextValue extraValue;
				extraValue.SetTo(nExtraValue);

				value += m_ExtraActionValueVector * extraValue;	
			}

			cpAction1->SetValue(value);

			if (bSetNames)
				cpAction1->AppendToCostName(costConfig.GetCostName());
			pActionContainer1->Add(cpAction1.GetPointer());
		}
	}

	delete pActionContainer;

	return pActionContainer1;
}

BOOL CAbility::ConfirmTargetAndPayCost(const CAbilityAction* pAction)
{
	++m_dwTurnUsageCount;

	BOOL bResult1 = TRUE;
	for (int i = 0; i < CTraitContainer::GetSize(); ++i)
		if (!CTraitContainer::GetAt(i)->PayCost())
			bResult1 = FALSE;

	const CAbilityAction* pAction1 = (const CAbilityAction*)pAction;

	BOOL bResult2 = pAction1->GetCostConfigEntry().PayCost(pAction1->GetController());

	return bResult1 && bResult2;
}

/* Disabled
counted_ptr<CAction> CAbility::TransformResolutionAction(const CAction* pAction, BOOL& bCountered)
{
	bCountered = FALSE;
	return NULL;
}
*/

BOOL CAbility::ResolveImpl(const CAbilityAction* pAction)
{
	m_ResolutionModifier.CPlayerModifiers::ApplyTo(pAction->GetController());
	m_ResolutionModifier.CCardModifiers::ApplyTo(GetCard());
	if (GetCard()->GetCardType().IsCreature())
		m_ResolutionModifier.CCreatureModifiers::ApplyTo((CCreatureCard*)GetCard());

	for (int i = 0; i < CTraitContainer::GetSize(); ++i)
		CTraitContainer::GetAt(i)->Resolve(); // result here is not used to affect the overall resolution result

	return TRUE;
}

BOOL CAbility::Resolve(const CAbilityAction* pAction, BOOL bCountered)
{
	if (bCountered)
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	/* Disabled because there's nothing in Magic that should do this.
	AbilityType abilityType(GetAbilityType());
	if (IsSpell() && (m_pCard->GetCardKeyword()->HasFlash() || m_pCard->GetCardKeyword()->HasPflash() || m_pCard->GetCardKeyword()->HasFreecast()))
		abilityType |= AbilityType::Instant;

	if (!m_pGame->GetStack().IsValidAbilityType(abilityType, false) && !m_pCard->GetCardKeyword()->HasFreecast())
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	} */

	// Before resolution callback

	if (!m_ResolutionStartedCallback.empty())
	{
		// Clone a writable action object

		counted_ptr<CAbilityAction> cpAction((CAbilityAction*)(pAction->Clone().GetPointer()));

		if (!m_ResolutionStartedCallback(cpAction.GetPointer()))
			return FALSE;

		return ResolveImpl(cpAction.GetPointer());
	}

	/* Disabled because no one is using this
	counted_ptr<CAction> cpTransformedAction(TransformResolutionAction(pAction, bCountered));

	if (bCountered)
	{
		LogIllegalResolution(__FUNCTION__, __FILE__, __LINE__);
		return FALSE;
	}

	BOOL bResult = ResolveImpl(cpTransformedAction.GetPointer() ?
		cpTransformedAction.GetPointer() : pAction);
	*/

	//if (m_pCard->GetCardKeyword()->HasFreecast()) m_pCard->GetCardKeyword()->RemoveFreecast(FALSE);

	return ResolveImpl(pAction);
}

void CAbility::OnResolutionCompleted(const CAbilityAction* pAction, BOOL bResolutionResult)
{
	++m_dwTurnResolveCount;
	m_cpResolutionCompletedEventSource->FireEvent(pAction, bResolutionResult);
}

void CAbility::SetUsage(CPlayer* pPlayer, CUsageAbility* pUsage)
{
	m_Usages.insert(std::make_pair(pPlayer, pUsage));

	if (pPlayer->IsComputer())
		m_pComputerUsage = pUsage;	// For optimization so no need to search map each time
}

BOOL CAbility::IsPlayableWithTrait(BOOL bIncludeTricks) const
{
	for (int i = 0; i < CTraitContainer::GetSize(); ++i)
		if (!CTraitContainer::GetAt(i)->IsPlayable(bIncludeTricks))
			return FALSE;

	return TRUE;
}

void CAbility::SetUniqueChildAbilityName()
{
	BOOL bFound;	

	int nIndex = 0;

	do
	{
		if (!nIndex)
			m_strUniqueChildAbilityName = m_strAbilityName;
		else
			m_strUniqueChildAbilityName.Format(_T("%s%d"), m_strAbilityName, nIndex);

		bFound = FALSE;

		for (int i = 0; i < m_pCard->GetAbilityCount(); ++i)
			if (m_pCard->GetAbility(i) != this &&
				!_tcsicmp(m_strUniqueChildAbilityName, m_pCard->GetAbility(i)->GetUniqueChildAbilityName()))
			{
				bFound = TRUE;
				break;
			}

		++nIndex;

	} while (bFound);
}

void CAbility::LogIllegalResolution(LPCSTR strFunction, LPCSTR strFile, int nLine) const
{
	if (!m_pGame->IsThinking())
		m_pGame->Log(_T("Part or all of the ability/spell's resolution has failed [%s() - %s(%d)]\n"), 
			AbbreviateFunctionName(CString(strFunction)), CString(strFile), nLine);
}

CUsageAbility* CAbility::GetPlayerUsage(const CPlayer* pPlayer) const
{
	PlayerUsageAbilityMap::const_iterator it = m_Usages.find(pPlayer);
	if (it != m_Usages.end())
		return it->second;

	return NULL;
}

//____________________________________________________________________________
//
CAbility* CAbilityContainer::GetAbility(LPCTSTR strAbilityName) const
{
	for (int i = 0; i < GetSize(); ++i)
	{
		CAbility* pAbility = GetAt(i).GetPointer();

		if (!_tcsicmp(pAbility->GetAbilityName(), strAbilityName))
			return pAbility;
	}

#ifdef _MY_DEBUG
	if (_tcscmp(strAbilityName, _T("Attack")) &&
		_tcscmp(strAbilityName, _T("Cast")) &&
	//	_tcscmp(strAbilityName, _T("Vanishing")) &&
		_tcscmp(strAbilityName, _T("Dredge")))
		ATLASSERT(false);
#endif

	return NULL;
}

void CAbilityContainer::RemoveAbility(LPCTSTR strAbilityName)
{
	for (int i = 0; i < GetSize(); ++i)
	{
		CAbility* pAbility = GetAt(i).GetPointer();

		if (!_tcsicmp(pAbility->GetAbilityName(), strAbilityName))
		{
			__super::RemoveAt(i);
			return;
		}
	}

	ATLASSERT(false);
}
