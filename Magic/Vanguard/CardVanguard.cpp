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

		DEFINE_CARD(CAkromaAngelOfWrathAvatarCard);
		DEFINE_CARD(CCrovaxCard);
		DEFINE_CARD(CEladamriLordOfLeavesAvatarCard);
		DEFINE_CARD(CErhnamDjinnAvatarCard);
		DEFINE_CARD(CErtaiCard);
		DEFINE_CARD(CFreneticEfreetAvatarCard);
		DEFINE_CARD(CGerrardCard);
		DEFINE_CARD(CHannaCard);
		DEFINE_CARD(CMalfegorAvatarCard);
		DEFINE_CARD(CMaralenOfTheMornsongAvatarCard);
		DEFINE_CARD(CMaraxusCard);
		DEFINE_CARD(CMasterOfTheWildHuntAvatarCard);
		DEFINE_CARD(COracleCard);
		DEFINE_CARD(COrcishSquattersAvatarCard);
		DEFINE_CARD(COrimCard);
		DEFINE_CARD(CProdigalSorcererAvatarCard);
		DEFINE_CARD(CReaperKingAvatarCard);
		DEFINE_CARD(CRoyalAssassinAvatarCard);
		DEFINE_CARD(CSeleniaCard);
		DEFINE_CARD(CSerraCard);
		DEFINE_CARD(CSliverQueenAvatarCard);
		DEFINE_CARD(CSliverQueenBroodMotherCard);
		DEFINE_CARD(CStonehewerGiantAvatarCard);
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
			new CardTypeComparer(CardType::Artifact | CardType::Creature | CardType::_Enchantment, false),
			Power(+0), Life(+0), CreatureKeyword::Null));

	cpAbility->SetAffectControllerCardsOnly();

	cpAbility->GetEnchantmentCardFilter().
		AddNegateComparer(new CardTypeComparer(CardType::_Land, false));

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
	return (GetZone()->GetZoneId() == ZoneId::_Effects) && GetGame()->IsFirstMainPhase();
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
	return (GetZone()->GetZoneId() == ZoneId::_Effects) && GetGame()->IsFirstMainPhase();
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
	int Flip = 2;

	if (!m_pGame->IsThinking())
	{
		int Thumb = 0;
		int Exponent = 2;
		pController->GetPlayerEffect().HasPlayerEffectSum(PlayerEffectType::CoinFlipCheating, Thumb, FALSE);
		for (int i = 0; i < Thumb; ++i) 
			Exponent = 2 * Exponent;
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
CProdigalSorcererAvatarCard::CProdigalSorcererAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Prodigal Sorcerer Avatar"), nID, +0, +5)
{
	GetCardKeyword()->AddEmblem(FALSE);

	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, false));
		
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CProdigalSorcererAvatarCard::SetTriggerContext));
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CProdigalSorcererAvatarCard::BeforeResolution));

	cpAbility->AddAbilityTag(AbilityTag::LifeLost);

	AddAbility(cpAbility.GetPointer());
}

bool CProdigalSorcererAvatarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CProdigalSorcererAvatarCard::BeforeResolution(CAbilityAction* pAction) const
{
	CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, 1, CZoneModifier::RoleType::PrimaryPlayer);
	pModifier.AddSelection(MinimumValue(0), MaximumValue(1),
				CZoneModifier::RoleType::PrimaryPlayer, // select by 
				CZoneModifier::RoleType::PrimaryPlayer, // reveal to
				NULL, // any cards
				ZoneId::Graveyard, // if selected, move cards to
				CZoneModifier::RoleType::PrimaryPlayer, // select by this player
				CardPlacement::Top, // put selected cards on top
				MoveType::Others, // move type
				CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player
	pModifier.ApplyTo(pAction->GetController());

	return true;
}
//___________________________________________________________________________
//
CSliverQueenBroodMotherCard::CSliverQueenBroodMotherCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Sliver Queen, Brood Mother"), nID, +0, +8)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<CActivatedAbility<CTokenProductionSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTokenProductionSpell>>(this,
				_T("3"),
				_T("Sliver A"), 2730,
				1));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSliverQueenAvatarCard::CSliverQueenAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Sliver Queen Avatar"), nID, +0, +7)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CreatureTypeComparer(CREATURE_TYPE(Sliver), false));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSliverQueenAvatarCard::SetTriggerContext));		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CSliverQueenAvatarCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CSliverQueenAvatarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	triggerContext.nValue1 = (DWORD)pCard;

	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CSliverQueenAvatarCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;
	CPlayer* pController = pAction->GetController();
	int nCMC = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	if (pCard->GetZoneId() == ZoneId::Stack)
	{
		pCard->Move(const_cast<CZone*>(pCard->GetOwner()->GetZoneById(ZoneId::Exile)), NULL, MoveType::Others, CardPlacement::Top);

		int nUID = 0;
		CString name = _T("");
		
		if (nCMC == 1)
		{
			int nRand = 0;

			if (!m_pGame->IsThinking())
			{
				nRand = pAction->GetController()->GetRand() % 8;
			}
		
			if (nRand == 0)
			{
				nUID = 25982;
				name = _T("Galerider Sliver");
			}
			if (nRand == 1)
			{
				nUID = 10004;
				name = _T("Metallic Sliver");
			}
			else if (nRand == 2)
			{
				nUID = 17460;
				name = _T("Mindlash Sliver");
			}
			else if (nRand == 3)
			{
				nUID = 14408;
				name = _T("Plated Sliver");
			}
			else if (nRand == 4)
			{
				nUID = 17341;
				name = _T("Screeching Sliver");
			}
			else if (nRand == 5)
			{
				nUID = 17436;
				name = _T("Sidewinder Sliver");
			}
			else if (nRand == 6)
			{
				nUID = 25930;
				name = _T("Striking Sliver");
			}
			else
			{
				nUID = 17794;
				name = _T("Virulent Sliver");
			}
		}
		else if (nCMC == 2)
		{
			int nRand = 0;

			if (!m_pGame->IsThinking())
			{
				nRand = pAction->GetController()->GetRand() % 23;
			}
		
			if (nRand == 0)
			{
				nUID = 10484;
				name = _T("Acidic Sliver");
			}
			else if (nRand == 1)
			{
				nUID = 2575;
				name = _T("Cautery Sliver");
			}
			else if (nRand == 2)
			{
				nUID = 10000;
				name = _T("Clot Sliver");
			}
			else if (nRand == 3)
			{
				nUID = 14459;
				name = _T("Crypt Sliver");
			}
			else if (nRand == 4)
			{
				nUID = 10400;
				name = _T("Crystalline Sliver");
			}
			else if (nRand == 5)
			{
				nUID = 2577;
				name = _T("Darkheart Sliver");
			}
			// Frenzy Sliver
			else if (nRand == 6)
			{
				nUID = 17322;
				name = _T("Gemhide Sliver");
			}
			else if (nRand == 7)
			{
				nUID = 17440;
				name = _T("Ghostflame Sliver");
			}
			else if (nRand == 8)
			{
				nUID = 10001;
				name = _T("Heart Sliver");
			}
			else if (nRand == 9)
			{
				nUID = 10485;
				name = _T("Hibernation Sliver");
			}
			// Hunter Sliver
			// Mistform Sliver
			else if (nRand == 10)
			{
				nUID = 26118;
				name = _T("Manaweft Sliver");
			}
			else if (nRand == 11)
			{
				nUID = 10013;
				name = _T("Muscle Sliver");
			}
			else if (nRand == 12)
			{
				nUID = 25954;
				name = _T("Predatory Sliver");
			}
			else if (nRand == 13)
			{
				nUID = 14473;
				name = _T("Quick Sliver");
			}
			else if (nRand == 14)
			{
				nUID = 17337;
				name = _T("Quilled Sliver");
			}
			else if (nRand == 15)
			{
				nUID = 25928;
				name = _T("Sentinel Sliver");
			}
			else if (nRand == 16)
			{
				nUID = 2522;
				name = _T("Sinew Sliver");
			}
			else if (nRand == 17)
			{
				nUID = 10486;
				if ((pAction->GetController()->GetRand() % 2) == 1)
					nUID = 17321;
				name = _T("Spined Sliver");
			}
			else if (nRand == 18)
			{
				nUID = 17204;
				name = _T("Spinneret Sliver");
			}
			else if (nRand == 19)
			{
				nUID = 10007;
				name = _T("Talon Sliver");
			}
			else if (nRand == 20)
			{
				nUID = 17205;
				name = _T("Two-Headed Sliver");
			}
			else if (nRand == 21)
			{
				nUID = 10487;
				name = _T("Victual Sliver");
			}
			else
			{
				nUID = 10011;
				name = _T("Winged Sliver");
			}
		}
		else if (nCMC == 3)
		{
			int nRand = 0;

			if (!m_pGame->IsThinking())
			{
				nRand = pAction->GetController()->GetRand() % 21;
			}
		
			if (nRand == 0)
			{
				nUID = 10213;
				name = _T("Armor Sliver");
			}
			else if (nRand == 1)
			{
				nUID = 10214;
				name = _T("Barbed Sliver");
			}
			else if (nRand == 2)
			{
				nUID = 17314;
				name = _T("Basal Sliver");
			}
			else if (nRand == 3)
			{
				nUID = 14402;
				name = _T("Blade Sliver");
			}
			else if (nRand == 4)
			{
				nUID = 25926;
				name = _T("Blur Sliver");
			}
			else if (nRand == 5)
			{
				nUID = 17317;
				name = _T("Firewake Sliver");
			}
			else if (nRand == 6)
			{
				nUID = 2634;
				name = _T("Frenetic Sliver");
			}
			else if (nRand == 7)
			{
				nUID = 17451;
				name = _T("Harmonic Sliver");
			}
			else if (nRand == 8)
			{
				nUID = 17826;
				name = _T("Homing Sliver");
			}
			else if (nRand == 9)
			{
				nUID = 10002;
				name = _T("Horned Sliver");
			}
			else if (nRand == 10)
			{
				nUID = 10215;
				name = _T("Mindwhip Sliver");
			}
			else if (nRand == 11)
			{
				nUID = 10216;
				name = _T("Mnemonic Sliver");
			}
			else if (nRand == 12)
			{
				nUID = 2579;
				name = _T("Necrotic Sliver");
			}
			else if (nRand == 13)
			{
				nUID = 17448;
				name = _T("Opaline Sliver");
			}
			else if (nRand == 14)
			{
				nUID = 2580;
				name = _T("Poultice Sliver");
			}
			else if (nRand == 15)
			{
				nUID = 17342;
				name = _T("Sedge Sliver");
			}
			else if (nRand == 16)
			{
				nUID = 17414;
				name = _T("Shadow Sliver");
			}
			else if (nRand == 17)
			{
				nUID = 25961;
				name = _T("Sliver Construct");
			}
			else if (nRand == 18)
			{
				nUID = 14460;
				name = _T("Spectral Sliver");
			}
			else if (nRand == 19)
			{
				nUID = 25929;
				name = _T("Steelform Sliver");
			}
			else
			{
				nUID = 26007;
				name = _T("Syphon Sliver");
			}
		}
		else if (nCMC == 4)
		{
			int nRand = 0;

			if (!m_pGame->IsThinking())
			{
				nRand = pAction->GetController()->GetRand() % 14;
			}
		
			if (nRand == 0)
			{
				nUID = 25941;
				name = _T("Bonescythe Sliver");
			}
			else if (nRand == 1)
			{
				nUID = 17200;
				name = _T("Bonesplitter Sliver");
			}
			else if (nRand == 2)
			{
				nUID = 2607;
				name = _T("Dormant Sliver");
			}
			else if (nRand == 3)
			{
				nUID = 14407;
				if ((pAction->GetController()->GetRand() % 2) == 1)
					nUID = 17242;
				name = _T("Essence Sliver");
			}
			else if (nRand == 4)
			{
				nUID = 17319;
				name = _T("Fungus Sliver");
			}
			else if (nRand == 5)
			{
				nUID = 14472;
				name = _T("Magma Sliver");
			}
			//Mesmeric Sliver
			else if (nRand == 6)
			{
				nUID = 17308;
				name = _T("Plague Sliver");
			}
			else if (nRand == 7)
			{
				nUID = 2523;
				name = _T("Reflex Sliver");
			}
			else if (nRand == 8)
			{
				nUID = 14409;
				name = _T("Root Sliver");
			}
			else if (nRand == 9)
			{
				nUID = 14410;
				name = _T("Shifting Sliver");
			}
			else if (nRand == 10)
			{
				nUID = 17349;
				name = _T("Telekinetic Sliver");
			}
			else if (nRand == 11)
			{
				nUID = 14461;
				name = _T("Toxin Sliver");
			}
			else if (nRand == 12)
			{
				nUID = 17354;
				name = _T("Vampiric Sliver");
			}
			else
			{
				nUID = 17207;
				name = _T("Watcher Sliver");
			}
		}
		else if (nCMC == 5)
		{
			int nRand = 0;

			if (!m_pGame->IsThinking())
			{
				nRand = pAction->GetController()->GetRand() % 15;
			}
		
			if (nRand == 0)
			{
				nUID = 25925;
				name = _T("Battle Sliver");
			}
			else if (nRand == 1)
			{
				nUID = 14404;
				name = _T("Brood Sliver");
			}
			else if (nRand == 2)
			{
				nUID = 17560;
				name = _T("Dementia Sliver");
			}
			else if (nRand == 3)
			{
				nUID = 17701;
				name = _T("Lymph Sliver");
			}
			else if (nRand == 4)
			{
				nUID = 17203;
				name = _T("Might Sliver");
			}
			else if (nRand == 5)
			{
				nUID = 17336;
				name = _T("Psionic Sliver");
			}
			//Pulmonic Sliver
			else if (nRand == 6)
			{
				nUID = 17702;
				name = _T("Sliver Legion");
			}
			else if (nRand == 7)
			{
				nUID = 14624;
				name = _T("Sliver Overlord");
			}
			else if (nRand == 8)
			{
				nUID = 10447;
				name = _T("Sliver Queen");
			}
			else if (nRand == 9)
			{
				nUID = 2524;
				name = _T("Spitting Sliver");
			}
			else if (nRand == 10)
			{
				nUID = 14411;
				name = _T("Synapse Sliver");
			}
			else if (nRand == 11)
			{
				nUID = 2521;
				name = _T("Synchronous Sliver");
			}
			else if (nRand == 12)
			{
				nUID = 25964;
				name = _T("Thorncaster Sliver");
			}
			else if (nRand == 13)
			{
				nUID = 17206;
				name = _T("Venser's Sliver");
			}
			else
			{
				nUID = 14511;
				name = _T("Ward Sliver");
			}
		}
		else if (nCMC == 6)
		{
			int nRand = 0;

			if (!m_pGame->IsThinking())
			{
				nRand = pAction->GetController()->GetRand() % 3;
			}
		
			if (nRand == 0)
			{
				nUID = 2520;
				name = _T("Battering Sliver");
			}
			else if (nRand == 1)
			{
				nUID = 17320;
				name = _T("Fury Sliver");
			}
			else
			{
				nUID = 25938;
				name = _T("Megantic Sliver");
			}
		}
		else if (nCMC == 7)
		{
			nUID = 25927;
			name = _T("Groundshaker Sliver");
		}

		if (nUID != 0)
		{
			counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateCard(m_pGame, name, nUID));

			pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
			cpToken->AddCardType(CardType::Token, CardType::Null, CardTypeEntry::Permanent);
			cpToken->AddCardType(CardType::Copy, CardType::Null, CardTypeEntry::Permanent);
			cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);
		}
	}

	return true;
}

//____________________________________________________________________________
//
CReaperKingAvatarCard::CReaperKingAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Reaper King Avatar"), nID, -2, -5)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::White, true),
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Blue, true),
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Black, true),
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Red, true),
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature | CardType::Green, true),
				Power(+1), Life(+1), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStonehewerGiantAvatarCard::CStonehewerGiantAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Stonehewer Giant Avatar"), nID, +0, +7)
{
	GetCardKeyword()->AddEmblem(FALSE);
	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);	
		cpAbility->GetTrigger().SetToControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CStonehewerGiantAvatarCard::SetTriggerContext));		
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CStonehewerGiantAvatarCard::BeforeResolution));

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

bool CStonehewerGiantAvatarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
											CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const

{
	triggerContext.nValue1 = (DWORD)pCard;

	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CStonehewerGiantAvatarCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	CCard* pCard = (CCard*)pAction->GetTriggerContext().nValue1;
	CPlayer* pController = pAction->GetController();
	int nCMC = pCard->GetSpells().GetAt(0)->GetCost().GetOriginalManaCost().GetTotal();

	int nUID = 0;
	CString name = _T("");
	
	int nRand = 0;
	int mod = 1;

	if (!m_pGame->IsThinking())
	{
		{
			if (nCMC == 0)
				mod = 6;
			else if (nCMC == 1)
				mod = 31;
			else if (nCMC == 2)
				mod = 80;
			else if (nCMC == 3)
				mod = 114;
			else if (nCMC == 4)
				mod = 127;
			else if (nCMC == 5)
				mod = 130;
			else if (nCMC == 6)
				mod = 133;
			else
				mod = 134;
		}
		nRand = pAction->GetController()->GetRand() % mod;
	}

	// CMC 0
	if (nRand == 0)
	{
		nUID = 21514;
		name = _T("Accorder's Shield");
	}
	if (nRand == 1)
	{
		nUID = 8847;
		name = _T("Bone Saw");
	}
	if (nRand == 2)
	{
		nUID = 22269;
		name = _T("Kite Shield");
	}
	if (nRand == 3)
	{
		nUID = 15465;
		name = _T("Paradise Mantle");
	}
	if (nRand == 4)
	{
		nUID = 8737;
		name = _T("Sigil of Distinction");
	}
	if (nRand == 5)
	{
		nUID = 19428;
		name = _T("Spidersilk Net");
	}
	// CMC 1
	if (nRand == 6)
	{
		nUID = 19438;
		name = _T("Adventuring Gear");
	}
	// Avacyn's Collar
	if (nRand == 7)
	{
		nUID = 19687;
		name = _T("Basilisk Collar");
	}
	if (nRand == 8)
	{
		nUID = 19443;
		name = _T("Blade of the Bloodchief");
	}
	// Bladed Bracers
	if (nRand == 9)
	{
		nUID = 23344;
		name = _T("Blazing Torch");
	}
	// Blinding Powder
	if (nRand == 10)
	{
		nUID = 14934;
		name = _T("Bonesplitter");
	}
	// Civic Saber
	if (nRand == 11)
	{
		nUID = 21820;
		name = _T("Copper Carapace");
	}
	if (nRand == 12)
	{
		nUID = 21451;
		name = _T("Darksteel Axe");
	}
	// Dead-Iron Sledge
	if (nRand == 13)
	{
		nUID = 19452;
		name = _T("Explorer's Scope");
	}
	if (nRand == 14)
	{
		nUID = 24911;
		name = _T("Flayer Husk");
	}
	// Golem-Skin Gauntlets
	if (nRand == 15)
	{
		nUID = 15816;
		name = _T("Hankyu");
	}
	if (nRand == 16)
	{
		nUID = 21511;
		name = _T("Infiltration Lens");
	}
	// Leonin Bola
	if (nRand == 17)
	{
		nUID = 3230;
		name = _T("Leonin Scimitar");
	}
	if (nRand == 18)
	{
		nUID = 14945;
		name = _T("Neurok Hoversail");
	}
	if (nRand == 19)
	{
		nUID = 16272;
		name = _T("O-Naginata");
	}
	if (nRand == 20)
	{
		nUID = 16537;
		name = _T("Peregrine Mask");
	}
	if (nRand == 21)
	{
		nUID = 18096;
		name = _T("Runed Stalactite");
	}
	if (nRand == 22)
	{
		nUID = 24956;
		name = _T("Sai of the Shinobi");
	}
	if (nRand == 23)
	{
		nUID = 19137;
		name = _T("Shuko");
	}
	// Shuriken
	// Silver-Inlaid Dagger
	if (nRand == 24)
	{
		nUID = 23195;
		name = _T("Skullclamp");
	}
	if (nRand == 25)
	{
		nUID = 25600;
		name = _T("Skyblinder Staff");
	}
	if (nRand == 26)
	{
		nUID = 14950;
		name = _T("Slagwurm Armor");
	}
	if (nRand == 27)
	{
		nUID = 21557;
		name = _T("Sylvok Lifestaff");
	}
	if (nRand == 28)
	{
		nUID = 19395;
		name = _T("Trusty Machete");
	}
	if (nRand == 29)
	{
		nUID = 14958;
		name = _T("Viridian Longbow");
	}
	if (nRand == 30)
	{
		nUID = 23715;
		name = _T("Wolfhunter's Quiver");
	}
	// CMC 2
	if (nRand == 31)
	{
		nUID = 15048;
		name = _T("Banshee's Blade");
	}
	if (nRand == 32)
	{
		nUID = 21518;
		name = _T("Bladed Pinions");
	}
	if (nRand == 33)
	{
		nUID = 18716;
		name = _T("Blight Sickle");
	}
	if (nRand == 34)
	{
		nUID = 18405;
		name = _T("Cloak and Dagger");
	}
	if (nRand == 35)
	{
		nUID = 23402;
		name = _T("Cobbled Wings");
	}
	if (nRand == 36)
	{
		nUID = 24661;
		name = _T("Cranial Plating");
	}
	//Demonspine Whip
	if (nRand == 37)
	{
		nUID = 21535;
		name = _T("Echo Circlet");
	}
	if (nRand == 38)
	{
		nUID = 14989;
		name = _T("Empyrial Plate");
	}
	if (nRand == 39)
	{
		nUID = 23718;
		name = _T("Executioner's Hood");
	}
	if (nRand == 40)
	{
		nUID = 4185;
		name = _T("Gorgon Flail");
	}
	if (nRand == 41)
	{
		nUID = 19659;
		name = _T("Hammer of Ruin");
	}
	if (nRand == 42)
	{
		nUID = 15461;
		name = _T("Healer's Headdress");
	}
	if (nRand == 43)
	{
		nUID = 15462;
		name = _T("Horned Helm");
	}
	if (nRand == 44)
	{
		nUID = 24435;
		name = _T("Kitesail");
	}
	// Konda's Banner
	// Illusionist's Bracers
	// Inquisitor's Flail
	if (nRand == 45)
	{
		nUID = 18916;
		name = _T("Leering Emblem");
	}
	if (nRand == 46)
	{
		nUID = 23189;
		name = _T("Lightning Greaves");
	}
	// Livewire Lash
	if (nRand == 47)
	{
		nUID = 16242;
		name = _T("Manriki-Gusari");
	}
	if (nRand == 48)
	{
		nUID = 23504;
		name = _T("Mask of Avacyn");
	}
	if (nRand == 49)
	{
		nUID = 24704;
		name = _T("Mask of Memory");
	}
	if (nRand == 50)
	{
		nUID = 9034;
		name = _T("Mask of Riddles");
	}
	if (nRand == 51)
	{
		nUID = 21825;
		name = _T("Mortarpod");
	}
	if (nRand == 52)
	{
		nUID = 15464;
		name = _T("Neurok Stealthsuit");
	}
	// Nim Deathmantle
	if (nRand == 53)
	{
		nUID = 15701;
		name = _T("No-Dachi");
	}
	if (nRand == 54)
	{
		nUID = 20906;
		name = _T("Ogre's Cleaver");
	}
	// Rakdos Riteknife
	if (nRand == 55)
	{
		nUID = 24529;
		name = _T("Ring of Evos Isle");
	}
	if (nRand == 56)
	{
		nUID = 24515;
		name = _T("Ring of Kalonia");
	}
	if (nRand == 57)
	{
		nUID = 24516;
		name = _T("Ring of Thune");
	}
	if (nRand == 58)
	{
		nUID = 24517;
		name = _T("Ring of Valkas");
	}
	if (nRand == 59)
	{
		nUID = 24518;
		name = _T("Ring of Xathrid");
	}
	if (nRand == 60)
	{
		nUID = 25583;
		name = _T("Riot Gear");
	}
	if (nRand == 61)
	{
		nUID = 23502;
		name = _T("Runechanter's Pike");
	}
	// Scythe of the Wretched
	// Sharpened Pitchfork
	if (nRand == 62)
	{
		nUID = 9095;
		name = _T("Shield of the Righteous");
	}
	if (nRand == 63)
	{
		nUID = 21838;
		name = _T("Silverskin Armor");
	}
	if (nRand == 64)
	{
		nUID = 15467;
		name = _T("Sparring Collar");
	}
	if (nRand == 65)
	{
		nUID = 15252;
		name = _T("Specter's Shroud");
	}
	// Surestrike Trident
	if (nRand == 66)
	{
		nUID = 22308;
		name = _T("Swiftfoot Boots");
	}
	if (nRand == 67)
	{
		nUID = 17784;
		name = _T("Sword of the Meek");
	}
	if (nRand == 68)
	{
		nUID = 18408;
		name = _T("Thornbite Staff");
	}
	if (nRand == 69)
	{
		nUID = 24167;
		name = _T("Tormentor's Trident");
	}
	if (nRand == 70)
	{
		nUID = 19512;
		name = _T("Trailblazer's Boots");
	}
	if (nRand == 71)
	{
		nUID = 19149;
		name = _T("Umezawa's Jitte");
	}
	if (nRand == 72)
	{
		nUID = 24170;
		name = _T("Vanguard's Shield");
	}
	if (nRand == 73)
	{
		nUID = 18409;
		name = _T("Veteran's Armaments");
	}
	if (nRand == 74)
	{
		nUID = 21834;
		name = _T("Viridian Claw");
	}
	if (nRand == 75)
	{
		nUID = 14959;
		name = _T("Vorrac Battlehorns");
	}
	if (nRand == 76)
	{
		nUID = 14961;
		name = _T("Vulshok Gauntlets");
	}
	if (nRand == 77)
	{
		nUID = 2325;
		name = _T("Vulshok Morningstar");
	}
	if (nRand == 78)
	{
		nUID = 21011;
		name = _T("Warmonger's Chariot");
	}
	if (nRand == 79)
	{
		nUID = 23554;
		name = _T("Wooden Stake");
	}
	// CMC 3
	if (nRand == 80)
	{
		nUID = 24159;
		name = _T("Angelic Armaments");
	}
	if (nRand == 81)
	{
		nUID = 21517;
		name = _T("Barbed Battlegear");
	}
	if (nRand == 82)
	{
		nUID = 9003;
		name = _T("Behemoth Sledge");
	}
	// Butcher's Cleaver
	// Champion's Helm
	if (nRand == 83)
	{
		nUID = 21830;
		name = _T("Darksteel Plate");
	}
	if (nRand == 84)
	{
		nUID = 18406;
		name = _T("Diviner's Wand");
	}
	if (nRand == 85)
	{
		nUID = 15524;
		name = _T("Ensouled Scimitar");
	}
	if (nRand == 86)
	{
		nUID = 14936;
		name = _T("Fireshrieker");
	}
	if (nRand == 87)
	{
		nUID = 15527;
		name = _T("Grafted Wargear");
	}
	if (nRand == 88)
	{
		nUID = 22268;
		name = _T("Greatsword");
	}
	// Grifter's Blade
	if (nRand == 89)
	{
		nUID = 21606;
		name = _T("Heavy Arbalest");
	}
	// Heavy Mattock
	if (nRand == 90)
	{
		nUID = 15512;
		name = _T("Helm of Kaldra");
	}
	// Kusari-Gama
	if (nRand == 91)
	{
		nUID = 24702;
		name = _T("Loxodon Warhammer");
	}
	if (nRand == 92)
	{
		nUID = 24703;
		name = _T("Mage Slayer");
	}
	if (nRand == 93)
	{
		nUID = 4197;
		name = _T("Magebane Armor");
	}
	if (nRand == 94)
	{
		nUID = 24025;
		name = _T("Moonsilver Spear");
	}
	// Neko-Te
	if (nRand == 95)
	{
		nUID = 15200;
		name = _T("Nemesis Mask");
	}
	// Oathkeeper, Takeno's Daisho
	if (nRand == 96)
	{
		nUID = 18407;
		name = _T("Obsidian Battle-Axe");
	}
	if (nRand == 97)
	{
		nUID = 20907;
		name = _T("Pennon Blade");
	}
	if (nRand == 98)
	{
		nUID = 21797;
		name = _T("Piston Sledge");
	}
	if (nRand == 99)
	{
		nUID = 24953;
		name = _T("Quietus Spike");
	}
	// Razor Boomerang
	if (nRand == 100)
	{
		nUID = 19174;
		name = _T("Ronin Warclub");
	}
	if (nRand == 101)
	{
		nUID = 21994;
		name = _T("Sickleslicer");
	}
	// Spellbinder
	// Strata Scythe
	if (nRand == 102)
	{
		nUID = 21531;
		name = _T("Strider Harness");
	}
	// Sunforger
	if (nRand == 103)
	{
		nUID = 21420;
		name = _T("Sword of Body and Mind");
	}
	if (nRand == 104)
	{
		nUID = 21762;
		name = _T("Sword of Feast and Famine");
	}
	if (nRand == 105)
	{
		nUID = 15222;
		name = _T("Sword of Fire and Ice");
	}
	if (nRand == 106)
	{
		nUID = 15253;
		name = _T("Sword of Light and Shadow");
	}
	if (nRand == 107)
	{
		nUID = 21252;
		name = _T("Sword of Vengeance");
	}
	if (nRand == 108)
	{
		nUID = 21999;
		name = _T("Sword of War and Peace");
	}
	// Tenza, Godo's Maul
	if (nRand == 109)
	{
		nUID = 23411;
		name = _T("Trepanation Blade");
	}
	if (nRand == 110)
	{
		nUID = 18691;
		name = _T("Umbral Mantle");
	}
	if (nRand == 111)
	{
		nUID = 14960;
		name = _T("Vulshok Battlegear");
	}
	if (nRand == 112)
	{
		nUID = 21261;
		name = _T("Warlord's Axe");
	}
	if (nRand == 113)
	{
		nUID = 24985;
		name = _T("Whispersilk Cloak");
	}
	// CMC 4
	if (nRand == 114)
	{
		nUID = 21764;
		name = _T("Bonehoard");
	}
	if (nRand == 115)
	{
		nUID = 18149;
		name = _T("Deathrender");
	}
	if (nRand == 116)
	{
		nUID = 23493;
		name = _T("Demonmail Hauberk");
	}
	if (nRand == 117)
	{
		nUID = 15636;
		name = _T("General's Kabuto");
	}
	if (nRand == 118)
	{
		nUID = 21599;
		name = _T("Grafted Exoskeleton");
	}
	// Grappling Hook
	// Heartseeker
	if (nRand == 119)
	{
		nUID = 21007;
		name = _T("Hedron Matrix");
	}
	if (nRand == 120)
	{
		nUID = 22004;
		name = _T("Lashwrithe");
	}
	if (nRand == 121)
	{
		nUID = 8911;
		name = _T("Manaforce Mace");
	}
	if (nRand == 122)
	{
		nUID = 14986;
		name = _T("Nightmare Lash");
	}
	if (nRand == 123)
	{
		nUID = 15537;
		name = _T("Opaline Bracers");
	}
	if (nRand == 124)
	{
		nUID = 15288;
		name = _T("Shield of Kaldra");
	}
	if (nRand == 125)
	{
		nUID = 21782;
		name = _T("Skinwing");
	}
	if (nRand == 126)
	{
		nUID = 14868;
		name = _T("Sword of Kaldra");
	}
	// Sword of the Paruns
	// Unscythe, Killer of Kings
	// CMC 5
	if (nRand == 127)
	{
		nUID = 21983;
		name = _T("Batterskull");
	}
	// Pariah's Shield
	if (nRand == 128)
	{
		nUID = 21832;
		name = _T("Strandwalker");
	}
	if (nRand == 129)
	{
		nUID = 22201;
		name = _T("Worldslayer");
	}
	// CMC 6
	if (nRand == 130)
	{
		nUID = 21515;
		name = _T("Argentum Armor");
	}
	if (nRand == 131)
	{
		nUID = 21992;
		name = _T("Necropouncer");
	}
	if (nRand == 132)
	{
		nUID = 15847;
		name = _T("Tatsumasa, the Dragon's Fang");
	}
	// CMC 7
	if (nRand == 133)
	{
		nUID = 23720;
		name = _T("Elbrus, the Binding Blade");
	}

	counted_ptr<CCard> cpToken(CCardFactory::GetInstance()->CreateCard(m_pGame, name, nUID));

	pController->GetZoneById(ZoneId::_Tokens)->AddCard(cpToken.GetPointer());
	cpToken->AddCardType(CardType::Token, CardType::Null, CardTypeEntry::Permanent);
	cpToken->AddCardType(CardType::Copy, CardType::Null, CardTypeEntry::Permanent);
	cpToken->Move(pController->GetZoneById(ZoneId::Battlefield), pController, MoveType::Others);

	if (pCard->IsInplay())
	{
		CEquipModifier pModifier = CEquipModifier(cpToken.GetPointer());
		
		pModifier.ApplyTo((CCreatureCard*)pCard);
	}

	return true;
}

//____________________________________________________________________________
//
CErhnamDjinnAvatarCard::CErhnamDjinnAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Erhnam Djinn Avatar"), nID, +0, +3)
{
	GetCardKeyword()->AddEmblem(FALSE);

	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSpellCastAny > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling F"), 2920, 1);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CErhnamDjinnAvatarCard::SetTriggerContext));		

	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CErhnamDjinnAvatarCard::SetTriggerContext(CTriggeredCreateTokenAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CAkromaAngelOfWrathAvatarCard::CAkromaAngelOfWrathAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Akroma, Angel of Wrath Avatar"), nID, +1, +7)
{
	GetCardKeyword()->AddEmblem(FALSE);

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
		ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

	cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
	cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
	cpAbility->GetTrigger().SetToControllerOnly(TRUE);

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CAkromaAngelOfWrathAvatarCard::SetTriggerContext));
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAkromaAngelOfWrathAvatarCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CAkromaAngelOfWrathAvatarCard::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.nValue1 = (DWORD)pCard;

	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CAkromaAngelOfWrathAvatarCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	CPlayer* pController = pAction->GetController();
	CCreatureCard* pCreature = (CCreatureCard*)pAction->GetTriggerContext().nValue1;
	if (!pCreature->IsInplay()) return false;

	int nValue = 0;

	if (!m_pGame->IsThinking())
	{
		nValue = pController->GetRand() % 21;
	}

	if (nValue == 0)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants flying and first strike to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Flying | CreatureKeyword::FirstStrike, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 1)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants flying and trample to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Flying | CreatureKeyword::Trample, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 2)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants flying and haste to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Flying | CreatureKeyword::Haste, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 3)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants flying and protection from black to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Flying, TRUE, FALSE);
		CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::ProtectionFromBlack, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
	if (nValue == 4)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants flying and protection from red to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Flying, TRUE, FALSE);
		CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::ProtectionFromRed, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
	if (nValue == 5)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants flying and vigilance to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Flying | CreatureKeyword::Vigilance, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 6)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants first strike and trample to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::FirstStrike | CreatureKeyword::Trample, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 7)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants first strike and haste to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::FirstStrike | CreatureKeyword::Haste, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 8)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants first strike and protection from black to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::FirstStrike, TRUE, FALSE);
		CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::ProtectionFromBlack, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
	if (nValue == 9)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants first strike and protection from red to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::FirstStrike, TRUE, FALSE);
		CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::ProtectionFromRed, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
	if (nValue == 10)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants first strike and vigilance to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::FirstStrike | CreatureKeyword::Vigilance, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 11)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants trample and haste to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Trample | CreatureKeyword::Haste, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 12)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants trample and protection from black to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Trample, TRUE, FALSE);
		CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::ProtectionFromBlack, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
	if (nValue == 13)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants trample and protection from red to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Trample, TRUE, FALSE);
		CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::ProtectionFromRed, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
	if (nValue == 14)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants trample and vigilance to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Trample | CreatureKeyword::Vigilance, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 15)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants haste and protection from black to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
		CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::ProtectionFromBlack, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
	if (nValue == 16)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants haste and protection from red to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier1 = CCreatureKeywordModifier(CreatureKeyword::Haste, TRUE, FALSE);
		CCardKeywordModifier pModifier2 = CCardKeywordModifier(CardKeyword::ProtectionFromRed, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
	if (nValue == 17)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants haste and vigilance to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCreatureKeywordModifier pModifier = CCreatureKeywordModifier(CreatureKeyword::Haste | CreatureKeyword::Vigilance, TRUE, FALSE);
		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 18)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants protection from black and from red to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCardKeywordModifier pModifier = CCardKeywordModifier(CardKeyword::ProtectionFromBlack | CardKeyword::ProtectionFromRed, TRUE, FALSE);

		pModifier.ApplyTo(pCreature);
	}
	if (nValue == 19)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants protection from black and vigilance to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCardKeywordModifier pModifier1 = CCardKeywordModifier(CardKeyword::ProtectionFromBlack, TRUE, FALSE);
		CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Vigilance, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}
	if (nValue == 20)
	{
		if (!m_pGame->IsThinking())
		{

			CString strMessage;
			strMessage.Format(_T("%s grants protection from red and vigilance to %s"), GetCardName(TRUE), pCreature->GetCardName(TRUE));

			m_pGame->Message(
				strMessage,
				pController->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
				MessageImportance::High
				);
		}

		CCardKeywordModifier pModifier1 = CCardKeywordModifier(CardKeyword::ProtectionFromRed, TRUE, FALSE);
		CCreatureKeywordModifier pModifier2 = CCreatureKeywordModifier(CreatureKeyword::Vigilance, TRUE, FALSE);

		pModifier1.ApplyTo(pCreature);
		pModifier2.ApplyTo(pCreature);
	}

	return true;
}

//____________________________________________________________________________
//
CMalfegorAvatarCard::CMalfegorAvatarCard(CGame* pGame, UINT nID)
	: CVanguardCard(pGame, _T("Malfegor Avatar"), nID, +2, -2)
{
	GetCardKeyword()->AddEmblem(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Battlefield, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetPowerModifier().SetPowerDelta(Power(+3));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMalfegorAvatarCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::Battlefield, ZoneId::Exile, TRUE, FALSE, FALSE));

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Exile);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Library);
		cpAbility->GetMoveCardModifier().SetToTop(TRUE);
		cpAbility->GetMoveCardModifier().SetShuffle(TRUE);
		cpAbility->GetMoveCardModifier().SetToOwnersZone(TRUE);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Exile, ZoneId::Library));
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CMalfegorAvatarCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CMalfegorAvatarCard::SetTriggerContext1(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (moveType != MoveType::Unearth) return false;

	triggerContext.m_pCreature = (CCreatureCard*)pCard;

	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CMalfegorAvatarCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
							CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pCard->GetReplacementKeyword()->HasUnearth()) return false;

	triggerContext.m_pCard = pCard;

	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
