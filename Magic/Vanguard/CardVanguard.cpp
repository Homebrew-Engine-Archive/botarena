#include "stdafx.h"
#include "CardVanguard.h"

#define new DEBUG_NEW

#define DEFINE_CARD(C)	\
	if (!_tcslen(strCardName))	\
	{ cardClassNames.push_back(_T(#C)); }	\
	else	\
	if (!_tcsicmp(strCardName, _T(#C))) { cpCard = counted_ptr<CCard>(new C(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		// Add new card class names here:
		// For example:

		DEFINE_CARD(CCrovaxCard);
		DEFINE_CARD(CEladamriLordOfLeavesAvatarCard);
		DEFINE_CARD(CErtaiCard);
		DEFINE_CARD(CFreneticEfreetAvatarCard);
		DEFINE_CARD(CGerrardCard);
		DEFINE_CARD(CHannaCard);
		DEFINE_CARD(CMaralenOfTheMornsongAvatarCard);
		DEFINE_CARD(CMaraxusCard);
		DEFINE_CARD(CMasterOfTheWildHuntAvatarCard);
		DEFINE_CARD(COracleCard);
		DEFINE_CARD(COrcishSquattersAvatarCard);
		DEFINE_CARD(COrimCard);
		DEFINE_CARD(CRoyalAssassinAvatarCard);
		DEFINE_CARD(CSeleniaCard);
		DEFINE_CARD(CSerraCard);
		DEFINE_CARD(CTahngarthCard);
		DEFINE_CARD(CTawnosCard);
		DEFINE_CARD(CTitaniaCard)
		DEFINE_CARD(CTwoHeadedGiantOfForiysAvatarCard)
		DEFINE_CARD(CViridianZealotAvatarCard)

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
CMaraxusCard::CMaraxusCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Maraxus"), nID, 1, 2)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+1), Life(+0), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSerraCard::CSerraCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Serra"), nID, 1, 1)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+2), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COrimCard::COrimCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Orim"), nID, 0, 12)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Reach));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSeleniaCard::CSeleniaCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Selenia"), nID, 1, 7)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Vigilance));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTahngarthCard::CTahngarthCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Tahngarth"), nID, -1, 7)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::Haste));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CHannaCard::CHannaCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Hanna"), nID, 1, -5)
{
	GetCardKeyword()->AddEmblem(FALSE);

	counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new TrueCardComparer,
			_T("1")));
	ATLASSERT(cpAbility);

	cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________
//
CTitaniaCard::CTitaniaCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Titania"), nID, 2, -5)
{
	GetCardKeyword()->AddEmblem(FALSE);

	counted_ptr<CPlayExtraLandEnchantment> cpAbility( 
		::CreateObject<CPlayExtraLandEnchantment>(this, +1));

	cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

	cpAbility->SetAffectControllerCardsOnly();

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________
//
CTawnosCard::CTawnosCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Tawnos"), nID, 3, -4)
{
	GetCardKeyword()->AddEmblem(FALSE);

	counted_ptr<CPwrTghAttrEnchantment> cpAbility(
		::CreateObject<CPwrTghAttrEnchantment>(this,
			new NegateCardComparer(new CardTypeComparer(CardType::_Land | CardType::Planeswalker, false)),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
	cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
	cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
	cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

//___________________________________________________________________________
//
CEladamriLordOfLeavesAvatarCard::CEladamriLordOfLeavesAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Eladamri, Lord of Leaves Avatar"), nID, -1, +2)
{
	GetCardKeyword()->AddEmblem(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep, false));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CEladamriLordOfLeavesAvatarCard::SetTriggerContext));

	cpAbility->GetResolutionModifier().CPlayerModifiers::Add(
		new CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(GREEN_MANA_TEXT GREEN_MANA_TEXT)));
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

bool CEladamriLordOfLeavesAvatarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects) && GetGame()->IsMainPhase(true);
}

//___________________________________________________________________________
//
COrcishSquattersAvatarCard::COrcishSquattersAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Orcish Squatters Avatar"), nID, -1, -1)
{
	GetCardKeyword()->AddEmblem(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::MainPhaseStep, false));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &COrcishSquattersAvatarCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COrcishSquattersAvatarCard::BeforeResolution));

	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->AddAbilityTag(AbilityTag::Mana);

	AddAbility(cpAbility.GetPointer());
}

bool COrcishSquattersAvatarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects) && GetGame()->IsMainPhase(true);
}

bool COrcishSquattersAvatarCard::BeforeResolution(CAbilityAction* pAction)
{
	CZone* pInplay = pAction->GetAssociatedPlayer()->GetZoneById(ZoneId::Battlefield);
	int n = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pInplay->GetCardContainer());

	CManaPoolModifier modifier =  CManaPoolModifier(CManaPoolModifier::Operation::Add, CManaPool::CManaPool(_T("1")));
	for (int i = 0; i < n; ++i) modifier.ApplyTo(pAction->GetController());

	return true;
}

//___________________________________________________________________________
//
CRoyalAssassinAvatarCard::CRoyalAssassinAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Royal Assassin Avatar"), nID, -2, +0)
{
	GetCardKeyword()->AddEmblem(FALSE);

	typedef
		TTriggeredTargetAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, false));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CRoyalAssassinAvatarCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CRoyalAssassinAvatarCard::BeforeResolution));
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CLifeModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage)); // lost of life, not preventable


	cpAbility->GetTargeting().SetIncludeOpponentPlayersOnly();
	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CRoyalAssassinAvatarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CRoyalAssassinAvatarCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDrawCardModifier modifier1 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	modifier1.ApplyTo(pAction->GetController());

	return true;
}
//___________________________________________________________________________
//
CGerrardCard::CGerrardCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Gerrard"), nID, -4, +0)
{
	GetCardKeyword()->AddEmblem(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2, false));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGerrardCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CGerrardCard::BeforeResolution));
	
	cpAbility->AddAbilityTag(AbilityTag::MoveCard);

	AddAbility(cpAbility.GetPointer());
}

bool CGerrardCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CGerrardCard::BeforeResolution(CAbilityAction* pAction) const
{
	CDrawCardModifier modifier1 = CDrawCardModifier(GetGame(), MinimumValue(1), MaximumValue(1));
	modifier1.ApplyTo(pAction->GetController());

	return true;
}
//___________________________________________________________________________
//
CTwoHeadedGiantOfForiysAvatarCard::CTwoHeadedGiantOfForiysAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Two-Headed Giant of Foriys Avatar"), nID, +1, -4)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBeBlockedBy1));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->GetCreatureKeywordMod().LinkCreatureModifier(new CCreatureCanBlockAdditionModifier);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CErtaiCard::CErtaiCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Ertai"), nID, -1, +4)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
		::CreateObject<CCardKeywordEnchantment>(this,
			new AnyCreatureComparer));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::Hexproof);
		
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFreneticEfreetAvatarCard::CFreneticEfreetAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Frenetic Efreet Avatar"), nID, -1, -3)
	, m_FlipSelection(pGame, CSelectionSupport::SelectionCallback(this, &CFreneticEfreetAvatarCard::OnFlipSelected))
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<CCardKeywordEnchantment> cpAbility(
		::CreateObject<CCardKeywordEnchantment>(this,
			new TrueCardComparer));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		cpAbility->GetCardKeywordMod()->GetModifier().SetToAdd(CardKeyword::Phasing);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(true);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CFreneticEfreetAvatarCard::SetTriggerContext));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CFreneticEfreetAvatarCard::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CFreneticEfreetAvatarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CFreneticEfreetAvatarCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	int Thumb = 0;
	int Exponent = 2;
	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) Exponent = 2 * Exponent;
		Flip = pController->GetRand() % Exponent;
	}

	if (Flip == 0)
	{
		CString strMessage;
		strMessage.Format(_T("%s loses the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip == 1)
	{
		CString strMessage;
		strMessage.Format(_T("%s wins the flip"), pController->GetPlayerName());
		m_pGame->Message(
			strMessage,
			pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
			MessageImportance::High
			);
		CPlayerEffectModifier* pModifier = new CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true);
		pModifier->ApplyTo(pController);
		CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
		pModifierCoin.ApplyTo(this);
	}

	if (Flip > 1)
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 1;
			selectionEntry.strText.Format(_T("win the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 2;
			selectionEntry.strText.Format(_T("lose the flip"), this->GetCardName());

			entries.push_back(selectionEntry);
		}
		m_FlipSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());
	}
	return true;
}

void CFreneticEfreetAvatarCard::OnFlipSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 1)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s wins the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CPlayerEffectModifier* pModifier = new CPlayerEffectModifier(PlayerEffectType::TimeWalk, 1, true);
				pModifier->ApplyTo(pSelectionPlayer);
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_WIN_ID);       
				pModifierCoin.ApplyTo(this);
				
				return;
			}
			
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s loses the flip"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CSpecialEffectModifier pModifierCoin = CSpecialEffectModifier(this, COIN_FLIP_LOSE_ID);       
				pModifierCoin.ApplyTo(this);
					
				return;
			}
		}
}
//____________________________________________________________________________
//
COracleCard::COracleCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Oracle"), nID, +1, +9)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(::CreateObject<CActivatedAbility<CTargetSpell>>(
			this,
			_T(""),
			new AttackingCreatureComparer,
			FALSE));

		cpAbility->GetTargeting()->SetIncludeControllerCardsOnly();
		
		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &COracleCard::BeforeResolution));
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		AddAbility(cpAbility.GetPointer());
	}
}

bool COracleCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCreatureCard* pCreature = (CCreatureCard*)pAction->GetAssociatedCard();

	CCardOrientationModifier pModifier = CCardOrientationModifier(FALSE);
	pModifier.ApplyTo(pCreature);
	pCreature->RemoveFromCombat(FALSE);

	return true;
}

//____________________________________________________________________________
//
CMaralenOfTheMornsongAvatarCard::CMaralenOfTheMornsongAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Maralen of the Mornsong Avatar"), nID, +0, -3)
	, m_NumberSelection(pGame, CSelectionSupport::SelectionCallback(this, &CMaralenOfTheMornsongAvatarCard::OnNumberSelected))
{
	GameBegins = true;
	LifePaid = 0;
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::CantDrawCards));

		cpAbility->SetAffectControllerOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, false));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMaralenOfTheMornsongAvatarCard::SetTriggerContext1));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMaralenOfTheMornsongAvatarCard::BeforeResolution1));
	
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::DrawStep2, false));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMaralenOfTheMornsongAvatarCard::SetTriggerContext2));
		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMaralenOfTheMornsongAvatarCard::BeforeResolution2));
	
		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMaralenOfTheMornsongAvatarCard::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if ((GetZone()->GetZoneId() == ZoneId::_Effects) && GameBegins)
	{
		GameBegins = false;
		return true;
	}
	else return false;
}

bool CMaralenOfTheMornsongAvatarCard::BeforeResolution1(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pHand = pController->GetZoneById(ZoneId::Hand);

	int nLife = (int)pController->GetLife();

	if ((nLife > 0) && !pController->GetPlayerEffect().HasPlayerEffect(PlayerEffectType::CantChangeLife))
	{
		std::vector<SelectionEntry> entries;
		{
			SelectionEntry selectionEntry;

			selectionEntry.dwContext = 0;
			selectionEntry.strText.Format(_T("Don't pay life"));

			entries.push_back(selectionEntry);
		}
		for (int i = 1; i <= nLife; ++i)
		{
			SelectionEntry entry;

			entry.dwContext = (DWORD)i;
			
			entry.strText.Format(_T("Pay %d life"),
				i);

			entries.push_back(entry);
		}
		m_NumberSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CMaralenOfTheMornsongAvatarCard::OnNumberSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			if ((int)it->dwContext == 0)
			{
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s doesn't pay life"), pSelectionPlayer->GetPlayerName());
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}

				return;
			}
			else
			{
				int nValue = it->dwContext;
				if (!m_pGame->IsThinking())
				{
					CString strMessage;
					strMessage.Format(_T("%s pays %d life"), pSelectionPlayer->GetPlayerName(), nValue);
					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				CLifeModifier pModifier = CLifeModifier(Life(-nValue), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
				pModifier.ApplyTo(pSelectionPlayer);

				LifePaid = nValue;
				
				return;
			}
		}
}

bool CMaralenOfTheMornsongAvatarCard::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CMaralenOfTheMornsongAvatarCard::BeforeResolution2(CAbilityAction* pAction) const
{
	if (LifePaid > 0)
	{
		CPlayer* pController = pAction->GetController();
		CCardFilter temp;
		temp.SetComparer(new TrueCardComparer);

		CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, LifePaid , CZoneModifier::RoleType::PrimaryPlayer,
			CardPlacement::Top, CZoneModifier::RoleType::PrimaryPlayer);
		pModifier.AddSelection(MinimumValue(1), MaximumValue(1), // select cards to reorder
			CZoneModifier::RoleType::PrimaryPlayer, // select by 
			CZoneModifier::RoleType::AllPlayers, // reveal to
			&temp, // what cards
			ZoneId::Hand, // if selected, move cards to
			CZoneModifier::RoleType::PrimaryPlayer, // select by this player
			CardPlacement::Top, // put selected cards on 
			MoveType::Others, // move type
			CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
		pModifier.ApplyTo(pController);

		pController->GetZoneById(ZoneId::Library)->Shuffle();
	}

	return true;
}

//___________________________________________________________________________
//
CViridianZealotAvatarCard::CViridianZealotAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Viridian Zealot Avatar"), nID, 0, +2)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<CActivatedAbility<CTargetSpell>> cpAbility(::CreateObject<CActivatedAbility<CTargetSpell>>(
			this,
			_T("2"),
			new CardTypeComparer(CardType::Artifact | CardType::_Enchantment, false),
			FALSE));

		cpAbility->GetCost().AddSacrificeCardCost(1, CCardFilter::GetFilter(_T("creatures")));
		
		cpAbility->AddAbilityTag(AbilityTag::MoveCard);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CViridianZealotAvatarCard::BeforeResolution));
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CViridianZealotAvatarCard::BeforeResolution(CAbilityAction* pAction) const
{
	CCard* pTarget = pAction->GetAssociatedCard();
	CPlayer* pController = pAction->GetController();
	CCard* pSacrificed = pAction->GetCostConfigEntry().GetSacrificeCards()->GetAt(0);
	
	CMoveCardModifier pModifier1 = CMoveCardModifier(ZoneId::Battlefield, ZoneId::Graveyard, TRUE, MoveType::Destroy, pController);
	pModifier1.ApplyTo(pTarget);

	CCardFilter m_CardFilter;
	m_CardFilter.SetFilterName(_T("card with the same name"), _T("cards with the same name"));
	m_CardFilter.AddComparer(new CardNameComparer(pSacrificed->GetPrintedCardName()));

	CPlayerSearchModifier pModifier2 = CPlayerSearchModifier(pController,
		MinimumValue(0), MaximumValue(1),
		pController, ZoneId::Library,
		&m_CardFilter);
	pModifier2.ApplyTo(pController);

	return false;
}

//____________________________________________________________________________
//
CCrovaxCard::CCrovaxCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Crovax"), nID, 2, 0)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealtAny, 
							CWhenDamageDealt::CreatureEventCallback, &CWhenDamageDealtAny::SetCreatureEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCrovaxCard::SetTriggerContext1));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenDamageDealtAny, 
							CWhenDamageDealt::PlayerEventCallback, &CWhenDamageDealtAny::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetFromCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));		
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->GetLifeModifier().SetLifeDelta(Life(1));
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCrovaxCard::SetTriggerContext2));

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));
		
		AddAbility(cpAbility.GetPointer());
	}
}

bool CCrovaxCard::SetTriggerContext1(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CCreatureCard* pToCreature, Damage pDamage)
{
	if (!pCard->GetCardType().IsCreature()) return false;

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CCrovaxCard::SetTriggerContext2(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext,
										  CCard* pCard, CPlayer* pToPlayer, Damage pDamage)
{
	if (!pCard->GetCardType().IsCreature()) return false;

	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CMasterOfTheWildHuntAvatarCard::CMasterOfTheWildHuntAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Master of the Wild Hunt Avatar"), nID, +1, +3)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(::CreateObject<CActivatedAbility<CGenericSpell>>(
			this,
			_T("2") GREEN_MANA_TEXT));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CMasterOfTheWildHuntAvatarCard::BeforeResolution));
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		AddAbility(cpAbility.GetPointer());
	}
}

bool CMasterOfTheWildHuntAvatarCard::BeforeResolution(CAbilityAction* pAction) const
{
	CPlayer* pController = pAction->GetController();
	int nValue = 0;

	if (!m_pGame->IsThinking())
	{
		nValue = pController->GetRand() % 4;
	}

	if (nValue == 0)
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Wolf A"), 2725, 1);
		pModifier.ApplyTo(pController);
	}
	else if (nValue == 1)
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Antelope"), 2826, 1);
		pModifier.ApplyTo(pController);
	}
	else if (nValue == 2)
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Cat E"), 2835, 1);
		pModifier.ApplyTo(pController);
	}
	else
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Rhino"), 2749, 1);
		pModifier.ApplyTo(pController);
	}

	return false;
}

//____________________________________________________________________________
//
