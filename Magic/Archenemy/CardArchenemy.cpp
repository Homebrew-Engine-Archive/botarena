#include "stdafx.h"
#include "CardArchenemy.h"

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
		//DEFINE_CARD(CADisplayOfMyDarkPowerCard);
		DEFINE_CARD(CApproachMyMoltenRealmCard);
		DEFINE_CARD(CDancePatheticMarionetteCard);
		DEFINE_CARD(CEvilComesToFruitionCard);
		DEFINE_CARD(CIDelightInYourConvulsionsCard);
		DEFINE_CARD(CIKnowAllISeeAllCard);
		DEFINE_CARD(CIntroductionsAreInOrderCard);
		DEFINE_CARD(CKnowNaughtbutFireCard);
		DEFINE_CARD(CLookSkywardandDespairCard);
		DEFINE_CARD(CRealmsBefittingMyMajestyCard);
		DEFINE_CARD(CRootsofAllEvilCard);
		DEFINE_CARD(CTheIronGuardianStirsCard);
		DEFINE_CARD(CThePiecesAreComingTogetherCard);
		DEFINE_CARD(CTheVerySoilShallShakeCard);
		DEFINE_CARD(CToothClawAndTailCard);
		DEFINE_CARD(CYourFateIsThriceSealedCard);
		DEFINE_CARD(CYourPunyMindsCannotFathomCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here
CThePiecesAreComingTogetherCard::CThePiecesAreComingTogetherCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("The Pieces Are Coming Together"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	//cpAbility->SetSkipStack(TRUE);
	cpAbility->SetDrawCount(2);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("The Pieces Are Coming Together Effect"), 61032, 1, FALSE, ZoneId::_Effects));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRealmsBefittingMyMajestyCard::CRealmsBefittingMyMajestyCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Realms Befitting My Majesty"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredSearchLibraryAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("basic lands")));

	cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(2));
	cpAbility->SetToZone(ZoneId::Battlefield);
	cpAbility->SetToOwnersZone(FALSE);
	cpAbility->SetTapped(TRUE);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CLookSkywardandDespairCard::CLookSkywardandDespairCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Look Skyward and Despair"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->SetCreateTokenOption(TRUE, _T("Dragon C"), 2714, 1);
	
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);


	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CRootsofAllEvilCard::CRootsofAllEvilCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Roots of All Evil"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->SetCreateTokenOption(TRUE, _T("Saproling J"), 62001, 5);
	
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);


	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTheIronGuardianStirsCard::CTheIronGuardianStirsCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("The Iron Guardian Stirs"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->SetCreateTokenOption(TRUE, _T("Golem B"), 2921, 1);
	
	
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);


	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CTheVerySoilShallShakeCard::CTheVerySoilShallShakeCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("The Very Soil Shall Shake"), nID)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+2), Life(+2), CreatureKeyword::Trample));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetFromControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->GetMoveCardModifier().SetToTop(FALSE);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_Schemes);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::_Schemes));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTheVerySoilShallShakeCard::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTheVerySoilShallShakeCard::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	return (this->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CKnowNaughtbutFireCard::CKnowNaughtbutFireCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Know Naught but Fire"), nID)
{
	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);
	cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CKnowNaughtbutFireCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CKnowNaughtbutFireCard::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	triggerContext.m_LifeModifier.SetLifeDelta(-Life(m_pGame->GetNextPlayer(GetController())->GetZoneById(ZoneId::Hand)->GetSize()));
	triggerContext.m_LifeModifier.SetPreventable(PreventableType::Preventable);
	triggerContext.m_LifeModifier.SetDamageType(DamageType::NonCombatDamage | DamageType::AbilityDamage);
//	triggerContext.m_LifeModifier.RemoveFrom(GetController());

	pAction->SetTriggerContext(triggerContext);

	return true;
}

//____________________________________________________________________________
//
CApproachMyMoltenRealmCard::CApproachMyMoltenRealmCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Approach My Molten Realm"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	//cpAbility->SetSkipStack(TRUE);		
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Approach My Molten Realm Effect"), 61014, 1, FALSE, ZoneId::_Effects));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYourFateIsThriceSealedCard::CYourFateIsThriceSealedCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Your Fate Is Thrice Sealed"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	CZoneModifier* pModifier = new CZoneModifier(GetGame(), ZoneId::Library, 3, CZoneModifier::RoleType::PrimaryPlayer, CardPlacement::Top,
		CZoneModifier::RoleType::AllPlayers);
	pModifier->AddSelection(MinimumValue(3), MaximumValue(3), // select 1 card
		CZoneModifier::RoleType::PrimaryPlayer, // select by 
		CZoneModifier::RoleType::SecondaryPlayer, // reveal to
		CCardFilter::GetFilter(_T("lands")), // any cards
		ZoneId::Battlefield, // if selected, move cards to
		CZoneModifier::RoleType::PrimaryPlayer, // select by this player
		CardPlacement::Top, // put selected cards on top
		MoveType::Others, // move type
		CZoneModifier::RoleType::PrimaryPlayer); // order selected cards by this player

	pModifier->SetReorderInformation(true,
		ZoneId::Hand,
		CZoneModifier::RoleType::PrimaryPlayer,
		CardPlacement::Top);

	cpAbility->GetResolutionModifier().CPlayerModifiers::Add(pModifier);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CYourPunyMindsCannotFathomCard::CYourPunyMindsCannotFathomCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Your Puny Minds Cannot Fathom"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	//cpAbility->SetSkipStack(TRUE);
	cpAbility->SetDrawCount(4);
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("Your Puny Minds Cannot Fathom Effect"), 61034, 1, FALSE, ZoneId::_Effects));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CToothClawAndTailCard::CToothClawAndTailCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Tooth, Claw, and Tail"), nID)
{

	typedef
		TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->GetTargeting().GetSubjectCardFilter().AddNegateComparer(new CardTypeComparer(CardType::_Land, false));
	cpAbility->GetTargeting().SetSubjectCount(0, 3);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Destroy);
	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());

}

//____________________________________________________________________________
//
CIKnowAllISeeAllCard::CIKnowAllISeeAllCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("I Know All, I See All"), nID)
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredTapCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::UntapStep, false));

		cpAbility->GetTrigger().SetMonitorOpponentsOnly(true);
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetSkipStack(true);

		cpAbility->SetTapCardOption(CTriggeredTapCardAbility::TapCardOption::UntapMultipleCards);
		cpAbility->GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("cards")));
		cpAbility->AddAbilityTag(AbilityTag::OrientationChange);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIKnowAllISeeAllCard::SetTriggerContext1));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
		TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep, false));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetMoveCardModifier().SetToTop(FALSE);
		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::_Schemes);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::_Schemes));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIKnowAllISeeAllCard::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CIKnowAllISeeAllCard::SetTriggerContext1(CTriggeredTapCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZoneId() == ZoneId::_Effects);
}

bool CIKnowAllISeeAllCard::SetTriggerContext2(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZoneId() == ZoneId::_Effects && GetController()->GetCertainTypeDiedCount(CardType::_All) >= 3);
}

//____________________________________________________________________________
//
CIDelightInYourConvulsionsCard::CIDelightInYourConvulsionsCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("I Delight in Your Convulsions"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CIDelightInYourConvulsionsCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CIDelightInYourConvulsionsCard::BeforeResolution(CAbilityAction* pAction) const
{
	int LifeGain = 0;
	int PrevLife = 0;
	int NewLife = 0;
	CPlayer* pController = pAction->GetController();

	CLifeModifier pModifier1 = CLifeModifier(Life(-3), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
		{
			PrevLife = (int)pPlayer->GetLife();
			pModifier1.ApplyTo(pPlayer);
			NewLife = (int)pPlayer->GetLife();
			if (NewLife < PrevLife)
				LifeGain += PrevLife - NewLife;
		}
	}

	if (LifeGain > 0)
	{
		CLifeModifier pModifier2 = CLifeModifier(Life(+LifeGain), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
		pModifier2.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
CDancePatheticMarionetteCard::CDancePatheticMarionetteCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Dance, Pathetic Marionette"), nID)
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CDancePatheticMarionetteCard::OnCardSelected))
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CDancePatheticMarionetteCard::BeforeResolution));

	AddAbility(cpAbility.GetPointer());
}

bool CDancePatheticMarionetteCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	pRevealedCards.RemoveAll();

	for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
	{
		CPlayer* pPlayer = GetGame()->GetPlayer(ip);
		if (pPlayer != pController)
		{
			int n = 0;
			bool bSearch = true;
				
			CZone* pLibrary = pPlayer->GetZoneById(ZoneId::Library);

			for (int i = pLibrary->GetSize() - 1; i >= 0; --i)
			{		
				if (!bSearch)
					break;
				else
				{
					++n;
					pRevealedCards.AddCard(pLibrary->GetAt(i), CardPlacement::Top);
					if (pLibrary->GetAt(i)->GetCardType().IsCreature())
						bSearch = false;
				}
			}

			CZoneModifier pModifier = CZoneModifier(GetGame(), ZoneId::Library, n, CZoneModifier::RoleType::PrimaryPlayer,
				CardPlacement::Top, CZoneModifier::RoleType::AllPlayers);
			pModifier.ApplyTo(pPlayer);
		}
	}

	if (CCardFilter::GetFilter(_T("creatures"))->CountIncluded(pRevealedCards) > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pRevealedCards.GetSize(); ++i)
		{
			CCard* pCard = pRevealedCards.GetAt(i);

			if (pCard->GetCardType().IsCreature())
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Choose %s"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}

	return true;
}

void CDancePatheticMarionetteCard::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s chooses %s"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			pCard->Move(pSelectionPlayer->GetZoneById(ZoneId::Battlefield), pSelectionPlayer, MoveType::Others);
			pRevealedCards.RemoveCard(pCard);

			CCardFilter m_CardFilter;
			m_CardFilter.AddComparer(new ContainedinComparer(&pRevealedCards));

			CZoneCardModifier pModifier = CZoneCardModifier(ZoneId::Library, &m_CardFilter,
				std::auto_ptr<CCardModifier>(new CMoveCardModifier(ZoneId::Library, ZoneId::Graveyard, TRUE, MoveType::Others)));

			for (int ip = 0; ip < GetGame()->GetPlayerCount(); ++ip)
				if (GetGame()->GetPlayer(ip) != pSelectionPlayer)
					pModifier.ApplyTo(GetGame()->GetPlayer(ip));

			return;
		}
}

//____________________________________________________________________________
//
CIntroductionsAreInOrderCard::CIntroductionsAreInOrderCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Introductions Are in Order"), nID)
	, m_ModeSelection(pGame, CSelectionSupport::SelectionCallback(this, &CIntroductionsAreInOrderCard::OnModeSelected))
{
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;
		
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CIntroductionsAreInOrderCard::SetTriggerContextAux));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredSearchLibraryAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_1_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Schemes);

		cpAbility->GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));

		cpAbility->SetSearchCount(MinimumValue(0), MaximumValue(1));
		cpAbility->SetToZone(ZoneId::Hand);
		cpAbility->SetRevealCardsToOthers(TRUE);

		cpAbility->SetAbilityName(_T("Mode 1 - search for a creature"));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Library, ZoneId::Hand));
		AddAbility(cpAbility.GetPointer());
	}	
	{
		typedef
			TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CSpecialTrigger > TriggeredAbility;

        counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Optional);		

		cpAbility->GetTrigger().SetTriggerIndex(CHOICE_2_TRIGGER_ID);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new SpecificCardComparer(this));
		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Schemes);

		cpAbility->GetGatherer().GetSubjectCardFilter().SetThisCardsControllerOnly(this);

		cpAbility->GetGatherer().SetSubjectZoneId(ZoneId::Hand);
		cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Hand);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Others);
		
		cpAbility->SetAbilityName(_T("Mode 2 - put a creature onto the battlefield"));
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Hand, ZoneId::Battlefield));
		AddAbility(cpAbility.GetPointer());
	}	
}

bool CIntroductionsAreInOrderCard::SetTriggerContextAux(CTriggeredAbility<>::TriggerContextType& triggerContext,
													CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType)
{
	std::vector<SelectionEntry> entries;
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 1;
		selectionEntry.strText.Format(_T("%s: Search your library for a creature card, reveal it, put it into your hand, then shuffle your library"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	{
		SelectionEntry selectionEntry;

		selectionEntry.dwContext = 2;
		selectionEntry.strText.Format(_T("%s: You may put a creature card from your hand onto the battlefield"), GetCardName(TRUE));

		entries.push_back(selectionEntry);
	}
	
	m_ModeSelection.AddSelectionRequest(entries, 1, 1, NULL, GetController());

	return false;
}

void CIntroductionsAreInOrderCard::OnModeSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
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
					strMessage.Format(_T("%s chooses first mode"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);

				}
				
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, CHOICE_1_TRIGGER_ID);
				pModifier.ApplyTo(this);

				return;
			}
			if ((int)it->dwContext == 2)
			{
				if (!m_pGame->IsThinking())
				{

					CString strMessage;
					strMessage.Format(_T("%s chooses second mode"), pSelectionPlayer->GetPlayerName());

					m_pGame->Message(
						strMessage,
						pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
						MessageImportance::High
						);
				}
				
				CSpecialEffectModifier pModifier = CSpecialEffectModifier(this, CHOICE_2_TRIGGER_ID);
				pModifier.ApplyTo(this);

				return;
			}
			return;
		}
}

//____________________________________________________________________________
//
CEvilComesToFruitionCard::CEvilComesToFruitionCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("Evil Comes to Fruition"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CEvilComesToFruitionCard::BeforeResolution));
	cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

	AddAbility(cpAbility.GetPointer());
}

bool CEvilComesToFruitionCard::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();

	if (CCardFilter::GetFilter(_T("lands"))->CountIncluded(pController->GetZoneById(ZoneId::Battlefield)->GetCardContainer()) > 9)
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Elemental Q"), 62015, 7);
		pModifier.ApplyTo(pController);
	}
	else
	{
		CTokenCreationModifier pModifier = CTokenCreationModifier(GetGame(), _T("Plant"), 2831, 7);
		pModifier.ApplyTo(pController);
	}

	return true;
}

//____________________________________________________________________________
//
/*
CADisplayOfMyDarkPowerCard::CADisplayOfMyDarkPowerCard(CGame* pGame, UINT nID)
	: CSchemeCard(pGame, _T("A Display of My Dark Power"), nID)
{
	typedef
		TTriggeredAbility< CTriggeredAbility<>, CWhenSelfMoved > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, ZoneId::_Schemes, ZoneId::_Effects));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
	cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CTokenCreationModifier(GetGame(), _T("A Display of My Dark Power Effect"), 61014, 1, FALSE, ZoneId::_Effects));

	AddAbility(cpAbility.GetPointer());
}
*/
//____________________________________________________________________________
//